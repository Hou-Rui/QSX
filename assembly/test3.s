main:
    li $a2, 0
    li $a3, 5
    loop:
        beq $a2, $a3, end_loop
        jal print_time
        addi $a2, 1
        j loop
    end_loop:
    li $v0, 10
    syscall # exit

print_time:
    li $a0, 1000
    li $v0, 32
    syscall # sleep
    li $v0, 30
    syscall # time
    move $a0, $v0
    li $v0, 1
    syscall # print integer
    li $a0, '\n'
    li $v0, 11
    syscall # print char
    jr $ra

