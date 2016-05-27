section .text
	global _ft_toupper

_ft_toupper:
	mov rax, rdi
	cmp rax, 97
	js  end
	cmp rax, 122
	jg  end	
	sub rax, 32
	
end:
	ret