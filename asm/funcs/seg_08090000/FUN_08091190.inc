@ FUN_08091190  entry 0x08091190  size 212
.thumb
.org 0x91190
FUN_08091190:
	push {r4, r5, r6, r7, lr}	@ 00091190 f0b5
.org 0x91192
	adds r5, r0, #0	@ 00091192 051c
.org 0x91194
	ldr r7, [r5, #40]	@ 00091194 af6a
.org 0x91196
	ldr r1, [pc, #68]	@ 00091196 1149
.org 0x91198
	ldrb r0, [r5, #9]	@ 00091198 687a
.org 0x9119a
	lsls r0, r0, #2	@ 0009119a 8000
.org 0x9119c
	adds r0, r0, r1	@ 0009119c 4018
.org 0x9119e
	movs r4, #1	@ 0009119e 0124
.org 0x911a0
	str r4, [r5, #12]	@ 000911a0 ec60
.org 0x911a2
	ldr r0, [r0, #0]	@ 000911a2 0068
.org 0x911a4
	ldr r0, [r0, #4]	@ 000911a4 4068
.org 0x911a6
	str r0, [r5, #20]	@ 000911a6 6861
.org 0x911a8
	adds r0, r5, #0	@ 000911a8 281c
.org 0x911aa
	bl 0x1cc9c	@ 000911aa 8bf777fd
.org 0x911ae
	adds r0, r5, #0	@ 000911ae 281c
.org 0x911b0
	bl 0x1ceec	@ 000911b0 8bf79cfe
.org 0x911b4
	ldrb r1, [r5, #10]	@ 000911b4 a97a
.org 0x911b6
	movs r0, #1	@ 000911b6 0120
.org 0x911b8
	movs r6, #0	@ 000911b8 0026
.org 0x911ba
	orrs r0, r1	@ 000911ba 0843
.org 0x911bc
	movs r1, #2	@ 000911bc 0221
.org 0x911be
	orrs r0, r1	@ 000911be 0843
.org 0x911c0
	strb r0, [r5, #10]	@ 000911c0 a872
.org 0x911c2
	ldr r1, [pc, #28]	@ 000911c2 0749
.org 0x911c4
	adds r0, r5, #0	@ 000911c4 281c
.org 0x911c6
	bl 0x1cf00	@ 000911c6 8bf79bfe
.org 0x911ca
	ldrb r0, [r7, #10]	@ 000911ca b87a
.org 0x911cc
	lsrs r2, r0, #4	@ 000911cc 0209
.org 0x911ce
	ands r2, r4	@ 000911ce 2240
.org 0x911d0
	cmp r2, #0	@ 000911d0 002a
.org 0x911d2
	beq.n 0x911e4	@ 000911d2 07d0
.org 0x911d4
	ldrb r0, [r5, #10]	@ 000911d4 a87a
.org 0x911d6
	movs r1, #16	@ 000911d6 1021
.org 0x911d8
	orrs r0, r1	@ 000911d8 0843
.org 0x911da
	b.n 0x911ea	@ 000911da 06e0
.org 0x911dc
	.byte 0x40,0xdb,0x85,0x08	@ 000911dc data
.org 0x911e0
	.byte 0x15,0xa1,0x00,0x00	@ 000911e0 data
.org 0x911e4
	ldrb r1, [r5, #10]	@ 000911e4 a97a
.org 0x911e6
	movs r0, #239	@ 000911e6 ef20
.org 0x911e8
	ands r0, r1	@ 000911e8 0840
.org 0x911ea
	strb r0, [r5, #10]	@ 000911ea a872
.org 0x911ec
	movs r4, #1	@ 000911ec 0124
.org 0x911ee
	adds r1, r4, #0	@ 000911ee 211c
.org 0x911f0
	ands r1, r2	@ 000911f0 1140
.org 0x911f2
	adds r0, r5, #0	@ 000911f2 281c
.org 0x911f4
	adds r0, #76	@ 000911f4 4c30
.org 0x911f6
	strb r1, [r0, #0]	@ 000911f6 0170
.org 0x911f8
	adds r3, r5, #0	@ 000911f8 2b1c
.org 0x911fa
	adds r3, #74	@ 000911fa 4a33
.org 0x911fc
	lsls r1, r1, #4	@ 000911fc 0901
.org 0x911fe
	ldrb r2, [r3, #0]	@ 000911fe 1a78
.org 0x91200
	movs r0, #17	@ 00091200 1120
.org 0x91202
	negs r0, r0	@ 00091202 4042
.org 0x91204
	ands r0, r2	@ 00091204 1040
.org 0x91206
	orrs r0, r1	@ 00091206 0843
.org 0x91208
	strb r0, [r3, #0]	@ 00091208 1870
.org 0x9120a
	ldrb r0, [r7, #10]	@ 0009120a b87a
.org 0x9120c
	lsrs r2, r0, #5	@ 0009120c 4209
.org 0x9120e
	ands r2, r4	@ 0009120e 2240
.org 0x91210
	cmp r2, #0	@ 00091210 002a
.org 0x91212
	beq.n 0x9121c	@ 00091212 03d0
.org 0x91214
	ldrb r0, [r5, #10]	@ 00091214 a87a
.org 0x91216
	movs r1, #32	@ 00091216 2021
.org 0x91218
	orrs r0, r1	@ 00091218 0843
.org 0x9121a
	b.n 0x91222	@ 0009121a 02e0
.org 0x9121c
	ldrb r1, [r5, #10]	@ 0009121c a97a
.org 0x9121e
	movs r0, #223	@ 0009121e df20
.org 0x91220
	ands r0, r1	@ 00091220 0840
.org 0x91222
	strb r0, [r5, #10]	@ 00091222 a872
.org 0x91224
	adds r1, r2, #0	@ 00091224 111c
.org 0x91226
	adds r2, r5, #0	@ 00091226 2a1c
.org 0x91228
	adds r2, #77	@ 00091228 4d32
.org 0x9122a
	strb r1, [r2, #0]	@ 0009122a 1170
.org 0x9122c
	lsls r1, r1, #5	@ 0009122c 4901
.org 0x9122e
	ldrb r2, [r3, #0]	@ 0009122e 1a78
.org 0x91230
	movs r0, #33	@ 00091230 2120
.org 0x91232
	negs r0, r0	@ 00091232 4042
.org 0x91234
	ands r0, r2	@ 00091234 1040
.org 0x91236
	orrs r0, r1	@ 00091236 0843
.org 0x91238
	strb r0, [r3, #0]	@ 00091238 1870
.org 0x9123a
	ldrb r1, [r5, #11]	@ 0009123a e97a
.org 0x9123c
	movs r0, #16	@ 0009123c 1020
.org 0x9123e
	orrs r0, r1	@ 0009123e 0843
.org 0x91240
	strb r0, [r5, #11]	@ 00091240 e872
.org 0x91242
	ldrb r0, [r7, #28]	@ 00091242 387f
.org 0x91244
	strb r0, [r5, #29]	@ 00091244 6877
.org 0x91246
	ldrb r1, [r5, #10]	@ 00091246 a97a
.org 0x91248
	movs r0, #16	@ 00091248 1020
.org 0x9124a
	ands r0, r1	@ 0009124a 0840
.org 0x9124c
	cmp r0, #0	@ 0009124c 0028
.org 0x9124e
	beq.n 0x9125a	@ 0009124e 04d0
.org 0x91250
	movs r0, #128	@ 00091250 8020
.org 0x91252
	negs r0, r0	@ 00091252 4042
.org 0x91254
	str r0, [r5, #92]	@ 00091254 e865
.org 0x91256
	movs r0, #2	@ 00091256 0220
.org 0x91258
	b.n 0x91260	@ 00091258 02e0
.org 0x9125a
	movs r0, #128	@ 0009125a 8020
.org 0x9125c
	str r0, [r5, #92]	@ 0009125c e865
.org 0x9125e
	subs r0, #130	@ 0009125e 8238
.org 0x91260
	str r0, [r5, #100]	@ 00091260 6866
.org 0x91262
	movs r0, #0	@ 00091262 0020
