@ FUN_08087218  entry 0x08087218  size 110
.thumb
.org 0x87218
FUN_08087218:
	push {r4, lr}	@ 00087218 10b5
.org 0x8721a
	sub sp, #8	@ 0008721a 82b0
.org 0x8721c
	adds r4, r0, #0	@ 0008721c 041c
.org 0x8721e
	adds r0, #140	@ 0008721e 8c30
.org 0x87220
	ldr r0, [r0, #0]	@ 00087220 0068
.org 0x87222
	movs r1, #1	@ 00087222 0121
.org 0x87224
	ands r0, r1	@ 00087224 0840
.org 0x87226
	cmp r0, #0	@ 00087226 0028
.org 0x87228
	beq.n 0x87286	@ 00087228 2dd0
.org 0x8722a
	ldr r2, [r4, #44]	@ 0008722a e26a
.org 0x8722c
	cmp r2, #0	@ 0008722c 002a
.org 0x8722e
	bne.n 0x87286	@ 0008722e 2ad1
.org 0x87230
	ldr r0, [pc, #48]	@ 00087230 0c48
.org 0x87232
	ldr r1, [pc, #52]	@ 00087232 0d49
.org 0x87234
	adds r0, r0, r1	@ 00087234 4018
.org 0x87236
	ldr r1, [r4, #88]	@ 00087236 a16d
.org 0x87238
	ldr r0, [r0, #0]	@ 00087238 0068
.org 0x8723a
	cmp r1, r0	@ 0008723a 8142
.org 0x8723c
	ble.n 0x8726c	@ 0008723c 16dd
.org 0x8723e
	adds r0, r4, #0	@ 0008723e 201c
.org 0x87240
	adds r0, #151	@ 00087240 9730
.org 0x87242
	ldrb r1, [r0, #0]	@ 00087242 0178
.org 0x87244
	movs r0, #240	@ 00087244 f020
.org 0x87246
	ands r0, r1	@ 00087246 0840
.org 0x87248
	cmp r0, #32	@ 00087248 2028
.org 0x8724a
	bne.n 0x8726c	@ 0008724a 0fd1
.org 0x8724c
	movs r0, #128	@ 0008724c 8020
.org 0x8724e
	lsls r0, r0, #4	@ 0008724e 0001
.org 0x87250
	str r0, [sp, #0]	@ 00087250 0090
.org 0x87252
	str r2, [sp, #4]	@ 00087252 0192
.org 0x87254
	adds r0, r4, #0	@ 00087254 201c
.org 0x87256
	adds r0, #84	@ 00087256 5430
.org 0x87258
	mov r1, sp	@ 00087258 6946
.org 0x8725a
	movs r2, #6	@ 0008725a 0622
.org 0x8725c
	movs r3, #8	@ 0008725c 0823
.org 0x8725e
	bl 0x88ff0	@ 0008725e 01f0c7fe
.org 0x87262
	b.n 0x87286	@ 00087262 10e0
.org 0x87264
	.byte 0xb0,0x0a,0x00,0x02	@ 00087264 data
.org 0x87268
	.byte 0x0c,0xc0,0x02,0x00	@ 00087268 data
.org 0x8726c
	ldr r2, [pc, #32]	@ 0008726c 084a
.org 0x8726e
	movs r0, #0	@ 0008726e 0020
.org 0x87270
	adds r1, r4, #0	@ 00087270 211c
.org 0x87272
	bl 0x2adac	@ 00087272 a3f79bfd
.org 0x87276
	str r0, [r4, #44]	@ 00087276 e062
.org 0x87278
	cmp r0, #0	@ 00087278 0028
.org 0x8727a
	beq.n 0x87286	@ 0008727a 04d0
.org 0x8727c
	movs r1, #0	@ 0008727c 0021
.org 0x8727e
	movs r0, #11	@ 0008727e 0b20
.org 0x87280
	strb r0, [r4, #13]	@ 00087280 6073
.org 0x87282
	strb r1, [r4, #14]	@ 00087282 a173
.org 0x87284
	strb r1, [r4, #15]	@ 00087284 e173
