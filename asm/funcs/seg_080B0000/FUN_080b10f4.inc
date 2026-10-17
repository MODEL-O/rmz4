@ FUN_080b10f4  entry 0x080b10f4  size 38
.thumb
.org 0xb10f4
FUN_080b10f4:
	push {lr}	@ 000b10f4 00b5
.org 0xb10f6
	adds r2, r0, #0	@ 000b10f6 021c
.org 0xb10f8
	ldr r1, [r2, #44]	@ 000b10f8 d16a
.org 0xb10fa
	cmp r1, #0	@ 000b10fa 0029
.org 0xb10fc
	beq.n 0xb1110	@ 000b10fc 08d0
.org 0xb10fe
	ldrb r0, [r1, #12]	@ 000b10fe 087b
.org 0xb1100
	cmp r0, #1	@ 000b1100 0128
.org 0xb1102
	bhi.n 0xb1110	@ 000b1102 05d8
.org 0xb1104
	adds r0, r1, #0	@ 000b1104 081c
.org 0xb1106
	adds r0, #194	@ 000b1106 c230
.org 0xb1108
	movs r1, #255	@ 000b1108 ff21
.org 0xb110a
	strb r1, [r0, #0]	@ 000b110a 0170
.org 0xb110c
	movs r0, #0	@ 000b110c 0020
.org 0xb110e
	str r0, [r2, #44]	@ 000b110e d062
.org 0xb1110
	adds r0, r2, #0	@ 000b1110 101c
.org 0xb1112
	bl 0x7f8ec	@ 000b1112 cef7ebfb
.org 0xb1116
	pop {r0}	@ 000b1116 01bc
.org 0xb1118
	bx r0	@ 000b1118 0047
