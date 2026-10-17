@ FUN_0804d2a0  entry 0x0804d2a0  size 48
.thumb
.org 0x4d2a0
FUN_0804d2a0:
	adds r2, r0, #0	@ 0004d2a0 021c
.org 0x4d2a2
	adds r0, #140	@ 0004d2a2 8c30
.org 0x4d2a4
	movs r1, #0	@ 0004d2a4 0021
.org 0x4d2a6
	str r1, [r0, #0]	@ 0004d2a6 0160
.org 0x4d2a8
	adds r0, #4	@ 0004d2a8 0430
.org 0x4d2aa
	str r1, [r0, #0]	@ 0004d2aa 0160
.org 0x4d2ac
	adds r0, #4	@ 0004d2ac 0430
.org 0x4d2ae
	strb r1, [r0, #0]	@ 0004d2ae 0170
.org 0x4d2b0
	ldrb r1, [r2, #10]	@ 0004d2b0 917a
.org 0x4d2b2
	movs r0, #251	@ 0004d2b2 fb20
.org 0x4d2b4
	ands r0, r1	@ 0004d2b4 0840
.org 0x4d2b6
	movs r1, #254	@ 0004d2b6 fe21
.org 0x4d2b8
	ands r0, r1	@ 0004d2b8 0840
.org 0x4d2ba
	strb r0, [r2, #10]	@ 0004d2ba 9072
.org 0x4d2bc
	ldr r1, [pc, #16]	@ 0004d2bc 0449
.org 0x4d2be
	ldrb r0, [r2, #9]	@ 0004d2be 507a
.org 0x4d2c0
	lsls r0, r0, #2	@ 0004d2c0 8000
.org 0x4d2c2
	adds r0, r0, r1	@ 0004d2c2 4018
.org 0x4d2c4
	movs r1, #4	@ 0004d2c4 0421
.org 0x4d2c6
	str r1, [r2, #12]	@ 0004d2c6 d160
.org 0x4d2c8
	ldr r0, [r0, #0]	@ 0004d2c8 0068
.org 0x4d2ca
	ldr r0, [r0, #16]	@ 0004d2ca 0069
.org 0x4d2cc
	str r0, [r2, #20]	@ 0004d2cc 5061
.org 0x4d2ce
	bx lr	@ 0004d2ce 7047
