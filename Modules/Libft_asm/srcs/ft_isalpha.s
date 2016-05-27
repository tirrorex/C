section .text
	global _ft_isalpha

_ft_isalpha:
	cmp rdi, 65
	js  nop
	cmp rdi, 91
	jl  yes
	cmp rdi, 97
	js  nop
	cmp rdi, 123
	jl  yes
	
nop:
	mov rax, 0
	jmp end

yes:
	mov rax, 1
	jmp end

end:
	ret