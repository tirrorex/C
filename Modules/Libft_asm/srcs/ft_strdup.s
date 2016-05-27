extern _ft_strlen
extern _ft_memcpy
extern _malloc

section .text
	global _ft_strdup

_ft_strdup:
	mov rax, 0
	cmp rdi, 0
	je end
	push rdi
	call _ft_strlen
	push rax
	mov rdi, rax
	inc rdi
	call _malloc
	jc end
	mov rdi, rax
	pop rdx
	pop rsi
	call _ft_memcpy

end:
	ret
