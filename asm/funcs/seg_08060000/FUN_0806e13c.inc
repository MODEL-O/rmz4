@ FUN_0806e13c  entry 0x0806e13c  size 20
.thumb
.org 0x6e13c
FUN_0806e13c:
	push {lr}	@ 0006e13c 00b5
.org 0x6e13e
	ldr r2, [pc, #16]	@ 0006e13e 044a
.org 0x6e140
	ldrb r1, [r0, #14]	@ 0006e140 817b
.org 0x6e142
	lsls r1, r1, #2	@ 0006e142 8900
.org 0x6e144
	adds r1, r1, r2	@ 0006e144 8918
.org 0x6e146
	ldr r1, [r1, #0]	@ 0006e146 0968
.org 0x6e148
	bl 0x128f80	@ 0006e148 baf01aff
.org 0x6e14c
	pop {r0}	@ 0006e14c 01bc
.org 0x6e14e
	bx r0	@ 0006e14e 0047
