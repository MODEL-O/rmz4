@ FUN_0805934c  entry 0x0805934c  size 50
.thumb
.org 0x5934c
FUN_0805934c:
	push {r4, r5, r6, lr}	@ 0005934c 70b5
.org 0x5934e
	sub sp, #24	@ 0005934e 86b0
.org 0x59350
	adds r5, r0, #0	@ 00059350 051c
.org 0x59352
	ldr r0, [pc, #36]	@ 00059352 0948
.org 0x59354
	ldr r1, [r0, #4]	@ 00059354 4168
.org 0x59356
	ldr r0, [r0, #0]	@ 00059356 0068
.org 0x59358
	str r0, [sp, #0]	@ 00059358 0090
.org 0x5935a
	str r1, [sp, #4]	@ 0005935a 0191
.org 0x5935c
	ldrb r0, [r5, #10]	@ 0005935c a87a
.org 0x5935e
	lsrs r6, r0, #4	@ 0005935e 0609
.org 0x59360
	movs r0, #1	@ 00059360 0120
.org 0x59362
	ands r6, r0	@ 00059362 0640
.org 0x59364
	ldrb r0, [r5, #15]	@ 00059364 e87b
.org 0x59366
	cmp r0, #7	@ 00059366 0728
.org 0x59368
	bls.n 0x5936c	@ 00059368 00d9
.org 0x5936a
	b.n 0x594f6	@ 0005936a c4e0
.org 0x5936c
	lsls r0, r0, #2	@ 0005936c 8000
.org 0x5936e
	ldr r1, [pc, #12]	@ 0005936e 0349
.org 0x59370
	adds r0, r0, r1	@ 00059370 4018
.org 0x59372
	ldr r0, [r0, #0]	@ 00059372 0068
.org 0x59374
	mov pc, r0	@ 00059374 8746
.org 0x59376
	.byte 0x00	@ 00059376 data
.org 0x59377
	.byte 0x00	@ 00059377 data
.org 0x59378
	.byte 0x48,0x96,0x12,0x08	@ 00059378 data
.org 0x5937c
	.byte 0x80,0x93,0x05,0x08	@ 0005937c data
