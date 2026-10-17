@ FUN_080805cc  entry 0x080805cc  size 112
.thumb
.org 0x805cc
FUN_080805cc:
	push {r4, r5, lr}	@ 000805cc 30b5
.org 0x805ce
	sub sp, #8	@ 000805ce 82b0
.org 0x805d0
	adds r4, r0, #0	@ 000805d0 041c
.org 0x805d2
	bl 0x1cff0	@ 000805d2 9cf70dfd
.org 0x805d6
	ldr r0, [r4, #84]	@ 000805d6 606d
.org 0x805d8
	str r0, [sp, #0]	@ 000805d8 0090
.org 0x805da
	ldr r0, [r4, #88]	@ 000805da a06d
.org 0x805dc
	ldr r1, [pc, #92]	@ 000805dc 1749
.org 0x805de
	adds r0, r0, r1	@ 000805de 4018
.org 0x805e0
	str r0, [sp, #4]	@ 000805e0 0190
.org 0x805e2
	movs r0, #1	@ 000805e2 0120
.org 0x805e4
	mov r1, sp	@ 000805e4 6946
.org 0x805e6
	bl 0xd0c88	@ 000805e6 50f04ffb
.org 0x805ea
	adds r5, r4, #0	@ 000805ea 251c
.org 0x805ec
	adds r5, #84	@ 000805ec 5435
.org 0x805ee
	adds r0, r4, #0	@ 000805ee 201c
.org 0x805f0
	adds r1, r5, #0	@ 000805f0 291c
.org 0x805f2
	bl 0xd6834	@ 000805f2 56f01ff9
.org 0x805f6
	movs r0, #42	@ 000805f6 2a20
.org 0x805f8
	bl 0x2b10	@ 000805f8 82f78afa
.org 0x805fc
	movs r0, #3	@ 000805fc 0320
.org 0x805fe
	adds r1, r5, #0	@ 000805fe 291c
.org 0x80600
	bl 0x2aaec	@ 00080600 aaf774fa
.org 0x80604
	ldr r2, [pc, #56]	@ 00080604 0e4a
.org 0x80606
	ldrh r1, [r2, #12]	@ 00080606 9189
.org 0x80608
	ldr r0, [pc, #56]	@ 00080608 0e48
.org 0x8060a
	cmp r1, r0	@ 0008060a 8142
.org 0x8060c
	bhi.n 0x80612	@ 0008060c 01d8
.org 0x8060e
	adds r0, r1, #1	@ 0008060e 481c
.org 0x80610
	strh r0, [r2, #12]	@ 00080610 9081
.org 0x80612
	adds r0, r4, #0	@ 00080612 201c
.org 0x80614
	adds r1, r5, #0	@ 00080614 291c
.org 0x80616
	bl 0x2abe0	@ 00080616 aaf7e3fa
.org 0x8061a
	ldrb r1, [r4, #10]	@ 0008061a a17a
.org 0x8061c
	movs r0, #254	@ 0008061c fe20
.org 0x8061e
	ands r0, r1	@ 0008061e 0840
.org 0x80620
	strb r0, [r4, #10]	@ 00080620 a072
.org 0x80622
	ldr r1, [pc, #36]	@ 00080622 0949
.org 0x80624
	ldrb r0, [r4, #9]	@ 00080624 607a
.org 0x80626
	lsls r0, r0, #2	@ 00080626 8000
.org 0x80628
	adds r0, r0, r1	@ 00080628 4018
.org 0x8062a
	movs r1, #4	@ 0008062a 0421
.org 0x8062c
	str r1, [r4, #12]	@ 0008062c e160
.org 0x8062e
	ldr r0, [r0, #0]	@ 0008062e 0068
.org 0x80630
	ldr r0, [r0, #16]	@ 00080630 0069
.org 0x80632
	str r0, [r4, #20]	@ 00080632 6061
.org 0x80634
	add sp, #8	@ 00080634 02b0
.org 0x80636
	pop {r4, r5}	@ 00080636 30bc
.org 0x80638
	pop {r0}	@ 00080638 01bc
.org 0x8063a
	bx r0	@ 0008063a 0047
