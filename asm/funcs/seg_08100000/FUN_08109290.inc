@ FUN_08109290  entry 0x08109290  size 16
.thumb
.org 0x109290
FUN_08109290:
	push {lr}	@ 00109290 00b5
.org 0x109292
	sub sp, #8	@ 00109292 82b0
.org 0x109294
	mov r0, sp	@ 00109294 6846
.org 0x109296
	bl 0x109190	@ 00109296 fff77bff
.org 0x10929a
	add sp, #8	@ 0010929a 02b0
.org 0x10929c
	pop {r1}	@ 0010929c 02bc
.org 0x10929e
	bx r1	@ 0010929e 0847
