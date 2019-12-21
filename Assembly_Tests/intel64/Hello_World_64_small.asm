global _start

section .text

_start:
	; print on the STDOUT
	xor rax, rax
	mov al, 1
	mov rdi, 1
	mov rsi, hello_world
	mov rdx, lenght
	syscall
	; exit gracefully
	mov rax, 60
	mov rdi, 11
	syscall
section .data
    hello_world: db "Hello World!"
	lenght: equ $-hello_world
