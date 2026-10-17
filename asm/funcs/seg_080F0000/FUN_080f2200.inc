@ FUN_080f2200  entry 0x080f2200  size 20
.thumb
.org 0xf2200
FUN_080f2200:
	push {lr}	@ 000f2200 00b5
.org 0xf2202
	ldr r2, [pc, #16]	@ 000f2202 044a
.org 0xf2204
	ldrb r1, [r0, #16]	@ 000f2204 017c
.org 0xf2206
	lsls r1, r1, #2	@ 000f2206 8900
.org 0xf2208
	adds r1, r1, r2	@ 000f2208 8918
.org 0xf220a
	ldr r1, [r1, #0]	@ 000f220a 0968
.org 0xf220c
	bl 0x128f80	@ 000f220c 36f0b8fe
.org 0xf2210
	pop {r0}	@ 000f2210 01bc
.org 0xf2212
	bx r0	@ 000f2212 0047
