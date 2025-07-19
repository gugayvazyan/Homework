extern scanf
extern printf

section .data
	msg1 db "Input  num:", 0
	msg2 db "%d is even", 10, 0
	msg3 db "%d is odd", 10, 0
	frmt db "%d", 0

section .bss

	num1 resd 1

section .text
  global main 

main: 

 	push rbp
	mov rbp, rsp

	mov rdi, msg1
	xor rax, rax
	call printf 

	mov rdi, frmt 
	lea rsi, [num1]
	xor rax, rax
	call scanf


	movsx r8, dword[num1]
        
	mov rax, r8
	mov rdx, 0
	mov rcx, 2
	div rcx 

	cmp rdx, 0
	je even
	jne odd

odd: 
	mov rdi, msg3
	mov rsi, r8
	jmp end 

even: 
	mov rdi, msg2
	mov rsi, r8
	jmp end

end:
	xor rax, rax
	call printf  

	mov rsp, rbp
	pop rbp 
	ret

	

