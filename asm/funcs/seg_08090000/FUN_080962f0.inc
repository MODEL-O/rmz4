@ FUN_080962f0  entry 0x080962f0  size 72
.thumb
.org 0x962f0
FUN_080962f0:
	push {r4, lr}	@ 000962f0 10b5
.org 0x962f2
	adds r4, r0, #0	@ 000962f2 041c
.org 0x962f4
	ldr r0, [pc, #64]	@ 000962f4 1048
.org 0x962f6
	ldr r0, [r0, #0]	@ 000962f6 0068
.org 0x962f8
	bl 0x5500	@ 000962f8 6ff702f9
.org 0x962fc
	adds r3, r0, #0	@ 000962fc 031c
.org 0x962fe
	cmp r3, #0	@ 000962fe 002b
.org 0x96300
	beq.n 0x96330	@ 00096300 16d0
.org 0x96302
	adds r1, r3, #0	@ 00096302 191c
.org 0x96304
	adds r1, #37	@ 00096304 2531
.org 0x96306
	movs r2, #0	@ 00096306 0022
.org 0x96308
	movs r0, #24	@ 00096308 1820
.org 0x9630a
	strb r0, [r1, #0]	@ 0009630a 0870
.org 0x9630c
	ldr r1, [pc, #44]	@ 0009630c 0b49
.org 0x9630e
	movs r0, #28	@ 0009630e 1c20
.org 0x96310
	strb r0, [r3, #9]	@ 00096310 5872
.org 0x96312
	ldr r0, [r1, #112]	@ 00096312 086f
.org 0x96314
	ldr r0, [r0, #0]	@ 00096314 0068
.org 0x96316
	str r0, [r3, #20]	@ 00096316 5861
.org 0x96318
	movs r0, #0	@ 00096318 0020
.org 0x9631a
	strh r2, [r3, #32]	@ 0009631a 1a84
.org 0x9631c
	adds r1, r3, #0	@ 0009631c 191c
.org 0x9631e
	adds r1, #34	@ 0009631e 2231
.org 0x96320
	strb r0, [r1, #0]	@ 00096320 0870
.org 0x96322
	ldrb r1, [r3, #11]	@ 00096322 d97a
.org 0x96324
	movs r0, #16	@ 00096324 1020
.org 0x96326
	orrs r0, r1	@ 00096326 0843
.org 0x96328
	strb r0, [r3, #11]	@ 00096328 d872
.org 0x9632a
	ldrb r0, [r3, #28]	@ 0009632a 187f
.org 0x9632c
	strb r0, [r3, #29]	@ 0009632c 5877
.org 0x9632e
	str r4, [r3, #40]	@ 0009632e 9c62
.org 0x96330
	adds r0, r3, #0	@ 00096330 181c
.org 0x96332
	pop {r4}	@ 00096332 10bc
.org 0x96334
	pop {r1}	@ 00096334 02bc
.org 0x96336
	bx r1	@ 00096336 0847
