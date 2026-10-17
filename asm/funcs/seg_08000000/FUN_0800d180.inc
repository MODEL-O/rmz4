@ FUN_0800d180  entry 0x0800d180  size 118
.thumb
.org 0xd180
FUN_0800d180:
	push {r4, r5, r6, r7, lr}	@ 0000d180 f0b5
.org 0xd182
	adds r7, r0, #0	@ 0000d182 071c
.org 0xd184
	ldrb r4, [r7, #14]	@ 0000d184 bc7b
.org 0xd186
	cmp r4, #0	@ 0000d186 002c
.org 0xd188
	bne.n 0xd1f0	@ 0000d188 32d1
.org 0xd18a
	ldr r0, [r7, #92]	@ 0000d18a f86d
.org 0xd18c
	lsls r0, r0, #16	@ 0000d18c 0004
.org 0xd18e
	lsrs r0, r0, #20	@ 0000d18e 000d
.org 0xd190
	lsls r5, r0, #1	@ 0000d190 4500
.org 0xd192
	ldr r3, [pc, #100]	@ 0000d192 194b
.org 0xd194
	adds r5, r5, r3	@ 0000d194 ed18
.org 0xd196
	ldr r1, [r7, #96]	@ 0000d196 396e
.org 0xd198
	ldr r2, [r7, #100]	@ 0000d198 7a6e
.org 0xd19a
	orrs r1, r2	@ 0000d19a 1143
.org 0xd19c
	ldr r6, [pc, #92]	@ 0000d19c 174e
.org 0xd19e
	adds r2, r6, #0	@ 0000d19e 321c
.org 0xd1a0
	orrs r1, r2	@ 0000d1a0 1143
.org 0xd1a2
	strh r1, [r5, #0]	@ 0000d1a2 2980
.org 0xd1a4
	lsls r0, r0, #2	@ 0000d1a4 8000
.org 0xd1a6
	adds r3, #8	@ 0000d1a6 0833
.org 0xd1a8
	adds r0, r0, r3	@ 0000d1a8 c018
.org 0xd1aa
	str r4, [r0, #0]	@ 0000d1aa 0460
.org 0xd1ac
	ldr r0, [pc, #80]	@ 0000d1ac 1448
.org 0xd1ae
	ldr r0, [r0, #0]	@ 0000d1ae 0068
.org 0xd1b0
	ldr r2, [pc, #80]	@ 0000d1b0 144a
.org 0xd1b2
	adds r0, r0, r2	@ 0000d1b2 8018
.org 0xd1b4
	movs r4, #248	@ 0000d1b4 f824
.org 0xd1b6
	lsls r4, r4, #5	@ 0000d1b6 6401
.org 0xd1b8
	ands r1, r4	@ 0000d1b8 2140
.org 0xd1ba
	lsls r1, r1, #3	@ 0000d1ba c900
.org 0xd1bc
	movs r2, #192	@ 0000d1bc c022
.org 0xd1be
	lsls r2, r2, #19	@ 0000d1be d204
.org 0xd1c0
	adds r1, r1, r2	@ 0000d1c0 8918
.org 0xd1c2
	movs r6, #128	@ 0000d1c2 8026
.org 0xd1c4
	lsls r6, r6, #2	@ 0000d1c4 b600
.org 0xd1c6
	adds r2, r6, #0	@ 0000d1c6 321c
.org 0xd1c8
	bl 0x128be0	@ 0000d1c8 1bf10afd
.org 0xd1cc
	ldr r0, [pc, #56]	@ 0000d1cc 0e48
.org 0xd1ce
	ldr r0, [r0, #0]	@ 0000d1ce 0068
.org 0xd1d0
	ldr r1, [pc, #56]	@ 0000d1d0 0e49
.org 0xd1d2
	adds r0, r0, r1	@ 0000d1d2 4018
.org 0xd1d4
	ldrh r1, [r5, #0]	@ 0000d1d4 2988
.org 0xd1d6
	ands r4, r1	@ 0000d1d6 0c40
.org 0xd1d8
	lsls r4, r4, #3	@ 0000d1d8 e400
.org 0xd1da
	ldr r2, [pc, #52]	@ 0000d1da 0d4a
.org 0xd1dc
	adds r4, r4, r2	@ 0000d1dc a418
.org 0xd1de
	adds r1, r4, #0	@ 0000d1de 211c
.org 0xd1e0
	adds r2, r6, #0	@ 0000d1e0 321c
.org 0xd1e2
	bl 0x128be0	@ 0000d1e2 1bf1fdfc
.org 0xd1e6
	movs r0, #3	@ 0000d1e6 0320
.org 0xd1e8
	strh r0, [r7, #16]	@ 0000d1e8 3882
.org 0xd1ea
	ldrb r0, [r7, #14]	@ 0000d1ea b87b
.org 0xd1ec
	adds r0, #1	@ 0000d1ec 0130
.org 0xd1ee
	strb r0, [r7, #14]	@ 0000d1ee b873
.org 0xd1f0
	pop {r4, r5, r6, r7}	@ 0000d1f0 f0bc
.org 0xd1f2
	pop {r0}	@ 0000d1f2 01bc
.org 0xd1f4
	bx r0	@ 0000d1f4 0047
