@ FUN_080c1b78  entry 0x080c1b78  size 20
.thumb
.org 0xc1b78
FUN_080c1b78:
	push {lr}	@ 000c1b78 00b5
.org 0xc1b7a
	ldr r2, [pc, #16]	@ 000c1b7a 044a
.org 0xc1b7c
	ldrb r1, [r0, #16]	@ 000c1b7c 017c
.org 0xc1b7e
	lsls r1, r1, #2	@ 000c1b7e 8900
.org 0xc1b80
	adds r1, r1, r2	@ 000c1b80 8918
.org 0xc1b82
	ldr r1, [r1, #0]	@ 000c1b82 0968
.org 0xc1b84
	bl 0x128f80	@ 000c1b84 67f0fcf9
.org 0xc1b88
	pop {r0}	@ 000c1b88 01bc
.org 0xc1b8a
	bx r0	@ 000c1b8a 0047
