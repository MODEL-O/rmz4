@ FUN_08092cdc  entry 0x08092cdc  size 20
.thumb
.org 0x92cdc
FUN_08092cdc:
	push {lr}	@ 00092cdc 00b5
.org 0x92cde
	ldr r2, [pc, #16]	@ 00092cde 044a
.org 0x92ce0
	ldrb r1, [r0, #16]	@ 00092ce0 017c
.org 0x92ce2
	lsls r1, r1, #2	@ 00092ce2 8900
.org 0x92ce4
	adds r1, r1, r2	@ 00092ce4 8918
.org 0x92ce6
	ldr r1, [r1, #0]	@ 00092ce6 0968
.org 0x92ce8
	bl 0x128f80	@ 00092ce8 96f04af9
.org 0x92cec
	pop {r0}	@ 00092cec 01bc
.org 0x92cee
	bx r0	@ 00092cee 0047
