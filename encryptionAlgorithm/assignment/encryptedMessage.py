import os
import random

from cryptography.fernet import Fernet;
import base64
from cryptography.hazmat.primitives import hashes, serializationuser
from cryptography.hazmat.primitives.kdf.pbkdf2 import PBKDF2HMAC
from cryptography.hazmat.backends import default_backend
from cryptography.hazmat.primitives.asymmetric import rsa, padding
from cryptography.hazmat.primitives.twofactor import InvalidToken
play = True
user1="//DESKTOP-P5M28FC/Users/Public/Documents/cryptography/"
user2="//DESKTOP-14R9J5I/Users/Public/Documents/cryptography/"
user3="//HACKINGTECH/Users/Public/Documents/cryptography/"
user4="//CHARLESII/Users/Public/Documents/cryptography/"

users = [user3]

def generateKeypair(path):
    private_key = rsa.generate_private_key(
        public_exponent=65537,
        key_size=2048,
        backend=default_backend()
    )
    #print(private_key)
    public_key = private_key.public_key()
    #print(public_key)
    #save the keys to a file
    pem = private_key.private_bytes(
        encoding=serialization.Encoding.PEM,
        format=serialization.PrivateFormat.PKCS8,
        encryption_algorithm=serialization.NoEncryption()
    )

    with open('privatekeys/private_key.pem', 'wb') as f:
        f.write(pem)
        print("succesfull")

    pub = public_key.public_bytes(
        encoding=serialization.Encoding.PEM,
        format=serialization.PublicFormat.SubjectPublicKeyInfo
    )

    with open(f'{path}publicKey/public_key.pem', 'wb') as f:
        f.write(pub)

def EncryptMessage(path):
    #Produce session Key
    qestions = ["How are you doing today", "Who is your best actor", "What is your favorite meal",
                "Have you eaten today", "Do you like Blue", "Whats your favorite pet"]
    i = random.randint(0, 4)
    password_provided = input(f"{qestions[i]}\n")  # This is input in the form of a string
    password = password_provided.encode()  # Convert to type bytes
    salt = os.urandom(16)  # CHANGE THIS - recommend using a key from os.urandom(16), must be of type bytes
    kdf = PBKDF2HMAC(
        algorithm=hashes.SHA256(),
        length=32,
        salt=salt,
        iterations=100000,
        backend=default_backend()
    )
    key = base64.urlsafe_b64encode(kdf.derive(password)).decode()
    #print(key.encode())
    f = Fernet(key)
    original_message = open("Message/originalmessage.txt", 'r')
    message=original_message.read()
    encrypted = f.encrypt(message.encode())
    original_message.close()
    encrypted_message = open(f"{path}Message/encryptedmessage.txt",'w')
    encrypted_message.write(encrypted.decode())
    encrypted_message.close()

    with open(f"{path}publicKey/public_key.pem", "rb") as key_file:
        public_key = serialization.load_pem_public_key(
            key_file.read(),
            backend=default_backend()
        )
    encrypted1 = public_key.encrypt(
        key.encode(),
        padding.OAEP(
            mgf=padding.MGF1(algorithm=hashes.SHA256()),
            algorithm=hashes.SHA256(),
            label=None
        )
    )
    #print(encrypted1)
    encSess = open(f"{path}Message/encryptedsession.txt", 'wb')
    encSess.write(encrypted1)
    encSess.close()

def DecryptMessage(path):

    with open("privatekeys/private_key.pem", "rb") as key_file:
        private_key = serialization.load_pem_private_key(
            key_file.read(),
            password=None,
            backend=default_backend()
        )

    #print(private_key)
    f = open(f'{path}Message/encryptedsession.txt', 'rb')
    session_key = f.read()
    #print(session_key)
    f.close()
    original_message = private_key.decrypt(
        session_key,
        padding.OAEP(
            mgf=padding.MGF1(algorithm=hashes.SHA256()),
            algorithm=hashes.SHA256(),
            label=None
        )
    )
    #print(original_message)
    encSess = open(f"{path}DecryptedMessages/decryptedsession.encrypted", 'wb')
    encSess.write(original_message)
    encSess.close()
    with open(f"{path}Message/encryptedmessage.txt", 'rb') as f:
        data = f.read()  # Read the bytes of the encrypted file

    fernet = Fernet(original_message)
    try:
        decrypted = fernet.decrypt(data)

        with open(f"{path}DecryptedMessages/decrypted.txt", 'wb') as f:
            f.write(decrypted)  # Write the decrypted bytes to the output file

        # Note: You can delete input_file here if you want
    except InvalidToken as e:
        print("Invalid Key - Unsuccessfully decrypted")


def sendMessage(a):
    message = input("Which message would you like to send\n")
    with open(f"{user1}Message/encryptedmessage.txt", "w") as file:
        file.write(message)
    with open(f"Message/originalmessage.txt", "w") as file:
        file.write(message)


    for user in users:
        if a==1:
            EncryptMessage(user)

        elif a == 2:
            print("I am in")
            olivs(user, "encode")



def printMessage():
    encrypted_message = open(f"{user1}DecryptedMessages/decrypted.txt", 'rb')
    print(encrypted_message.read().decode())
    encrypted_message.close()
    if input("do you want to continue\n") == "no":
        return False











def olivs(path, mode):
    alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
                'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
                'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

    # ceaser cipher
    def ceasar(plain_text, shift_amount, to_do):
        global new_index
        output_phrase = ""
        for character in plain_text:
            if character in alphabet:
                index = alphabet.index(character)
                if to_do == "encode":
                    new_index = index + shift_amount
                elif to_do == "decode":
                    new_index = index - shift_amount
                word = alphabet[new_index]
            else:
                word = character
            output_phrase += word
        if to_do == "encode":
            with open(f"{path}Message/encryptedmessage.txt", "w") as file:
                file.write(output_phrase)
                file.close()
                pass
        elif to_do == "decode":
            with open(f"{path}DecryptedMessages/decrypted.txt", "w") as file:
                file.write(output_phrase)
                file.close()
                pass
        print(f"The {to_do}d message is {output_phrase} ")


    direction = mode
    with open(f"{path}Message/encryptedmessage.txt", "r") as file:
        message = file.read()
        print(message)
        text = message.lower()
        print(text)

        # if direction == "encode":
        #     text = input("enter text to be encrypted: \n")
        # elif direction == "decode":
        #     text = input("enter text to be decrypted: \n")
        #

    shift = int(input("Type the shift number:\n"))
    shift %= 26

    ceasar(plain_text=text, shift_amount=shift, to_do=direction)
      ##  run_again = input("Type 'yes' if you want to run the cipher game again else type no: \n").lower()
    print("Good Bye")






while(play):

    task = input("PRESS 1: TO GENERATE A KEY PAIR\nPRESS 2: TO SEND A MESSAGE\nPRESS 3: TO READ A MESSAGE SENT TO YOU\nPRESS 4: TO EXIT\n")



    if task=="1":
        generateKeypair(user1)
    elif task == "2":
        type = input("press 1 for pgp or 2 for ceaser")
        if type == "1":
            sendMessage(1)
        elif type == "2":
            sendMessage(2)

    elif task == "3":
        type = input("press 1 for pgp or 2 for ceaser")
        if type == "1":
            DecryptMessage(user1)
            play = printMessage()
        elif type == "2":
            olivs(user1, "decode")


    else:
        play = False
