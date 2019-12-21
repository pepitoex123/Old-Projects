#!/usr/bin/python

import thread
import time

def worker_thread(id):
	print("Thread ID " + id + " Now alive ! ")
	count = 1 
	while True:
		print("Thread with ID " + id + " has counter value of " + count)
		time.sleep(2)
for i in range(0,5):
	thread.start_new_thread(worker_thread,(i,))
print("Main Thread going for an infinite loop")
while True:
	pass
		
	
