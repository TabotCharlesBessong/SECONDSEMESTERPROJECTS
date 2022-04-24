import socket

from pyrsistent import b
print('Hello world')
hote = ''
port = 12800
connexion_principal = socket.socket(socket.AF_INET,socket.SOCK_STREAM)

# lets set up our port 
connexion_principal.bind((hote,port))
# now we need to listen to different events
connexion_principal.listen(5)
# printing some values
print("Le serveur a ecoute a present sue le port {}".format(port))
# extablishing use for port for the clients
connexion_avec_client , infos_connexion = connexion_principal.accept()

msg_recu = b""
while msg_recu != b"fin":
  msg_recu = connexion_avec_client.recv(1024)
  print(msg_recu.decode())
  connexion_avec_client.send(b" 5/ 5")
  
print("Fermeture de la connection")
# creating our user 
connexion_avec_serveur = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# connecting our user to the server port 
connexion_avec_serveur.connect((hote,port))

print("Connexion etablie avec le serveur sur le port {}".format(port))

msg_envoye = b""
while msg_envoye != b"fin":
  msg_envoye =  input(" > ")
  msg_envoye = msg_envoye.encode()
  
  connexion_avec_serveur.send(msg_envoye)
  msg_recu = connexion_avec_serveur.recv(1024)
  print(msg_recu.decode())

print(infos_connexion)
('127.0.0.1',2901)

# make our sockets communicate 
connexion_avec_client.send(b"Je viens d'accepter la connexion")
# 32
# now lets alert that we have  receive the connection
msg_recu = connexion_avec_serveur.recv(1024)
print(msg_recu)
msg_recu

# now lets close the connection avec le serveur
connexion_avec_client.close()
# now lets close the connection avec le serveur
connexion_avec_serveur.close()