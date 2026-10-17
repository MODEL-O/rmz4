@ FUN_08128238  entry 0x08128238  size 104
.thumb
.org 0x128238
FUN_08128238:
	push {r4, lr}	@ 00128238 10b5
.org 0x12823a
	adds r1, r0, #0	@ 0012823a 011c
.org 0x12823c
	ldrb r0, [r1, #2]	@ 0012823c 8878
.org 0x12823e
	lsls r2, r0, #24	@ 0012823e 0206
.org 0x128240
	lsrs r4, r2, #24	@ 00128240 140e
.org 0x128242
	ldrb r3, [r1, #3]	@ 00128242 cb78
.org 0x128244
	lsls r0, r3, #24	@ 00128244 1806
.org 0x128246
	lsrs r3, r0, #24	@ 00128246 030e
.org 0x128248
	cmp r4, r3	@ 00128248 9c42
.org 0x12824a
	bcc.n 0x128258	@ 0012824a 05d3
.org 0x12824c
	lsrs r0, r2, #25	@ 0012824c 500e
.org 0x12824e
	cmp r0, r3	@ 0012824e 9842
.org 0x128250
	bcc.n 0x128264	@ 00128250 08d3
.org 0x128252
	movs r0, #15	@ 00128252 0f20
.org 0x128254
	strb r0, [r1, #27]	@ 00128254 c876
.org 0x128256
	b.n 0x128272	@ 00128256 0ce0
.org 0x128258
	lsrs r0, r0, #25	@ 00128258 400e
.org 0x12825a
	cmp r0, r4	@ 0012825a a042
.org 0x12825c
	bcc.n 0x128264	@ 0012825c 02d3
.org 0x12825e
	movs r0, #240	@ 0012825e f020
.org 0x128260
	strb r0, [r1, #27]	@ 00128260 c876
.org 0x128262
	b.n 0x128272	@ 00128262 06e0
.org 0x128264
	movs r0, #255	@ 00128264 ff20
.org 0x128266
	strb r0, [r1, #27]	@ 00128266 c876
.org 0x128268
	ldrb r2, [r1, #3]	@ 00128268 ca78
.org 0x12826a
	ldrb r3, [r1, #2]	@ 0012826a 8b78
.org 0x12826c
	adds r0, r2, r3	@ 0012826c d018
.org 0x12826e
	lsrs r0, r0, #4	@ 0012826e 0009
.org 0x128270
	b.n 0x128282	@ 00128270 07e0
.org 0x128272
	ldrb r2, [r1, #3]	@ 00128272 ca78
.org 0x128274
	ldrb r3, [r1, #2]	@ 00128274 8b78
.org 0x128276
	adds r0, r2, r3	@ 00128276 d018
.org 0x128278
	lsrs r0, r0, #4	@ 00128278 0009
.org 0x12827a
	strb r0, [r1, #10]	@ 0012827a 8872
.org 0x12827c
	cmp r0, #15	@ 0012827c 0f28
.org 0x12827e
	bls.n 0x128284	@ 0012827e 01d9
.org 0x128280
	movs r0, #15	@ 00128280 0f20
.org 0x128282
	strb r0, [r1, #10]	@ 00128282 8872
.org 0x128284
	ldrb r2, [r1, #6]	@ 00128284 8a79
.org 0x128286
	ldrb r3, [r1, #10]	@ 00128286 8b7a
.org 0x128288
	adds r0, r2, #0	@ 00128288 101c
.org 0x12828a
	muls r0, r3	@ 0012828a 5843
.org 0x12828c
	adds r0, #15	@ 0012828c 0f30
.org 0x12828e
	asrs r0, r0, #4	@ 0012828e 0011
.org 0x128290
	strb r0, [r1, #25]	@ 00128290 4876
.org 0x128292
	ldrb r0, [r1, #28]	@ 00128292 087f
.org 0x128294
	ldrb r2, [r1, #27]	@ 00128294 ca7e
.org 0x128296
	ands r0, r2	@ 00128296 1040
.org 0x128298
	strb r0, [r1, #27]	@ 00128298 c876
.org 0x12829a
	pop {r4}	@ 0012829a 10bc
.org 0x12829c
	pop {r0}	@ 0012829c 01bc
.org 0x12829e
	bx r0	@ 0012829e 0047
