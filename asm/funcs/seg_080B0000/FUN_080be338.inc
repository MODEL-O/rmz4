@ FUN_080be338  entry 0x080be338  size 48
.thumb
.org 0xbe338
FUN_080be338:
	push {r4, lr}	@ 000be338 10b5
.org 0xbe33a
	adds r4, r0, #0	@ 000be33a 041c
.org 0xbe33c
	ldr r1, [pc, #40]	@ 000be33c 0a49
.org 0xbe33e
	ldrb r0, [r4, #13]	@ 000be33e 607b
.org 0xbe340
	lsls r0, r0, #2	@ 000be340 8000
.org 0xbe342
	adds r0, r0, r1	@ 000be342 4018
.org 0xbe344
	ldr r1, [r0, #0]	@ 000be344 0168
.org 0xbe346
	adds r0, r4, #0	@ 000be346 201c
.org 0xbe348
	bl 0x128f80	@ 000be348 6af01afe
.org 0xbe34c
	lsls r0, r0, #24	@ 000be34c 0006
.org 0xbe34e
	cmp r0, #0	@ 000be34e 0028
.org 0xbe350
	bne.n 0xbe362	@ 000be350 07d1
.org 0xbe352
	ldr r0, [pc, #24]	@ 000be352 0648
.org 0xbe354
	ldrb r1, [r4, #13]	@ 000be354 617b
.org 0xbe356
	lsls r1, r1, #2	@ 000be356 8900
.org 0xbe358
	adds r1, r1, r0	@ 000be358 0918
.org 0xbe35a
	ldr r1, [r1, #0]	@ 000be35a 0968
.org 0xbe35c
	adds r0, r4, #0	@ 000be35c 201c
.org 0xbe35e
	bl 0x128f80	@ 000be35e 6af00ffe
.org 0xbe362
	pop {r4}	@ 000be362 10bc
.org 0xbe364
	pop {r0}	@ 000be364 01bc
.org 0xbe366
	bx r0	@ 000be366 0047
