.globl    main
.type    main,@function
main:
pushq %rbp
movq %rsp, %rbp
sub $16, %rsp
.prologue1:
movq $45, -16(%rbp)
movq -16(%rbp), %rax
movq %rax, -8(%rbp)
movq $0, %rbx
cmpq -8(%rbp), %rbx
movq $2, -32(%rbp)
movq -8(%rbp), %rax
imulq -32(%rbp), %rax
movq %rax, -24(%rbp)
movq -24(%rbp), %rax
movq %rax, -8(%rbp)
movq $0, %rbx
cmpq -8(%rbp), %rbx
movl -8(%rbp), %edi
call putchar
movq $10, -56(%rbp)
movl -56(%rbp), %edi
call putchar
movq $0, -64(%rbp)
jmp .epilogue2
.epilogue2:
leave
ret
