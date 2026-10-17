@ FUN_08055ef4  entry 0x08055ef4  size 20
.thumb
.org 0x55ef4
FUN_08055ef4:
	push {lr}	@ 00055ef4 00b5
.org 0x55ef6
	ldr r2, [pc, #16]	@ 00055ef6 044a
.org 0x55ef8
	ldrb r1, [r0, #14]	@ 00055ef8 817b
.org 0x55efa
	lsls r1, r1, #2	@ 00055efa 8900
.org 0x55efc
	adds r1, r1, r2	@ 00055efc 8918
.org 0x55efe
	ldr r1, [r1, #0]	@ 00055efe 0968
.org 0x55f00
	bl 0x128f80	@ 00055f00 d3f03ef8
.org 0x55f04
	pop {r0}	@ 00055f04 01bc
.org 0x55f06
	bx r0	@ 00055f06 0047
