@ FUN_08070538  entry 0x08070538  size 20
.thumb
.org 0x70538
FUN_08070538:
	push {lr}	@ 00070538 00b5
.org 0x7053a
	ldr r2, [pc, #16]	@ 0007053a 044a
.org 0x7053c
	ldrb r1, [r0, #14]	@ 0007053c 817b
.org 0x7053e
	lsls r1, r1, #2	@ 0007053e 8900
.org 0x70540
	adds r1, r1, r2	@ 00070540 8918
.org 0x70542
	ldr r1, [r1, #0]	@ 00070542 0968
.org 0x70544
	bl 0x128f80	@ 00070544 b8f01cfd
.org 0x70548
	pop {r0}	@ 00070548 01bc
.org 0x7054a
	bx r0	@ 0007054a 0047
