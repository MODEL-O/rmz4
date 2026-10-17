@ FUN_081091c8  entry 0x081091c8  size 50
.thumb
.org 0x1091c8
FUN_081091c8:
	push {r4, r5, r6, lr}	@ 001091c8 70b5
.org 0x1091ca
	adds r6, r0, #0	@ 001091ca 061c
.org 0x1091cc
	ldr r0, [pc, #44]	@ 001091cc 0b48
.org 0x1091ce
	ldr r4, [r0, #0]	@ 001091ce 0468
.org 0x1091d0
	adds r0, r4, #0	@ 001091d0 201c
.org 0x1091d2
	bl 0x54c4	@ 001091d2 fcf677f9
.org 0x1091d6
	ldr r0, [r4, #12]	@ 001091d6 e068
.org 0x1091d8
	ldr r0, [r0, #4]	@ 001091d8 4068
.org 0x1091da
	str r0, [r4, #12]	@ 001091da e060
.org 0x1091dc
	adds r1, r4, #0	@ 001091dc 211c
.org 0x1091de
	adds r1, #20	@ 001091de 1431
.org 0x1091e0
	cmp r0, r1	@ 001091e0 8842
.org 0x1091e2
	beq.n 0x1091f4	@ 001091e2 07d0
.org 0x1091e4
	adds r5, r1, #0	@ 001091e4 0d1c
.org 0x1091e6
	bl 0x128f94	@ 001091e6 1ff0d5fe
.org 0x1091ea
	ldr r0, [r4, #12]	@ 001091ea e068
.org 0x1091ec
	ldr r0, [r0, #4]	@ 001091ec 4068
.org 0x1091ee
	str r0, [r4, #12]	@ 001091ee e060
.org 0x1091f0
	cmp r0, r5	@ 001091f0 a842
.org 0x1091f2
	bne.n 0x1091e6	@ 001091f2 f8d1
.org 0x1091f4
	pop {r4, r5, r6}	@ 001091f4 70bc
.org 0x1091f6
	pop {r0}	@ 001091f6 01bc
.org 0x1091f8
	bx r0	@ 001091f8 0047
