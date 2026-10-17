@ FUN_080c3a60  entry 0x080c3a60  size 20
.thumb
.org 0xc3a60
FUN_080c3a60:
	push {lr}	@ 000c3a60 00b5
.org 0xc3a62
	ldr r2, [pc, #16]	@ 000c3a62 044a
.org 0xc3a64
	ldrb r1, [r0, #16]	@ 000c3a64 017c
.org 0xc3a66
	lsls r1, r1, #2	@ 000c3a66 8900
.org 0xc3a68
	adds r1, r1, r2	@ 000c3a68 8918
.org 0xc3a6a
	ldr r1, [r1, #0]	@ 000c3a6a 0968
.org 0xc3a6c
	bl 0x128f80	@ 000c3a6c 65f088fa
.org 0xc3a70
	pop {r0}	@ 000c3a70 01bc
.org 0xc3a72
	bx r0	@ 000c3a72 0047
