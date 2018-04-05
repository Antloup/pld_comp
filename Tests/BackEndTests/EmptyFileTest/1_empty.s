.globl    main
.type    main,@function
main:
pushq %rbp
movq %rsp, %rbp
.prologue1:
movq $0, -8(%rbp)
jmp .epilogue2
.epilogue2:
leave
ret
