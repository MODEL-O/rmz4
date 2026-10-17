@ FUN_080cd228  entry 0x080cd228  size 48
.thumb
.org 0xcd228
FUN_080cd228:
	push {lr}	@ 000cd228 00b5
.org 0xcd22a
	adds r2, r0, #0	@ 000cd22a 021c
.org 0xcd22c
	adds r0, #180	@ 000cd22c b430
.org 0xcd22e
	ldrb r0, [r0, #0]	@ 000cd22e 0078
.org 0xcd230
	cmp r0, #0	@ 000cd230 0028
.org 0xcd232
	beq.n 0xcd254	@ 000cd232 0fd0
.org 0xcd234
	ldr r1, [pc, #24]	@ 000cd234 0649
.org 0xcd236
	ldrb r0, [r2, #9]	@ 000cd236 507a
.org 0xcd238
	lsls r0, r0, #2	@ 000cd238 8000
.org 0xcd23a
	adds r0, r0, r1	@ 000cd23a 4018
.org 0xcd23c
	movs r1, #2	@ 000cd23c 0221
.org 0xcd23e
	str r1, [r2, #12]	@ 000cd23e d160
.org 0xcd240
	ldr r0, [r0, #0]	@ 000cd240 0068
.org 0xcd242
	ldr r0, [r0, #8]	@ 000cd242 8068
.org 0xcd244
	str r0, [r2, #20]	@ 000cd244 5061
.org 0xcd246
	adds r0, r2, #0	@ 000cd246 101c
.org 0xcd248
	bl 0xcd260	@ 000cd248 00f00af8
.org 0xcd24c
	b.n 0xcd25a	@ 000cd24c 05e0
.org 0xcd24e
	.byte 0x00	@ 000cd24e data
.org 0xcd24f
	.byte 0x00	@ 000cd24f data
.org 0xcd250
	.byte 0xf4,0x49,0x86,0x08	@ 000cd250 data
.org 0xcd254
	adds r0, r2, #0	@ 000cd254 101c
.org 0xcd256
	bl 0x1cff0	@ 000cd256 4ff7cbfe
