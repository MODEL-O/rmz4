@ FUN_0805524c  entry 0x0805524c  size 28
.thumb
.org 0x5524c
FUN_0805524c:
	push {lr}	@ 0005524c 00b5
.org 0x5524e
	sub sp, #8	@ 0005524e 82b0
.org 0x55250
	ldr r1, [r0, #84]	@ 00055250 416d
.org 0x55252
	str r1, [sp, #0]	@ 00055252 0091
.org 0x55254
	ldr r0, [r0, #88]	@ 00055254 806d
.org 0x55256
	ldr r1, [pc, #16]	@ 00055256 0449
.org 0x55258
	adds r0, r0, r1	@ 00055258 4018
.org 0x5525a
	str r0, [sp, #4]	@ 0005525a 0190
.org 0x5525c
	mov r0, sp	@ 0005525c 6846
.org 0x5525e
	bl 0xd7e4	@ 0005525e b8f7c1fa
.org 0x55262
	add sp, #8	@ 00055262 02b0
.org 0x55264
	pop {r0}	@ 00055264 01bc
.org 0x55266
	bx r0	@ 00055266 0047
