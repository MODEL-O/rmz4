@ FUN_08068394  entry 0x08068394  size 98
.thumb
.org 0x68394
FUN_08068394:
	push {r4, r5, lr}	@ 00068394 30b5
.org 0x68396
	adds r4, r0, #0	@ 00068396 041c
.org 0x68398
	ldrb r5, [r4, #14]	@ 00068398 a57b
.org 0x6839a
	cmp r5, #0	@ 0006839a 002d
.org 0x6839c
	bne.n 0x683b4	@ 0006839c 0ad1
.org 0x6839e
	ldr r1, [pc, #60]	@ 0006839e 0f49
.org 0x683a0
	bl 0x1cf00	@ 000683a0 b4f7aefd
.org 0x683a4
	ldr r0, [pc, #56]	@ 000683a4 0e48
.org 0x683a6
	str r0, [r4, #96]	@ 000683a6 2066
.org 0x683a8
	movs r0, #48	@ 000683a8 3020
.org 0x683aa
	strb r0, [r4, #18]	@ 000683aa a074
.org 0x683ac
	strb r5, [r4, #15]	@ 000683ac e573
.org 0x683ae
	ldrb r0, [r4, #14]	@ 000683ae a07b
.org 0x683b0
	adds r0, #1	@ 000683b0 0130
.org 0x683b2
	strb r0, [r4, #14]	@ 000683b2 a073
.org 0x683b4
	adds r0, r4, #0	@ 000683b4 201c
.org 0x683b6
	bl 0x1cff0	@ 000683b6 b4f71bfe
.org 0x683ba
	ldrb r2, [r4, #15]	@ 000683ba e27b
.org 0x683bc
	cmp r2, #0	@ 000683bc 002a
.org 0x683be
	bne.n 0x683e4	@ 000683be 11d1
.org 0x683c0
	ldr r0, [r4, #88]	@ 000683c0 a06d
.org 0x683c2
	ldr r1, [r4, #96]	@ 000683c2 216e
.org 0x683c4
	adds r0, r0, r1	@ 000683c4 4018
.org 0x683c6
	str r0, [r4, #88]	@ 000683c6 a065
.org 0x683c8
	ldrb r0, [r4, #18]	@ 000683c8 a07c
.org 0x683ca
	subs r0, #1	@ 000683ca 0138
.org 0x683cc
	strb r0, [r4, #18]	@ 000683cc a074
.org 0x683ce
	lsls r0, r0, #24	@ 000683ce 0006
.org 0x683d0
	lsrs r0, r0, #24	@ 000683d0 000e
.org 0x683d2
	cmp r0, #255	@ 000683d2 ff28
.org 0x683d4
	bne.n 0x683f8	@ 000683d4 10d1
.org 0x683d6
	adds r0, r2, #1	@ 000683d6 501c
.org 0x683d8
	strb r0, [r4, #15]	@ 000683d8 e073
.org 0x683da
	b.n 0x683f8	@ 000683da 0de0
.org 0x683dc
	.byte 0x2c,0xa9,0x00,0x00	@ 000683dc data
.org 0x683e0
	.byte 0x40,0xfe,0xff,0xff	@ 000683e0 data
.org 0x683e4
	adds r0, r4, #0	@ 000683e4 201c
.org 0x683e6
	adds r0, #180	@ 000683e6 b430
.org 0x683e8
	ldr r0, [r0, #32]	@ 000683e8 006a
.org 0x683ea
	ldrb r0, [r0, #13]	@ 000683ea 407b
.org 0x683ec
	cmp r0, #6	@ 000683ec 0628
.org 0x683ee
	bls.n 0x683f8	@ 000683ee 03d9
.org 0x683f0
	movs r1, #0	@ 000683f0 0021
.org 0x683f2
	movs r0, #32	@ 000683f2 2020
.org 0x683f4
	strb r0, [r4, #13]	@ 000683f4 6073
