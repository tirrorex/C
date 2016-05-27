section .text
	global _ft_isprint

_ft_isprint:
	cmp rdi, 32
	js  nop
	cmp rdi, 127
	jl  yes

nop:
	mov rax, 0
	jmp end

yes:
	mov rax, 1
	jmp end

end:
	ret