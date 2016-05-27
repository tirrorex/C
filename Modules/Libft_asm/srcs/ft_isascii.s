section .text	
	global _ft_isascii

_ft_isascii:
	cmp rdi, 0
	js  nop
	cmp rdi, 128
	jl  yes

nop:
	mov rax, 0
	jmp end

yes:
	mov rax, 1
	jmp end

end:
	ret