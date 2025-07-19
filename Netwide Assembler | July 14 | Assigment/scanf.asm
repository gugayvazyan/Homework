extern printf 
extern scanf 

section .data 
           frst_msg db "Pls input your number:", 10, 0  
           frmt db "%d", 0
           text db "Your input is: %d", 10, 0

section .text 
     global main 

main: 

         push rbp
         mov rbp, rsp


         mov rdi, frst_msg 
         xor rax, rax
         call printf 
            
         mov rdi, frmt
         xor rax, rax
         call scanf
    
         mov rdi, text
         xor rax, rax
         call printf

         mov rsp, rbp 
         pop rbp 
         ret

