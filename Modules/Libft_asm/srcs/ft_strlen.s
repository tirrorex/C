section .text
	global _ft_strlen

_ft_strlen:
	; test if string is null
	cmp rdi, 0
	je ifnull
	; core
	push rdi,
	; initialize rcx to max value (signed -1)
	sub rcx, rcx ; setting rcx to 0
	not rcx ; rcx = -1 or 4,294,967,295
	sub al, al ; initialize al to 0
	cld ; clear direction flag
	repne scasb ; scan adress until null
	not rcx ; rcx = -strlen + 2 so we reverse it giving absolute value -1
	lea rax, [rcx-1] ; load rcx effective adress -1 instead of dec rcx and mov rax, rcx
	jmp end

ifnull:
	mov rax, 0	
end:
	pop rdi
	ret