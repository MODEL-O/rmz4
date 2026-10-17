@ FUN_08083418  entry 0x08083418  size 68
.thumb
.org 0x83418
FUN_08083418:
	push {r4, lr}	@ 00083418 10b5
.org 0x8341a
	adds r3, r0, #0	@ 0008341a 031c
.org 0x8341c
	ldr r1, [r3, #84]	@ 0008341c 596d
.org 0x8341e
	str r1, [r3, #100]	@ 0008341e 5966
.org 0x83420
	ldr r1, [r3, #88]	@ 00083420 996d
.org 0x83422
	str r1, [r3, #104]	@ 00083422 9966
.org 0x83424
	adds r2, r3, #0	@ 00083424 1a1c
.org 0x83426
	adds r2, #192	@ 00083426 c032
.org 0x83428
	movs r1, #0	@ 00083428 0021
.org 0x8342a
	str r1, [r2, #0]	@ 0008342a 1160
.org 0x8342c
	ldr r1, [pc, #44]	@ 0008342c 0b49
.org 0x8342e
	str r1, [r3, #92]	@ 0008342e d965
.org 0x83430
	adds r4, r1, #0	@ 00083430 0c1c
.org 0x83432
	ldrb r2, [r3, #10]	@ 00083432 9a7a
.org 0x83434
	movs r1, #16	@ 00083434 1021
.org 0x83436
	ands r1, r2	@ 00083436 1140
.org 0x83438
	cmp r1, #0	@ 00083438 0029
.org 0x8343a
	beq.n 0x83440	@ 0008343a 01d0
.org 0x8343c
	movs r4, #128	@ 0008343c 8024
.org 0x8343e
	lsls r4, r4, #2	@ 0008343e a400
.org 0x83440
	str r4, [r3, #92]	@ 00083440 dc65
.org 0x83442
	ldr r1, [pc, #28]	@ 00083442 0749
.org 0x83444
	str r1, [r3, #96]	@ 00083444 1966
.org 0x83446
	adds r4, r1, #0	@ 00083446 0c1c
.org 0x83448
	movs r1, #32	@ 00083448 2021
.org 0x8344a
	ands r1, r2	@ 0008344a 1140
.org 0x8344c
	cmp r1, #0	@ 0008344c 0029
.org 0x8344e
	beq.n 0x83454	@ 0008344e 01d0
.org 0x83450
	movs r4, #128	@ 00083450 8024
.org 0x83452
	lsls r4, r4, #3	@ 00083452 e400
.org 0x83454
	str r4, [r3, #96]	@ 00083454 1c66
.org 0x83456
	pop {r4}	@ 00083456 10bc
.org 0x83458
	pop {r1}	@ 00083458 02bc
.org 0x8345a
	bx r1	@ 0008345a 0847
