@ FUN_0807e064  entry 0x0807e064  size 20
.thumb
.org 0x7e064
FUN_0807e064:
	push {lr}	@ 0007e064 00b5
.org 0x7e066
	ldr r2, [pc, #16]	@ 0007e066 044a
.org 0x7e068
	ldrb r1, [r0, #14]	@ 0007e068 817b
.org 0x7e06a
	lsls r1, r1, #2	@ 0007e06a 8900
.org 0x7e06c
	adds r1, r1, r2	@ 0007e06c 8918
.org 0x7e06e
	ldr r1, [r1, #0]	@ 0007e06e 0968
.org 0x7e070
	bl 0x128f80	@ 0007e070 aaf086ff
.org 0x7e074
	pop {r0}	@ 0007e074 01bc
.org 0x7e076
	bx r0	@ 0007e076 0047
