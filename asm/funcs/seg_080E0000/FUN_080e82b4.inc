@ FUN_080e82b4  entry 0x080e82b4  size 88
.thumb
.org 0xe82b4
FUN_080e82b4:
	push {r4, lr}	@ 000e82b4 10b5
.org 0xe82b6
	adds r4, r0, #0	@ 000e82b6 041c
.org 0xe82b8
	ldr r0, [r4, #84]	@ 000e82b8 606d
.org 0xe82ba
	ldr r1, [r4, #92]	@ 000e82ba e16d
.org 0xe82bc
	adds r0, r0, r1	@ 000e82bc 4018
.org 0xe82be
	str r0, [r4, #84]	@ 000e82be 6065
.org 0xe82c0
	ldr r0, [r4, #88]	@ 000e82c0 a06d
.org 0xe82c2
	ldr r1, [r4, #96]	@ 000e82c2 216e
.org 0xe82c4
	adds r0, r0, r1	@ 000e82c4 4018
.org 0xe82c6
	str r0, [r4, #88]	@ 000e82c6 a065
.org 0xe82c8
	adds r1, #64	@ 000e82c8 4031
.org 0xe82ca
	str r1, [r4, #96]	@ 000e82ca 2166
.org 0xe82cc
	ldrb r1, [r4, #18]	@ 000e82cc a17c
.org 0xe82ce
	adds r0, r4, #0	@ 000e82ce 201c
.org 0xe82d0
	adds r0, #36	@ 000e82d0 2430
.org 0xe82d2
	strb r1, [r0, #0]	@ 000e82d2 0170
.org 0xe82d4
	ldrb r0, [r4, #17]	@ 000e82d4 607c
.org 0xe82d6
	cmp r0, #0	@ 000e82d6 0028
.org 0xe82d8
	bne.n 0xe82e0	@ 000e82d8 02d1
.org 0xe82da
	ldrb r0, [r4, #18]	@ 000e82da a07c
.org 0xe82dc
	subs r0, #4	@ 000e82dc 0438
.org 0xe82de
	b.n 0xe82e4	@ 000e82de 01e0
.org 0xe82e0
	ldrb r0, [r4, #18]	@ 000e82e0 a07c
.org 0xe82e2
	adds r0, #4	@ 000e82e2 0430
.org 0xe82e4
	strb r0, [r4, #18]	@ 000e82e4 a074
.org 0xe82e6
	ldr r0, [r4, #84]	@ 000e82e6 606d
.org 0xe82e8
	ldr r1, [r4, #88]	@ 000e82e8 a16d
.org 0xe82ea
	bl 0x7c7c	@ 000e82ea 1ff7c7fc
.org 0xe82ee
	lsls r0, r0, #16	@ 000e82ee 0004
.org 0xe82f0
	cmp r0, #0	@ 000e82f0 0028
.org 0xe82f2
	beq.n 0xe8306	@ 000e82f2 08d0
.org 0xe82f4
	ldr r1, [pc, #20]	@ 000e82f4 0549
.org 0xe82f6
	ldrb r0, [r4, #9]	@ 000e82f6 607a
.org 0xe82f8
	lsls r0, r0, #2	@ 000e82f8 8000
.org 0xe82fa
	adds r0, r0, r1	@ 000e82fa 4018
.org 0xe82fc
	movs r1, #2	@ 000e82fc 0221
.org 0xe82fe
	str r1, [r4, #12]	@ 000e82fe e160
.org 0xe8300
	ldr r0, [r0, #0]	@ 000e8300 0068
.org 0xe8302
	ldr r0, [r0, #8]	@ 000e8302 8068
.org 0xe8304
	str r0, [r4, #20]	@ 000e8304 6061
.org 0xe8306
	pop {r4}	@ 000e8306 10bc
.org 0xe8308
	pop {r0}	@ 000e8308 01bc
.org 0xe830a
	bx r0	@ 000e830a 0047
