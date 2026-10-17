@ FUN_080c99b8  entry 0x080c99b8  size 92
.thumb
.org 0xc99b8
FUN_080c99b8:
	push {r4, lr}	@ 000c99b8 10b5
.org 0xc99ba
	adds r4, r0, #0	@ 000c99ba 041c
.org 0xc99bc
	ldrb r1, [r4, #15]	@ 000c99bc e17b
.org 0xc99be
	cmp r1, #0	@ 000c99be 0029
.org 0xc99c0
	bne.n 0xc99e4	@ 000c99c0 10d1
.org 0xc99c2
	adds r0, #140	@ 000c99c2 8c30
.org 0xc99c4
	str r1, [r0, #0]	@ 000c99c4 0160
.org 0xc99c6
	adds r0, #4	@ 000c99c6 0430
.org 0xc99c8
	str r1, [r0, #0]	@ 000c99c8 0160
.org 0xc99ca
	adds r0, #4	@ 000c99ca 0430
.org 0xc99cc
	strb r1, [r0, #0]	@ 000c99cc 0170
.org 0xc99ce
	ldrb r1, [r4, #10]	@ 000c99ce a17a
.org 0xc99d0
	movs r0, #251	@ 000c99d0 fb20
.org 0xc99d2
	ands r0, r1	@ 000c99d2 0840
.org 0xc99d4
	strb r0, [r4, #10]	@ 000c99d4 a072
.org 0xc99d6
	ldr r1, [pc, #60]	@ 000c99d6 0f49
.org 0xc99d8
	adds r0, r4, #0	@ 000c99d8 201c
.org 0xc99da
	bl 0x1cf00	@ 000c99da 53f791fa
.org 0xc99de
	ldrb r0, [r4, #15]	@ 000c99de e07b
.org 0xc99e0
	adds r0, #1	@ 000c99e0 0130
.org 0xc99e2
	strb r0, [r4, #15]	@ 000c99e2 e073
.org 0xc99e4
	adds r0, r4, #0	@ 000c99e4 201c
.org 0xc99e6
	bl 0x1cff0	@ 000c99e6 53f703fb
.org 0xc99ea
	adds r0, r4, #0	@ 000c99ea 201c
.org 0xc99ec
	adds r0, #115	@ 000c99ec 7330
.org 0xc99ee
	ldrb r0, [r0, #0]	@ 000c99ee 0078
.org 0xc99f0
	cmp r0, #3	@ 000c99f0 0328
.org 0xc99f2
	bne.n 0xc9a0e	@ 000c99f2 0cd1
.org 0xc99f4
	ldrb r1, [r4, #10]	@ 000c99f4 a17a
.org 0xc99f6
	movs r0, #254	@ 000c99f6 fe20
.org 0xc99f8
	ands r0, r1	@ 000c99f8 0840
.org 0xc99fa
	strb r0, [r4, #10]	@ 000c99fa a072
.org 0xc99fc
	ldr r1, [pc, #24]	@ 000c99fc 0649
.org 0xc99fe
	ldrb r0, [r4, #9]	@ 000c99fe 607a
.org 0xc9a00
	lsls r0, r0, #2	@ 000c9a00 8000
.org 0xc9a02
	adds r0, r0, r1	@ 000c9a02 4018
.org 0xc9a04
	movs r1, #4	@ 000c9a04 0421
.org 0xc9a06
	str r1, [r4, #12]	@ 000c9a06 e160
.org 0xc9a08
	ldr r0, [r0, #0]	@ 000c9a08 0068
.org 0xc9a0a
	ldr r0, [r0, #16]	@ 000c9a0a 0069
.org 0xc9a0c
	str r0, [r4, #20]	@ 000c9a0c 6061
.org 0xc9a0e
	pop {r4}	@ 000c9a0e 10bc
.org 0xc9a10
	pop {r0}	@ 000c9a10 01bc
.org 0xc9a12
	bx r0	@ 000c9a12 0047
