extern printf 
  
section .data 
        text db "Your number is: %d", 10, 0
        

section .text
    global main 

main:   
    push rbp
    mov rbp, rsp 


     
     mov rdi, text
     mov rsi, 42
  
     xor rax, rax 
     call printf 
      
     mov rsp, rbp
     pop rbp
     ret


