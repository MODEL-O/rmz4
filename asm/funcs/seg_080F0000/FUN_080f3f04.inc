@ FUN_080f3f04  entry 0x080f3f04  size 20
.thumb
.org 0xf3f04
FUN_080f3f04:
	push {lr}	@ 000f3f04 00b5
.org 0xf3f06
	ldr r2, [pc, #16]	@ 000f3f06 044a
.org 0xf3f08
	ldrb r1, [r0, #16]	@ 000f3f08 017c
.org 0xf3f0a
	lsls r1, r1, #2	@ 000f3f0a 8900
.org 0xf3f0c
	adds r1, r1, r2	@ 000f3f0c 8918
.org 0xf3f0e
	ldr r1, [r1, #0]	@ 000f3f0e 0968
.org 0xf3f10
	bl 0x128f80	@ 000f3f10 35f036f8
.org 0xf3f14
	pop {r0}	@ 000f3f14 01bc
.org 0xf3f16
	bx r0	@ 000f3f16 0047
