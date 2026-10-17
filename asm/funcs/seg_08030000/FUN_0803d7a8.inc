@ FUN_0803d7a8  entry 0x0803d7a8  size 160
.thumb
.org 0x3d7a8
FUN_0803d7a8:
	push {r4, r5, lr}	@ 0003d7a8 30b5
.org 0x3d7aa
	mov ip, r0	@ 0003d7aa 8446
.org 0x3d7ac
	adds r0, #180	@ 0003d7ac b430
.org 0x3d7ae
	ldr r4, [r0, #0]	@ 0003d7ae 0468
.org 0x3d7b0
	ldrb r0, [r4, #10]	@ 0003d7b0 a07a
.org 0x3d7b2
	lsrs r2, r0, #4	@ 0003d7b2 0209
.org 0x3d7b4
	movs r0, #1	@ 0003d7b4 0120
.org 0x3d7b6
	ands r2, r0	@ 0003d7b6 0240
.org 0x3d7b8
	cmp r2, #0	@ 0003d7b8 002a
.org 0x3d7ba
	beq.n 0x3d7ca	@ 0003d7ba 06d0
.org 0x3d7bc
	mov r0, ip	@ 0003d7bc 6046
.org 0x3d7be
	ldrb r1, [r0, #10]	@ 0003d7be 817a
.org 0x3d7c0
	movs r0, #16	@ 0003d7c0 1020
.org 0x3d7c2
	orrs r0, r1	@ 0003d7c2 0843
.org 0x3d7c4
	mov r1, ip	@ 0003d7c4 6146
.org 0x3d7c6
	strb r0, [r1, #10]	@ 0003d7c6 8872
.org 0x3d7c8
	b.n 0x3d7d4	@ 0003d7c8 04e0
.org 0x3d7ca
	mov r5, ip	@ 0003d7ca 6546
.org 0x3d7cc
	ldrb r1, [r5, #10]	@ 0003d7cc a97a
.org 0x3d7ce
	movs r0, #239	@ 0003d7ce ef20
.org 0x3d7d0
	ands r0, r1	@ 0003d7d0 0840
.org 0x3d7d2
	strb r0, [r5, #10]	@ 0003d7d2 a872
.org 0x3d7d4
	adds r1, r2, #0	@ 0003d7d4 111c
.org 0x3d7d6
	mov r0, ip	@ 0003d7d6 6046
.org 0x3d7d8
	adds r0, #76	@ 0003d7d8 4c30
.org 0x3d7da
	strb r1, [r0, #0]	@ 0003d7da 0170
.org 0x3d7dc
	mov r3, ip	@ 0003d7dc 6346
.org 0x3d7de
	adds r3, #74	@ 0003d7de 4a33
.org 0x3d7e0
	lsls r1, r1, #4	@ 0003d7e0 0901
.org 0x3d7e2
	ldrb r2, [r3, #0]	@ 0003d7e2 1a78
.org 0x3d7e4
	movs r0, #17	@ 0003d7e4 1120
.org 0x3d7e6
	negs r0, r0	@ 0003d7e6 4042
.org 0x3d7e8
	ands r0, r2	@ 0003d7e8 1040
.org 0x3d7ea
	orrs r0, r1	@ 0003d7ea 0843
.org 0x3d7ec
	strb r0, [r3, #0]	@ 0003d7ec 1870
.org 0x3d7ee
	mov r0, ip	@ 0003d7ee 6046
.org 0x3d7f0
	ldrb r1, [r0, #10]	@ 0003d7f0 817a
.org 0x3d7f2
	movs r0, #16	@ 0003d7f2 1020
.org 0x3d7f4
	ands r0, r1	@ 0003d7f4 0840
.org 0x3d7f6
	cmp r0, #0	@ 0003d7f6 0028
.org 0x3d7f8
	beq.n 0x3d818	@ 0003d7f8 0ed0
.org 0x3d7fa
	ldr r2, [pc, #24]	@ 0003d7fa 064a
.org 0x3d7fc
	adds r3, r4, #0	@ 0003d7fc 231c
.org 0x3d7fe
	adds r3, #113	@ 0003d7fe 7133
.org 0x3d800
	movs r0, #0	@ 0003d800 0020
.org 0x3d802
	ldrsb r0, [r3, r0]	@ 0003d802 1856
.org 0x3d804
	lsls r0, r0, #2	@ 0003d804 8000
.org 0x3d806
	adds r0, r0, r2	@ 0003d806 8018
.org 0x3d808
	movs r5, #0	@ 0003d808 0025
.org 0x3d80a
	ldrsh r1, [r0, r5]	@ 0003d80a 415f
.org 0x3d80c
	ldr r0, [r4, #84]	@ 0003d80c 606d
.org 0x3d80e
	adds r0, r0, r1	@ 0003d80e 4018
.org 0x3d810
	b.n 0x3d82e	@ 0003d810 0de0
.org 0x3d812
	.byte 0x00	@ 0003d812 data
.org 0x3d813
	.byte 0x00	@ 0003d813 data
.org 0x3d814
	.byte 0x10,0x52,0x85,0x08	@ 0003d814 data
.org 0x3d818
	ldr r2, [pc, #52]	@ 0003d818 0d4a
.org 0x3d81a
	adds r3, r4, #0	@ 0003d81a 231c
.org 0x3d81c
	adds r3, #113	@ 0003d81c 7133
.org 0x3d81e
	movs r0, #0	@ 0003d81e 0020
.org 0x3d820
	ldrsb r0, [r3, r0]	@ 0003d820 1856
.org 0x3d822
	lsls r0, r0, #2	@ 0003d822 8000
.org 0x3d824
	adds r0, r0, r2	@ 0003d824 8018
.org 0x3d826
	movs r5, #0	@ 0003d826 0025
.org 0x3d828
	ldrsh r1, [r0, r5]	@ 0003d828 415f
.org 0x3d82a
	ldr r0, [r4, #84]	@ 0003d82a 606d
.org 0x3d82c
	subs r0, r0, r1	@ 0003d82c 401a
.org 0x3d82e
	mov r1, ip	@ 0003d82e 6146
.org 0x3d830
	str r0, [r1, #84]	@ 0003d830 4865
.org 0x3d832
	movs r0, #0	@ 0003d832 0020
.org 0x3d834
	ldrsb r0, [r3, r0]	@ 0003d834 1856
.org 0x3d836
	lsls r0, r0, #2	@ 0003d836 8000
.org 0x3d838
	adds r1, r2, #2	@ 0003d838 911c
.org 0x3d83a
	adds r0, r0, r1	@ 0003d83a 4018
.org 0x3d83c
	movs r2, #0	@ 0003d83c 0022
.org 0x3d83e
	ldrsh r1, [r0, r2]	@ 0003d83e 815e
.org 0x3d840
	ldr r0, [r4, #88]	@ 0003d840 a06d
.org 0x3d842
	adds r0, r0, r1	@ 0003d842 4018
.org 0x3d844
	mov r5, ip	@ 0003d844 6546
.org 0x3d846
	str r0, [r5, #88]	@ 0003d846 a865
