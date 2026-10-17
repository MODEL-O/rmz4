@ FUN_080d5aa4  entry 0x080d5aa4  size 68
.thumb
.org 0xd5aa4
FUN_080d5aa4:
	push {r4, lr}	@ 000d5aa4 10b5
.org 0xd5aa6
	adds r4, r0, #0	@ 000d5aa6 041c
.org 0xd5aa8
	adds r0, #52	@ 000d5aa8 3430
.org 0xd5aaa
	ldr r1, [pc, #60]	@ 000d5aaa 0f49
.org 0xd5aac
	bl 0x2c94	@ 000d5aac 2df7f2f8
.org 0xd5ab0
	str r4, [r4, #60]	@ 000d5ab0 e463
.org 0xd5ab2
	ldrb r1, [r4, #10]	@ 000d5ab2 a17a
.org 0xd5ab4
	movs r0, #247	@ 000d5ab4 f720
.org 0xd5ab6
	ands r0, r1	@ 000d5ab6 0840
.org 0xd5ab8
	movs r2, #0	@ 000d5ab8 0022
.org 0xd5aba
	movs r1, #1	@ 000d5aba 0121
.org 0xd5abc
	orrs r0, r1	@ 000d5abc 0843
.org 0xd5abe
	movs r1, #2	@ 000d5abe 0221
.org 0xd5ac0
	orrs r0, r1	@ 000d5ac0 0843
.org 0xd5ac2
	strb r0, [r4, #10]	@ 000d5ac2 a072
.org 0xd5ac4
	adds r0, r4, #0	@ 000d5ac4 201c
.org 0xd5ac6
	adds r0, #119	@ 000d5ac6 7730
.org 0xd5ac8
	strb r2, [r0, #0]	@ 000d5ac8 0270
.org 0xd5aca
	ldr r1, [pc, #32]	@ 000d5aca 0849
.org 0xd5acc
	ldrb r0, [r4, #9]	@ 000d5acc 607a
.org 0xd5ace
	lsls r0, r0, #2	@ 000d5ace 8000
.org 0xd5ad0
	adds r0, r0, r1	@ 000d5ad0 4018
.org 0xd5ad2
	movs r1, #1	@ 000d5ad2 0121
.org 0xd5ad4
	str r1, [r4, #12]	@ 000d5ad4 e160
.org 0xd5ad6
	ldr r0, [r0, #0]	@ 000d5ad6 0068
.org 0xd5ad8
	ldr r0, [r0, #4]	@ 000d5ad8 4068
.org 0xd5ada
	str r0, [r4, #20]	@ 000d5ada 6061
.org 0xd5adc
	adds r0, r4, #0	@ 000d5adc 201c
.org 0xd5ade
	bl 0xd5af0	@ 000d5ade 00f007f8
.org 0xd5ae2
	pop {r4}	@ 000d5ae2 10bc
.org 0xd5ae4
	pop {r0}	@ 000d5ae4 01bc
.org 0xd5ae6
	bx r0	@ 000d5ae6 0047
