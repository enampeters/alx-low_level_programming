: Desc: 64-bit assembly program that prints.
	Hello, Holberton followed by a new lint.

extern printf

section .text
global main

main:
push rbp

mov rdi,fmt
moc rsi,msg
mov rax,0
call printf

pop rbp

moc rax,0
ret

section .data
msg:db "Hello, Holberton", 0
fmt: db "%s", 10, 0

