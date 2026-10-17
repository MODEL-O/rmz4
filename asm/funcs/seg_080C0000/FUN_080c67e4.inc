@ FUN_080c67e4  entry 0x080c67e4  size 96
.thumb
.org 0xc67e4
FUN_080c67e4:
	push {r4, r5, r6, lr}	@ 000c67e4 70b5
.org 0xc67e6
	adds r4, r0, #0	@ 000c67e6 041c
.org 0xc67e8
	bl 0x1cc9c	@ 000c67e8 56f758fa
.org 0xc67ec
	ldrb r1, [r4, #10]	@ 000c67ec a17a
.org 0xc67ee
	movs r0, #1	@ 000c67ee 0120
.org 0xc67f0
	movs r6, #0	@ 000c67f0 0026
.org 0xc67f2
	orrs r0, r1	@ 000c67f2 0843
.org 0xc67f4
	movs r1, #2	@ 000c67f4 0221
.org 0xc67f6
	orrs r0, r1	@ 000c67f6 0843
.org 0xc67f8
	strb r0, [r4, #10]	@ 000c67f8 a072
.org 0xc67fa
	adds r0, r4, #0	@ 000c67fa 201c
.org 0xc67fc
	bl 0x1ceec	@ 000c67fc 56f776fb
.org 0xc6800
	ldr r1, [pc, #64]	@ 000c6800 1049
.org 0xc6802
	adds r0, r4, #0	@ 000c6802 201c
.org 0xc6804
	bl 0x1cf00	@ 000c6804 56f77cfb
.org 0xc6808
	ldrb r1, [r4, #10]	@ 000c6808 a17a
.org 0xc680a
	movs r0, #4	@ 000c680a 0420
.org 0xc680c
	orrs r0, r1	@ 000c680c 0843
.org 0xc680e
	strb r0, [r4, #10]	@ 000c680e a072
.org 0xc6810
	adds r5, r4, #0	@ 000c6810 251c
.org 0xc6812
	adds r5, #116	@ 000c6812 7435
.org 0xc6814
	ldr r1, [pc, #48]	@ 000c6814 0c49
.org 0xc6816
	adds r2, r4, #0	@ 000c6816 221c
.org 0xc6818
	adds r2, #84	@ 000c6818 5432
.org 0xc681a
	adds r0, r5, #0	@ 000c681a 281c
.org 0xc681c
	movs r3, #8	@ 000c681c 0823
.org 0xc681e
	bl 0x5760	@ 000c681e 3ef79fff
.org 0xc6822
	str r4, [r5, #44]	@ 000c6822 ec62
.org 0xc6824
	str r6, [r5, #36]	@ 000c6824 6e62
.org 0xc6826
	ldr r1, [pc, #36]	@ 000c6826 0949
.org 0xc6828
	ldrb r0, [r4, #9]	@ 000c6828 607a
.org 0xc682a
	lsls r0, r0, #2	@ 000c682a 8000
.org 0xc682c
	adds r0, r0, r1	@ 000c682c 4018
.org 0xc682e
	movs r1, #1	@ 000c682e 0121
.org 0xc6830
	str r1, [r4, #12]	@ 000c6830 e160
.org 0xc6832
	ldr r0, [r0, #0]	@ 000c6832 0068
.org 0xc6834
	ldr r0, [r0, #4]	@ 000c6834 4068
.org 0xc6836
	str r0, [r4, #20]	@ 000c6836 6061
.org 0xc6838
	adds r0, r4, #0	@ 000c6838 201c
.org 0xc683a
	bl 0xc6518	@ 000c683a fff76dfe
.org 0xc683e
	pop {r4, r5, r6}	@ 000c683e 70bc
.org 0xc6840
	pop {r0}	@ 000c6840 01bc
.org 0xc6842
	bx r0	@ 000c6842 0047
