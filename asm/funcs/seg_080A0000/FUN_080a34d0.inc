@ FUN_080a34d0  entry 0x080a34d0  size 172
.thumb
.org 0xa34d0
FUN_080a34d0:
	push {r4, r5, r6, lr}	@ 000a34d0 70b5
.org 0xa34d2
	adds r4, r0, #0	@ 000a34d2 041c
.org 0xa34d4
	ldr r6, [r4, #40]	@ 000a34d4 a66a
.org 0xa34d6
	adds r0, #140	@ 000a34d6 8c30
.org 0xa34d8
	ldr r2, [r0, #0]	@ 000a34d8 0268
.org 0xa34da
	movs r0, #128	@ 000a34da 8020
.org 0xa34dc
	lsls r0, r0, #2	@ 000a34dc 8000
.org 0xa34de
	ands r0, r2	@ 000a34de 1040
.org 0xa34e0
	cmp r0, #0	@ 000a34e0 0028
.org 0xa34e2
	beq.n 0xa3504	@ 000a34e2 0fd0
.org 0xa34e4
	ldr r1, [pc, #24]	@ 000a34e4 0649
.org 0xa34e6
	ldrb r0, [r4, #9]	@ 000a34e6 607a
.org 0xa34e8
	lsls r0, r0, #2	@ 000a34e8 8000
.org 0xa34ea
	adds r0, r0, r1	@ 000a34ea 4018
.org 0xa34ec
	movs r1, #2	@ 000a34ec 0221
.org 0xa34ee
	str r1, [r4, #12]	@ 000a34ee e160
.org 0xa34f0
	ldr r0, [r0, #0]	@ 000a34f0 0068
.org 0xa34f2
	ldr r0, [r0, #8]	@ 000a34f2 8068
.org 0xa34f4
	str r0, [r4, #20]	@ 000a34f4 6061
.org 0xa34f6
	adds r0, r4, #0	@ 000a34f6 201c
.org 0xa34f8
	bl 0xa32fc	@ 000a34f8 fff700ff
.org 0xa34fc
	b.n 0xa3692	@ 000a34fc c9e0
.org 0xa34fe
	.byte 0x00	@ 000a34fe data
.org 0xa34ff
	.byte 0x00	@ 000a34ff data
.org 0xa3500
	.byte 0x40,0xdb,0x85,0x08	@ 000a3500 data
.org 0xa3504
	adds r0, r4, #0	@ 000a3504 201c
.org 0xa3506
	adds r0, #192	@ 000a3506 c030
.org 0xa3508
	ldr r1, [r0, #0]	@ 000a3508 0168
.org 0xa350a
	adds r5, r0, #0	@ 000a350a 051c
.org 0xa350c
	cmp r1, #0	@ 000a350c 0029
.org 0xa350e
	bne.n 0xa3542	@ 000a350e 18d1
.org 0xa3510
	movs r0, #1	@ 000a3510 0120
.org 0xa3512
	ands r2, r0	@ 000a3512 0240
.org 0xa3514
	cmp r2, #0	@ 000a3514 002a
.org 0xa3516
	beq.n 0xa353c	@ 000a3516 11d0
.org 0xa3518
	ldr r2, [pc, #92]	@ 000a3518 174a
.org 0xa351a
	movs r0, #20	@ 000a351a 1420
.org 0xa351c
	adds r1, r4, #0	@ 000a351c 211c
.org 0xa351e
	bl 0x2adac	@ 000a351e 87f745fc
.org 0xa3522
	str r0, [r5, #0]	@ 000a3522 2860
.org 0xa3524
	cmp r0, #0	@ 000a3524 0028
.org 0xa3526
	beq.n 0xa3564	@ 000a3526 1dd0
.org 0xa3528
	adds r0, r4, #0	@ 000a3528 201c
.org 0xa352a
	adds r0, #116	@ 000a352a 7430
.org 0xa352c
	ldrb r2, [r4, #17]	@ 000a352c 627c
.org 0xa352e
	lsls r1, r2, #1	@ 000a352e 5100
.org 0xa3530
	adds r1, r1, r2	@ 000a3530 8918
.org 0xa3532
	lsls r1, r1, #4	@ 000a3532 0901
.org 0xa3534
	ldr r2, [pc, #68]	@ 000a3534 114a
.org 0xa3536
	adds r1, r1, r2	@ 000a3536 8918
.org 0xa3538
	bl 0x5784	@ 000a3538 62f724f9
.org 0xa353c
	ldr r0, [r5, #0]	@ 000a353c 2868
.org 0xa353e
	cmp r0, #0	@ 000a353e 0028
.org 0xa3540
	beq.n 0xa3564	@ 000a3540 10d0
.org 0xa3542
	ldr r0, [r5, #0]	@ 000a3542 2868
.org 0xa3544
	bl 0x2b3e4	@ 000a3544 87f74eff
.org 0xa3548
	cmp r0, #0	@ 000a3548 0028
.org 0xa354a
	beq.n 0xa3564	@ 000a354a 0bd0
.org 0xa354c
	adds r0, r4, #0	@ 000a354c 201c
.org 0xa354e
	adds r0, #116	@ 000a354e 7430
.org 0xa3550
	ldrb r2, [r4, #17]	@ 000a3550 627c
.org 0xa3552
	lsls r1, r2, #1	@ 000a3552 5100
.org 0xa3554
	adds r1, r1, r2	@ 000a3554 8918
.org 0xa3556
	lsls r1, r1, #4	@ 000a3556 0901
.org 0xa3558
	ldr r2, [pc, #36]	@ 000a3558 094a
.org 0xa355a
	adds r1, r1, r2	@ 000a355a 8918
.org 0xa355c
	bl 0x5784	@ 000a355c 62f712f9
.org 0xa3560
	movs r0, #0	@ 000a3560 0020
.org 0xa3562
	str r0, [r5, #0]	@ 000a3562 2860
.org 0xa3564
	ldrb r0, [r4, #13]	@ 000a3564 607b
.org 0xa3566
	cmp r0, #6	@ 000a3566 0628
.org 0xa3568
	bls.n 0xa356c	@ 000a3568 00d9
.org 0xa356a
	b.n 0xa368c	@ 000a356a 8fe0
.org 0xa356c
	lsls r0, r0, #2	@ 000a356c 8000
.org 0xa356e
	ldr r1, [pc, #20]	@ 000a356e 0549
.org 0xa3570
	adds r0, r0, r1	@ 000a3570 4018
.org 0xa3572
	ldr r0, [r0, #0]	@ 000a3572 0068
.org 0xa3574
	mov pc, r0	@ 000a3574 8746
.org 0xa3576
	.byte 0x00	@ 000a3576 data
.org 0xa3577
	.byte 0x00	@ 000a3577 data
.org 0xa3578
	.byte 0xf0,0x1e,0x86,0x08	@ 000a3578 data
