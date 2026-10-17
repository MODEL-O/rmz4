@ FUN_0802dd54  entry 0x0802dd54  size 278
.thumb
.org 0x2dd54
FUN_0802dd54:
	push {r4, r5, r6, r7, lr}	@ 0002dd54 f0b5
.org 0x2dd56
	mov r7, sl	@ 0002dd56 5746
.org 0x2dd58
	mov r6, r9	@ 0002dd58 4e46
.org 0x2dd5a
	mov r5, r8	@ 0002dd5a 4546
.org 0x2dd5c
	push {r5, r6, r7}	@ 0002dd5c e0b4
.org 0x2dd5e
	sub sp, #8	@ 0002dd5e 82b0
.org 0x2dd60
	mov r8, r0	@ 0002dd60 8046
.org 0x2dd62
	str r1, [sp, #0]	@ 0002dd62 0091
.org 0x2dd64
	adds r7, r2, #0	@ 0002dd64 171c
.org 0x2dd66
	mov r9, r3	@ 0002dd66 9946
.org 0x2dd68
	movs r0, #0	@ 0002dd68 0020
.org 0x2dd6a
	str r0, [sp, #4]	@ 0002dd6a 0190
.org 0x2dd6c
	str r0, [r3, #4]	@ 0002dd6c 5860
.org 0x2dd6e
	str r0, [r3, #0]	@ 0002dd6e 1860
.org 0x2dd70
	mov sl, r0	@ 0002dd70 8246
.org 0x2dd72
	movs r0, #220	@ 0002dd72 dc20
.org 0x2dd74
	lsls r0, r0, #1	@ 0002dd74 4000
.org 0x2dd76
	add r0, r8	@ 0002dd76 4044
.org 0x2dd78
	ldr r1, [sp, #4]	@ 0002dd78 0199
.org 0x2dd7a
	ldrb r0, [r0, #0]	@ 0002dd7a 0078
.org 0x2dd7c
	cmp r1, r0	@ 0002dd7c 8142
.org 0x2dd7e
	bcs.n 0x2de66	@ 0002dd7e 72d2
.org 0x2dd80
	movs r0, #196	@ 0002dd80 c420
.org 0x2dd82
	lsls r0, r0, #1	@ 0002dd82 4000
.org 0x2dd84
	add r0, r8	@ 0002dd84 4044
.org 0x2dd86
	add r0, sl	@ 0002dd86 5044
.org 0x2dd88
	ldrb r0, [r0, #0]	@ 0002dd88 0078
.org 0x2dd8a
	mov ip, r0	@ 0002dd8a 8446
.org 0x2dd8c
	lsls r0, r0, #1	@ 0002dd8c 4000
.org 0x2dd8e
	add r0, ip	@ 0002dd8e 6044
.org 0x2dd90
	lsls r2, r0, #3	@ 0002dd90 c200
.org 0x2dd92
	ldr r4, [pc, #124]	@ 0002dd92 1f4c
.org 0x2dd94
	adds r3, r2, r4	@ 0002dd94 1319
.org 0x2dd96
	movs r1, #235	@ 0002dd96 eb21
.org 0x2dd98
	lsls r1, r1, #1	@ 0002dd98 4900
.org 0x2dd9a
	adds r0, r3, r1	@ 0002dd9a 5818
.org 0x2dd9c
	ldrh r6, [r0, #0]	@ 0002dd9c 0688
.org 0x2dd9e
	movs r0, #15	@ 0002dd9e 0f20
.org 0x2dda0
	ands r0, r6	@ 0002dda0 3040
.org 0x2dda2
	cmp r0, #15	@ 0002dda2 0f28
.org 0x2dda4
	bne.n 0x2ddb4	@ 0002dda4 06d1
.org 0x2dda6
	movs r4, #128	@ 0002dda6 8024
.org 0x2dda8
	lsls r4, r4, #8	@ 0002dda8 2402
.org 0x2ddaa
	adds r0, r4, #0	@ 0002ddaa 201c
.org 0x2ddac
	ands r6, r0	@ 0002ddac 0640
.org 0x2ddae
	cmp r6, #0	@ 0002ddae 002e
.org 0x2ddb0
	beq.n 0x2de50	@ 0002ddb0 4ed0
.org 0x2ddb2
	ldr r6, [pc, #96]	@ 0002ddb2 184e
.org 0x2ddb4
	ldr r1, [pc, #88]	@ 0002ddb4 1649
.org 0x2ddb6
	movs r4, #238	@ 0002ddb6 ee24
.org 0x2ddb8
	lsls r4, r4, #1	@ 0002ddb8 6400
.org 0x2ddba
	adds r0, r1, r4	@ 0002ddba 0819
.org 0x2ddbc
	adds r0, r2, r0	@ 0002ddbc 1018
.org 0x2ddbe
	ldr r1, [r0, #0]	@ 0002ddbe 0168
.org 0x2ddc0
	ldr r0, [sp, #0]	@ 0002ddc0 0098
.org 0x2ddc2
	subs r1, r0, r1	@ 0002ddc2 411a
.org 0x2ddc4
	subs r4, #4	@ 0002ddc4 043c
.org 0x2ddc6
	adds r0, r3, r4	@ 0002ddc6 1819
.org 0x2ddc8
	ldrh r0, [r0, #0]	@ 0002ddc8 0088
.org 0x2ddca
	adds r1, r1, r0	@ 0002ddca 0918
.org 0x2ddcc
	lsls r0, r0, #1	@ 0002ddcc 4000
.org 0x2ddce
	cmp r1, r0	@ 0002ddce 8142
.org 0x2ddd0
	bcs.n 0x2de50	@ 0002ddd0 3ed2
.org 0x2ddd2
	ldr r0, [pc, #68]	@ 0002ddd2 1148
.org 0x2ddd4
	adds r5, r2, r0	@ 0002ddd4 1518
.org 0x2ddd6
	ldr r1, [r5, #0]	@ 0002ddd6 2968
.org 0x2ddd8
	subs r1, r7, r1	@ 0002ddd8 791a
.org 0x2ddda
	movs r2, #237	@ 0002ddda ed22
.org 0x2dddc
	lsls r2, r2, #1	@ 0002dddc 5200
.org 0x2ddde
	adds r4, r3, r2	@ 0002ddde 9c18
.org 0x2dde0
	ldrh r0, [r4, #0]	@ 0002dde0 2088
.org 0x2dde2
	adds r1, r1, r0	@ 0002dde2 0918
.org 0x2dde4
	lsls r0, r0, #1	@ 0002dde4 4000
.org 0x2dde6
	cmp r1, r0	@ 0002dde6 8142
.org 0x2dde8
	bcs.n 0x2de50	@ 0002dde8 32d2
.org 0x2ddea
	mov r0, r8	@ 0002ddea 4046
.org 0x2ddec
	mov r1, ip	@ 0002ddec 6146
.org 0x2ddee
	bl 0x2e63c	@ 0002ddee 00f025fc
.org 0x2ddf2
	ldr r1, [r5, #0]	@ 0002ddf2 2968
.org 0x2ddf4
	cmp r1, r7	@ 0002ddf4 b942
.org 0x2ddf6
	bge.n 0x2de28	@ 0002ddf6 17da
.org 0x2ddf8
	mov r2, r8	@ 0002ddf8 4246
.org 0x2ddfa
	ldr r0, [r2, #88]	@ 0002ddfa 906d
.org 0x2ddfc
	cmp r7, r0	@ 0002ddfc 8742
.org 0x2ddfe
	blt.n 0x2de1c	@ 0002ddfe 0ddb
.org 0x2de00
	ldrh r0, [r4, #0]	@ 0002de00 2088
.org 0x2de02
	subs r0, r1, r0	@ 0002de02 081a
.org 0x2de04
	subs r0, r0, r7	@ 0002de04 c01b
.org 0x2de06
	subs r0, #1	@ 0002de06 0138
.org 0x2de08
	mov r4, r9	@ 0002de08 4c46
.org 0x2de0a
	str r0, [r4, #4]	@ 0002de0a 6060
.org 0x2de0c
	b.n 0x2de34	@ 0002de0c 12e0
.org 0x2de0e
	.byte 0x00	@ 0002de0e data
.org 0x2de0f
	.byte 0x00	@ 0002de0f data
.org 0x2de10
	.byte 0xb0,0x0a,0x00,0x02	@ 0002de10 data
.org 0x2de14
	.byte 0x01,0x80,0x00,0x00	@ 0002de14 data
.org 0x2de18
	.byte 0x90,0x0c,0x00,0x02	@ 0002de18 data
.org 0x2de1c
	ldrh r0, [r4, #0]	@ 0002de1c 2088
.org 0x2de1e
	adds r0, r1, r0	@ 0002de1e 0818
.org 0x2de20
	subs r0, r0, r7	@ 0002de20 c01b
.org 0x2de22
	mov r1, r9	@ 0002de22 4946
.org 0x2de24
	str r0, [r1, #4]	@ 0002de24 4860
.org 0x2de26
	b.n 0x2de34	@ 0002de26 05e0
.org 0x2de28
	ldrh r0, [r4, #0]	@ 0002de28 2088
.org 0x2de2a
	subs r0, r1, r0	@ 0002de2a 081a
.org 0x2de2c
	subs r0, r0, r7	@ 0002de2c c01b
.org 0x2de2e
	subs r0, #1	@ 0002de2e 0138
.org 0x2de30
	mov r2, r9	@ 0002de30 4a46
.org 0x2de32
	str r0, [r2, #4]	@ 0002de32 5060
.org 0x2de34
	mov r4, r9	@ 0002de34 4c46
.org 0x2de36
	ldr r1, [r4, #4]	@ 0002de36 6168
.org 0x2de38
	cmp r1, #0	@ 0002de38 0029
.org 0x2de3a
	beq.n 0x2de50	@ 0002de3a 09d0
.org 0x2de3c
	str r6, [sp, #4]	@ 0002de3c 0196
.org 0x2de3e
	mov r2, r8	@ 0002de3e 4246
.org 0x2de40
	ldr r0, [r2, #88]	@ 0002de40 906d
.org 0x2de42
	adds r0, r0, r1	@ 0002de42 4018
.org 0x2de44
	str r0, [r2, #88]	@ 0002de44 9065
.org 0x2de46
	adds r7, r7, r1	@ 0002de46 7f18
.org 0x2de48
	ldr r1, [pc, #44]	@ 0002de48 0b49
.org 0x2de4a
	add r1, r8	@ 0002de4a 4144
.org 0x2de4c
	movs r0, #1	@ 0002de4c 0120
.org 0x2de4e
	strb r0, [r1, #0]	@ 0002de4e 0870
.org 0x2de50
	mov r0, sl	@ 0002de50 5046
.org 0x2de52
	adds r0, #1	@ 0002de52 0130
.org 0x2de54
	lsls r0, r0, #24	@ 0002de54 0006
.org 0x2de56
	lsrs r0, r0, #24	@ 0002de56 000e
.org 0x2de58
	mov sl, r0	@ 0002de58 8246
.org 0x2de5a
	movs r0, #220	@ 0002de5a dc20
.org 0x2de5c
	lsls r0, r0, #1	@ 0002de5c 4000
.org 0x2de5e
	add r0, r8	@ 0002de5e 4044
.org 0x2de60
	ldrb r0, [r0, #0]	@ 0002de60 0078
.org 0x2de62
	cmp sl, r0	@ 0002de62 8245
.org 0x2de64
	bcc.n 0x2dd80	@ 0002de64 8cd3
.org 0x2de66
	ldr r0, [sp, #4]	@ 0002de66 0198
.org 0x2de68
	add sp, #8	@ 0002de68 02b0
