@ FUN_080e5598  entry 0x080e5598  size 182
.thumb
.org 0xe5598
FUN_080e5598:
	push {r4, r5, lr}	@ 000e5598 30b5
.org 0xe559a
	sub sp, #8	@ 000e559a 82b0
.org 0xe559c
	adds r5, r0, #0	@ 000e559c 051c
.org 0xe559e
	ldr r0, [r5, #84]	@ 000e559e 686d
.org 0xe55a0
	ldr r1, [r5, #92]	@ 000e55a0 e96d
.org 0xe55a2
	adds r0, r0, r1	@ 000e55a2 4018
.org 0xe55a4
	str r0, [r5, #84]	@ 000e55a4 6865
.org 0xe55a6
	ldr r1, [r5, #88]	@ 000e55a6 a96d
.org 0xe55a8
	ldr r2, [r5, #96]	@ 000e55a8 2a6e
.org 0xe55aa
	adds r1, r1, r2	@ 000e55aa 8918
.org 0xe55ac
	str r1, [r5, #88]	@ 000e55ac a965
.org 0xe55ae
	ldr r3, [r5, #104]	@ 000e55ae ab6e
.org 0xe55b0
	adds r2, r2, r3	@ 000e55b0 d218
.org 0xe55b2
	str r2, [r5, #96]	@ 000e55b2 2a66
.org 0xe55b4
	ldr r2, [pc, #152]	@ 000e55b4 264a
.org 0xe55b6
	adds r1, r1, r2	@ 000e55b6 8918
.org 0xe55b8
	bl 0x7c7c	@ 000e55b8 22f760fb
.org 0xe55bc
	lsls r0, r0, #16	@ 000e55bc 0004
.org 0xe55be
	cmp r0, #0	@ 000e55be 0028
.org 0xe55c0
	bne.n 0xe55c8	@ 000e55c0 02d1
.org 0xe55c2
	ldrb r0, [r5, #18]	@ 000e55c2 a87c
.org 0xe55c4
	cmp r0, #0	@ 000e55c4 0028
.org 0xe55c6
	bne.n 0xe5640	@ 000e55c6 3bd1
.org 0xe55c8
	ldrb r0, [r5, #17]	@ 000e55c8 687c
.org 0xe55ca
	cmp r0, #0	@ 000e55ca 0028
.org 0xe55cc
	bne.n 0xe55fa	@ 000e55cc 15d1
.org 0xe55ce
	ldr r0, [r5, #84]	@ 000e55ce 686d
.org 0xe55d0
	str r0, [sp, #0]	@ 000e55d0 0090
.org 0xe55d2
	ldr r0, [r5, #88]	@ 000e55d2 a86d
.org 0xe55d4
	ldr r1, [pc, #124]	@ 000e55d4 1f49
.org 0xe55d6
	adds r0, r0, r1	@ 000e55d6 4018
.org 0xe55d8
	str r0, [sp, #4]	@ 000e55d8 0190
.org 0xe55da
	movs r0, #1	@ 000e55da 0120
.org 0xe55dc
	mov r1, sp	@ 000e55dc 6946
.org 0xe55de
	bl 0xd0c88	@ 000e55de ebf753fb
.org 0xe55e2
	adds r4, r5, #0	@ 000e55e2 2c1c
.org 0xe55e4
	adds r4, #84	@ 000e55e4 5434
.org 0xe55e6
	adds r0, r4, #0	@ 000e55e6 201c
.org 0xe55e8
	movs r1, #1	@ 000e55e8 0121
.org 0xe55ea
	movs r2, #2	@ 000e55ea 0222
.org 0xe55ec
	bl 0xe52b4	@ 000e55ec fff762fe
.org 0xe55f0
	adds r0, r4, #0	@ 000e55f0 201c
.org 0xe55f2
	movs r1, #1	@ 000e55f2 0121
.org 0xe55f4
	movs r2, #4	@ 000e55f4 0422
.org 0xe55f6
	bl 0xe52b4	@ 000e55f6 fff75dfe
.org 0xe55fa
	ldrb r0, [r5, #17]	@ 000e55fa 687c
.org 0xe55fc
	cmp r0, #1	@ 000e55fc 0128
.org 0xe55fe
	bne.n 0xe5628	@ 000e55fe 13d1
.org 0xe5600
	ldr r0, [r5, #84]	@ 000e5600 686d
.org 0xe5602
	str r0, [sp, #0]	@ 000e5602 0090
.org 0xe5604
	ldr r0, [r5, #88]	@ 000e5604 a86d
.org 0xe5606
	ldr r2, [pc, #80]	@ 000e5606 144a
.org 0xe5608
	adds r0, r0, r2	@ 000e5608 8018
.org 0xe560a
	str r0, [sp, #4]	@ 000e560a 0190
.org 0xe560c
	movs r0, #2	@ 000e560c 0220
.org 0xe560e
	mov r1, sp	@ 000e560e 6946
.org 0xe5610
	bl 0xd0c88	@ 000e5610 ebf73afb
.org 0xe5614
	mov r0, sp	@ 000e5614 6846
.org 0xe5616
	movs r1, #1	@ 000e5616 0121
.org 0xe5618
	movs r2, #1	@ 000e5618 0122
.org 0xe561a
	bl 0xe52b4	@ 000e561a fff74bfe
.org 0xe561e
	mov r0, sp	@ 000e561e 6846
.org 0xe5620
	movs r1, #1	@ 000e5620 0121
.org 0xe5622
	movs r2, #3	@ 000e5622 0322
.org 0xe5624
	bl 0xe52b4	@ 000e5624 fff746fe
.org 0xe5628
	movs r0, #42	@ 000e5628 2a20
.org 0xe562a
	bl 0x2b10	@ 000e562a 1df771fa
.org 0xe562e
	ldr r1, [pc, #44]	@ 000e562e 0b49
.org 0xe5630
	ldrb r0, [r5, #9]	@ 000e5630 687a
.org 0xe5632
	lsls r0, r0, #2	@ 000e5632 8000
.org 0xe5634
	adds r0, r0, r1	@ 000e5634 4018
.org 0xe5636
	movs r1, #2	@ 000e5636 0221
.org 0xe5638
	str r1, [r5, #12]	@ 000e5638 e960
.org 0xe563a
	ldr r0, [r0, #0]	@ 000e563a 0068
.org 0xe563c
	ldr r0, [r0, #8]	@ 000e563c 8068
.org 0xe563e
	str r0, [r5, #20]	@ 000e563e 6861
.org 0xe5640
	ldrb r0, [r5, #18]	@ 000e5640 a87c
.org 0xe5642
	subs r0, #1	@ 000e5642 0138
.org 0xe5644
	strb r0, [r5, #18]	@ 000e5644 a874
.org 0xe5646
	add sp, #8	@ 000e5646 02b0
.org 0xe5648
	pop {r4, r5}	@ 000e5648 30bc
.org 0xe564a
	pop {r0}	@ 000e564a 01bc
.org 0xe564c
	bx r0	@ 000e564c 0047
