extern printf 
extern scanf 
section .data 
	text1 db "Please input first number", 10,0
	text2 db "Please input secind number", 10,0
	text db "Your numbers sum: %d", 10,0 
	frmt db  "%d" , 0 
section .bss
	num1 resd 1
	num2 resd 1
section .text
global main 

main: 
	push rbp 
	mov rbp,rsp
	

	mov rdi, text1
	xor rax , rax
	call printf 
	
	
	mov rdi, frmt
	lea rsi, [num1]	
	xor rax, rax 
	call scanf 
	
	mov rdi, text2
	xor rax , rax
	call printf
	
	mov rdi, frmt 
	lea rsi, [num2]	
	xor rax, rax 
	call scanf 
	
	movsx r8, dword[num1]
    movsx r9, dword[num2]
    add r8, r9

    mov rdi, text 
    mov rsi, r8

    xor rax, rax
    call printf
	


	mov rsp, rbp 
	pop rbp 
	ret
