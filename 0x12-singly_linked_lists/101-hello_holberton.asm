global main

section .text
main:
	mov rax, 1;write(
	move rdi,1;STDOUT_FILNO,
	mov rsi, msg;"Hello, Holberton\n",
	mov rdx, msglen;sizeof("Hello, Holberton\n")
		syscall;);
	mov rax, 60; exit(
	mov rdi, 0;EXIT_SUCESS
	sycall;);

section .data
	msg:db"Hello, Holberton", 10
	msglen:qu$ - msg
