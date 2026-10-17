@ FUN_080c4000  entry 0x080c4000  size 20
.thumb
.org 0xc4000
FUN_080c4000:
	push {lr}	@ 000c4000 00b5
.org 0xc4002
	ldr r2, [pc, #16]	@ 000c4002 044a
.org 0xc4004
	ldrb r1, [r0, #16]	@ 000c4004 017c
.org 0xc4006
	lsls r1, r1, #2	@ 000c4006 8900
.org 0xc4008
	adds r1, r1, r2	@ 000c4008 8918
.org 0xc400a
	ldr r1, [r1, #0]	@ 000c400a 0968
.org 0xc400c
	bl 0x128f80	@ 000c400c 64f0b8ff
.org 0xc4010
	pop {r0}	@ 000c4010 01bc
.org 0xc4012
	bx r0	@ 000c4012 0047
