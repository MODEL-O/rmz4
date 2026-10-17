@ FUN_080c4400  entry 0x080c4400  size 20
.thumb
.org 0xc4400
FUN_080c4400:
	push {lr}	@ 000c4400 00b5
.org 0xc4402
	ldr r2, [pc, #16]	@ 000c4402 044a
.org 0xc4404
	ldrb r1, [r0, #16]	@ 000c4404 017c
.org 0xc4406
	lsls r1, r1, #2	@ 000c4406 8900
.org 0xc4408
	adds r1, r1, r2	@ 000c4408 8918
.org 0xc440a
	ldr r1, [r1, #0]	@ 000c440a 0968
.org 0xc440c
	bl 0x128f80	@ 000c440c 64f0b8fd
.org 0xc4410
	pop {r0}	@ 000c4410 01bc
.org 0xc4412
	bx r0	@ 000c4412 0047
