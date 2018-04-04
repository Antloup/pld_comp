.globl    toto
.type    toto,@function
toto:
pushq %rbp
movq %rsp, %rbp
leave
ret
.globl    main
.type    main,@function
main:
pushq %rbp
movq %rsp, %rbp
sub $0, %rsp
movq $79, -24(%rbp)
movl -24(%rbp), %edi
call putchar
movq $75, -40(%rbp)
movl -40(%rbp), %edi
call putchar
movq $10, -56(%rbp)
movl -56(%rbp), %edi
call putchar
leave
ret
