@ FUN_0802df78  entry 0x0802df78  size 210
.thumb
.org 0x2df78
FUN_0802df78:
	push {r4, r5, r6, r7, lr}	@ 0002df78 f0b5
.org 0x2df7a
	mov r7, sl	@ 0002df7a 5746
.org 0x2df7c
	mov r6, r9	@ 0002df7c 4e46
.org 0x2df7e
	mov r5, r8	@ 0002df7e 4546
.org 0x2df80
	push {r5, r6, r7}	@ 0002df80 e0b4
.org 0x2df82
	sub sp, #4	@ 0002df82 81b0
.org 0x2df84
	mov r8, r0	@ 0002df84 8046
.org 0x2df86
	str r1, [sp, #0]	@ 0002df86 0091
.org 0x2df88
	adds r7, r2, #0	@ 0002df88 171c
.org 0x2df8a
	movs r0, #0	@ 0002df8a 0020
.org 0x2df8c
	mov r9, r0	@ 0002df8c 8146
.org 0x2df8e
	mov sl, r0	@ 0002df8e 8246
.org 0x2df90
	movs r0, #220	@ 0002df90 dc20
.org 0x2df92
	lsls r0, r0, #1	@ 0002df92 4000
.org 0x2df94
	add r0, r8	@ 0002df94 4044
.org 0x2df96
	ldrb r0, [r0, #0]	@ 0002df96 0078
.org 0x2df98
	cmp r9, r0	@ 0002df98 8145
.org 0x2df9a
	bcs.n 0x2e046	@ 0002df9a 54d2
.org 0x2df9c
	movs r0, #196	@ 0002df9c c420
.org 0x2df9e
	lsls r0, r0, #1	@ 0002df9e 4000
.org 0x2dfa0
	add r0, r8	@ 0002dfa0 4044
.org 0x2dfa2
	add r0, sl	@ 0002dfa2 5044
.org 0x2dfa4
	ldrb r6, [r0, #0]	@ 0002dfa4 0678
.org 0x2dfa6
	lsls r0, r6, #1	@ 0002dfa6 7000
.org 0x2dfa8
	adds r0, r0, r6	@ 0002dfa8 8019
.org 0x2dfaa
	lsls r2, r0, #3	@ 0002dfaa c200
.org 0x2dfac
	ldr r1, [pc, #96]	@ 0002dfac 1849
.org 0x2dfae
	adds r3, r2, r1	@ 0002dfae 5318
.org 0x2dfb0
	movs r4, #235	@ 0002dfb0 eb24
.org 0x2dfb2
	lsls r4, r4, #1	@ 0002dfb2 6400
.org 0x2dfb4
	adds r0, r3, r4	@ 0002dfb4 1819
.org 0x2dfb6
	ldrh r1, [r0, #0]	@ 0002dfb6 0188
.org 0x2dfb8
	ldr r4, [pc, #88]	@ 0002dfb8 164c
.org 0x2dfba
	adds r0, r4, #0	@ 0002dfba 201c
.org 0x2dfbc
	ands r0, r1	@ 0002dfbc 0840
.org 0x2dfbe
	cmp r0, #15	@ 0002dfbe 0f28
.org 0x2dfc0
	beq.n 0x2e030	@ 0002dfc0 36d0
.org 0x2dfc2
	ldr r1, [pc, #76]	@ 0002dfc2 1349
.org 0x2dfc4
	movs r4, #238	@ 0002dfc4 ee24
.org 0x2dfc6
	lsls r4, r4, #1	@ 0002dfc6 6400
.org 0x2dfc8
	adds r0, r1, r4	@ 0002dfc8 0819
.org 0x2dfca
	adds r0, r2, r0	@ 0002dfca 1018
.org 0x2dfcc
	ldr r1, [r0, #0]	@ 0002dfcc 0168
.org 0x2dfce
	ldr r0, [sp, #0]	@ 0002dfce 0098
.org 0x2dfd0
	subs r1, r0, r1	@ 0002dfd0 411a
.org 0x2dfd2
	subs r4, #4	@ 0002dfd2 043c
.org 0x2dfd4
	adds r0, r3, r4	@ 0002dfd4 1819
.org 0x2dfd6
	ldrh r0, [r0, #0]	@ 0002dfd6 0088
.org 0x2dfd8
	adds r1, r1, r0	@ 0002dfd8 0918
.org 0x2dfda
	lsls r0, r0, #1	@ 0002dfda 4000
.org 0x2dfdc
	cmp r1, r0	@ 0002dfdc 8142
.org 0x2dfde
	bcs.n 0x2e030	@ 0002dfde 27d2
.org 0x2dfe0
	ldr r0, [pc, #52]	@ 0002dfe0 0d48
.org 0x2dfe2
	adds r5, r2, r0	@ 0002dfe2 1518
.org 0x2dfe4
	ldr r1, [r5, #0]	@ 0002dfe4 2968
.org 0x2dfe6
	subs r1, r7, r1	@ 0002dfe6 791a
.org 0x2dfe8
	movs r0, #237	@ 0002dfe8 ed20
.org 0x2dfea
	lsls r0, r0, #1	@ 0002dfea 4000
.org 0x2dfec
	adds r4, r3, r0	@ 0002dfec 1c18
.org 0x2dfee
	ldrh r0, [r4, #0]	@ 0002dfee 2088
.org 0x2dff0
	adds r1, r1, r0	@ 0002dff0 0918
.org 0x2dff2
	lsls r0, r0, #1	@ 0002dff2 4000
.org 0x2dff4
	cmp r1, r0	@ 0002dff4 8142
.org 0x2dff6
	bcs.n 0x2e030	@ 0002dff6 1bd2
.org 0x2dff8
	mov r0, r8	@ 0002dff8 4046
.org 0x2dffa
	adds r1, r6, #0	@ 0002dffa 311c
.org 0x2dffc
	bl 0x2e63c	@ 0002dffc 00f01efb
.org 0x2e000
	ldr r1, [r5, #0]	@ 0002e000 2968
.org 0x2e002
	cmp r1, r7	@ 0002e002 b942
.org 0x2e004
	bge.n 0x2e01c	@ 0002e004 0ada
.org 0x2e006
	ldrh r0, [r4, #0]	@ 0002e006 2088
.org 0x2e008
	adds r0, r1, r0	@ 0002e008 0818
.org 0x2e00a
	subs r0, r0, r7	@ 0002e00a c01b
.org 0x2e00c
	b.n 0x2e024	@ 0002e00c 0ae0
.org 0x2e00e
	.byte 0x00	@ 0002e00e data
.org 0x2e00f
	.byte 0x00	@ 0002e00f data
.org 0x2e010
	.byte 0xb0,0x0a,0x00,0x02	@ 0002e010 data
.org 0x2e014
	.byte 0x0f,0x80,0x00,0x00	@ 0002e014 data
.org 0x2e018
	.byte 0x90,0x0c,0x00,0x02	@ 0002e018 data
.org 0x2e01c
	ldrh r0, [r4, #0]	@ 0002e01c 2088
.org 0x2e01e
	subs r0, r1, r0	@ 0002e01e 081a
.org 0x2e020
	subs r0, r0, r7	@ 0002e020 c01b
.org 0x2e022
	subs r0, #1	@ 0002e022 0138
.org 0x2e024
	mov r1, r9	@ 0002e024 4946
.org 0x2e026
	cmp r1, #0	@ 0002e026 0029
.org 0x2e028
	beq.n 0x2e02e	@ 0002e028 01d0
.org 0x2e02a
	cmp r0, r9	@ 0002e02a 4845
.org 0x2e02c
	ble.n 0x2e030	@ 0002e02c 00dd
.org 0x2e02e
	mov r9, r0	@ 0002e02e 8146
.org 0x2e030
	mov r0, sl	@ 0002e030 5046
.org 0x2e032
	adds r0, #1	@ 0002e032 0130
.org 0x2e034
	lsls r0, r0, #24	@ 0002e034 0006
.org 0x2e036
	lsrs r0, r0, #24	@ 0002e036 000e
.org 0x2e038
	mov sl, r0	@ 0002e038 8246
.org 0x2e03a
	movs r0, #220	@ 0002e03a dc20
.org 0x2e03c
	lsls r0, r0, #1	@ 0002e03c 4000
.org 0x2e03e
	add r0, r8	@ 0002e03e 4044
.org 0x2e040
	ldrb r0, [r0, #0]	@ 0002e040 0078
.org 0x2e042
	cmp sl, r0	@ 0002e042 8245
.org 0x2e044
	bcc.n 0x2df9c	@ 0002e044 aad3
.org 0x2e046
	mov r0, r9	@ 0002e046 4846
.org 0x2e048
	add sp, #4	@ 0002e048 01b0
