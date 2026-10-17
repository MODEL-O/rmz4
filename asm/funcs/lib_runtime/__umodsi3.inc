@ __umodsi3  entry 0x08129198  size 192
.thumb
.org 0x129198
__umodsi3:
	cmp r1, #0	@ 00129198 0029
.org 0x12919a
	beq.n 0x12924e	@ 0012919a 58d0
.org 0x12919c
	movs r3, #1	@ 0012919c 0123
.org 0x12919e
	cmp r0, r1	@ 0012919e 8842
.org 0x1291a0
	bcs.n 0x1291a4	@ 001291a0 00d2
.org 0x1291a2
	mov pc, lr	@ 001291a2 f746
.org 0x1291a4
	push {r4}	@ 001291a4 10b4
.org 0x1291a6
	movs r4, #1	@ 001291a6 0124
.org 0x1291a8
	lsls r4, r4, #28	@ 001291a8 2407
.org 0x1291aa
	cmp r1, r4	@ 001291aa a142
.org 0x1291ac
	bcs.n 0x1291b8	@ 001291ac 04d2
.org 0x1291ae
	cmp r1, r0	@ 001291ae 8142
.org 0x1291b0
	bcs.n 0x1291b8	@ 001291b0 02d2
.org 0x1291b2
	lsls r1, r1, #4	@ 001291b2 0901
.org 0x1291b4
	lsls r3, r3, #4	@ 001291b4 1b01
.org 0x1291b6
	b.n 0x1291aa	@ 001291b6 f8e7
.org 0x1291b8
	lsls r4, r4, #3	@ 001291b8 e400
.org 0x1291ba
	cmp r1, r4	@ 001291ba a142
.org 0x1291bc
	bcs.n 0x1291c8	@ 001291bc 04d2
.org 0x1291be
	cmp r1, r0	@ 001291be 8142
.org 0x1291c0
	bcs.n 0x1291c8	@ 001291c0 02d2
.org 0x1291c2
	lsls r1, r1, #1	@ 001291c2 4900
.org 0x1291c4
	lsls r3, r3, #1	@ 001291c4 5b00
.org 0x1291c6
	b.n 0x1291ba	@ 001291c6 f8e7
.org 0x1291c8
	movs r2, #0	@ 001291c8 0022
.org 0x1291ca
	cmp r0, r1	@ 001291ca 8842
.org 0x1291cc
	bcc.n 0x1291d0	@ 001291cc 00d3
.org 0x1291ce
	subs r0, r0, r1	@ 001291ce 401a
.org 0x1291d0
	lsrs r4, r1, #1	@ 001291d0 4c08
.org 0x1291d2
	cmp r0, r4	@ 001291d2 a042
.org 0x1291d4
	bcc.n 0x1291e2	@ 001291d4 05d3
.org 0x1291d6
	subs r0, r0, r4	@ 001291d6 001b
.org 0x1291d8
	mov ip, r3	@ 001291d8 9c46
.org 0x1291da
	movs r4, #1	@ 001291da 0124
.org 0x1291dc
	rors r3, r4	@ 001291dc e341
.org 0x1291de
	orrs r2, r3	@ 001291de 1a43
.org 0x1291e0
	mov r3, ip	@ 001291e0 6346
.org 0x1291e2
	lsrs r4, r1, #2	@ 001291e2 8c08
.org 0x1291e4
	cmp r0, r4	@ 001291e4 a042
.org 0x1291e6
	bcc.n 0x1291f4	@ 001291e6 05d3
.org 0x1291e8
	subs r0, r0, r4	@ 001291e8 001b
.org 0x1291ea
	mov ip, r3	@ 001291ea 9c46
.org 0x1291ec
	movs r4, #2	@ 001291ec 0224
.org 0x1291ee
	rors r3, r4	@ 001291ee e341
.org 0x1291f0
	orrs r2, r3	@ 001291f0 1a43
.org 0x1291f2
	mov r3, ip	@ 001291f2 6346
.org 0x1291f4
	lsrs r4, r1, #3	@ 001291f4 cc08
.org 0x1291f6
	cmp r0, r4	@ 001291f6 a042
.org 0x1291f8
	bcc.n 0x129206	@ 001291f8 05d3
.org 0x1291fa
	subs r0, r0, r4	@ 001291fa 001b
.org 0x1291fc
	mov ip, r3	@ 001291fc 9c46
.org 0x1291fe
	movs r4, #3	@ 001291fe 0324
.org 0x129200
	rors r3, r4	@ 00129200 e341
.org 0x129202
	orrs r2, r3	@ 00129202 1a43
.org 0x129204
	mov r3, ip	@ 00129204 6346
.org 0x129206
	mov ip, r3	@ 00129206 9c46
.org 0x129208
	cmp r0, #0	@ 00129208 0028
.org 0x12920a
	beq.n 0x129214	@ 0012920a 03d0
.org 0x12920c
	lsrs r3, r3, #4	@ 0012920c 1b09
.org 0x12920e
	beq.n 0x129214	@ 0012920e 01d0
.org 0x129210
	lsrs r1, r1, #4	@ 00129210 0909
.org 0x129212
	b.n 0x1291c8	@ 00129212 d9e7
.org 0x129214
	movs r4, #14	@ 00129214 0e24
.org 0x129216
	lsls r4, r4, #28	@ 00129216 2407
.org 0x129218
	ands r2, r4	@ 00129218 2240
.org 0x12921a
	bne.n 0x129220	@ 0012921a 01d1
.org 0x12921c
	pop {r4}	@ 0012921c 10bc
.org 0x12921e
	mov pc, lr	@ 0012921e f746
.org 0x129220
	mov r3, ip	@ 00129220 6346
.org 0x129222
	movs r4, #3	@ 00129222 0324
.org 0x129224
	rors r3, r4	@ 00129224 e341
.org 0x129226
	tst r2, r3	@ 00129226 1a42
.org 0x129228
	beq.n 0x12922e	@ 00129228 01d0
.org 0x12922a
	lsrs r4, r1, #3	@ 0012922a cc08
.org 0x12922c
	adds r0, r0, r4	@ 0012922c 0019
.org 0x12922e
	mov r3, ip	@ 0012922e 6346
.org 0x129230
	movs r4, #2	@ 00129230 0224
.org 0x129232
	rors r3, r4	@ 00129232 e341
.org 0x129234
	tst r2, r3	@ 00129234 1a42
.org 0x129236
	beq.n 0x12923c	@ 00129236 01d0
.org 0x129238
	lsrs r4, r1, #2	@ 00129238 8c08
.org 0x12923a
	adds r0, r0, r4	@ 0012923a 0019
.org 0x12923c
	mov r3, ip	@ 0012923c 6346
.org 0x12923e
	movs r4, #1	@ 0012923e 0124
.org 0x129240
	rors r3, r4	@ 00129240 e341
.org 0x129242
	tst r2, r3	@ 00129242 1a42
.org 0x129244
	beq.n 0x12924a	@ 00129244 01d0
.org 0x129246
	lsrs r4, r1, #1	@ 00129246 4c08
.org 0x129248
	adds r0, r0, r4	@ 00129248 0019
.org 0x12924a
	pop {r4}	@ 0012924a 10bc
.org 0x12924c
	mov pc, lr	@ 0012924c f746
.org 0x12924e
	push {lr}	@ 0012924e 00b5
.org 0x129250
	bl 0x12904c	@ 00129250 fff7fcfe
.org 0x129254
	movs r0, #0	@ 00129254 0020
.org 0x129256
	pop {pc}	@ 00129256 00bd
