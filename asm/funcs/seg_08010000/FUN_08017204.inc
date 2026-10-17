@ FUN_08017204  entry 0x08017204  size 96
.thumb
.org 0x17204
FUN_08017204:
	push {r4, r5, r6, lr}	@ 00017204 70b5
.org 0x17206
	adds r6, r0, #0	@ 00017206 061c
.org 0x17208
	ldr r0, [r6, #92]	@ 00017208 f06d
.org 0x1720a
	lsls r1, r0, #16	@ 0001720a 0104
.org 0x1720c
	ldrb r5, [r6, #14]	@ 0001720c b57b
.org 0x1720e
	cmp r5, #0	@ 0001720e 002d
.org 0x17210
	bne.n 0x17230	@ 00017210 0ed1
.org 0x17212
	lsrs r3, r1, #20	@ 00017212 0b0d
.org 0x17214
	lsls r2, r3, #1	@ 00017214 5a00
.org 0x17216
	ldr r4, [pc, #20]	@ 00017216 054c
.org 0x17218
	adds r2, r2, r4	@ 00017218 1219
.org 0x1721a
	ldr r0, [r6, #100]	@ 0001721a 706e
.org 0x1721c
	movs r1, #71	@ 0001721c 4721
.org 0x1721e
	orrs r0, r1	@ 0001721e 0843
.org 0x17220
	strh r0, [r2, #0]	@ 00017220 1080
.org 0x17222
	lsls r3, r3, #2	@ 00017222 9b00
.org 0x17224
	adds r4, #8	@ 00017224 0834
.org 0x17226
	adds r3, r3, r4	@ 00017226 1b19
.org 0x17228
	str r5, [r3, #0]	@ 00017228 1d60
.org 0x1722a
	b.n 0x1725c	@ 0001722a 17e0
.org 0x1722c
	.byte 0x04,0x0a,0x00,0x02	@ 0001722c data
.org 0x17230
	cmp r5, #1	@ 00017230 012d
.org 0x17232
	bne.n 0x17262	@ 00017232 16d1
.org 0x17234
	ldr r0, [pc, #48]	@ 00017234 0c48
.org 0x17236
	ldr r0, [r0, #0]	@ 00017236 0068
.org 0x17238
	ldr r2, [pc, #48]	@ 00017238 0c4a
.org 0x1723a
	adds r0, r0, r2	@ 0001723a 8018
.org 0x1723c
	lsrs r1, r1, #20	@ 0001723c 090d
.org 0x1723e
	lsls r1, r1, #1	@ 0001723e 4900
.org 0x17240
	ldr r2, [pc, #44]	@ 00017240 0b4a
.org 0x17242
	adds r1, r1, r2	@ 00017242 8918
.org 0x17244
	ldrh r2, [r1, #0]	@ 00017244 0a88
.org 0x17246
	movs r1, #248	@ 00017246 f821
.org 0x17248
	lsls r1, r1, #5	@ 00017248 4901
.org 0x1724a
	ands r1, r2	@ 0001724a 1140
.org 0x1724c
	lsls r1, r1, #3	@ 0001724c c900
.org 0x1724e
	movs r2, #192	@ 0001724e c022
.org 0x17250
	lsls r2, r2, #19	@ 00017250 d204
.org 0x17252
	adds r1, r1, r2	@ 00017252 8918
.org 0x17254
	movs r2, #128	@ 00017254 8022
.org 0x17256
	lsls r2, r2, #2	@ 00017256 9200
.org 0x17258
	bl 0x128be0	@ 00017258 11f1c2fc
.org 0x1725c
	ldrb r0, [r6, #14]	@ 0001725c b07b
.org 0x1725e
	adds r0, #1	@ 0001725e 0130
.org 0x17260
	strb r0, [r6, #14]	@ 00017260 b073
.org 0x17262
	pop {r4, r5, r6}	@ 00017262 70bc
