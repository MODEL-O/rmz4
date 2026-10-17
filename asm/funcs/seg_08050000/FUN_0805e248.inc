@ FUN_0805e248  entry 0x0805e248  size 124
.thumb
.org 0x5e248
FUN_0805e248:
	push {r4, r5, lr}	@ 0005e248 30b5
.org 0x5e24a
	adds r5, r0, #0	@ 0005e24a 051c
.org 0x5e24c
	ldrb r0, [r5, #15]	@ 0005e24c e87b
.org 0x5e24e
	cmp r0, #0	@ 0005e24e 0028
.org 0x5e250
	bne.n 0x5e266	@ 0005e250 09d1
.org 0x5e252
	movs r0, #92	@ 0005e252 5c20
.org 0x5e254
	bl 0x2b10	@ 0005e254 a4f75cfc
.org 0x5e258
	adds r0, r5, #0	@ 0005e258 281c
.org 0x5e25a
	movs r1, #30	@ 0005e25a 1e21
.org 0x5e25c
	bl 0x5ee6c	@ 0005e25c 00f006fe
.org 0x5e260
	ldrb r0, [r5, #15]	@ 0005e260 e87b
.org 0x5e262
	adds r0, #1	@ 0005e262 0130
.org 0x5e264
	strb r0, [r5, #15]	@ 0005e264 e873
.org 0x5e266
	adds r0, r5, #0	@ 0005e266 281c
.org 0x5e268
	bl 0x1cff0	@ 0005e268 bef7c2fe
.org 0x5e26c
	adds r0, r5, #0	@ 0005e26c 281c
.org 0x5e26e
	adds r0, #116	@ 0005e26e 7430
.org 0x5e270
	ldr r4, [pc, #80]	@ 0005e270 144c
.org 0x5e272
	ldr r3, [pc, #84]	@ 0005e272 154b
.org 0x5e274
	adds r1, r5, #0	@ 0005e274 291c
.org 0x5e276
	adds r1, #184	@ 0005e276 b831
.org 0x5e278
	ldrb r2, [r1, #0]	@ 0005e278 0a78
.org 0x5e27a
	lsls r1, r2, #1	@ 0005e27a 5100
.org 0x5e27c
	adds r1, r1, r3	@ 0005e27c c918
.org 0x5e27e
	ldrh r1, [r1, #0]	@ 0005e27e 0988
.org 0x5e280
	lsls r1, r1, #2	@ 0005e280 8900
.org 0x5e282
	adds r1, r1, r4	@ 0005e282 0919
.org 0x5e284
	adds r3, r5, #0	@ 0005e284 2b1c
.org 0x5e286
	adds r3, #113	@ 0005e286 7133
.org 0x5e288
	movs r4, #0	@ 0005e288 0024
.org 0x5e28a
	ldrsb r4, [r3, r4]	@ 0005e28a 1c57
.org 0x5e28c
	ldr r1, [r1, #0]	@ 0005e28c 0968
.org 0x5e28e
	lsls r3, r4, #2	@ 0005e28e a300
.org 0x5e290
	adds r3, r3, r1	@ 0005e290 5b18
.org 0x5e292
	ldr r1, [pc, #56]	@ 0005e292 0e49
.org 0x5e294
	lsls r2, r2, #2	@ 0005e294 9200
.org 0x5e296
	adds r2, r2, r1	@ 0005e296 5218
.org 0x5e298
	ldr r1, [r2, #0]	@ 0005e298 1168
.org 0x5e29a
	adds r1, r1, r4	@ 0005e29a 0919
.org 0x5e29c
	ldrb r1, [r1, #0]	@ 0005e29c 0978
.org 0x5e29e
	lsls r2, r1, #1	@ 0005e29e 4a00
.org 0x5e2a0
	adds r2, r2, r1	@ 0005e2a0 5218
.org 0x5e2a2
	lsls r2, r2, #3	@ 0005e2a2 d200
.org 0x5e2a4
	ldr r1, [r3, #0]	@ 0005e2a4 1968
.org 0x5e2a6
	adds r1, r1, r2	@ 0005e2a6 8918
.org 0x5e2a8
	bl 0x5784	@ 0005e2a8 a7f76cfa
.org 0x5e2ac
	adds r0, r5, #0	@ 0005e2ac 281c
.org 0x5e2ae
	adds r0, #115	@ 0005e2ae 7330
.org 0x5e2b0
	ldrb r0, [r0, #0]	@ 0005e2b0 0078
.org 0x5e2b2
	cmp r0, #4	@ 0005e2b2 0428
.org 0x5e2b4
	bne.n 0x5e2be	@ 0005e2b4 03d1
.org 0x5e2b6
	movs r1, #0	@ 0005e2b6 0021
.org 0x5e2b8
	movs r0, #1	@ 0005e2b8 0120
.org 0x5e2ba
	strb r0, [r5, #14]	@ 0005e2ba a873
.org 0x5e2bc
	strb r1, [r5, #15]	@ 0005e2bc e973
.org 0x5e2be
	pop {r4, r5}	@ 0005e2be 30bc
.org 0x5e2c0
	pop {r0}	@ 0005e2c0 01bc
.org 0x5e2c2
	bx r0	@ 0005e2c2 0047
