@ FUN_080f0064  entry 0x080f0064  size 28
.thumb
.org 0xf0064
FUN_080f0064:
	push {lr}	@ 000f0064 00b5
.org 0xf0066
	ldr r2, [pc, #24]	@ 000f0066 064a
.org 0xf0068
	ldrb r1, [r0, #9]	@ 000f0068 417a
.org 0xf006a
	lsls r1, r1, #2	@ 000f006a 8900
.org 0xf006c
	adds r1, r1, r2	@ 000f006c 8918
.org 0xf006e
	movs r2, #1	@ 000f006e 0122
.org 0xf0070
	str r2, [r0, #12]	@ 000f0070 c260
.org 0xf0072
	ldr r1, [r1, #0]	@ 000f0072 0968
.org 0xf0074
	ldr r1, [r1, #4]	@ 000f0074 4968
.org 0xf0076
	str r1, [r0, #20]	@ 000f0076 4161
.org 0xf0078
	bl 0xed7c8	@ 000f0078 fdf7a6fb
.org 0xf007c
	pop {r0}	@ 000f007c 01bc
.org 0xf007e
	bx r0	@ 000f007e 0047
