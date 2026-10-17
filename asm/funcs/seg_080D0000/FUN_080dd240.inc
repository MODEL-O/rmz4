@ FUN_080dd240  entry 0x080dd240  size 64
.thumb
.org 0xdd240
FUN_080dd240:
	push {r4, r5, lr}	@ 000dd240 30b5
.org 0xdd242
	adds r5, r0, #0	@ 000dd242 051c
.org 0xdd244
	ldr r4, [r5, #40]	@ 000dd244 ac6a
.org 0xdd246
	bl 0x1cff0	@ 000dd246 3ff7d3fe
.org 0xdd24a
	ldr r0, [r4, #84]	@ 000dd24a 606d
.org 0xdd24c
	ldr r1, [r4, #88]	@ 000dd24c a16d
.org 0xdd24e
	str r0, [r5, #84]	@ 000dd24e 6865
.org 0xdd250
	str r1, [r5, #88]	@ 000dd250 a965
.org 0xdd252
	ldrb r0, [r4, #30]	@ 000dd252 a07f
.org 0xdd254
	lsls r0, r0, #8	@ 000dd254 0002
.org 0xdd256
	adds r4, #112	@ 000dd256 7034
.org 0xdd258
	ldrb r1, [r4, #0]	@ 000dd258 2178
.org 0xdd25a
	orrs r0, r1	@ 000dd25a 0843
.org 0xdd25c
	ldr r1, [pc, #32]	@ 000dd25c 0849
.org 0xdd25e
	cmp r0, r1	@ 000dd25e 8842
.org 0xdd260
	beq.n 0xdd27a	@ 000dd260 0bd0
.org 0xdd262
	ldr r1, [pc, #32]	@ 000dd262 0849
.org 0xdd264
	ldrb r0, [r5, #9]	@ 000dd264 687a
.org 0xdd266
	lsls r0, r0, #2	@ 000dd266 8000
.org 0xdd268
	adds r0, r0, r1	@ 000dd268 4018
.org 0xdd26a
	movs r1, #2	@ 000dd26a 0221
.org 0xdd26c
	str r1, [r5, #12]	@ 000dd26c e960
.org 0xdd26e
	ldr r0, [r0, #0]	@ 000dd26e 0068
.org 0xdd270
	ldr r0, [r0, #8]	@ 000dd270 8068
.org 0xdd272
	str r0, [r5, #20]	@ 000dd272 6861
.org 0xdd274
	adds r0, r5, #0	@ 000dd274 281c
.org 0xdd276
	bl 0xdcdf0	@ 000dd276 fff7bbfd
.org 0xdd27a
	pop {r4, r5}	@ 000dd27a 30bc
.org 0xdd27c
	pop {r0}	@ 000dd27c 01bc
.org 0xdd27e
	bx r0	@ 000dd27e 0047
