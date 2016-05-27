section .text
	global _ft_memcpy

_ft_memcpy:
	push rdi
	mov rcx, rdx
	mov rax, rsi
	cld
	rep movsb
	pop rax
	ret