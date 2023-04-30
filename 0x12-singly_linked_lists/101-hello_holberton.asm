; my first assembly line code :)
section .text
	global _start

_start:
	mov edx, len
	mov ecx, greetings
	mov ebx, 1
	mov eax, 4
	int 0x80

	mov eax, 1
	int 0x080

section .data
	greetings db "Hello, Holberton",0xa
	len equ $ -greetings
