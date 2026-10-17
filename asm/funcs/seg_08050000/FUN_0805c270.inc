@ FUN_0805c270  entry 0x0805c270  size 164
.thumb
.org 0x5c270
FUN_0805c270:
	push {r4, r5, r6, r7, lr}	@ 0005c270 f0b5
.org 0x5c272
	mov r7, r9	@ 0005c272 4f46
.org 0x5c274
	mov r6, r8	@ 0005c274 4646
.org 0x5c276
	push {r6, r7}	@ 0005c276 c0b4
.org 0x5c278
	sub sp, #16	@ 0005c278 84b0
.org 0x5c27a
	adds r7, r0, #0	@ 0005c27a 071c
.org 0x5c27c
	ldr r1, [pc, #148]	@ 0005c27c 2549
.org 0x5c27e
	mov r0, sp	@ 0005c27e 6846
.org 0x5c280
	movs r2, #3	@ 0005c280 0322
.org 0x5c282
	bl 0x129258	@ 0005c282 ccf0e9ff
.org 0x5c286
	add r4, sp, #4	@ 0005c286 01ac
.org 0x5c288
	ldr r1, [pc, #140]	@ 0005c288 2349
.org 0x5c28a
	adds r0, r4, #0	@ 0005c28a 201c
.org 0x5c28c
	movs r2, #3	@ 0005c28c 0322
.org 0x5c28e
	bl 0x129258	@ 0005c28e ccf0e3ff
.org 0x5c292
	ldrb r0, [r7, #10]	@ 0005c292 b87a
.org 0x5c294
	lsrs r6, r0, #4	@ 0005c294 0609
.org 0x5c296
	movs r0, #1	@ 0005c296 0120
.org 0x5c298
	ands r6, r0	@ 0005c298 0640
.org 0x5c29a
	movs r0, #206	@ 0005c29a ce20
.org 0x5c29c
	adds r0, r0, r7	@ 0005c29c c019
.org 0x5c29e
	mov r8, r0	@ 0005c29e 8046
.org 0x5c2a0
	ldrb r0, [r0, #0]	@ 0005c2a0 0078
.org 0x5c2a2
	subs r0, #1	@ 0005c2a2 0138
.org 0x5c2a4
	cmp r0, #0	@ 0005c2a4 0028
.org 0x5c2a6
	bgt.n 0x5c302	@ 0005c2a6 2cdc
.org 0x5c2a8
	adds r0, r4, #0	@ 0005c2a8 201c
.org 0x5c2aa
	movs r1, #3	@ 0005c2aa 0321
.org 0x5c2ac
	bl 0x5c328	@ 0005c2ac 00f03cf8
.org 0x5c2b0
	adds r2, r0, #0	@ 0005c2b0 021c
.org 0x5c2b2
	ldr r4, [pc, #104]	@ 0005c2b2 1a4c
.org 0x5c2b4
	ldr r0, [r4, #0]	@ 0005c2b4 2068
.org 0x5c2b6
	ldr r1, [pc, #104]	@ 0005c2b6 1a49
.org 0x5c2b8
	mov r9, r1	@ 0005c2b8 8946
.org 0x5c2ba
	mov r1, r9	@ 0005c2ba 4946
.org 0x5c2bc
	muls r1, r0	@ 0005c2bc 4143
.org 0x5c2be
	ldr r5, [pc, #100]	@ 0005c2be 194d
.org 0x5c2c0
	adds r1, r1, r5	@ 0005c2c0 4919
.org 0x5c2c2
	lsls r1, r1, #1	@ 0005c2c2 4900
.org 0x5c2c4
	lsrs r0, r1, #1	@ 0005c2c4 4808
.org 0x5c2c6
	str r0, [r4, #0]	@ 0005c2c6 2060
.org 0x5c2c8
	lsrs r1, r1, #17	@ 0005c2c8 490c
.org 0x5c2ca
	movs r0, #31	@ 0005c2ca 1f20
.org 0x5c2cc
	ands r1, r0	@ 0005c2cc 0140
.org 0x5c2ce
	subs r1, #15	@ 0005c2ce 0f39
.org 0x5c2d0
	lsls r1, r1, #8	@ 0005c2d0 0902
.org 0x5c2d2
	ldr r0, [r7, #84]	@ 0005c2d2 786d
.org 0x5c2d4
	adds r0, r0, r1	@ 0005c2d4 4018
.org 0x5c2d6
	str r0, [sp, #8]	@ 0005c2d6 0290
.org 0x5c2d8
	ldr r1, [r7, #88]	@ 0005c2d8 b96d
.org 0x5c2da
	add r0, sp, #8	@ 0005c2da 02a8
.org 0x5c2dc
	str r1, [r0, #4]	@ 0005c2dc 4160
.org 0x5c2de
	mov r3, sp	@ 0005c2de 6b46
.org 0x5c2e0
	adds r1, r3, r2	@ 0005c2e0 9918
.org 0x5c2e2
	ldrb r1, [r1, #0]	@ 0005c2e2 0978
.org 0x5c2e4
	adds r2, r6, #0	@ 0005c2e4 321c
.org 0x5c2e6
	bl 0xe03d8	@ 0005c2e6 84f077f8
.org 0x5c2ea
	ldr r0, [r4, #0]	@ 0005c2ea 2068
.org 0x5c2ec
	mov r1, r9	@ 0005c2ec 4946
.org 0x5c2ee
	muls r1, r0	@ 0005c2ee 4143
.org 0x5c2f0
	adds r0, r1, #0	@ 0005c2f0 081c
.org 0x5c2f2
	adds r0, r0, r5	@ 0005c2f2 4019
.org 0x5c2f4
	lsls r0, r0, #1	@ 0005c2f4 4000
.org 0x5c2f6
	lsrs r1, r0, #1	@ 0005c2f6 4108
.org 0x5c2f8
	str r1, [r4, #0]	@ 0005c2f8 2160
.org 0x5c2fa
	lsrs r0, r0, #17	@ 0005c2fa 400c
.org 0x5c2fc
	movs r1, #7	@ 0005c2fc 0721
.org 0x5c2fe
	ands r0, r1	@ 0005c2fe 0840
.org 0x5c300
	adds r0, #8	@ 0005c300 0830
.org 0x5c302
	mov r3, r8	@ 0005c302 4346
.org 0x5c304
	strb r0, [r3, #0]	@ 0005c304 1870
.org 0x5c306
	add sp, #16	@ 0005c306 04b0
.org 0x5c308
	pop {r3, r4}	@ 0005c308 18bc
.org 0x5c30a
	mov r8, r3	@ 0005c30a 9846
.org 0x5c30c
	mov r9, r4	@ 0005c30c a146
.org 0x5c30e
	pop {r4, r5, r6, r7}	@ 0005c30e f0bc
.org 0x5c310
	pop {r0}	@ 0005c310 01bc
.org 0x5c312
	bx r0	@ 0005c312 0047
