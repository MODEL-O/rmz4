@ FUN_0804ac94  entry 0x0804ac94  size 138
.thumb
.org 0x4ac94
FUN_0804ac94:
	push {r4, lr}	@ 0004ac94 10b5
.org 0x4ac96
	adds r4, r0, #0	@ 0004ac96 041c
.org 0x4ac98
	ldrb r1, [r4, #13]	@ 0004ac98 617b
.org 0x4ac9a
	cmp r1, #0	@ 0004ac9a 0029
.org 0x4ac9c
	bne.n 0x4ad06	@ 0004ac9c 33d1
.org 0x4ac9e
	adds r0, #140	@ 0004ac9e 8c30
.org 0x4aca0
	str r1, [r0, #0]	@ 0004aca0 0160
.org 0x4aca2
	adds r0, #4	@ 0004aca2 0430
.org 0x4aca4
	str r1, [r0, #0]	@ 0004aca4 0160
.org 0x4aca6
	adds r0, #4	@ 0004aca6 0430
.org 0x4aca8
	strb r1, [r0, #0]	@ 0004aca8 0170
.org 0x4acaa
	ldrb r1, [r4, #10]	@ 0004acaa a17a
.org 0x4acac
	movs r0, #251	@ 0004acac fb20
.org 0x4acae
	ands r0, r1	@ 0004acae 0840
.org 0x4acb0
	movs r1, #254	@ 0004acb0 fe21
.org 0x4acb2
	ands r0, r1	@ 0004acb2 0840
.org 0x4acb4
	strb r0, [r4, #10]	@ 0004acb4 a072
.org 0x4acb6
	ldr r0, [r4, #84]	@ 0004acb6 606d
.org 0x4acb8
	ldr r1, [r4, #88]	@ 0004acb8 a16d
.org 0x4acba
	bl 0x4ad60	@ 0004acba 00f051f8
.org 0x4acbe
	lsls r0, r0, #16	@ 0004acbe 0004
.org 0x4acc0
	cmp r0, #0	@ 0004acc0 0028
.org 0x4acc2
	beq.n 0x4acee	@ 0004acc2 14d0
.org 0x4acc4
	ldr r0, [r4, #84]	@ 0004acc4 606d
.org 0x4acc6
	ldr r1, [r4, #88]	@ 0004acc6 a16d
.org 0x4acc8
	bl 0x8534	@ 0004acc8 bdf734fc
.org 0x4accc
	adds r2, r0, #0	@ 0004accc 021c
.org 0x4acce
	ldr r1, [r4, #88]	@ 0004acce a16d
.org 0x4acd0
	subs r3, r2, r1	@ 0004acd0 531a
.org 0x4acd2
	cmp r3, #0	@ 0004acd2 002b
.org 0x4acd4
	blt.n 0x4ace4	@ 0004acd4 06db
.org 0x4acd6
	ldr r0, [pc, #8]	@ 0004acd6 0248
.org 0x4acd8
	cmp r3, r0	@ 0004acd8 8342
.org 0x4acda
	ble.n 0x4acec	@ 0004acda 07dd
.org 0x4acdc
	b.n 0x4acee	@ 0004acdc 07e0
.org 0x4acde
	.byte 0x00	@ 0004acde data
.org 0x4acdf
	.byte 0x00	@ 0004acdf data
.org 0x4ace0
	.byte 0xff,0x0e,0x00,0x00	@ 0004ace0 data
.org 0x4ace4
	subs r1, r1, r2	@ 0004ace4 891a
.org 0x4ace6
	ldr r0, [pc, #60]	@ 0004ace6 0f48
.org 0x4ace8
	cmp r1, r0	@ 0004ace8 8142
.org 0x4acea
	bgt.n 0x4acee	@ 0004acea 00dc
.org 0x4acec
	str r2, [r4, #88]	@ 0004acec a265
.org 0x4acee
	ldr r0, [r4, #84]	@ 0004acee 606d
.org 0x4acf0
	ldr r1, [r4, #88]	@ 0004acf0 a16d
.org 0x4acf2
	str r0, [r4, #100]	@ 0004acf2 6066
.org 0x4acf4
	str r1, [r4, #104]	@ 0004acf4 a166
.org 0x4acf6
	ldr r0, [r4, #40]	@ 0004acf6 a06a
.org 0x4acf8
	adds r1, r4, #0	@ 0004acf8 211c
.org 0x4acfa
	movs r2, #0	@ 0004acfa 0022
.org 0x4acfc
	bl 0x4a790	@ 0004acfc fff748fd
.org 0x4ad00
	ldrb r0, [r4, #13]	@ 0004ad00 607b
.org 0x4ad02
	adds r0, #1	@ 0004ad02 0130
.org 0x4ad04
	strb r0, [r4, #13]	@ 0004ad04 6073
.org 0x4ad06
	adds r0, r4, #0	@ 0004ad06 201c
.org 0x4ad08
	bl 0x1cff0	@ 0004ad08 d2f772f9
.org 0x4ad0c
	ldr r1, [pc, #24]	@ 0004ad0c 0649
.org 0x4ad0e
	ldrb r0, [r4, #9]	@ 0004ad0e 607a
.org 0x4ad10
	lsls r0, r0, #2	@ 0004ad10 8000
.org 0x4ad12
	adds r0, r0, r1	@ 0004ad12 4018
.org 0x4ad14
	movs r1, #4	@ 0004ad14 0421
.org 0x4ad16
	str r1, [r4, #12]	@ 0004ad16 e160
.org 0x4ad18
	ldr r0, [r0, #0]	@ 0004ad18 0068
.org 0x4ad1a
	ldr r0, [r0, #16]	@ 0004ad1a 0069
.org 0x4ad1c
	str r0, [r4, #20]	@ 0004ad1c 6061
