main:
li $s1, 0
li $s2, 20
loop:
beq $s1, $s2, end_loop
addi $s1, $s1, 1
li $s3, 0
print:
beq $s1, $s3, end_print
li $a0, '*'
li $v0, 11
syscall # print_char
addi $s3, $s3, 1
j print
end_print:
li $a0, '\n'
li $v0, 11
syscall # print_char
j loop
end_loop:
li $v0, 10
syscall # exit
