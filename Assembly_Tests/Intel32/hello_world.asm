; HelloWorld.asm
; Author: Pepitoex

global _start

section .text
_start:
		; Print hello world as STDOUT
	mov eax, 0x4
	mov ebx, 0x1
	mov ecx, message
	mov edx, mlen
	int 0x80
		; exit the program gracefully is the next step
	mov eax, 0x1
	mov ebx, 0x5
	int 0x80
section .data
	message: db "Hello World!"
	mlen    equ  $-message
