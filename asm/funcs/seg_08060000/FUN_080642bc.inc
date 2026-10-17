@ FUN_080642bc  entry 0x080642bc  size 164
.thumb
.org 0x642bc
FUN_080642bc:
	push {r4, r5, r6, lr}	@ 000642bc 70b5
.org 0x642be
	adds r6, r0, #0	@ 000642be 061c
.org 0x642c0
	ldrb r4, [r6, #15]	@ 000642c0 f47b
.org 0x642c2
	cmp r4, #0	@ 000642c2 002c
.org 0x642c4
	bne.n 0x642da	@ 000642c4 09d1
.org 0x642c6
	movs r1, #23	@ 000642c6 1721
.org 0x642c8
	bl 0x65a94	@ 000642c8 01f0e4fb
.org 0x642cc
	str r4, [r6, #96]	@ 000642cc 3466
.org 0x642ce
	movs r0, #32	@ 000642ce 2020
.org 0x642d0
	negs r0, r0	@ 000642d0 4042
.org 0x642d2
	str r0, [r6, #104]	@ 000642d2 b066
.org 0x642d4
	ldrb r0, [r6, #15]	@ 000642d4 f07b
.org 0x642d6
	adds r0, #1	@ 000642d6 0130
.org 0x642d8
	strb r0, [r6, #15]	@ 000642d8 f073
.org 0x642da
	adds r0, r6, #0	@ 000642da 301c
.org 0x642dc
	bl 0x1cff0	@ 000642dc b8f788fe
.org 0x642e0
	adds r0, r6, #0	@ 000642e0 301c
.org 0x642e2
	adds r0, #116	@ 000642e2 7430
.org 0x642e4
	ldr r4, [pc, #120]	@ 000642e4 1e4c
.org 0x642e6
	ldr r3, [pc, #124]	@ 000642e6 1f4b
.org 0x642e8
	adds r1, r6, #0	@ 000642e8 311c
.org 0x642ea
	adds r1, #180	@ 000642ea b431
.org 0x642ec
	ldrb r2, [r1, #0]	@ 000642ec 0a78
.org 0x642ee
	lsls r1, r2, #1	@ 000642ee 5100
.org 0x642f0
	adds r1, r1, r3	@ 000642f0 c918
.org 0x642f2
	ldrh r1, [r1, #0]	@ 000642f2 0988
.org 0x642f4
	lsls r1, r1, #2	@ 000642f4 8900
.org 0x642f6
	adds r1, r1, r4	@ 000642f6 0919
.org 0x642f8
	adds r3, r6, #0	@ 000642f8 331c
.org 0x642fa
	adds r3, #113	@ 000642fa 7133
.org 0x642fc
	movs r5, #0	@ 000642fc 0025
.org 0x642fe
	ldrsb r5, [r3, r5]	@ 000642fe 5d57
.org 0x64300
	ldr r1, [r1, #0]	@ 00064300 0968
.org 0x64302
	lsls r3, r5, #2	@ 00064302 ab00
.org 0x64304
	adds r3, r3, r1	@ 00064304 5b18
.org 0x64306
	ldr r4, [pc, #96]	@ 00064306 184c
.org 0x64308
	adds r1, r6, #0	@ 00064308 311c
.org 0x6430a
	adds r1, #181	@ 0006430a b531
.org 0x6430c
	ldrb r1, [r1, #0]	@ 0006430c 0978
.org 0x6430e
	lsls r1, r1, #2	@ 0006430e 8900
.org 0x64310
	adds r1, r1, r4	@ 00064310 0919
.org 0x64312
	ldr r1, [r1, #0]	@ 00064312 0968
.org 0x64314
	lsls r2, r2, #2	@ 00064314 9200
.org 0x64316
	adds r2, r2, r1	@ 00064316 5218
.org 0x64318
	ldr r1, [r2, #0]	@ 00064318 1168
.org 0x6431a
	adds r1, r1, r5	@ 0006431a 4919
.org 0x6431c
	ldrb r1, [r1, #0]	@ 0006431c 0978
.org 0x6431e
	lsls r2, r1, #1	@ 0006431e 4a00
.org 0x64320
	adds r2, r2, r1	@ 00064320 5218
.org 0x64322
	lsls r2, r2, #3	@ 00064322 d200
.org 0x64324
	ldr r1, [r3, #0]	@ 00064324 1968
.org 0x64326
	adds r1, r1, r2	@ 00064326 8918
.org 0x64328
	bl 0x5784	@ 00064328 a1f72cfa
.org 0x6432c
	ldr r0, [r6, #88]	@ 0006432c b06d
.org 0x6432e
	ldr r1, [r6, #96]	@ 0006432e 316e
.org 0x64330
	adds r0, r0, r1	@ 00064330 4018
.org 0x64332
	str r0, [r6, #88]	@ 00064332 b065
.org 0x64334
	ldr r0, [r6, #104]	@ 00064334 b06e
.org 0x64336
	adds r1, r1, r0	@ 00064336 0918
.org 0x64338
	str r1, [r6, #96]	@ 00064338 3166
.org 0x6433a
	ldr r0, [pc, #48]	@ 0006433a 0c48
.org 0x6433c
	cmp r1, r0	@ 0006433c 8142
.org 0x6433e
	bge.n 0x64342	@ 0006433e 00da
.org 0x64340
	str r0, [r6, #96]	@ 00064340 3066
.org 0x64342
	adds r0, r6, #0	@ 00064342 301c
.org 0x64344
	adds r0, #212	@ 00064344 d430
.org 0x64346
	ldr r0, [r0, #0]	@ 00064346 0068
.org 0x64348
	ldr r1, [pc, #36]	@ 00064348 0949
.org 0x6434a
	adds r0, r0, r1	@ 0006434a 4018
.org 0x6434c
	ldr r1, [r6, #88]	@ 0006434c b16d
.org 0x6434e
	cmp r1, r0	@ 0006434e 8142
.org 0x64350
	bge.n 0x6435a	@ 00064350 03da
.org 0x64352
	movs r1, #0	@ 00064352 0021
.org 0x64354
	movs r0, #5	@ 00064354 0520
.org 0x64356
	strb r0, [r6, #14]	@ 00064356 b073
.org 0x64358
	strb r1, [r6, #15]	@ 00064358 f173
.org 0x6435a
	pop {r4, r5, r6}	@ 0006435a 70bc
.org 0x6435c
	pop {r0}	@ 0006435c 01bc
.org 0x6435e
	bx r0	@ 0006435e 0047
