@ FUN_080ff11c  entry 0x080ff11c  size 20
.thumb
.org 0xff11c
FUN_080ff11c:
	push {lr}	@ 000ff11c 00b5
.org 0xff11e
	ldr r2, [pc, #16]	@ 000ff11e 044a
.org 0xff120
	ldrb r1, [r0, #16]	@ 000ff120 017c
.org 0xff122
	lsls r1, r1, #2	@ 000ff122 8900
.org 0xff124
	adds r1, r1, r2	@ 000ff124 8918
.org 0xff126
	ldr r1, [r1, #0]	@ 000ff126 0968
.org 0xff128
	bl 0x128f80	@ 000ff128 29f02aff
.org 0xff12c
	pop {r0}	@ 000ff12c 01bc
.org 0xff12e
	bx r0	@ 000ff12e 0047
