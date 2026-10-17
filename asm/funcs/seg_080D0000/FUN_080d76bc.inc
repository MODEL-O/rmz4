@ FUN_080d76bc  entry 0x080d76bc  size 118
.thumb
.org 0xd76bc
FUN_080d76bc:
	push {r4, r5, r6, r7, lr}	@ 000d76bc f0b5
.org 0xd76be
	mov r7, r8	@ 000d76be 4746
.org 0xd76c0
	push {r7}	@ 000d76c0 80b4
.org 0xd76c2
	adds r6, r0, #0	@ 000d76c2 061c
.org 0xd76c4
	adds r4, r1, #0	@ 000d76c4 0c1c
.org 0xd76c6
	adds r5, r2, #0	@ 000d76c6 151c
.org 0xd76c8
	mov r8, r3	@ 000d76c8 9846
.org 0xd76ca
	ldr r0, [sp, #28]	@ 000d76ca 0798
.org 0xd76cc
	lsls r0, r0, #24	@ 000d76cc 0006
.org 0xd76ce
	lsrs r7, r0, #24	@ 000d76ce 070e
.org 0xd76d0
	ldr r0, [pc, #96]	@ 000d76d0 1848
.org 0xd76d2
	ldr r0, [r0, #0]	@ 000d76d2 0068
.org 0xd76d4
	bl 0x5500	@ 000d76d4 2df714ff
.org 0xd76d8
	adds r3, r0, #0	@ 000d76d8 031c
.org 0xd76da
	cmp r3, #0	@ 000d76da 002b
.org 0xd76dc
	beq.n 0xd7728	@ 000d76dc 24d0
.org 0xd76de
	adds r1, r3, #0	@ 000d76de 191c
.org 0xd76e0
	adds r1, #37	@ 000d76e0 2531
.org 0xd76e2
	movs r2, #0	@ 000d76e2 0022
.org 0xd76e4
	movs r0, #1	@ 000d76e4 0120
.org 0xd76e6
	strb r0, [r1, #0]	@ 000d76e6 0870
.org 0xd76e8
	ldr r1, [pc, #76]	@ 000d76e8 1349
.org 0xd76ea
	movs r0, #23	@ 000d76ea 1720
.org 0xd76ec
	strb r0, [r3, #9]	@ 000d76ec 5872
.org 0xd76ee
	ldr r0, [r1, #92]	@ 000d76ee c86d
.org 0xd76f0
	ldr r0, [r0, #0]	@ 000d76f0 0068
.org 0xd76f2
	str r0, [r3, #20]	@ 000d76f2 5861
.org 0xd76f4
	movs r1, #0	@ 000d76f4 0021
.org 0xd76f6
	strh r2, [r3, #32]	@ 000d76f6 1a84
.org 0xd76f8
	adds r0, r3, #0	@ 000d76f8 181c
.org 0xd76fa
	adds r0, #34	@ 000d76fa 2230
.org 0xd76fc
	strb r1, [r0, #0]	@ 000d76fc 0170
.org 0xd76fe
	movs r0, #3	@ 000d76fe 0320
.org 0xd7700
	strb r0, [r3, #16]	@ 000d7700 1874
.org 0xd7702
	str r6, [r3, #40]	@ 000d7702 9e62
.org 0xd7704
	ldr r0, [sp, #24]	@ 000d7704 0698
.org 0xd7706
	str r0, [r3, #116]	@ 000d7706 5867
.org 0xd7708
	ldr r0, [r4, #0]	@ 000d7708 2068
.org 0xd770a
	str r0, [r3, #84]	@ 000d770a 5865
.org 0xd770c
	ldr r0, [r4, #4]	@ 000d770c 6068
.org 0xd770e
	str r0, [r3, #88]	@ 000d770e 9865
.org 0xd7710
	ldr r0, [r5, #0]	@ 000d7710 2868
.org 0xd7712
	str r0, [r3, #92]	@ 000d7712 d865
.org 0xd7714
	ldr r0, [r5, #4]	@ 000d7714 6868
.org 0xd7716
	str r0, [r3, #96]	@ 000d7716 1866
.org 0xd7718
	mov r0, r8	@ 000d7718 4046
.org 0xd771a
	str r0, [r3, #104]	@ 000d771a 9866
.org 0xd771c
	strb r7, [r3, #18]	@ 000d771c 9f74
.org 0xd771e
	adds r0, r3, #0	@ 000d771e 181c
.org 0xd7720
	adds r0, #120	@ 000d7720 7830
.org 0xd7722
	strb r1, [r0, #0]	@ 000d7722 0170
.org 0xd7724
	adds r0, #1	@ 000d7724 0130
.org 0xd7726
	strb r1, [r0, #0]	@ 000d7726 0170
.org 0xd7728
	pop {r3}	@ 000d7728 08bc
.org 0xd772a
	mov r8, r3	@ 000d772a 9846
.org 0xd772c
	pop {r4, r5, r6, r7}	@ 000d772c f0bc
.org 0xd772e
	pop {r0}	@ 000d772e 01bc
.org 0xd7730
	bx r0	@ 000d7730 0047
