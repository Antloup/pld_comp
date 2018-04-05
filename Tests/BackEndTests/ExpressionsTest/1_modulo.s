.globl    main
.type    main,@function
main:
pushq %rbp
movq %rsp, %rbp
sub $16, %rsp
.prologue1:
movq $900, -24(%rbp)
movq $990, -32(%rbp)
movq -32(%rbp), %rax
movq -24(%rbp), %rbx
cdq
idiv %rbx
movq %rdx, -16(%rbp)
movq -16(%rbp), %rax
movq %rax, -8(%rbp)
movq $0, %rbx
cmpq -8(%rbp), %rbx
movl -8(%rbp), %edi
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
