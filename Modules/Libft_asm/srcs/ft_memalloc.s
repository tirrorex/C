extern _malloc
extern _ft_bzero
section .text
	global _ft_memalloc

_ft_memalloc:
	push rdi
	call _malloc
	jc null
	pop rsi
	push rax
	mov rdi, rax
	call _ft_bzero
	pop rax
	ret

null:
	mov rax, 0
	ret
