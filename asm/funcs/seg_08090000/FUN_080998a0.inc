@ FUN_080998a0  entry 0x080998a0  size 96
.thumb
.org 0x998a0
FUN_080998a0:
	push {r4, lr}	@ 000998a0 10b5
.org 0x998a2
	adds r4, r0, #0	@ 000998a2 041c
.org 0x998a4
	ldrb r0, [r4, #14]	@ 000998a4 a07b
.org 0x998a6
	cmp r0, #0	@ 000998a6 0028
.org 0x998a8
	bne.n 0x998c8	@ 000998a8 0ed1
.org 0x998aa
	movs r1, #210	@ 000998aa d221
.org 0x998ac
	lsls r1, r1, #7	@ 000998ac c901
.org 0x998ae
	adds r0, r4, #0	@ 000998ae 201c
.org 0x998b0
	bl 0x1cf00	@ 000998b0 83f726fb
.org 0x998b4
	adds r0, r4, #0	@ 000998b4 201c
.org 0x998b6
	adds r0, #116	@ 000998b6 7430
.org 0x998b8
	ldr r1, [pc, #60]	@ 000998b8 0f49
.org 0x998ba
	bl 0x5784	@ 000998ba 6bf763ff
.org 0x998be
	movs r0, #8	@ 000998be 0820
.org 0x998c0
	strb r0, [r4, #18]	@ 000998c0 a074
.org 0x998c2
	ldrb r0, [r4, #14]	@ 000998c2 a07b
.org 0x998c4
	adds r0, #1	@ 000998c4 0130
.org 0x998c6
	strb r0, [r4, #14]	@ 000998c6 a073
.org 0x998c8
	adds r0, r4, #0	@ 000998c8 201c
.org 0x998ca
	bl 0x1cff0	@ 000998ca 83f791fb
.org 0x998ce
	ldrb r0, [r4, #18]	@ 000998ce a07c
.org 0x998d0
	adds r2, r0, #0	@ 000998d0 021c
.org 0x998d2
	cmp r2, #0	@ 000998d2 002a
.org 0x998d4
	bne.n 0x99900	@ 000998d4 14d1
.org 0x998d6
	ldr r0, [pc, #36]	@ 000998d6 0948
.org 0x998d8
	ldr r0, [r0, #0]	@ 000998d8 0068
.org 0x998da
	ldr r0, [r0, #84]	@ 000998da 406d
.org 0x998dc
	ldr r1, [r4, #84]	@ 000998dc 616d
.org 0x998de
	subs r0, r0, r1	@ 000998de 401a
.org 0x998e0
	movs r1, #192	@ 000998e0 c021
.org 0x998e2
	lsls r1, r1, #7	@ 000998e2 c901
.org 0x998e4
	adds r0, r0, r1	@ 000998e4 4018
.org 0x998e6
	movs r1, #192	@ 000998e6 c021
.org 0x998e8
	lsls r1, r1, #8	@ 000998e8 0902
.org 0x998ea
	cmp r0, r1	@ 000998ea 8842
.org 0x998ec
	bhi.n 0x99904	@ 000998ec 0ad8
.org 0x998ee
	movs r0, #1	@ 000998ee 0120
.org 0x998f0
	strb r0, [r4, #13]	@ 000998f0 6073
.org 0x998f2
	strb r2, [r4, #14]	@ 000998f2 a273
.org 0x998f4
	b.n 0x99904	@ 000998f4 06e0
.org 0x998f6
	.byte 0x00	@ 000998f6 data
.org 0x998f7
	.byte 0x00	@ 000998f7 data
.org 0x998f8
	.byte 0x64,0x0d,0x86,0x08	@ 000998f8 data
.org 0x998fc
	.byte 0xf0,0xdb,0x02,0x02	@ 000998fc data
