@ FUN_081013b0  entry 0x081013b0  size 54
.thumb
.org 0x1013b0
FUN_081013b0:
	push {r4, lr}	@ 001013b0 10b5
.org 0x1013b2
	adds r4, r0, #0	@ 001013b2 041c
.org 0x1013b4
	bl 0x1cff0	@ 001013b4 1bf71cfe
.org 0x1013b8
	ldr r0, [pc, #44]	@ 001013b8 0b48
.org 0x1013ba
	ldr r0, [r0, #0]	@ 001013ba 0068
.org 0x1013bc
	ldr r0, [r0, #84]	@ 001013bc 406d
.org 0x1013be
	ldr r1, [r4, #84]	@ 001013be 616d
.org 0x1013c0
	subs r0, r0, r1	@ 001013c0 401a
.org 0x1013c2
	asrs r0, r0, #8	@ 001013c2 0012
.org 0x1013c4
	cmp r0, #0	@ 001013c4 0028
.org 0x1013c6
	bge.n 0x1013ca	@ 001013c6 00da
.org 0x1013c8
	negs r0, r0	@ 001013c8 4042
.org 0x1013ca
	cmp r0, #95	@ 001013ca 5f28
.org 0x1013cc
	bgt.n 0x1013e0	@ 001013cc 08dc
.org 0x1013ce
	ldr r1, [pc, #28]	@ 001013ce 0749
.org 0x1013d0
	ldrb r0, [r4, #9]	@ 001013d0 607a
.org 0x1013d2
	lsls r0, r0, #2	@ 001013d2 8000
.org 0x1013d4
	adds r0, r0, r1	@ 001013d4 4018
.org 0x1013d6
	movs r1, #2	@ 001013d6 0221
.org 0x1013d8
	str r1, [r4, #12]	@ 001013d8 e160
.org 0x1013da
	ldr r0, [r0, #0]	@ 001013da 0068
.org 0x1013dc
	ldr r0, [r0, #8]	@ 001013dc 8068
.org 0x1013de
	str r0, [r4, #20]	@ 001013de 6061
.org 0x1013e0
	pop {r4}	@ 001013e0 10bc
.org 0x1013e2
	pop {r0}	@ 001013e2 01bc
.org 0x1013e4
	bx r0	@ 001013e4 0047
