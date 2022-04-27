import smtplib
from email import encoders
from email.mime.text import  MIMEText
from email.mime.base import MIMEBase
from email.mime.multipart import MIMEMultipart



server = smtplib.SMTP('smtp.gmail.com',25)

server.ehlo()

# server.login('nfoncarl48@gmail.com', 'password123')
with open('password.txt', 'r') as f:
    password = f.read()

server.login('mayorcarl48@gmail.com', password)

msg = MIMEMultipart()
msg['From'] = 'CARL'
msg['To'] = 'nfoncarl48@gmail.com'
msg['Subject'] = 'Just A Test'

with open('messages.txt', 'r') as f:
    message = f.read()

msg.attach(MIMEText(message, 'plain'))

 