@ FUN_080af7c0  entry 0x080af7c0  size 74
.thumb
.org 0xaf7c0
FUN_080af7c0:
	push {r4, r5, lr}	@ 000af7c0 30b5
.org 0xaf7c2
	adds r4, r0, #0	@ 000af7c2 041c
.org 0xaf7c4
	ldrb r0, [r4, #17]	@ 000af7c4 607c
.org 0xaf7c6
	cmp r0, #0	@ 000af7c6 0028
.org 0xaf7c8
	bne.n 0xaf804	@ 000af7c8 1cd1
.org 0xaf7ca
	adds r5, r4, #0	@ 000af7ca 251c
.org 0xaf7cc
	adds r5, #192	@ 000af7cc c035
.org 0xaf7ce
	ldr r0, [r5, #0]	@ 000af7ce 2868
.org 0xaf7d0
	cmp r0, #0	@ 000af7d0 0028
.org 0xaf7d2
	bne.n 0xaf804	@ 000af7d2 17d1
.org 0xaf7d4
	adds r0, r4, #0	@ 000af7d4 201c
.org 0xaf7d6
	adds r0, #140	@ 000af7d6 8c30
.org 0xaf7d8
	ldr r0, [r0, #0]	@ 000af7d8 0068
.org 0xaf7da
	movs r1, #1	@ 000af7da 0121
.org 0xaf7dc
	ands r0, r1	@ 000af7dc 0840
.org 0xaf7de
	cmp r0, #0	@ 000af7de 0028
.org 0xaf7e0
	beq.n 0xaf804	@ 000af7e0 10d0
.org 0xaf7e2
	ldr r2, [pc, #40]	@ 000af7e2 0a4a
.org 0xaf7e4
	movs r0, #0	@ 000af7e4 0020
.org 0xaf7e6
	adds r1, r4, #0	@ 000af7e6 211c
.org 0xaf7e8
	bl 0x2adac	@ 000af7e8 7bf7e0fa
.org 0xaf7ec
	str r0, [r5, #0]	@ 000af7ec 2860
.org 0xaf7ee
	cmp r0, #0	@ 000af7ee 0028
.org 0xaf7f0
	beq.n 0xaf804	@ 000af7f0 08d0
.org 0xaf7f2
	adds r0, r4, #0	@ 000af7f2 201c
.org 0xaf7f4
	adds r0, #116	@ 000af7f4 7430
.org 0xaf7f6
	ldr r1, [pc, #24]	@ 000af7f6 0649
.org 0xaf7f8
	bl 0x5784	@ 000af7f8 55f7c4ff
.org 0xaf7fc
	ldr r0, [r4, #44]	@ 000af7fc e06a
.org 0xaf7fe
	adds r0, #192	@ 000af7fe c030
.org 0xaf800
	ldr r1, [r5, #0]	@ 000af800 2968
.org 0xaf802
	str r1, [r0, #0]	@ 000af802 0160
.org 0xaf804
	pop {r4, r5}	@ 000af804 30bc
.org 0xaf806
	pop {r0}	@ 000af806 01bc
.org 0xaf808
	bx r0	@ 000af808 0047
