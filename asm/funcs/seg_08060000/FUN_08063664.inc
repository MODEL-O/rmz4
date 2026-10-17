@ FUN_08063664  entry 0x08063664  size 20
.thumb
.org 0x63664
FUN_08063664:
	push {lr}	@ 00063664 00b5
.org 0x63666
	ldr r2, [pc, #16]	@ 00063666 044a
.org 0x63668
	ldrb r1, [r0, #14]	@ 00063668 817b
.org 0x6366a
	lsls r1, r1, #2	@ 0006366a 8900
.org 0x6366c
	adds r1, r1, r2	@ 0006366c 8918
.org 0x6366e
	ldr r1, [r1, #0]	@ 0006366e 0968
.org 0x63670
	bl 0x128f80	@ 00063670 c5f086fc
.org 0x63674
	pop {r0}	@ 00063674 01bc
.org 0x63676
	bx r0	@ 00063676 0047
