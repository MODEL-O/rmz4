@ FUN_08085348  entry 0x08085348  size 70
.thumb
.org 0x85348
FUN_08085348:
	push {r4, lr}	@ 00085348 10b5
.org 0x8534a
	sub sp, #8	@ 0008534a 82b0
.org 0x8534c
	adds r4, r0, #0	@ 0008534c 041c
.org 0x8534e
	adds r0, #140	@ 0008534e 8c30
.org 0x85350
	movs r1, #0	@ 00085350 0021
.org 0x85352
	str r1, [r0, #0]	@ 00085352 0160
.org 0x85354
	adds r0, #4	@ 00085354 0430
.org 0x85356
	str r1, [r0, #0]	@ 00085356 0160
.org 0x85358
	adds r0, #4	@ 00085358 0430
.org 0x8535a
	strb r1, [r0, #0]	@ 0008535a 0170
.org 0x8535c
	ldrb r1, [r4, #10]	@ 0008535c a17a
.org 0x8535e
	movs r0, #251	@ 0008535e fb20
.org 0x85360
	ands r0, r1	@ 00085360 0840
.org 0x85362
	strb r0, [r4, #10]	@ 00085362 a072
.org 0x85364
	ldr r0, [r4, #84]	@ 00085364 606d
.org 0x85366
	str r0, [sp, #0]	@ 00085366 0090
.org 0x85368
	ldr r0, [r4, #88]	@ 00085368 a06d
.org 0x8536a
	str r0, [sp, #4]	@ 0008536a 0190
.org 0x8536c
	movs r0, #2	@ 0008536c 0220
.org 0x8536e
	mov r1, sp	@ 0008536e 6946
.org 0x85370
	bl 0xd0c88	@ 00085370 4bf08afc
.org 0x85374
	ldr r1, [pc, #24]	@ 00085374 0649
.org 0x85376
	ldrb r0, [r4, #9]	@ 00085376 607a
.org 0x85378
	lsls r0, r0, #2	@ 00085378 8000
.org 0x8537a
	adds r0, r0, r1	@ 0008537a 4018
.org 0x8537c
	movs r1, #4	@ 0008537c 0421
.org 0x8537e
	str r1, [r4, #12]	@ 0008537e e160
.org 0x85380
	ldr r0, [r0, #0]	@ 00085380 0068
.org 0x85382
	ldr r0, [r0, #16]	@ 00085382 0069
.org 0x85384
	str r0, [r4, #20]	@ 00085384 6061
.org 0x85386
	add sp, #8	@ 00085386 02b0
.org 0x85388
	pop {r4}	@ 00085388 10bc
.org 0x8538a
	pop {r0}	@ 0008538a 01bc
.org 0x8538c
	bx r0	@ 0008538c 0047
