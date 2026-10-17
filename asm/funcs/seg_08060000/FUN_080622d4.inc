@ FUN_080622d4  entry 0x080622d4  size 20
.thumb
.org 0x622d4
FUN_080622d4:
	push {lr}	@ 000622d4 00b5
.org 0x622d6
	ldr r2, [pc, #16]	@ 000622d6 044a
.org 0x622d8
	ldrb r1, [r0, #14]	@ 000622d8 817b
.org 0x622da
	lsls r1, r1, #2	@ 000622da 8900
.org 0x622dc
	adds r1, r1, r2	@ 000622dc 8918
.org 0x622de
	ldr r1, [r1, #0]	@ 000622de 0968
.org 0x622e0
	bl 0x128f80	@ 000622e0 c6f04efe
.org 0x622e4
	pop {r0}	@ 000622e4 01bc
.org 0x622e6
	bx r0	@ 000622e6 0047
