@ FUN_080e2efc  entry 0x080e2efc  size 20
.thumb
.org 0xe2efc
FUN_080e2efc:
	push {lr}	@ 000e2efc 00b5
.org 0xe2efe
	ldr r2, [pc, #16]	@ 000e2efe 044a
.org 0xe2f00
	ldrb r1, [r0, #16]	@ 000e2f00 017c
.org 0xe2f02
	lsls r1, r1, #2	@ 000e2f02 8900
.org 0xe2f04
	adds r1, r1, r2	@ 000e2f04 8918
.org 0xe2f06
	ldr r1, [r1, #0]	@ 000e2f06 0968
.org 0xe2f08
	bl 0x128f80	@ 000e2f08 46f03af8
.org 0xe2f0c
	pop {r0}	@ 000e2f0c 01bc
.org 0xe2f0e
	bx r0	@ 000e2f0e 0047
