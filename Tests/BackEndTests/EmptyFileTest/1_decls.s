.globl    main
.type    main,@function
main:
pushq %rbp
movq %rsp, %rbp
sub $32, %rsp
.prologue1:
movq $0, -32(%rbp)
movq -32(%rbp), %rcx
jmp .epilogue2
.epilogue2:
leave
ret
