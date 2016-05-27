section .text
	global _ft_memset

_ft_memset:
	push rdi
	mov rcx, rdx
	mov rax, rsi
	cld
	rep stosb
	pop rax
	ret