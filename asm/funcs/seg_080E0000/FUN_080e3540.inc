@ FUN_080e3540  entry 0x080e3540  size 114
.thumb
.org 0xe3540
FUN_080e3540:
	push {r4, r5, lr}	@ 000e3540 30b5
.org 0xe3542
	sub sp, #8	@ 000e3542 82b0
.org 0xe3544
	adds r5, r0, #0	@ 000e3544 051c
.org 0xe3546
	ldr r0, [r5, #84]	@ 000e3546 686d
.org 0xe3548
	ldr r4, [r5, #92]	@ 000e3548 ec6d
.org 0xe354a
	adds r0, r0, r4	@ 000e354a 0019
.org 0xe354c
	str r0, [r5, #84]	@ 000e354c 6865
.org 0xe354e
	ldr r1, [r5, #88]	@ 000e354e a96d
.org 0xe3550
	ldr r3, [r5, #96]	@ 000e3550 2b6e
.org 0xe3552
	adds r1, r1, r3	@ 000e3552 c918
.org 0xe3554
	str r1, [r5, #88]	@ 000e3554 a965
.org 0xe3556
	ldr r2, [r5, #100]	@ 000e3556 6a6e
.org 0xe3558
	adds r4, r4, r2	@ 000e3558 a418
.org 0xe355a
	str r4, [r5, #92]	@ 000e355a ec65
.org 0xe355c
	ldr r2, [r5, #104]	@ 000e355c aa6e
.org 0xe355e
	adds r3, r3, r2	@ 000e355e 9b18
.org 0xe3560
	str r3, [r5, #96]	@ 000e3560 2b66
.org 0xe3562
	ldr r2, [pc, #80]	@ 000e3562 144a
.org 0xe3564
	adds r1, r1, r2	@ 000e3564 8918
.org 0xe3566
	bl 0x7c7c	@ 000e3566 24f789fb
.org 0xe356a
	lsls r0, r0, #16	@ 000e356a 0004
.org 0xe356c
	cmp r0, #0	@ 000e356c 0028
.org 0xe356e
	bne.n 0xe357e	@ 000e356e 06d1
.org 0xe3570
	ldrb r0, [r5, #18]	@ 000e3570 a87c
.org 0xe3572
	subs r0, #1	@ 000e3572 0138
.org 0xe3574
	strb r0, [r5, #18]	@ 000e3574 a874
.org 0xe3576
	lsls r0, r0, #24	@ 000e3576 0006
.org 0xe3578
	lsrs r0, r0, #24	@ 000e3578 000e
.org 0xe357a
	cmp r0, #255	@ 000e357a ff28
.org 0xe357c
	bne.n 0xe35aa	@ 000e357c 15d1
.org 0xe357e
	ldr r0, [r5, #84]	@ 000e357e 686d
.org 0xe3580
	str r0, [sp, #0]	@ 000e3580 0090
.org 0xe3582
	ldr r0, [r5, #88]	@ 000e3582 a86d
.org 0xe3584
	ldr r1, [pc, #48]	@ 000e3584 0c49
.org 0xe3586
	adds r0, r0, r1	@ 000e3586 4018
.org 0xe3588
	str r0, [sp, #4]	@ 000e3588 0190
.org 0xe358a
	movs r0, #1	@ 000e358a 0120
.org 0xe358c
	mov r1, sp	@ 000e358c 6946
.org 0xe358e
	bl 0xd0c88	@ 000e358e edf77bfb
.org 0xe3592
	movs r0, #42	@ 000e3592 2a20
.org 0xe3594
	bl 0x2b10	@ 000e3594 1ff7bcfa
.org 0xe3598
	ldr r1, [pc, #32]	@ 000e3598 0849
.org 0xe359a
	ldrb r0, [r5, #9]	@ 000e359a 687a
.org 0xe359c
	lsls r0, r0, #2	@ 000e359c 8000
.org 0xe359e
	adds r0, r0, r1	@ 000e359e 4018
.org 0xe35a0
	movs r1, #2	@ 000e35a0 0221
.org 0xe35a2
	str r1, [r5, #12]	@ 000e35a2 e960
.org 0xe35a4
	ldr r0, [r0, #0]	@ 000e35a4 0068
.org 0xe35a6
	ldr r0, [r0, #8]	@ 000e35a6 8068
.org 0xe35a8
	str r0, [r5, #20]	@ 000e35a8 6861
.org 0xe35aa
	add sp, #8	@ 000e35aa 02b0
.org 0xe35ac
	pop {r4, r5}	@ 000e35ac 30bc
.org 0xe35ae
	pop {r0}	@ 000e35ae 01bc
.org 0xe35b0
	bx r0	@ 000e35b0 0047
