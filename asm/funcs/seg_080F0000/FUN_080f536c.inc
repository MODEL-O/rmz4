@ FUN_080f536c  entry 0x080f536c  size 50
.thumb
.org 0xf536c
FUN_080f536c:
	push {r4, lr}	@ 000f536c 10b5
.org 0xf536e
	adds r4, r0, #0	@ 000f536e 041c
.org 0xf5370
	ldr r1, [pc, #44]	@ 000f5370 0b49
.org 0xf5372
	ldrb r0, [r4, #16]	@ 000f5372 207c
.org 0xf5374
	lsls r0, r0, #2	@ 000f5374 8000
.org 0xf5376
	adds r0, r0, r1	@ 000f5376 4018
.org 0xf5378
	ldr r1, [r0, #0]	@ 000f5378 0168
.org 0xf537a
	adds r0, r4, #0	@ 000f537a 201c
.org 0xf537c
	bl 0x128f80	@ 000f537c 33f000fe
.org 0xf5380
	ldr r1, [pc, #32]	@ 000f5380 0849
.org 0xf5382
	ldrb r0, [r4, #9]	@ 000f5382 607a
.org 0xf5384
	lsls r0, r0, #2	@ 000f5384 8000
.org 0xf5386
	adds r0, r0, r1	@ 000f5386 4018
.org 0xf5388
	movs r1, #1	@ 000f5388 0121
.org 0xf538a
	str r1, [r4, #12]	@ 000f538a e160
.org 0xf538c
	ldr r0, [r0, #0]	@ 000f538c 0068
.org 0xf538e
	ldr r0, [r0, #4]	@ 000f538e 4068
.org 0xf5390
	str r0, [r4, #20]	@ 000f5390 6061
.org 0xf5392
	adds r0, r4, #0	@ 000f5392 201c
.org 0xf5394
	bl 0xf53a8	@ 000f5394 00f008f8
.org 0xf5398
	pop {r4}	@ 000f5398 10bc
.org 0xf539a
	pop {r0}	@ 000f539a 01bc
.org 0xf539c
	bx r0	@ 000f539c 0047
