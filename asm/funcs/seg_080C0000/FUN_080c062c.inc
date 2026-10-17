@ FUN_080c062c  entry 0x080c062c  size 20
.thumb
.org 0xc062c
FUN_080c062c:
	push {lr}	@ 000c062c 00b5
.org 0xc062e
	ldr r2, [pc, #16]	@ 000c062e 044a
.org 0xc0630
	ldrb r1, [r0, #16]	@ 000c0630 017c
.org 0xc0632
	lsls r1, r1, #2	@ 000c0632 8900
.org 0xc0634
	adds r1, r1, r2	@ 000c0634 8918
.org 0xc0636
	ldr r1, [r1, #0]	@ 000c0636 0968
.org 0xc0638
	bl 0x128f80	@ 000c0638 68f0a2fc
.org 0xc063c
	pop {r0}	@ 000c063c 01bc
.org 0xc063e
	bx r0	@ 000c063e 0047
