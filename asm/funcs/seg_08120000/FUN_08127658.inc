@ FUN_08127658  entry 0x08127658  size 10
.thumb
.org 0x127658
FUN_08127658:
	ldr r2, [r1, #64]	@ 00127658 0a6c
.org 0x12765a
	adds r3, r2, #1	@ 0012765a 531c
.org 0x12765c
	str r3, [r1, #64]	@ 0012765c 0b64
.org 0x12765e
	ldrb r3, [r2, #0]	@ 0012765e 1378
.org 0x127660
	bx lr	@ 00127660 7047
