@ FUN_08017434  entry 0x08017434  size 32
.thumb
.org 0x17434
FUN_08017434:
	push {lr}	@ 00017434 00b5
.org 0x17436
	adds r1, r0, #0	@ 00017436 011c
.org 0x17438
	ldrb r3, [r1, #14]	@ 00017438 8b7b
.org 0x1743a
	adds r2, r3, #0	@ 0001743a 1a1c
.org 0x1743c
	cmp r2, #0	@ 0001743c 002a
.org 0x1743e
	bne.n 0x17450	@ 0001743e 07d1
.org 0x17440
	ldr r0, [pc, #16]	@ 00017440 0448
.org 0x17442
	str r0, [r1, #76]	@ 00017442 c864
.org 0x17444
	str r2, [r1, #80]	@ 00017444 0a65
.org 0x17446
	movs r0, #160	@ 00017446 a020
.org 0x17448
	lsls r0, r0, #1	@ 00017448 4000
.org 0x1744a
	str r0, [r1, #68]	@ 0001744a 4864
.org 0x1744c
	adds r0, r3, #1	@ 0001744c 581c
.org 0x1744e
	strb r0, [r1, #14]	@ 0001744e 8873
.org 0x17450
	pop {r0}	@ 00017450 01bc
.org 0x17452
	bx r0	@ 00017452 0047
