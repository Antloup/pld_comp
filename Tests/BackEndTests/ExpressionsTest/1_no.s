.globl    main
.type    main,@function
main:
pushq %rbp
movq %rsp, %rbp
sub $16, %rsp
.prologue1:
movq $0, -16(%rbp)
movq -16(%rbp), %rax
movq %rax, -8(%rbp)
movq $0, %rbx
cmpq -8(%rbp), %rbx
movq $0, %rax
cmpq %rax, -8(%rbp)
movq $0, %rax
movq $1, %rbx
cmove %rbx, %rax
movq %rax, -8(%rbp)
movq -8(%rbp), %rax
movq %rax, -8(%rbp)
movq $0, %rbx
cmpq -8(%rbp), %rbx
movq $89, -40(%rbp)
movq -8(%rbp), %rax
addq -40(%rbp), %rax
movq %rax, -32(%rbp)
movl -32(%rbp), %edi
call putchar
movq $10, -56(%rbp)
movl -56(%rbp), %edi
call putchar
movq $0, -64(%rbp)
movq -64(%rbp), %rcx
jmp .epilogue2
.epilogue2:
leave
ret
