@ FUN_0806d234  entry 0x0806d234  size 86
.thumb
.org 0x6d234
FUN_0806d234:
	push {r4, lr}	@ 0006d234 10b5
.org 0x6d236
	adds r4, r0, #0	@ 0006d236 041c
.org 0x6d238
	adds r1, r4, #0	@ 0006d238 211c
.org 0x6d23a
	adds r1, #180	@ 0006d23a b431
.org 0x6d23c
	ldr r0, [r1, #0]	@ 0006d23c 0868
.org 0x6d23e
	cmp r0, #0	@ 0006d23e 0028
.org 0x6d240
	bne.n 0x6d274	@ 0006d240 18d1
.org 0x6d242
	ldr r0, [r1, #4]	@ 0006d242 4868
.org 0x6d244
	cmp r0, #0	@ 0006d244 0028
.org 0x6d246
	bne.n 0x6d274	@ 0006d246 15d1
.org 0x6d248
	ldr r0, [r1, #8]	@ 0006d248 8868
.org 0x6d24a
	cmp r0, #0	@ 0006d24a 0028
.org 0x6d24c
	bne.n 0x6d274	@ 0006d24c 12d1
.org 0x6d24e
	ldr r0, [r1, #12]	@ 0006d24e c868
.org 0x6d250
	cmp r0, #0	@ 0006d250 0028
.org 0x6d252
	bne.n 0x6d274	@ 0006d252 0fd1
.org 0x6d254
	ldr r1, [pc, #24]	@ 0006d254 0649
.org 0x6d256
	ldrb r0, [r4, #9]	@ 0006d256 607a
.org 0x6d258
	lsls r0, r0, #2	@ 0006d258 8000
.org 0x6d25a
	adds r0, r0, r1	@ 0006d25a 4018
.org 0x6d25c
	movs r1, #2	@ 0006d25c 0221
.org 0x6d25e
	str r1, [r4, #12]	@ 0006d25e e160
.org 0x6d260
	ldr r0, [r0, #0]	@ 0006d260 0068
.org 0x6d262
	ldr r0, [r0, #8]	@ 0006d262 8068
.org 0x6d264
	str r0, [r4, #20]	@ 0006d264 6061
.org 0x6d266
	adds r0, r4, #0	@ 0006d266 201c
.org 0x6d268
	bl 0x6d294	@ 0006d268 00f014f8
.org 0x6d26c
	b.n 0x6d28a	@ 0006d26c 0de0
.org 0x6d26e
	.byte 0x00	@ 0006d26e data
.org 0x6d26f
	.byte 0x00	@ 0006d26f data
.org 0x6d270
	.byte 0x70,0x7d,0x85,0x08	@ 0006d270 data
.org 0x6d274
	adds r0, r4, #0	@ 0006d274 201c
.org 0x6d276
	bl 0x1cff0	@ 0006d276 aff7bbfe
.org 0x6d27a
	ldr r0, [pc, #20]	@ 0006d27a 0548
.org 0x6d27c
	ldrb r1, [r4, #13]	@ 0006d27c 617b
.org 0x6d27e
	lsls r1, r1, #2	@ 0006d27e 8900
.org 0x6d280
	adds r1, r1, r0	@ 0006d280 0918
.org 0x6d282
	ldr r1, [r1, #0]	@ 0006d282 0968
.org 0x6d284
	adds r0, r4, #0	@ 0006d284 201c
.org 0x6d286
	bl 0x128f80	@ 0006d286 bbf07bfe
