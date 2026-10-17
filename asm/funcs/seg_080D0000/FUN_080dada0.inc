@ FUN_080dada0  entry 0x080dada0  size 68
.thumb
.org 0xdada0
FUN_080dada0:
	push {r4, lr}	@ 000dada0 10b5
.org 0xdada2
	adds r4, r0, #0	@ 000dada2 041c
.org 0xdada4
	adds r0, #52	@ 000dada4 3430
.org 0xdada6
	ldr r1, [pc, #60]	@ 000dada6 0f49
.org 0xdada8
	bl 0x2c94	@ 000dada8 27f774ff
.org 0xdadac
	str r4, [r4, #60]	@ 000dadac e463
.org 0xdadae
	ldrb r1, [r4, #10]	@ 000dadae a17a
.org 0xdadb0
	movs r0, #247	@ 000dadb0 f720
.org 0xdadb2
	ands r0, r1	@ 000dadb2 0840
.org 0xdadb4
	movs r2, #0	@ 000dadb4 0022
.org 0xdadb6
	movs r1, #1	@ 000dadb6 0121
.org 0xdadb8
	orrs r0, r1	@ 000dadb8 0843
.org 0xdadba
	movs r1, #2	@ 000dadba 0221
.org 0xdadbc
	orrs r0, r1	@ 000dadbc 0843
.org 0xdadbe
	strb r0, [r4, #10]	@ 000dadbe a072
.org 0xdadc0
	adds r0, r4, #0	@ 000dadc0 201c
.org 0xdadc2
	adds r0, #119	@ 000dadc2 7730
.org 0xdadc4
	strb r2, [r0, #0]	@ 000dadc4 0270
.org 0xdadc6
	ldr r1, [pc, #32]	@ 000dadc6 0849
.org 0xdadc8
	ldrb r0, [r4, #9]	@ 000dadc8 607a
.org 0xdadca
	lsls r0, r0, #2	@ 000dadca 8000
.org 0xdadcc
	adds r0, r0, r1	@ 000dadcc 4018
.org 0xdadce
	movs r1, #1	@ 000dadce 0121
.org 0xdadd0
	str r1, [r4, #12]	@ 000dadd0 e160
.org 0xdadd2
	ldr r0, [r0, #0]	@ 000dadd2 0068
.org 0xdadd4
	ldr r0, [r0, #4]	@ 000dadd4 4068
.org 0xdadd6
	str r0, [r4, #20]	@ 000dadd6 6061
.org 0xdadd8
	adds r0, r4, #0	@ 000dadd8 201c
.org 0xdadda
	bl 0xdadec	@ 000dadda 00f007f8
.org 0xdadde
	pop {r4}	@ 000dadde 10bc
.org 0xdade0
	pop {r0}	@ 000dade0 01bc
.org 0xdade2
	bx r0	@ 000dade2 0047
