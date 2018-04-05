.globl    main
.type    main,@function
main:
pushq %rbp
movq %rsp, %rbp
sub $16, %rsp
.prologue1:
movq $44, -16(%rbp)
movq -16(%rbp), %rax
movq %rax, -8(%rbp)
movq $0, %rbx
cmpq -8(%rbp), %rbx
movq $1, -40(%rbp)
movq $44, -48(%rbp)
movq -48(%rbp), %rax
addq -40(%rbp), %rax
movq %rax, -32(%rbp)
movq $2, -56(%rbp)
movq -56(%rbp), %rax
imulq -32(%rbp), %rax
movq %rax, -24(%rbp)
movq -24(%rbp), %rax
movq %rax, -8(%rbp)
movq $0, %rbx
cmpq -8(%rbp), %rbx
movl -8(%rbp), %edi
call putchar
movq $10, -80(%rbp)
movl -80(%rbp), %edi
call putchar
movq $0, -88(%rbp)
movq -88(%rbp), %rcx
jmp .epilogue2
.epilogue2:
leave
ret
