; my first assembly line code :)
section .text
	global _start

	extern printf
	extern exit

_start:
	push greetings
	push fmt
	call printf
	add esp, 8

	xor eax, eax
	call exit
section .data
	greetings db "Hello, Holberton",0xa
	fmt db "%s", 0
