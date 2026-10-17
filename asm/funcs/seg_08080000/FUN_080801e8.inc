@ FUN_080801e8  entry 0x080801e8  size 120
.thumb
.org 0x801e8
FUN_080801e8:
	push {r4, r5, lr}	@ 000801e8 30b5
.org 0x801ea
	adds r4, r0, #0	@ 000801ea 041c
.org 0x801ec
	ldrb r2, [r4, #14]	@ 000801ec a27b
.org 0x801ee
	cmp r2, #0	@ 000801ee 002a
.org 0x801f0
	bne.n 0x80202	@ 000801f0 07d1
.org 0x801f2
	adds r1, r4, #0	@ 000801f2 211c
.org 0x801f4
	adds r1, #194	@ 000801f4 c231
.org 0x801f6
	movs r0, #1	@ 000801f6 0120
.org 0x801f8
	strb r0, [r1, #0]	@ 000801f8 0870
.org 0x801fa
	str r2, [r4, #96]	@ 000801fa 2266
.org 0x801fc
	ldrb r0, [r4, #14]	@ 000801fc a07b
.org 0x801fe
	adds r0, #1	@ 000801fe 0130
.org 0x80200
	strb r0, [r4, #14]	@ 00080200 a073
.org 0x80202
	adds r0, r4, #0	@ 00080202 201c
.org 0x80204
	bl 0x1cff0	@ 00080204 9cf7f4fe
.org 0x80208
	adds r0, r4, #0	@ 00080208 201c
.org 0x8020a
	adds r0, #184	@ 0008020a b830
.org 0x8020c
	ldrb r1, [r0, #0]	@ 0008020c 0178
.org 0x8020e
	adds r5, r0, #0	@ 0008020e 051c
.org 0x80210
	cmp r1, #0	@ 00080210 0029
.org 0x80212
	beq.n 0x80240	@ 00080212 15d0
.org 0x80214
	ldr r0, [pc, #20]	@ 00080214 0548
.org 0x80216
	ldr r0, [r0, #0]	@ 00080216 0068
.org 0x80218
	ldr r3, [r4, #84]	@ 00080218 636d
.org 0x8021a
	ldr r1, [r0, #84]	@ 0008021a 416d
.org 0x8021c
	subs r2, r3, r1	@ 0008021c 5a1a
.org 0x8021e
	cmp r2, #0	@ 0008021e 002a
.org 0x80220
	blt.n 0x80234	@ 00080220 08db
.org 0x80222
	ldr r0, [pc, #12]	@ 00080222 0348
.org 0x80224
	cmp r2, r0	@ 00080224 8242
.org 0x80226
	ble.n 0x8023c	@ 00080226 09dd
.org 0x80228
	b.n 0x80264	@ 00080228 1ce0
.org 0x8022a
	.byte 0x00	@ 0008022a data
.org 0x8022b
	.byte 0x00	@ 0008022b data
.org 0x8022c
	.byte 0xf0,0xdb,0x02,0x02	@ 0008022c data
.org 0x80230
	.byte 0xff,0x4f,0x00,0x00	@ 00080230 data
.org 0x80234
	subs r1, r1, r3	@ 00080234 c91a
.org 0x80236
	ldr r0, [pc, #52]	@ 00080236 0d48
.org 0x80238
	cmp r1, r0	@ 00080238 8142
.org 0x8023a
	bgt.n 0x80264	@ 0008023a 13dc
.org 0x8023c
	movs r0, #0	@ 0008023c 0020
.org 0x8023e
	strb r0, [r5, #0]	@ 0008023e 2870
.org 0x80240
	ldr r0, [r4, #84]	@ 00080240 606d
.org 0x80242
	ldr r1, [r4, #92]	@ 00080242 e16d
.org 0x80244
	adds r0, r0, r1	@ 00080244 4018
.org 0x80246
	str r0, [r4, #84]	@ 00080246 6065
.org 0x80248
	ldr r0, [r4, #88]	@ 00080248 a06d
.org 0x8024a
	ldr r1, [r4, #96]	@ 0008024a 216e
.org 0x8024c
	adds r0, r0, r1	@ 0008024c 4018
.org 0x8024e
	str r0, [r4, #88]	@ 0008024e a065
.org 0x80250
	adds r1, #64	@ 00080250 4031
.org 0x80252
	str r1, [r4, #96]	@ 00080252 2166
.org 0x80254
	movs r0, #224	@ 00080254 e020
.org 0x80256
	lsls r0, r0, #3	@ 00080256 c000
.org 0x80258
	cmp r1, r0	@ 00080258 8142
.org 0x8025a
	ble.n 0x8025e	@ 0008025a 00dd
.org 0x8025c
	str r0, [r4, #96]	@ 0008025c 2066
.org 0x8025e
	adds r0, r4, #0	@ 0008025e 201c
