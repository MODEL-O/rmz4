@ FUN_0805a3d4  entry 0x0805a3d4  size 20
.thumb
.org 0x5a3d4
FUN_0805a3d4:
	push {lr}	@ 0005a3d4 00b5
.org 0x5a3d6
	ldr r2, [pc, #16]	@ 0005a3d6 044a
.org 0x5a3d8
	ldrb r1, [r0, #14]	@ 0005a3d8 817b
.org 0x5a3da
	lsls r1, r1, #2	@ 0005a3da 8900
.org 0x5a3dc
	adds r1, r1, r2	@ 0005a3dc 8918
.org 0x5a3de
	ldr r1, [r1, #0]	@ 0005a3de 0968
.org 0x5a3e0
	bl 0x128f80	@ 0005a3e0 cef0cefd
.org 0x5a3e4
	pop {r0}	@ 0005a3e4 01bc
.org 0x5a3e6
	bx r0	@ 0005a3e6 0047
