extern _ft_memset

section .text
	global _ft_bzero

_ft_bzero:
	mov rcx, 0
	mov rdx, rsi
	mov rsi, 0
	call _ft_memset
	ret