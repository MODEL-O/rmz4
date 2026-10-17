@ FUN_080c4530  entry 0x080c4530  size 20
.thumb
.org 0xc4530
FUN_080c4530:
	push {lr}	@ 000c4530 00b5
.org 0xc4532
	ldr r2, [pc, #16]	@ 000c4532 044a
.org 0xc4534
	ldrb r1, [r0, #16]	@ 000c4534 017c
.org 0xc4536
	lsls r1, r1, #2	@ 000c4536 8900
.org 0xc4538
	adds r1, r1, r2	@ 000c4538 8918
.org 0xc453a
	ldr r1, [r1, #0]	@ 000c453a 0968
.org 0xc453c
	bl 0x128f80	@ 000c453c 64f020fd
.org 0xc4540
	pop {r0}	@ 000c4540 01bc
.org 0xc4542
	bx r0	@ 000c4542 0047
