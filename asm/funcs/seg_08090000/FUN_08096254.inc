@ FUN_08096254  entry 0x08096254  size 82
.thumb
.org 0x96254
FUN_08096254:
	push {r4, lr}	@ 00096254 10b5
.org 0x96256
	adds r4, r0, #0	@ 00096256 041c
.org 0x96258
	ldr r2, [r4, #40]	@ 00096258 a26a
.org 0x9625a
	adds r0, #140	@ 0009625a 8c30
.org 0x9625c
	movs r1, #0	@ 0009625c 0021
.org 0x9625e
	str r1, [r0, #0]	@ 0009625e 0160
.org 0x96260
	adds r0, #4	@ 00096260 0430
.org 0x96262
	str r1, [r0, #0]	@ 00096262 0160
.org 0x96264
	adds r0, #4	@ 00096264 0430
.org 0x96266
	strb r1, [r0, #0]	@ 00096266 0170
.org 0x96268
	ldrb r1, [r4, #10]	@ 00096268 a17a
.org 0x9626a
	movs r0, #251	@ 0009626a fb20
.org 0x9626c
	ands r0, r1	@ 0009626c 0840
.org 0x9626e
	movs r1, #254	@ 0009626e fe21
.org 0x96270
	ands r0, r1	@ 00096270 0840
.org 0x96272
	strb r0, [r4, #10]	@ 00096272 a072
.org 0x96274
	ldrb r0, [r2, #12]	@ 00096274 107b
.org 0x96276
	cmp r0, #1	@ 00096276 0128
.org 0x96278
	bhi.n 0x96284	@ 00096278 04d8
.org 0x9627a
	adds r1, r2, #0	@ 0009627a 111c
.org 0x9627c
	adds r1, #180	@ 0009627c b431
.org 0x9627e
	ldrb r0, [r1, #0]	@ 0009627e 0878
.org 0x96280
	subs r0, #1	@ 00096280 0138
.org 0x96282
	strb r0, [r1, #0]	@ 00096282 0870
.org 0x96284
	adds r1, r4, #0	@ 00096284 211c
.org 0x96286
	adds r1, #84	@ 00096286 5431
.org 0x96288
	movs r0, #2	@ 00096288 0220
.org 0x9628a
	bl 0xd0c88	@ 0009628a 3af0fdfc
.org 0x9628e
	ldr r1, [pc, #24]	@ 0009628e 0649
.org 0x96290
	ldrb r0, [r4, #9]	@ 00096290 607a
.org 0x96292
	lsls r0, r0, #2	@ 00096292 8000
.org 0x96294
	adds r0, r0, r1	@ 00096294 4018
.org 0x96296
	movs r1, #4	@ 00096296 0421
.org 0x96298
	str r1, [r4, #12]	@ 00096298 e160
.org 0x9629a
	ldr r0, [r0, #0]	@ 0009629a 0068
.org 0x9629c
	ldr r0, [r0, #16]	@ 0009629c 0069
.org 0x9629e
	str r0, [r4, #20]	@ 0009629e 6061
.org 0x962a0
	pop {r4}	@ 000962a0 10bc
.org 0x962a2
	pop {r0}	@ 000962a2 01bc
.org 0x962a4
	bx r0	@ 000962a4 0047
