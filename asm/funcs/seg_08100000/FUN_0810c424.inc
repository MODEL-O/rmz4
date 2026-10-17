@ FUN_0810c424  entry 0x0810c424  size 38
.thumb
.org 0x10c424
FUN_0810c424:
	push {r4, r5, r6, lr}	@ 0010c424 70b5
.org 0x10c426
	adds r6, r0, #0	@ 0010c426 061c
.org 0x10c428
	ldrb r0, [r6, #13]	@ 0010c428 707b
.org 0x10c42a
	cmp r0, #4	@ 0010c42a 0428
.org 0x10c42c
	bls.n 0x10c430	@ 0010c42c 00d9
.org 0x10c42e
	b.n 0x10c5ba	@ 0010c42e c4e0
.org 0x10c430
	lsls r0, r0, #2	@ 0010c430 8000
.org 0x10c432
	ldr r1, [pc, #12]	@ 0010c432 0349
.org 0x10c434
	adds r0, r0, r1	@ 0010c434 4018
.org 0x10c436
	ldr r0, [r0, #0]	@ 0010c436 0068
.org 0x10c438
	adds r4, r6, #0	@ 0010c438 341c
.org 0x10c43a
	adds r4, #116	@ 0010c43a 7434
.org 0x10c43c
	mov pc, r0	@ 0010c43c 8746
.org 0x10c43e
	.byte 0x00	@ 0010c43e data
.org 0x10c43f
	.byte 0x00	@ 0010c43f data
.org 0x10c440
	.byte 0x44,0xc4,0x10,0x08	@ 0010c440 data
.org 0x10c444
	.byte 0x58,0xc4,0x10,0x08	@ 0010c444 data
.org 0x10c448
	.byte 0xdc,0xc4,0x10,0x08	@ 0010c448 data
