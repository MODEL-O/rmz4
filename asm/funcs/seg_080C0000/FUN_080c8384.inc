@ FUN_080c8384  entry 0x080c8384  size 20
.thumb
.org 0xc8384
FUN_080c8384:
	push {lr}	@ 000c8384 00b5
.org 0xc8386
	ldr r2, [pc, #16]	@ 000c8386 044a
.org 0xc8388
	ldrb r1, [r0, #16]	@ 000c8388 017c
.org 0xc838a
	lsls r1, r1, #2	@ 000c838a 8900
.org 0xc838c
	adds r1, r1, r2	@ 000c838c 8918
.org 0xc838e
	ldr r1, [r1, #0]	@ 000c838e 0968
.org 0xc8390
	bl 0x128f80	@ 000c8390 60f0f6fd
.org 0xc8394
	pop {r0}	@ 000c8394 01bc
.org 0xc8396
	bx r0	@ 000c8396 0047
