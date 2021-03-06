main:
li $a0, 1234567
li $v0, 40
syscall # srand
jal print_random
jal print_random
jal print_random
li $v0, 10
syscall # exit

print_random:
li $v0, 43
syscall # rand float
mov.s $f12, $f0
li $v0, 2
syscall # print float
li $a0, '\n'
li $v0, 11
syscall # print char
jr $ra