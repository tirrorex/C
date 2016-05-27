section .text
	global _ft_tolower

_ft_tolower:
	mov rax, rdi
	cmp rax, 65
	js  end
	cmp rax, 90
	jg  end	
	add rax, 32
	
end:
	ret