section .data
buffer:
	.string times 255 db 0
	.size equ $ - buffer.string

section .text
	global _ft_cat

_ft_cat:
	push rdi

loop:
	pop rdi
	mov rax, 0x2000003
	lea rsi, [rel buffer.string]
	mov rdx, buffer.size
	syscall
	jc error
	;exit if eof
	cmp rax, 0
	jle end
	push rdi
	mov rdi, 1
	mov rdx, rax
	mov rax, 0x2000004
	mov rdx, buffer.size
	syscall
	jc error
	jmp loop

error:
	mov rax, 1

end:
	ret