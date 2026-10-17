@ FUN_080c0dec  entry 0x080c0dec  size 20
.thumb
.org 0xc0dec
FUN_080c0dec:
	push {lr}	@ 000c0dec 00b5
.org 0xc0dee
	ldr r2, [pc, #16]	@ 000c0dee 044a
.org 0xc0df0
	ldrb r1, [r0, #16]	@ 000c0df0 017c
.org 0xc0df2
	lsls r1, r1, #2	@ 000c0df2 8900
.org 0xc0df4
	adds r1, r1, r2	@ 000c0df4 8918
.org 0xc0df6
	ldr r1, [r1, #0]	@ 000c0df6 0968
.org 0xc0df8
	bl 0x128f80	@ 000c0df8 68f0c2f8
.org 0xc0dfc
	pop {r0}	@ 000c0dfc 01bc
.org 0xc0dfe
	bx r0	@ 000c0dfe 0047
