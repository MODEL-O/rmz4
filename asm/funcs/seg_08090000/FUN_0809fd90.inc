@ FUN_0809fd90  entry 0x0809fd90  size 20
.thumb
.org 0x9fd90
FUN_0809fd90:
	push {lr}	@ 0009fd90 00b5
.org 0x9fd92
	ldr r2, [pc, #16]	@ 0009fd92 044a
.org 0x9fd94
	ldrb r1, [r0, #16]	@ 0009fd94 017c
.org 0x9fd96
	lsls r1, r1, #2	@ 0009fd96 8900
.org 0x9fd98
	adds r1, r1, r2	@ 0009fd98 8918
.org 0x9fd9a
	ldr r1, [r1, #0]	@ 0009fd9a 0968
.org 0x9fd9c
	bl 0x128f80	@ 0009fd9c 89f0f0f8
.org 0x9fda0
	pop {r0}	@ 0009fda0 01bc
.org 0x9fda2
	bx r0	@ 0009fda2 0047
