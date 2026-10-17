@ FUN_080b0330  entry 0x080b0330  size 40
.thumb
.org 0xb0330
FUN_080b0330:
	push {lr}	@ 000b0330 00b5
.org 0xb0332
	ldr r2, [r0, #84]	@ 000b0332 426d
.org 0xb0334
	ldr r1, [r0, #88]	@ 000b0334 816d
.org 0xb0336
	adds r0, r2, #0	@ 000b0336 101c
.org 0xb0338
	bl 0x7020	@ 000b0338 56f772fe
.org 0xb033c
	movs r1, #128	@ 000b033c 8021
.org 0xb033e
	lsls r1, r1, #8	@ 000b033e 0902
.org 0xb0340
	ands r1, r0	@ 000b0340 0140
.org 0xb0342
	cmp r1, #0	@ 000b0342 0029
.org 0xb0344
	bne.n 0xb034e	@ 000b0344 03d1
.org 0xb0346
	movs r0, #53	@ 000b0346 3520
.org 0xb0348
	bl 0x2b10	@ 000b0348 52f7e2fb
.org 0xb034c
	b.n 0xb0354	@ 000b034c 02e0
.org 0xb034e
	movs r0, #49	@ 000b034e 3120
.org 0xb0350
	bl 0x2b10	@ 000b0350 52f7defb
.org 0xb0354
	pop {r0}	@ 000b0354 01bc
.org 0xb0356
	bx r0	@ 000b0356 0047
