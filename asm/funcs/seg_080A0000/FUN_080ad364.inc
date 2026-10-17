@ FUN_080ad364  entry 0x080ad364  size 20
.thumb
.org 0xad364
FUN_080ad364:
	push {lr}	@ 000ad364 00b5
.org 0xad366
	ldr r2, [pc, #16]	@ 000ad366 044a
.org 0xad368
	ldrb r1, [r0, #16]	@ 000ad368 017c
.org 0xad36a
	lsls r1, r1, #2	@ 000ad36a 8900
.org 0xad36c
	adds r1, r1, r2	@ 000ad36c 8918
.org 0xad36e
	ldr r1, [r1, #0]	@ 000ad36e 0968
.org 0xad370
	bl 0x128f80	@ 000ad370 7bf006fe
.org 0xad374
	pop {r0}	@ 000ad374 01bc
.org 0xad376
	bx r0	@ 000ad376 0047
