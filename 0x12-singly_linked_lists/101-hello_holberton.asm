section .data
	msg db "Hello, Holberton!",10

section .text
	global main

main:
	mov rdi, msg
	mov rax, 0

	extern printf
	call printf

	mov rax, 0
	ret
