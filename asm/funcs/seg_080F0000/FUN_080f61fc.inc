@ FUN_080f61fc  entry 0x080f61fc  size 20
.thumb
.org 0xf61fc
FUN_080f61fc:
	push {lr}	@ 000f61fc 00b5
.org 0xf61fe
	ldr r2, [pc, #16]	@ 000f61fe 044a
.org 0xf6200
	ldrb r1, [r0, #16]	@ 000f6200 017c
.org 0xf6202
	lsls r1, r1, #2	@ 000f6202 8900
.org 0xf6204
	adds r1, r1, r2	@ 000f6204 8918
.org 0xf6206
	ldr r1, [r1, #0]	@ 000f6206 0968
.org 0xf6208
	bl 0x128f80	@ 000f6208 32f0bafe
.org 0xf620c
	pop {r0}	@ 000f620c 01bc
.org 0xf620e
	bx r0	@ 000f620e 0047
