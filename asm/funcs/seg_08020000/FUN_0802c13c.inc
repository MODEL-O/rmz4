@ FUN_0802c13c  entry 0x0802c13c  size 270
.thumb
.org 0x2c13c
FUN_0802c13c:
	push {r4, r5, r6, r7, lr}	@ 0002c13c f0b5
.org 0x2c13e
	mov r7, r8	@ 0002c13e 4746
.org 0x2c140
	push {r7}	@ 0002c140 80b4
.org 0x2c142
	sub sp, #8	@ 0002c142 82b0
.org 0x2c144
	adds r6, r0, #0	@ 0002c144 061c
.org 0x2c146
	adds r3, r1, #0	@ 0002c146 0b1c
.org 0x2c148
	movs r1, #2	@ 0002c148 0221
.org 0x2c14a
	ldrsh r0, [r3, r1]	@ 0002c14a 585e
.org 0x2c14c
	ldr r1, [r6, #88]	@ 0002c14c b16d
.org 0x2c14e
	adds r1, r1, r0	@ 0002c14e 0918
.org 0x2c150
	ldrh r0, [r3, #6]	@ 0002c150 d888
.org 0x2c152
	lsls r0, r0, #16	@ 0002c152 0004
.org 0x2c154
	asrs r0, r0, #17	@ 0002c154 4014
.org 0x2c156
	subs r1, r1, r0	@ 0002c156 091a
.org 0x2c158
	mov r8, r1	@ 0002c158 8846
.org 0x2c15a
	ldrb r1, [r6, #10]	@ 0002c15a b17a
.org 0x2c15c
	movs r0, #16	@ 0002c15c 1020
.org 0x2c15e
	ands r0, r1	@ 0002c15e 0840
.org 0x2c160
	cmp r0, #0	@ 0002c160 0028
.org 0x2c162
	beq.n 0x2c18c	@ 0002c162 13d0
.org 0x2c164
	movs r4, #0	@ 0002c164 0024
.org 0x2c166
	ldrsh r1, [r3, r4]	@ 0002c166 195f
.org 0x2c168
	ldr r2, [r6, #84]	@ 0002c168 726d
.org 0x2c16a
	subs r1, r2, r1	@ 0002c16a 511a
.org 0x2c16c
	ldrh r0, [r3, #4]	@ 0002c16c 9888
.org 0x2c16e
	lsls r0, r0, #16	@ 0002c16e 0004
.org 0x2c170
	asrs r0, r0, #17	@ 0002c170 4014
.org 0x2c172
	adds r1, r1, r0	@ 0002c172 0918
.org 0x2c174
	str r1, [sp, #0]	@ 0002c174 0091
.org 0x2c176
	movs r4, #0	@ 0002c176 0024
.org 0x2c178
	ldrsh r1, [r3, r4]	@ 0002c178 195f
.org 0x2c17a
	subs r2, r2, r1	@ 0002c17a 521a
.org 0x2c17c
	subs r2, r2, r0	@ 0002c17c 121a
.org 0x2c17e
	b.n 0x2c1a6	@ 0002c17e 12e0
.org 0x2c180
	ldr r0, [r6, #0]	@ 0002c180 3068
.org 0x2c182
	mov r1, r8	@ 0002c182 4146
.org 0x2c184
	bl 0x8080	@ 0002c184 dbf77cff
.org 0x2c188
	adds r0, r4, #0	@ 0002c188 201c
.org 0x2c18a
	b.n 0x2c23e	@ 0002c18a 58e0
.org 0x2c18c
	movs r0, #0	@ 0002c18c 0020
.org 0x2c18e
	ldrsh r1, [r3, r0]	@ 0002c18e 195e
.org 0x2c190
	ldr r2, [r6, #84]	@ 0002c190 726d
.org 0x2c192
	adds r1, r2, r1	@ 0002c192 5118
.org 0x2c194
	ldrh r0, [r3, #4]	@ 0002c194 9888
.org 0x2c196
	lsls r0, r0, #16	@ 0002c196 0004
.org 0x2c198
	asrs r0, r0, #17	@ 0002c198 4014
.org 0x2c19a
	subs r1, r1, r0	@ 0002c19a 091a
.org 0x2c19c
	str r1, [sp, #0]	@ 0002c19c 0091
.org 0x2c19e
	movs r4, #0	@ 0002c19e 0024
.org 0x2c1a0
	ldrsh r1, [r3, r4]	@ 0002c1a0 195f
.org 0x2c1a2
	adds r2, r2, r1	@ 0002c1a2 5218
.org 0x2c1a4
	adds r2, r2, r0	@ 0002c1a4 1218
.org 0x2c1a6
	str r2, [sp, #4]	@ 0002c1a6 0192
.org 0x2c1a8
	movs r1, #220	@ 0002c1a8 dc21
.org 0x2c1aa
	lsls r1, r1, #1	@ 0002c1aa 4900
.org 0x2c1ac
	adds r0, r6, r1	@ 0002c1ac 7018
.org 0x2c1ae
	ldrb r0, [r0, #0]	@ 0002c1ae 0078
.org 0x2c1b0
	cmp r0, #0	@ 0002c1b0 0028
.org 0x2c1b2
	beq.n 0x2c1fa	@ 0002c1b2 22d0
.org 0x2c1b4
	movs r5, #0	@ 0002c1b4 0025
.org 0x2c1b6
	movs r7, #15	@ 0002c1b6 0f27
.org 0x2c1b8
	lsls r0, r5, #2	@ 0002c1b8 a800
.org 0x2c1ba
	add r0, sp	@ 0002c1ba 6844
.org 0x2c1bc
	ldr r1, [r0, #0]	@ 0002c1bc 0168
.org 0x2c1be
	adds r0, r6, #0	@ 0002c1be 301c
.org 0x2c1c0
	mov r2, r8	@ 0002c1c0 4246
.org 0x2c1c2
	bl 0x2e058	@ 0002c1c2 01f049ff
.org 0x2c1c6
	lsls r0, r0, #16	@ 0002c1c6 0004
.org 0x2c1c8
	lsrs r4, r0, #16	@ 0002c1c8 040c
.org 0x2c1ca
	movs r0, #128	@ 0002c1ca 8020
.org 0x2c1cc
	lsls r0, r0, #8	@ 0002c1cc 0002
.org 0x2c1ce
	adds r1, r0, #0	@ 0002c1ce 011c
.org 0x2c1d0
	adds r0, r4, #0	@ 0002c1d0 201c
.org 0x2c1d2
	ands r0, r1	@ 0002c1d2 0840
.org 0x2c1d4
	cmp r0, #0	@ 0002c1d4 0028
.org 0x2c1d6
	beq.n 0x2c1e4	@ 0002c1d6 05d0
.org 0x2c1d8
	adds r0, r4, #0	@ 0002c1d8 201c
.org 0x2c1da
	ands r0, r7	@ 0002c1da 3840
.org 0x2c1dc
	cmp r0, #0	@ 0002c1dc 0028
.org 0x2c1de
	beq.n 0x2c1e4	@ 0002c1de 01d0
.org 0x2c1e0
	cmp r0, #14	@ 0002c1e0 0e28
.org 0x2c1e2
	bls.n 0x2c1f0	@ 0002c1e2 05d9
.org 0x2c1e4
	adds r0, r4, #0	@ 0002c1e4 201c
.org 0x2c1e6
	ands r0, r7	@ 0002c1e6 3840
.org 0x2c1e8
	cmp r0, #15	@ 0002c1e8 0f28
.org 0x2c1ea
	beq.n 0x2c1f0	@ 0002c1ea 01d0
.org 0x2c1ec
	cmp r0, #0	@ 0002c1ec 0028
.org 0x2c1ee
	bne.n 0x2c188	@ 0002c1ee cbd1
.org 0x2c1f0
	adds r0, r5, #1	@ 0002c1f0 681c
.org 0x2c1f2
	lsls r0, r0, #16	@ 0002c1f2 0004
.org 0x2c1f4
	lsrs r5, r0, #16	@ 0002c1f4 050c
.org 0x2c1f6
	cmp r5, #1	@ 0002c1f6 012d
.org 0x2c1f8
	bls.n 0x2c1b8	@ 0002c1f8 ded9
.org 0x2c1fa
	movs r5, #0	@ 0002c1fa 0025
.org 0x2c1fc
	lsls r0, r5, #2	@ 0002c1fc a800
.org 0x2c1fe
	mov r1, sp	@ 0002c1fe 6946
.org 0x2c200
	adds r6, r0, r1	@ 0002c200 4618
.org 0x2c202
	ldr r0, [r6, #0]	@ 0002c202 3068
.org 0x2c204
	mov r1, r8	@ 0002c204 4146
.org 0x2c206
	bl 0x7020	@ 0002c206 daf70bff
.org 0x2c20a
	lsls r0, r0, #16	@ 0002c20a 0004
.org 0x2c20c
	lsrs r4, r0, #16	@ 0002c20c 040c
.org 0x2c20e
	movs r0, #128	@ 0002c20e 8020
.org 0x2c210
	lsls r0, r0, #3	@ 0002c210 c000
.org 0x2c212
	adds r1, r0, #0	@ 0002c212 011c
.org 0x2c214
	adds r0, r4, #0	@ 0002c214 201c
.org 0x2c216
	ands r0, r1	@ 0002c216 0840
.org 0x2c218
	cmp r0, #0	@ 0002c218 0028
.org 0x2c21a
	bne.n 0x2c232	@ 0002c21a 0ad1
.org 0x2c21c
	movs r0, #15	@ 0002c21c 0f20
.org 0x2c21e
	ands r0, r4	@ 0002c21e 2040
.org 0x2c220
	cmp r0, #1	@ 0002c220 0128
.org 0x2c222
	bne.n 0x2c232	@ 0002c222 06d1
.org 0x2c224
	movs r0, #128	@ 0002c224 8020
.org 0x2c226
	lsls r0, r0, #8	@ 0002c226 0002
.org 0x2c228
	adds r1, r0, #0	@ 0002c228 011c
.org 0x2c22a
	adds r0, r4, #0	@ 0002c22a 201c
.org 0x2c22c
	ands r0, r1	@ 0002c22c 0840
.org 0x2c22e
	cmp r0, #0	@ 0002c22e 0028
.org 0x2c230
	beq.n 0x2c180	@ 0002c230 a6d0
.org 0x2c232
	adds r0, r5, #1	@ 0002c232 681c
.org 0x2c234
	lsls r0, r0, #16	@ 0002c234 0004
.org 0x2c236
	lsrs r5, r0, #16	@ 0002c236 050c
.org 0x2c238
	cmp r5, #1	@ 0002c238 012d
.org 0x2c23a
	bls.n 0x2c1fc	@ 0002c23a dfd9
.org 0x2c23c
	movs r0, #0	@ 0002c23c 0020
.org 0x2c23e
	add sp, #8	@ 0002c23e 02b0
.org 0x2c240
	pop {r3}	@ 0002c240 08bc
.org 0x2c242
	mov r8, r3	@ 0002c242 9846
.org 0x2c244
	pop {r4, r5, r6, r7}	@ 0002c244 f0bc
.org 0x2c246
	pop {r1}	@ 0002c246 02bc
.org 0x2c248
	bx r1	@ 0002c248 0847
