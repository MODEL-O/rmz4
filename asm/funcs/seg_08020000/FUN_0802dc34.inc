@ FUN_0802dc34  entry 0x0802dc34  size 270
.thumb
.org 0x2dc34
FUN_0802dc34:
	push {r4, r5, r6, r7, lr}	@ 0002dc34 f0b5
.org 0x2dc36
	mov r7, sl	@ 0002dc36 5746
.org 0x2dc38
	mov r6, r9	@ 0002dc38 4e46
.org 0x2dc3a
	mov r5, r8	@ 0002dc3a 4546
.org 0x2dc3c
	push {r5, r6, r7}	@ 0002dc3c e0b4
.org 0x2dc3e
	sub sp, #12	@ 0002dc3e 83b0
.org 0x2dc40
	adds r6, r0, #0	@ 0002dc40 061c
.org 0x2dc42
	mov r9, r1	@ 0002dc42 8946
.org 0x2dc44
	str r2, [sp, #0]	@ 0002dc44 0092
.org 0x2dc46
	mov sl, r3	@ 0002dc46 9a46
.org 0x2dc48
	movs r0, #0	@ 0002dc48 0020
.org 0x2dc4a
	str r0, [sp, #4]	@ 0002dc4a 0190
.org 0x2dc4c
	str r0, [r3, #4]	@ 0002dc4c 5860
.org 0x2dc4e
	str r0, [r3, #0]	@ 0002dc4e 1860
.org 0x2dc50
	movs r1, #0	@ 0002dc50 0021
.org 0x2dc52
	str r1, [sp, #8]	@ 0002dc52 0291
.org 0x2dc54
	movs r2, #220	@ 0002dc54 dc22
.org 0x2dc56
	lsls r2, r2, #1	@ 0002dc56 5200
.org 0x2dc58
	adds r0, r6, r2	@ 0002dc58 b018
.org 0x2dc5a
	ldr r4, [sp, #4]	@ 0002dc5a 019c
.org 0x2dc5c
	ldrb r0, [r0, #0]	@ 0002dc5c 0078
.org 0x2dc5e
	cmp r4, r0	@ 0002dc5e 8442
.org 0x2dc60
	bcs.n 0x2dd3c	@ 0002dc60 6cd2
.org 0x2dc62
	movs r1, #196	@ 0002dc62 c421
.org 0x2dc64
	lsls r1, r1, #1	@ 0002dc64 4900
.org 0x2dc66
	adds r0, r6, r1	@ 0002dc66 7018
.org 0x2dc68
	ldr r2, [sp, #8]	@ 0002dc68 029a
.org 0x2dc6a
	adds r0, r0, r2	@ 0002dc6a 8018
.org 0x2dc6c
	ldrb r7, [r0, #0]	@ 0002dc6c 0778
.org 0x2dc6e
	lsls r0, r7, #1	@ 0002dc6e 7800
.org 0x2dc70
	adds r0, r0, r7	@ 0002dc70 c019
.org 0x2dc72
	lsls r2, r0, #3	@ 0002dc72 c200
.org 0x2dc74
	ldr r4, [pc, #120]	@ 0002dc74 1e4c
.org 0x2dc76
	adds r3, r2, r4	@ 0002dc76 1319
.org 0x2dc78
	adds r1, #78	@ 0002dc78 4e31
.org 0x2dc7a
	adds r0, r3, r1	@ 0002dc7a 5818
.org 0x2dc7c
	ldrh r5, [r0, #0]	@ 0002dc7c 0588
.org 0x2dc7e
	movs r0, #15	@ 0002dc7e 0f20
.org 0x2dc80
	ands r0, r5	@ 0002dc80 2840
.org 0x2dc82
	cmp r0, #15	@ 0002dc82 0f28
.org 0x2dc84
	bne.n 0x2dc94	@ 0002dc84 06d1
.org 0x2dc86
	movs r4, #128	@ 0002dc86 8024
.org 0x2dc88
	lsls r4, r4, #8	@ 0002dc88 2402
.org 0x2dc8a
	adds r0, r4, #0	@ 0002dc8a 201c
.org 0x2dc8c
	ands r5, r0	@ 0002dc8c 0540
.org 0x2dc8e
	cmp r5, #0	@ 0002dc8e 002d
.org 0x2dc90
	beq.n 0x2dd24	@ 0002dc90 48d0
.org 0x2dc92
	ldr r5, [pc, #96]	@ 0002dc92 184d
.org 0x2dc94
	ldr r1, [pc, #88]	@ 0002dc94 1649
.org 0x2dc96
	movs r4, #238	@ 0002dc96 ee24
.org 0x2dc98
	lsls r4, r4, #1	@ 0002dc98 6400
.org 0x2dc9a
	adds r0, r1, r4	@ 0002dc9a 0819
.org 0x2dc9c
	adds r0, r0, r2	@ 0002dc9c 8018
.org 0x2dc9e
	mov r8, r0	@ 0002dc9e 8046
.org 0x2dca0
	ldr r1, [r0, #0]	@ 0002dca0 0168
.org 0x2dca2
	mov r0, r9	@ 0002dca2 4846
.org 0x2dca4
	subs r1, r0, r1	@ 0002dca4 411a
.org 0x2dca6
	movs r0, #236	@ 0002dca6 ec20
.org 0x2dca8
	lsls r0, r0, #1	@ 0002dca8 4000
.org 0x2dcaa
	adds r4, r3, r0	@ 0002dcaa 1c18
.org 0x2dcac
	ldrh r0, [r4, #0]	@ 0002dcac 2088
.org 0x2dcae
	adds r1, r1, r0	@ 0002dcae 0918
.org 0x2dcb0
	lsls r0, r0, #1	@ 0002dcb0 4000
.org 0x2dcb2
	cmp r1, r0	@ 0002dcb2 8142
.org 0x2dcb4
	bcs.n 0x2dd24	@ 0002dcb4 36d2
.org 0x2dcb6
	ldr r1, [pc, #64]	@ 0002dcb6 1049
.org 0x2dcb8
	adds r0, r2, r1	@ 0002dcb8 5018
.org 0x2dcba
	ldr r1, [r0, #0]	@ 0002dcba 0168
.org 0x2dcbc
	ldr r2, [sp, #0]	@ 0002dcbc 009a
.org 0x2dcbe
	subs r1, r2, r1	@ 0002dcbe 511a
.org 0x2dcc0
	movs r2, #237	@ 0002dcc0 ed22
.org 0x2dcc2
	lsls r2, r2, #1	@ 0002dcc2 5200
.org 0x2dcc4
	adds r0, r3, r2	@ 0002dcc4 9818
.org 0x2dcc6
	ldrh r0, [r0, #0]	@ 0002dcc6 0088
.org 0x2dcc8
	adds r1, r1, r0	@ 0002dcc8 0918
.org 0x2dcca
	lsls r0, r0, #1	@ 0002dcca 4000
.org 0x2dccc
	cmp r1, r0	@ 0002dccc 8142
.org 0x2dcce
	bcs.n 0x2dd24	@ 0002dcce 29d2
.org 0x2dcd0
	adds r0, r6, #0	@ 0002dcd0 301c
.org 0x2dcd2
	adds r1, r7, #0	@ 0002dcd2 391c
.org 0x2dcd4
	bl 0x2e63c	@ 0002dcd4 00f0b2fc
.org 0x2dcd8
	mov r0, r8	@ 0002dcd8 4046
.org 0x2dcda
	ldr r1, [r0, #0]	@ 0002dcda 0168
.org 0x2dcdc
	ldr r0, [r6, #84]	@ 0002dcdc 706d
.org 0x2dcde
	cmp r1, r0	@ 0002dcde 8142
.org 0x2dce0
	bge.n 0x2dcfc	@ 0002dce0 0cda
.org 0x2dce2
	ldrh r0, [r4, #0]	@ 0002dce2 2088
.org 0x2dce4
	adds r0, r1, r0	@ 0002dce4 0818
.org 0x2dce6
	mov r1, r9	@ 0002dce6 4946
.org 0x2dce8
	subs r0, r0, r1	@ 0002dce8 401a
.org 0x2dcea
	mov r2, sl	@ 0002dcea 5246
.org 0x2dcec
	str r0, [r2, #0]	@ 0002dcec 1060
.org 0x2dcee
	b.n 0x2dd0a	@ 0002dcee 0ce0
.org 0x2dcf0
	.byte 0xb0,0x0a,0x00,0x02	@ 0002dcf0 data
.org 0x2dcf4
	.byte 0x01,0x80,0x00,0x00	@ 0002dcf4 data
.org 0x2dcf8
	.byte 0x90,0x0c,0x00,0x02	@ 0002dcf8 data
.org 0x2dcfc
	ldrh r0, [r4, #0]	@ 0002dcfc 2088
.org 0x2dcfe
	subs r0, r1, r0	@ 0002dcfe 081a
.org 0x2dd00
	mov r4, r9	@ 0002dd00 4c46
.org 0x2dd02
	subs r0, r0, r4	@ 0002dd02 001b
.org 0x2dd04
	subs r0, #1	@ 0002dd04 0138
.org 0x2dd06
	mov r1, sl	@ 0002dd06 5146
.org 0x2dd08
	str r0, [r1, #0]	@ 0002dd08 0860
.org 0x2dd0a
	mov r2, sl	@ 0002dd0a 5246
.org 0x2dd0c
	ldr r1, [r2, #0]	@ 0002dd0c 1168
.org 0x2dd0e
	cmp r1, #0	@ 0002dd0e 0029
.org 0x2dd10
	beq.n 0x2dd24	@ 0002dd10 08d0
.org 0x2dd12
	str r5, [sp, #4]	@ 0002dd12 0195
.org 0x2dd14
	ldr r0, [r6, #84]	@ 0002dd14 706d
.org 0x2dd16
	adds r0, r0, r1	@ 0002dd16 4018
.org 0x2dd18
	str r0, [r6, #84]	@ 0002dd18 7065
.org 0x2dd1a
	add r9, r1	@ 0002dd1a 8944
.org 0x2dd1c
	ldr r4, [pc, #48]	@ 0002dd1c 0c4c
.org 0x2dd1e
	adds r1, r6, r4	@ 0002dd1e 3119
.org 0x2dd20
	movs r0, #1	@ 0002dd20 0120
.org 0x2dd22
	strb r0, [r1, #0]	@ 0002dd22 0870
.org 0x2dd24
	ldr r0, [sp, #8]	@ 0002dd24 0298
.org 0x2dd26
	adds r0, #1	@ 0002dd26 0130
.org 0x2dd28
	lsls r0, r0, #24	@ 0002dd28 0006
.org 0x2dd2a
	lsrs r0, r0, #24	@ 0002dd2a 000e
.org 0x2dd2c
	str r0, [sp, #8]	@ 0002dd2c 0290
.org 0x2dd2e
	movs r1, #220	@ 0002dd2e dc21
.org 0x2dd30
	lsls r1, r1, #1	@ 0002dd30 4900
.org 0x2dd32
	adds r0, r6, r1	@ 0002dd32 7018
.org 0x2dd34
	ldr r2, [sp, #8]	@ 0002dd34 029a
.org 0x2dd36
	ldrb r0, [r0, #0]	@ 0002dd36 0078
.org 0x2dd38
	cmp r2, r0	@ 0002dd38 8242
.org 0x2dd3a
	bcc.n 0x2dc62	@ 0002dd3a 92d3
.org 0x2dd3c
	ldr r0, [sp, #4]	@ 0002dd3c 0198
.org 0x2dd3e
	add sp, #12	@ 0002dd3e 03b0
.org 0x2dd40
	pop {r3, r4, r5}	@ 0002dd40 38bc
