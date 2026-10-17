@ FUN_080ca268  entry 0x080ca268  size 46
.thumb
.org 0xca268
FUN_080ca268:
	push {lr}	@ 000ca268 00b5
.org 0xca26a
	adds r2, r0, #0	@ 000ca26a 021c
.org 0xca26c
	ldrb r3, [r2, #14]	@ 000ca26c 937b
.org 0xca26e
	cmp r3, #0	@ 000ca26e 002b
.org 0xca270
	bne.n 0xca280	@ 000ca270 06d1
.org 0xca272
	ldrb r0, [r2, #17]	@ 000ca272 507c
.org 0xca274
	movs r1, #3	@ 000ca274 0321
.org 0xca276
	bics r1, r0	@ 000ca276 8143
.org 0xca278
	lsls r1, r1, #2	@ 000ca278 8900
.org 0xca27a
	strb r1, [r2, #19]	@ 000ca27a d174
.org 0xca27c
	adds r0, r3, #1	@ 000ca27c 581c
.org 0xca27e
	strb r0, [r2, #14]	@ 000ca27e 9073
.org 0xca280
	ldrb r0, [r2, #19]	@ 000ca280 d07c
.org 0xca282
	adds r1, r0, #0	@ 000ca282 011c
.org 0xca284
	cmp r1, #0	@ 000ca284 0029
.org 0xca286
	bne.n 0xca28e	@ 000ca286 02d1
.org 0xca288
	strb r1, [r2, #13]	@ 000ca288 5173
.org 0xca28a
	strb r1, [r2, #14]	@ 000ca28a 9173
.org 0xca28c
	b.n 0xca292	@ 000ca28c 01e0
.org 0xca28e
	subs r0, #1	@ 000ca28e 0138
.org 0xca290
	strb r0, [r2, #19]	@ 000ca290 d074
.org 0xca292
	pop {r0}	@ 000ca292 01bc
.org 0xca294
	bx r0	@ 000ca294 0047
