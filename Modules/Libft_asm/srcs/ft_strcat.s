extern _ft_strlen

section .text
	global _ft_strcat

_ft_strcat:
	call _ft_strlen
	mov rcx, 0

loop:
	cmp byte[rsi+rcx], 0x0
	je end
	mov r15, [rsi+rcx]
	mov [rdi+rax], r15
	inc rcx,
	inc rax,
	jmp loop

end:
	mov r15, 0
	mov [rdi+rax], r15
	mov rax, rdi
	ret