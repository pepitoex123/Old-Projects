; Author: Pepitoex123
; Purpose: Write a execve shellcode with the idea of executing a /bin/bash instance. I´ll use the STACK technique.

global _start

section .text

_start:
	; We need to clean the stack, so we first xor eax= 0 , and then we push it to the stack
	xor eax, eax
	push eax
	; We push ////bin/bash into the stack, in a four bytes order.
	push 0x68736162
	push 0x2f6e6962
	push 0x2f2f2f2f
	; The esp register holds the value of the stack, so we move that value to ebx(First argument that execve requires)
	mov ebx, esp
	; We clean the stack again (0x00), and then we proceed to move the value of esp into edx
	push eax
	mov edx, esp
	; We need the value in memory of ////bin/bash , so we push ebx into the stack and then we move the value of esp into ecx
	push ebx
	mov ecx, esp
	
	mov al, 11
	int 0x80
	
