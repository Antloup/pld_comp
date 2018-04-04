.globl    main
.type    main,@function
main:
pushq %rbp
movq %rsp, %rbp
sub $32, %rsp
movq $66, -32(%rbp)
movq -32(%rbp), %rax
movq %rax, -24(%rbp)
movq $98, -40(%rbp)
movq -40(%rbp), %rax
movq %rax, -8(%rbp)
movq $2, -56(%rbp)
movq -24(%rbp), %rax
imulq -56(%rbp), %rax
movq %rax, -48(%rbp)
movq -48(%rbp), %rax
movq %rax, -16(%rbp)
movl -8(%rbp), %edi
call putchar
movl -16(%rbp), %edi
call putchar
movq $0, -80(%rbp)
leave
ret
