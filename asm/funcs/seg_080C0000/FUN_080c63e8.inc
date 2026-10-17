@ FUN_080c63e8  entry 0x080c63e8  size 68
.thumb
.org 0xc63e8
FUN_080c63e8:
	push {r4, r5, lr}	@ 000c63e8 30b5
.org 0xc63ea
	adds r4, r0, #0	@ 000c63ea 041c
.org 0xc63ec
	lsls r1, r1, #24	@ 000c63ec 0906
.org 0xc63ee
	lsrs r5, r1, #24	@ 000c63ee 0d0e
.org 0xc63f0
	ldr r0, [pc, #56]	@ 000c63f0 0e48
.org 0xc63f2
	ldr r0, [r0, #0]	@ 000c63f2 0068
.org 0xc63f4
	bl 0x5500	@ 000c63f4 3ff784f8
.org 0xc63f8
	adds r3, r0, #0	@ 000c63f8 031c
.org 0xc63fa
	cmp r3, #0	@ 000c63fa 002b
.org 0xc63fc
	beq.n 0xc6426	@ 000c63fc 13d0
.org 0xc63fe
	adds r1, r3, #0	@ 000c63fe 191c
.org 0xc6400
	adds r1, #37	@ 000c6400 2531
.org 0xc6402
	movs r2, #0	@ 000c6402 0022
.org 0xc6404
	movs r0, #8	@ 000c6404 0820
.org 0xc6406
	strb r0, [r1, #0]	@ 000c6406 0870
.org 0xc6408
	ldr r1, [pc, #36]	@ 000c6408 0949
.org 0xc640a
	movs r0, #26	@ 000c640a 1a20
.org 0xc640c
	strb r0, [r3, #9]	@ 000c640c 5872
.org 0xc640e
	ldr r0, [r1, #104]	@ 000c640e 886e
.org 0xc6410
	ldr r0, [r0, #0]	@ 000c6410 0068
.org 0xc6412
	str r0, [r3, #20]	@ 000c6412 5861
.org 0xc6414
	movs r0, #0	@ 000c6414 0020
.org 0xc6416
	strh r2, [r3, #32]	@ 000c6416 1a84
.org 0xc6418
	adds r1, r3, #0	@ 000c6418 191c
.org 0xc641a
	adds r1, #34	@ 000c641a 2231
.org 0xc641c
	strb r0, [r1, #0]	@ 000c641c 0870
.org 0xc641e
	str r4, [r3, #40]	@ 000c641e 9c62
.org 0xc6420
	movs r0, #4	@ 000c6420 0420
.org 0xc6422
	strb r0, [r3, #16]	@ 000c6422 1874
.org 0xc6424
	strb r5, [r3, #17]	@ 000c6424 5d74
.org 0xc6426
	pop {r4, r5}	@ 000c6426 30bc
.org 0xc6428
	pop {r0}	@ 000c6428 01bc
.org 0xc642a
	bx r0	@ 000c642a 0047
