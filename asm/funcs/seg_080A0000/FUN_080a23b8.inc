@ FUN_080a23b8  entry 0x080a23b8  size 58
.thumb
.org 0xa23b8
FUN_080a23b8:
	push {r4, lr}	@ 000a23b8 10b5
.org 0xa23ba
	adds r4, r0, #0	@ 000a23ba 041c
.org 0xa23bc
	ldr r0, [r4, #84]	@ 000a23bc 606d
.org 0xa23be
	ldr r1, [r4, #92]	@ 000a23be e16d
.org 0xa23c0
	adds r0, r0, r1	@ 000a23c0 4018
.org 0xa23c2
	str r0, [r4, #84]	@ 000a23c2 6065
.org 0xa23c4
	ldr r1, [r4, #88]	@ 000a23c4 a16d
.org 0xa23c6
	ldr r2, [r4, #96]	@ 000a23c6 226e
.org 0xa23c8
	adds r1, r1, r2	@ 000a23c8 8918
.org 0xa23ca
	str r1, [r4, #88]	@ 000a23ca a165
.org 0xa23cc
	adds r2, #64	@ 000a23cc 4032
.org 0xa23ce
	str r2, [r4, #96]	@ 000a23ce 2266
.org 0xa23d0
	bl 0x7c7c	@ 000a23d0 65f754fc
.org 0xa23d4
	lsls r0, r0, #16	@ 000a23d4 0004
.org 0xa23d6
	cmp r0, #0	@ 000a23d6 0028
.org 0xa23d8
	beq.n 0xa23ec	@ 000a23d8 08d0
.org 0xa23da
	ldr r1, [pc, #24]	@ 000a23da 0649
.org 0xa23dc
	ldrb r0, [r4, #9]	@ 000a23dc 607a
.org 0xa23de
	lsls r0, r0, #2	@ 000a23de 8000
.org 0xa23e0
	adds r0, r0, r1	@ 000a23e0 4018
.org 0xa23e2
	movs r1, #2	@ 000a23e2 0221
.org 0xa23e4
	str r1, [r4, #12]	@ 000a23e4 e160
.org 0xa23e6
	ldr r0, [r0, #0]	@ 000a23e6 0068
.org 0xa23e8
	ldr r0, [r0, #8]	@ 000a23e8 8068
.org 0xa23ea
	str r0, [r4, #20]	@ 000a23ea 6061
.org 0xa23ec
	pop {r4}	@ 000a23ec 10bc
.org 0xa23ee
	pop {r0}	@ 000a23ee 01bc
.org 0xa23f0
	bx r0	@ 000a23f0 0047
