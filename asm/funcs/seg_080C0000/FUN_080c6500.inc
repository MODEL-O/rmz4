@ FUN_080c6500  entry 0x080c6500  size 20
.thumb
.org 0xc6500
FUN_080c6500:
	push {lr}	@ 000c6500 00b5
.org 0xc6502
	ldr r2, [pc, #16]	@ 000c6502 044a
.org 0xc6504
	ldrb r1, [r0, #16]	@ 000c6504 017c
.org 0xc6506
	lsls r1, r1, #2	@ 000c6506 8900
.org 0xc6508
	adds r1, r1, r2	@ 000c6508 8918
.org 0xc650a
	ldr r1, [r1, #0]	@ 000c650a 0968
.org 0xc650c
	bl 0x128f80	@ 000c650c 62f038fd
.org 0xc6510
	pop {r0}	@ 000c6510 01bc
.org 0xc6512
	bx r0	@ 000c6512 0047
