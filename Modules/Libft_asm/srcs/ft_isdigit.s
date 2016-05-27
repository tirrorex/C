section .text	
	global _ft_isdigit

_ft_isdigit:
	cmp rdi, 48
	js  nop
	cmp rdi, 58
	jl  yes

nop:
	mov rax, 0
	jmp end

yes:
	mov rax, 1
	jmp end

end:
	ret