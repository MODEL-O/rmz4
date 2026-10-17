@ FUN_0810ad88  entry 0x0810ad88  size 20
.thumb
.org 0x10ad88
FUN_0810ad88:
	push {lr}	@ 0010ad88 00b5
.org 0x10ad8a
	ldr r2, [pc, #16]	@ 0010ad8a 044a
.org 0x10ad8c
	ldrb r1, [r0, #16]	@ 0010ad8c 017c
.org 0x10ad8e
	lsls r1, r1, #2	@ 0010ad8e 8900
.org 0x10ad90
	adds r1, r1, r2	@ 0010ad90 8918
.org 0x10ad92
	ldr r1, [r1, #0]	@ 0010ad92 0968
.org 0x10ad94
	bl 0x128f80	@ 0010ad94 1ef0f4f8
.org 0x10ad98
	pop {r0}	@ 0010ad98 01bc
.org 0x10ad9a
	bx r0	@ 0010ad9a 0047
