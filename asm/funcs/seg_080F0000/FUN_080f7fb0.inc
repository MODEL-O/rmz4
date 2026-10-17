@ FUN_080f7fb0  entry 0x080f7fb0  size 20
.thumb
.org 0xf7fb0
FUN_080f7fb0:
	push {lr}	@ 000f7fb0 00b5
.org 0xf7fb2
	ldr r2, [pc, #16]	@ 000f7fb2 044a
.org 0xf7fb4
	ldrb r1, [r0, #16]	@ 000f7fb4 017c
.org 0xf7fb6
	lsls r1, r1, #2	@ 000f7fb6 8900
.org 0xf7fb8
	adds r1, r1, r2	@ 000f7fb8 8918
.org 0xf7fba
	ldr r1, [r1, #0]	@ 000f7fba 0968
.org 0xf7fbc
	bl 0x128f80	@ 000f7fbc 30f0e0ff
.org 0xf7fc0
	pop {r0}	@ 000f7fc0 01bc
.org 0xf7fc2
	bx r0	@ 000f7fc2 0047
