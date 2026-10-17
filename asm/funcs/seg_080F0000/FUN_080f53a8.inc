@ FUN_080f53a8  entry 0x080f53a8  size 20
.thumb
.org 0xf53a8
FUN_080f53a8:
	push {lr}	@ 000f53a8 00b5
.org 0xf53aa
	ldr r2, [pc, #16]	@ 000f53aa 044a
.org 0xf53ac
	ldrb r1, [r0, #16]	@ 000f53ac 017c
.org 0xf53ae
	lsls r1, r1, #2	@ 000f53ae 8900
.org 0xf53b0
	adds r1, r1, r2	@ 000f53b0 8918
.org 0xf53b2
	ldr r1, [r1, #0]	@ 000f53b2 0968
.org 0xf53b4
	bl 0x128f80	@ 000f53b4 33f0e4fd
.org 0xf53b8
	pop {r0}	@ 000f53b8 01bc
.org 0xf53ba
	bx r0	@ 000f53ba 0047
