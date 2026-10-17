@ FUN_080d8450  entry 0x080d8450  size 20
.thumb
.org 0xd8450
FUN_080d8450:
	push {lr}	@ 000d8450 00b5
.org 0xd8452
	ldr r2, [pc, #16]	@ 000d8452 044a
.org 0xd8454
	ldrb r1, [r0, #16]	@ 000d8454 017c
.org 0xd8456
	lsls r1, r1, #2	@ 000d8456 8900
.org 0xd8458
	adds r1, r1, r2	@ 000d8458 8918
.org 0xd845a
	ldr r1, [r1, #0]	@ 000d845a 0968
.org 0xd845c
	bl 0x128f80	@ 000d845c 50f090fd
.org 0xd8460
	pop {r0}	@ 000d8460 01bc
.org 0xd8462
	bx r0	@ 000d8462 0047
