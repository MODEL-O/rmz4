@ FUN_080353e0  entry 0x080353e0  size 44
.thumb
.org 0x353e0
FUN_080353e0:
	push {r4, lr}	@ 000353e0 10b5
.org 0x353e2
	adds r4, r0, #0	@ 000353e2 041c
.org 0x353e4
	bl 0x3a19c	@ 000353e4 04f0dafe
.org 0x353e8
	adds r1, r0, #0	@ 000353e8 011c
.org 0x353ea
	cmp r1, #0	@ 000353ea 0029
.org 0x353ec
	bne.n 0x353f8	@ 000353ec 04d1
.org 0x353ee
	movs r2, #128	@ 000353ee 8022
.org 0x353f0
	lsls r2, r2, #1	@ 000353f0 5200
.org 0x353f2
	adds r0, r4, r2	@ 000353f2 a018
.org 0x353f4
	strb r1, [r0, #0]	@ 000353f4 0170
.org 0x353f6
	b.n 0x35406	@ 000353f6 06e0
.org 0x353f8
	ldr r0, [pc, #16]	@ 000353f8 0448
.org 0x353fa
	adds r1, r4, r0	@ 000353fa 2118
.org 0x353fc
	movs r0, #1	@ 000353fc 0120
.org 0x353fe
	strb r0, [r1, #0]	@ 000353fe 0870
.org 0x35400
	adds r0, r4, #0	@ 00035400 201c
.org 0x35402
	bl 0x35410	@ 00035402 00f005f8
.org 0x35406
	pop {r4}	@ 00035406 10bc
.org 0x35408
	pop {r0}	@ 00035408 01bc
.org 0x3540a
	bx r0	@ 0003540a 0047
