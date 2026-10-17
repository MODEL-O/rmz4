@ FUN_0810b1a8  entry 0x0810b1a8  size 132
.thumb
.org 0x10b1a8
FUN_0810b1a8:
	push {r4, r5, r6, lr}	@ 0010b1a8 70b5
.org 0x10b1aa
	adds r4, r0, #0	@ 0010b1aa 041c
.org 0x10b1ac
	ldr r1, [pc, #60]	@ 0010b1ac 0f49
.org 0x10b1ae
	ldrb r0, [r4, #9]	@ 0010b1ae 607a
.org 0x10b1b0
	lsls r0, r0, #2	@ 0010b1b0 8000
.org 0x10b1b2
	adds r0, r0, r1	@ 0010b1b2 4018
.org 0x10b1b4
	movs r6, #1	@ 0010b1b4 0126
.org 0x10b1b6
	str r6, [r4, #12]	@ 0010b1b6 e660
.org 0x10b1b8
	ldr r0, [r0, #0]	@ 0010b1b8 0068
.org 0x10b1ba
	ldr r0, [r0, #4]	@ 0010b1ba 4068
.org 0x10b1bc
	str r0, [r4, #20]	@ 0010b1bc 6061
.org 0x10b1be
	adds r0, r4, #0	@ 0010b1be 201c
.org 0x10b1c0
	bl 0x1cc9c	@ 0010b1c0 11f76cfd
.org 0x10b1c4
	ldrb r1, [r4, #10]	@ 0010b1c4 a17a
.org 0x10b1c6
	movs r0, #1	@ 0010b1c6 0120
.org 0x10b1c8
	orrs r0, r1	@ 0010b1c8 0843
.org 0x10b1ca
	movs r1, #2	@ 0010b1ca 0221
.org 0x10b1cc
	orrs r0, r1	@ 0010b1cc 0843
.org 0x10b1ce
	strb r0, [r4, #10]	@ 0010b1ce a072
.org 0x10b1d0
	ldrb r5, [r4, #17]	@ 0010b1d0 657c
.org 0x10b1d2
	cmp r5, #0	@ 0010b1d2 002d
.org 0x10b1d4
	beq.n 0x10b1f4	@ 0010b1d4 0ed0
.org 0x10b1d6
	ldr r0, [pc, #24]	@ 0010b1d6 0648
.org 0x10b1d8
	adds r1, r5, #0	@ 0010b1d8 291c
.org 0x10b1da
	lsls r1, r1, #2	@ 0010b1da 8900
.org 0x10b1dc
	adds r0, #2	@ 0010b1dc 0230
.org 0x10b1de
	adds r1, r1, r0	@ 0010b1de 0918
.org 0x10b1e0
	ldrh r1, [r1, #0]	@ 0010b1e0 0988
.org 0x10b1e2
	adds r0, r4, #0	@ 0010b1e2 201c
.org 0x10b1e4
	bl 0x1cf00	@ 0010b1e4 11f78cfe
.org 0x10b1e8
	strb r6, [r4, #13]	@ 0010b1e8 6673
.org 0x10b1ea
	b.n 0x10b206	@ 0010b1ea 0ce0
.org 0x10b1ec
	.byte 0xf8,0xca,0x86,0x08	@ 0010b1ec data
.org 0x10b1f0
	.byte 0x30,0xcc,0x86,0x08	@ 0010b1f0 data
.org 0x10b1f4
	ldr r0, [pc, #60]	@ 0010b1f4 0f48
.org 0x10b1f6
	ldrb r1, [r4, #17]	@ 0010b1f6 617c
.org 0x10b1f8
	lsls r1, r1, #2	@ 0010b1f8 8900
.org 0x10b1fa
	adds r1, r1, r0	@ 0010b1fa 0918
.org 0x10b1fc
	ldrh r1, [r1, #0]	@ 0010b1fc 0988
.org 0x10b1fe
	adds r0, r4, #0	@ 0010b1fe 201c
.org 0x10b200
	bl 0x1cf00	@ 0010b200 11f77efe
.org 0x10b204
	strb r5, [r4, #13]	@ 0010b204 6573
.org 0x10b206
	adds r0, r4, #0	@ 0010b206 201c
.org 0x10b208
	bl 0x1cff0	@ 0010b208 11f7f2fe
.org 0x10b20c
	adds r1, r4, #0	@ 0010b20c 211c
.org 0x10b20e
	adds r1, #76	@ 0010b20e 4c31
.org 0x10b210
	movs r0, #0	@ 0010b210 0020
.org 0x10b212
	strb r0, [r1, #0]	@ 0010b212 0870
.org 0x10b214
	adds r2, r4, #0	@ 0010b214 221c
.org 0x10b216
	adds r2, #74	@ 0010b216 4a32
.org 0x10b218
	ldrb r1, [r2, #0]	@ 0010b218 1178
.org 0x10b21a
	subs r0, #17	@ 0010b21a 1138
.org 0x10b21c
	ands r0, r1	@ 0010b21c 0840
.org 0x10b21e
	strb r0, [r2, #0]	@ 0010b21e 1070
.org 0x10b220
	ldrb r1, [r4, #10]	@ 0010b220 a17a
.org 0x10b222
	movs r0, #239	@ 0010b222 ef20
.org 0x10b224
	ands r0, r1	@ 0010b224 0840
.org 0x10b226
	strb r0, [r4, #10]	@ 0010b226 a072
.org 0x10b228
	adds r0, r4, #0	@ 0010b228 201c
.org 0x10b22a
	bl 0x10b148	@ 0010b22a fff78dff
