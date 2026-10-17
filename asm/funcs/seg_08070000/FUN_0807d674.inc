@ FUN_0807d674  entry 0x0807d674  size 20
.thumb
.org 0x7d674
FUN_0807d674:
	push {lr}	@ 0007d674 00b5
.org 0x7d676
	ldr r2, [pc, #16]	@ 0007d676 044a
.org 0x7d678
	ldrb r1, [r0, #14]	@ 0007d678 817b
.org 0x7d67a
	lsls r1, r1, #2	@ 0007d67a 8900
.org 0x7d67c
	adds r1, r1, r2	@ 0007d67c 8918
.org 0x7d67e
	ldr r1, [r1, #0]	@ 0007d67e 0968
.org 0x7d680
	bl 0x128f80	@ 0007d680 abf07efc
.org 0x7d684
	pop {r0}	@ 0007d684 01bc
.org 0x7d686
	bx r0	@ 0007d686 0047
