extern printf
extern scanf

section .data
    msg1    db "Enter first number: ", 0
    msg2    db "Enter second number: ", 0
    in_fmt  db "%d", 0
    out_fmt db "Max: %d", 10, 0

section .bss
    num1 resd 1
    num2 resd 1

section .text
    global main

main:
    
    mov rdi, msg1
    xor rax, rax
    call printf

    
    mov rdi, in_fmt
    lea rsi, [rel num1]
    xor rax, rax
    call scanf

    
    mov rdi, msg2
    xor rax, rax
    call printf

    
    mov rdi, in_fmt
    lea rsi, [num2]
    xor rax, rax
    call scanf

    mov rax, [num1]
    mov rax, [num2]
    cmp rax, rdx
    jge .print_num1
    mov eax, edx

.print_num1:
   
    mov rsi, rax
    mov rdi, out_fmt
    xor rax, rax
    call printf

    mov rax, 0
    ret

