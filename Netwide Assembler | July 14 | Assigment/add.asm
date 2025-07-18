extern printf
extern scanf

section .data
    msg1    db "Enter first number: ", 0
    msg2    db "Enter second number: ", 0
    in_fmt  db "%d", 0
    out_fmt db "Sum: %d", 10, 0

section .bss
    num1 resd 1
    num2 resd 1

section .text
    global main

main:
    push rbp
    sub rsp, 8   

    mov rdi, msg1
    xor rax, rax
    call printf

    mov rdi, in_fmt
    mov rsi, num1
    xor rax, rax
    call scanf

    mov rdi, msg2
    xor rax, rax
    call printf

    mov rdi, in_fmt
    mov rsi, num2
    xor rax, rax
    call scanf

    mov rax, [num1]
    add rax, [num2]

    mov rsi, rax
    mov rdi, out_fmt
    xor rax, rax
    call printf

    
    add rsp, 8
    pop rbp
    xor rax, rax
    ret

