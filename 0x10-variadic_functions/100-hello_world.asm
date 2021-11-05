; hello_world.asm

global main

section .text:

main:
	mov eax, 0x4		; use the write syscall
	mov ebx, 1		; use stdout as the fd
	mov ecx, msg		; use the msg as the buffer
	mov edx, msg_length	; and supply the length
	int 0x80		; invoke the syscall

	; exit
	mov eax, 0x1
	mov ebx, 0
i	int 0x80



section .data:
	msg: db "Hello, World", 0xA
	msg_length equ $-msg
