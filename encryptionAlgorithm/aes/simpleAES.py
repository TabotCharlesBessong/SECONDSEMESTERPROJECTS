
from Cryptodome.Cipher import AES

key = 'Sixteen byte key'

plain = 'Secrets 16 bytes'

cipher = AES.new(key)

cipherText = cipher.encrypt(plain)

print(cipherText)