@ FUN_0804b384  entry 0x0804b384  size 66
.thumb
.org 0x4b384
FUN_0804b384:
	push {r4, lr}	@ 0004b384 10b5
.org 0x4b386
	adds r4, r0, #0	@ 0004b386 041c
.org 0x4b388
	adds r1, r4, #0	@ 0004b388 211c
.org 0x4b38a
	adds r1, #84	@ 0004b38a 5431
.org 0x4b38c
	movs r0, #3	@ 0004b38c 0320
.org 0x4b38e
	bl 0xd0c88	@ 0004b38e 85f07bfc
.org 0x4b392
	adds r0, r4, #0	@ 0004b392 201c
.org 0x4b394
	adds r0, #140	@ 0004b394 8c30
.org 0x4b396
	movs r1, #0	@ 0004b396 0021
.org 0x4b398
	str r1, [r0, #0]	@ 0004b398 0160
.org 0x4b39a
	adds r0, #4	@ 0004b39a 0430
.org 0x4b39c
	str r1, [r0, #0]	@ 0004b39c 0160
.org 0x4b39e
	adds r0, #4	@ 0004b39e 0430
.org 0x4b3a0
	strb r1, [r0, #0]	@ 0004b3a0 0170
.org 0x4b3a2
	ldrb r1, [r4, #10]	@ 0004b3a2 a17a
.org 0x4b3a4
	movs r0, #251	@ 0004b3a4 fb20
.org 0x4b3a6
	ands r0, r1	@ 0004b3a6 0840
.org 0x4b3a8
	movs r1, #254	@ 0004b3a8 fe21
.org 0x4b3aa
	ands r0, r1	@ 0004b3aa 0840
.org 0x4b3ac
	strb r0, [r4, #10]	@ 0004b3ac a072
.org 0x4b3ae
	ldr r1, [pc, #24]	@ 0004b3ae 0649
.org 0x4b3b0
	ldrb r0, [r4, #9]	@ 0004b3b0 607a
.org 0x4b3b2
	lsls r0, r0, #2	@ 0004b3b2 8000
.org 0x4b3b4
	adds r0, r0, r1	@ 0004b3b4 4018
.org 0x4b3b6
	movs r1, #4	@ 0004b3b6 0421
.org 0x4b3b8
	str r1, [r4, #12]	@ 0004b3b8 e160
.org 0x4b3ba
	ldr r0, [r0, #0]	@ 0004b3ba 0068
.org 0x4b3bc
	ldr r0, [r0, #16]	@ 0004b3bc 0069
.org 0x4b3be
	str r0, [r4, #20]	@ 0004b3be 6061
.org 0x4b3c0
	pop {r4}	@ 0004b3c0 10bc
.org 0x4b3c2
	pop {r0}	@ 0004b3c2 01bc
.org 0x4b3c4
	bx r0	@ 0004b3c4 0047
