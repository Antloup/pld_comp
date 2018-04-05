.globl    main
.type    main,@function
main:
pushq %rbp
movq %rsp, %rbp
sub $16, %rsp
.prologue1:
movq $89, -16(%rbp)
movq -16(%rbp), %rax
movq %rax, -8(%rbp)
movq $0, %rbx
cmpq -8(%rbp), %rbx
movq $90, -32(%rbp)
movq -32(%rbp), %rax
cmpq %rax, -8(%rbp)
movq $0, %rax
movq $1, %rbx
cmovne %rbx, %rax
movq %rax, -24(%rbp)
movq -24(%rbp), %rax
movq %rax, -8(%rbp)
movq $0, %rbx
cmpq -8(%rbp), %rbx
movq $89, -56(%rbp)
movq -56(%rbp), %rax
addq -8(%rbp), %rax
movq %rax, -48(%rbp)
movl -48(%rbp), %edi
call putchar
movq $10, -72(%rbp)
movl -72(%rbp), %edi
call putchar
movq $0, -80(%rbp)
movq -80(%rbp), %rcx
jmp .epilogue2
.epilogue2:
leave
ret
