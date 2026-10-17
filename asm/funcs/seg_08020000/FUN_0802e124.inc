@ FUN_0802e124  entry 0x0802e124  size 194
.thumb
.org 0x2e124
FUN_0802e124:
	push {r4, r5, r6, r7, lr}	@ 0002e124 f0b5
.org 0x2e126
	mov r7, sl	@ 0002e126 5746
.org 0x2e128
	mov r6, r9	@ 0002e128 4e46
.org 0x2e12a
	mov r5, r8	@ 0002e12a 4546
.org 0x2e12c
	push {r5, r6, r7}	@ 0002e12c e0b4
.org 0x2e12e
	adds r5, r0, #0	@ 0002e12e 051c
.org 0x2e130
	mov r9, r1	@ 0002e130 8946
.org 0x2e132
	mov r8, r2	@ 0002e132 9046
.org 0x2e134
	movs r6, #0	@ 0002e134 0026
.org 0x2e136
	movs r1, #220	@ 0002e136 dc21
.org 0x2e138
	lsls r1, r1, #1	@ 0002e138 4900
.org 0x2e13a
	adds r0, r5, r1	@ 0002e13a 6818
.org 0x2e13c
	ldrb r0, [r0, #0]	@ 0002e13c 0078
.org 0x2e13e
	cmp r6, r0	@ 0002e13e 8642
.org 0x2e140
	bcs.n 0x2e1de	@ 0002e140 4dd2
.org 0x2e142
	movs r2, #244	@ 0002e142 f422
.org 0x2e144
	lsls r2, r2, #1	@ 0002e144 5200
.org 0x2e146
	ldr r4, [pc, #120]	@ 0002e146 1e4c
.org 0x2e148
	adds r2, r2, r4	@ 0002e148 1219
.org 0x2e14a
	mov sl, r2	@ 0002e14a 9246
.org 0x2e14c
	movs r7, #196	@ 0002e14c c427
.org 0x2e14e
	lsls r7, r7, #1	@ 0002e14e 7f00
.org 0x2e150
	adds r0, r5, r7	@ 0002e150 e819
.org 0x2e152
	adds r0, r0, r6	@ 0002e152 8019
.org 0x2e154
	ldrb r3, [r0, #0]	@ 0002e154 0378
.org 0x2e156
	lsls r0, r3, #1	@ 0002e156 5800
.org 0x2e158
	adds r0, r0, r3	@ 0002e158 c018
.org 0x2e15a
	lsls r2, r0, #3	@ 0002e15a c200
.org 0x2e15c
	ldr r1, [pc, #96]	@ 0002e15c 1849
.org 0x2e15e
	movs r4, #242	@ 0002e15e f224
.org 0x2e160
	lsls r4, r4, #1	@ 0002e160 6400
.org 0x2e162
	adds r0, r1, r4	@ 0002e162 0819
.org 0x2e164
	adds r0, r2, r0	@ 0002e164 1018
.org 0x2e166
	ldr r1, [r0, #0]	@ 0002e166 0168
.org 0x2e168
	mov r7, r9	@ 0002e168 4f46
.org 0x2e16a
	subs r1, r7, r1	@ 0002e16a 791a
.org 0x2e16c
	ldr r0, [pc, #80]	@ 0002e16c 1448
.org 0x2e16e
	adds r4, r2, r0	@ 0002e16e 1418
.org 0x2e170
	movs r7, #236	@ 0002e170 ec27
.org 0x2e172
	lsls r7, r7, #1	@ 0002e172 7f00
.org 0x2e174
	adds r0, r4, r7	@ 0002e174 e019
.org 0x2e176
	ldrh r0, [r0, #0]	@ 0002e176 0088
.org 0x2e178
	adds r1, r1, r0	@ 0002e178 0918
.org 0x2e17a
	lsls r0, r0, #1	@ 0002e17a 4000
.org 0x2e17c
	cmp r1, r0	@ 0002e17c 8142
.org 0x2e17e
	bcs.n 0x2e1cc	@ 0002e17e 25d2
.org 0x2e180
	mov r1, sl	@ 0002e180 5146
.org 0x2e182
	adds r0, r2, r1	@ 0002e182 5018
.org 0x2e184
	ldr r1, [r0, #0]	@ 0002e184 0168
.org 0x2e186
	mov r2, r8	@ 0002e186 4246
.org 0x2e188
	subs r1, r2, r1	@ 0002e188 511a
.org 0x2e18a
	adds r7, #2	@ 0002e18a 0237
.org 0x2e18c
	adds r0, r4, r7	@ 0002e18c e019
.org 0x2e18e
	ldrh r0, [r0, #0]	@ 0002e18e 0088
.org 0x2e190
	adds r1, r1, r0	@ 0002e190 0918
.org 0x2e192
	lsls r0, r0, #1	@ 0002e192 4000
.org 0x2e194
	cmp r1, r0	@ 0002e194 8142
.org 0x2e196
	bcs.n 0x2e1cc	@ 0002e196 19d2
.org 0x2e198
	adds r0, r5, #0	@ 0002e198 281c
.org 0x2e19a
	adds r1, r3, #0	@ 0002e19a 191c
.org 0x2e19c
	bl 0x2e63c	@ 0002e19c 00f04efa
.org 0x2e1a0
	movs r0, #235	@ 0002e1a0 eb20
.org 0x2e1a2
	lsls r0, r0, #1	@ 0002e1a2 4000
.org 0x2e1a4
	adds r1, r4, r0	@ 0002e1a4 2118
.org 0x2e1a6
	ldrh r2, [r1, #0]	@ 0002e1a6 0a88
.org 0x2e1a8
	movs r0, #15	@ 0002e1a8 0f20
.org 0x2e1aa
	ands r0, r2	@ 0002e1aa 1040
.org 0x2e1ac
	cmp r0, #15	@ 0002e1ac 0f28
.org 0x2e1ae
	bne.n 0x2e1c8	@ 0002e1ae 0bd1
.org 0x2e1b0
	movs r1, #128	@ 0002e1b0 8021
.org 0x2e1b2
	lsls r1, r1, #8	@ 0002e1b2 0902
.org 0x2e1b4
	adds r0, r1, #0	@ 0002e1b4 081c
.org 0x2e1b6
	ands r0, r2	@ 0002e1b6 1040
.org 0x2e1b8
	cmp r0, #0	@ 0002e1b8 0028
.org 0x2e1ba
	beq.n 0x2e1cc	@ 0002e1ba 07d0
.org 0x2e1bc
	ldr r0, [pc, #4]	@ 0002e1bc 0148
.org 0x2e1be
	b.n 0x2e1e0	@ 0002e1be 0fe0
.org 0x2e1c0
	.byte 0xb0,0x0a,0x00,0x02	@ 0002e1c0 data
.org 0x2e1c4
	.byte 0x01,0x80,0x00,0x00	@ 0002e1c4 data
.org 0x2e1c8
	ldrh r0, [r1, #0]	@ 0002e1c8 0888
.org 0x2e1ca
	b.n 0x2e1e0	@ 0002e1ca 09e0
.org 0x2e1cc
	adds r0, r6, #1	@ 0002e1cc 701c
.org 0x2e1ce
	lsls r0, r0, #24	@ 0002e1ce 0006
.org 0x2e1d0
	lsrs r6, r0, #24	@ 0002e1d0 060e
.org 0x2e1d2
	movs r2, #220	@ 0002e1d2 dc22
.org 0x2e1d4
	lsls r2, r2, #1	@ 0002e1d4 5200
.org 0x2e1d6
	adds r0, r5, r2	@ 0002e1d6 a818
.org 0x2e1d8
	ldrb r0, [r0, #0]	@ 0002e1d8 0078
.org 0x2e1da
	cmp r6, r0	@ 0002e1da 8642
.org 0x2e1dc
	bcc.n 0x2e14c	@ 0002e1dc b6d3
.org 0x2e1de
	movs r0, #0	@ 0002e1de 0020
.org 0x2e1e0
	pop {r3, r4, r5}	@ 0002e1e0 38bc
.org 0x2e1e2
	mov r8, r3	@ 0002e1e2 9846
.org 0x2e1e4
	mov r9, r4	@ 0002e1e4 a146
