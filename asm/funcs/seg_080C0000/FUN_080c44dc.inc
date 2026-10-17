@ FUN_080c44dc  entry 0x080c44dc  size 74
.thumb
.org 0xc44dc
FUN_080c44dc:
	push {r4, r5, lr}	@ 000c44dc 30b5
.org 0xc44de
	adds r4, r0, #0	@ 000c44de 041c
.org 0xc44e0
	adds r5, r1, #0	@ 000c44e0 0d1c
.org 0xc44e2
	ldr r0, [pc, #68]	@ 000c44e2 1148
.org 0xc44e4
	ldr r0, [r0, #0]	@ 000c44e4 0068
.org 0xc44e6
	bl 0x5500	@ 000c44e6 41f70bf8
.org 0xc44ea
	adds r3, r0, #0	@ 000c44ea 031c
.org 0xc44ec
	cmp r3, #0	@ 000c44ec 002b
.org 0xc44ee
	beq.n 0xc451e	@ 000c44ee 16d0
.org 0xc44f0
	adds r1, r3, #0	@ 000c44f0 191c
.org 0xc44f2
	adds r1, #37	@ 000c44f2 2531
.org 0xc44f4
	movs r2, #0	@ 000c44f4 0022
.org 0xc44f6
	movs r0, #8	@ 000c44f6 0820
.org 0xc44f8
	strb r0, [r1, #0]	@ 000c44f8 0870
.org 0xc44fa
	ldr r1, [pc, #48]	@ 000c44fa 0c49
.org 0xc44fc
	movs r0, #22	@ 000c44fc 1620
.org 0xc44fe
	strb r0, [r3, #9]	@ 000c44fe 5872
.org 0xc4500
	ldr r0, [r1, #88]	@ 000c4500 886d
.org 0xc4502
	ldr r0, [r0, #0]	@ 000c4502 0068
.org 0xc4504
	str r0, [r3, #20]	@ 000c4504 5861
.org 0xc4506
	movs r0, #0	@ 000c4506 0020
.org 0xc4508
	strh r2, [r3, #32]	@ 000c4508 1a84
.org 0xc450a
	adds r1, r3, #0	@ 000c450a 191c
.org 0xc450c
	adds r1, #34	@ 000c450c 2231
.org 0xc450e
	strb r0, [r1, #0]	@ 000c450e 0870
.org 0xc4510
	str r4, [r3, #40]	@ 000c4510 9c62
.org 0xc4512
	ldr r0, [r5, #0]	@ 000c4512 2868
.org 0xc4514
	ldr r1, [r5, #4]	@ 000c4514 6968
.org 0xc4516
	str r0, [r3, #84]	@ 000c4516 5865
.org 0xc4518
	str r1, [r3, #88]	@ 000c4518 9965
.org 0xc451a
	movs r0, #1	@ 000c451a 0120
.org 0xc451c
	strb r0, [r3, #16]	@ 000c451c 1874
.org 0xc451e
	adds r0, r3, #0	@ 000c451e 181c
.org 0xc4520
	pop {r4, r5}	@ 000c4520 30bc
.org 0xc4522
	pop {r1}	@ 000c4522 02bc
.org 0xc4524
	bx r1	@ 000c4524 0847
