@ FUN_08034894  entry 0x08034894  size 94
.thumb
.org 0x34894
FUN_08034894:
	push {r4, r5, lr}	@ 00034894 30b5
.org 0x34896
	adds r4, r0, #0	@ 00034896 041c
.org 0x34898
	movs r0, #129	@ 00034898 8120
.org 0x3489a
	lsls r0, r0, #1	@ 0003489a 4000
.org 0x3489c
	adds r5, r4, r0	@ 0003489c 2518
.org 0x3489e
	ldrb r0, [r5, #0]	@ 0003489e 2878
.org 0x348a0
	cmp r0, #0	@ 000348a0 0028
.org 0x348a2
	bne.n 0x348bc	@ 000348a2 0bd1
.org 0x348a4
	ldr r1, [pc, #76]	@ 000348a4 1349
.org 0x348a6
	adds r0, r4, #0	@ 000348a6 201c
.org 0x348a8
	bl 0x1cf00	@ 000348a8 e8f72afb
.org 0x348ac
	movs r0, #169	@ 000348ac a920
.org 0x348ae
	lsls r0, r0, #1	@ 000348ae 4000
.org 0x348b0
	adds r1, r4, r0	@ 000348b0 2118
.org 0x348b2
	movs r0, #4	@ 000348b2 0420
.org 0x348b4
	strb r0, [r1, #0]	@ 000348b4 0870
.org 0x348b6
	ldrb r0, [r5, #0]	@ 000348b6 2878
.org 0x348b8
	adds r0, #1	@ 000348b8 0130
.org 0x348ba
	strb r0, [r5, #0]	@ 000348ba 2870
.org 0x348bc
	movs r0, #169	@ 000348bc a920
.org 0x348be
	lsls r0, r0, #1	@ 000348be 4000
.org 0x348c0
	adds r1, r4, r0	@ 000348c0 2118
.org 0x348c2
	ldrb r0, [r1, #0]	@ 000348c2 0878
.org 0x348c4
	subs r0, #1	@ 000348c4 0138
.org 0x348c6
	strb r0, [r1, #0]	@ 000348c6 0870
.org 0x348c8
	lsls r0, r0, #24	@ 000348c8 0006
.org 0x348ca
	lsrs r0, r0, #24	@ 000348ca 000e
.org 0x348cc
	cmp r0, #255	@ 000348cc ff28
.org 0x348ce
	bne.n 0x348ec	@ 000348ce 0dd1
.org 0x348d0
	movs r0, #128	@ 000348d0 8020
.org 0x348d2
	lsls r0, r0, #1	@ 000348d2 4000
.org 0x348d4
	adds r1, r4, r0	@ 000348d4 2118
.org 0x348d6
	movs r0, #0	@ 000348d6 0020
.org 0x348d8
	strb r0, [r1, #0]	@ 000348d8 0870
.org 0x348da
	adds r0, r4, #0	@ 000348da 201c
.org 0x348dc
	bl 0x2b7d8	@ 000348dc f6f77cff
.org 0x348e0
	adds r1, r0, #0	@ 000348e0 011c
.org 0x348e2
	lsls r1, r1, #16	@ 000348e2 0904
.org 0x348e4
	lsrs r1, r1, #16	@ 000348e4 090c
.org 0x348e6
	adds r0, r4, #0	@ 000348e6 201c
.org 0x348e8
	bl 0x1cf00	@ 000348e8 e8f70afb
.org 0x348ec
	pop {r4, r5}	@ 000348ec 30bc
.org 0x348ee
	pop {r0}	@ 000348ee 01bc
.org 0x348f0
	bx r0	@ 000348f0 0047
