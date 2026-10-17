@ FUN_080b626c  entry 0x080b626c  size 134
.thumb
.org 0xb626c
FUN_080b626c:
	push {lr}	@ 000b626c 00b5
.org 0xb626e
	adds r2, r0, #0	@ 000b626e 021c
.org 0xb6270
	ldr r3, [r2, #40]	@ 000b6270 936a
.org 0xb6272
	adds r0, #180	@ 000b6272 b430
.org 0xb6274
	ldrb r0, [r0, #0]	@ 000b6274 0078
.org 0xb6276
	cmp r0, #0	@ 000b6276 0028
.org 0xb6278
	beq.n 0xb629c	@ 000b6278 10d0
.org 0xb627a
	ldr r1, [pc, #28]	@ 000b627a 0749
.org 0xb627c
	ldrb r0, [r2, #9]	@ 000b627c 507a
.org 0xb627e
	lsls r0, r0, #2	@ 000b627e 8000
.org 0xb6280
	adds r0, r0, r1	@ 000b6280 4018
.org 0xb6282
	movs r1, #2	@ 000b6282 0221
.org 0xb6284
	str r1, [r2, #12]	@ 000b6284 d160
.org 0xb6286
	ldr r0, [r0, #0]	@ 000b6286 0068
.org 0xb6288
	ldr r0, [r0, #8]	@ 000b6288 8068
.org 0xb628a
	str r0, [r2, #20]	@ 000b628a 5061
.org 0xb628c
	movs r1, #0	@ 000b628c 0021
.org 0xb628e
	movs r0, #1	@ 000b628e 0120
.org 0xb6290
	strb r0, [r2, #13]	@ 000b6290 5073
.org 0xb6292
	strb r1, [r2, #14]	@ 000b6292 9173
.org 0xb6294
	strb r1, [r2, #15]	@ 000b6294 d173
.org 0xb6296
	b.n 0xb62da	@ 000b6296 20e0
.org 0xb6298
	.byte 0x40,0xdb,0x85,0x08	@ 000b6298 data
.org 0xb629c
	ldrb r0, [r3, #12]	@ 000b629c 187b
.org 0xb629e
	cmp r0, #1	@ 000b629e 0128
.org 0xb62a0
	bhi.n 0xb62c0	@ 000b62a0 0ed8
.org 0xb62a2
	adds r0, r2, #0	@ 000b62a2 101c
.org 0xb62a4
	adds r0, #140	@ 000b62a4 8c30
.org 0xb62a6
	ldr r0, [r0, #0]	@ 000b62a6 0068
.org 0xb62a8
	movs r1, #128	@ 000b62a8 8021
.org 0xb62aa
	lsls r1, r1, #2	@ 000b62aa 8900
.org 0xb62ac
	ands r0, r1	@ 000b62ac 0840
.org 0xb62ae
	cmp r0, #0	@ 000b62ae 0028
.org 0xb62b0
	bne.n 0xb62c0	@ 000b62b0 06d1
.org 0xb62b2
	adds r0, r3, #0	@ 000b62b2 181c
.org 0xb62b4
	adds r0, #191	@ 000b62b4 bf30
.org 0xb62b6
	ldrb r1, [r0, #0]	@ 000b62b6 0178
.org 0xb62b8
	movs r0, #1	@ 000b62b8 0120
.org 0xb62ba
	ands r0, r1	@ 000b62ba 0840
.org 0xb62bc
	cmp r0, #0	@ 000b62bc 0028
.org 0xb62be
	beq.n 0xb62e8	@ 000b62be 13d0
.org 0xb62c0
	ldr r1, [pc, #32]	@ 000b62c0 0849
.org 0xb62c2
	ldrb r0, [r2, #9]	@ 000b62c2 507a
.org 0xb62c4
	lsls r0, r0, #2	@ 000b62c4 8000
.org 0xb62c6
	adds r0, r0, r1	@ 000b62c6 4018
.org 0xb62c8
	movs r1, #2	@ 000b62c8 0221
.org 0xb62ca
	str r1, [r2, #12]	@ 000b62ca d160
.org 0xb62cc
	ldr r0, [r0, #0]	@ 000b62cc 0068
.org 0xb62ce
	ldr r0, [r0, #8]	@ 000b62ce 8068
.org 0xb62d0
	str r0, [r2, #20]	@ 000b62d0 5061
.org 0xb62d2
	movs r0, #0	@ 000b62d2 0020
.org 0xb62d4
	strb r0, [r2, #13]	@ 000b62d4 5073
.org 0xb62d6
	strb r0, [r2, #14]	@ 000b62d6 9073
.org 0xb62d8
	strb r0, [r2, #15]	@ 000b62d8 d073
.org 0xb62da
	adds r0, r2, #0	@ 000b62da 101c
.org 0xb62dc
	bl 0xb63d8	@ 000b62dc 00f07cf8
.org 0xb62e0
	b.n 0xb62f8	@ 000b62e0 0ae0
.org 0xb62e2
	.byte 0x00	@ 000b62e2 data
.org 0xb62e3
	.byte 0x00	@ 000b62e3 data
.org 0xb62e4
	.byte 0x40,0xdb,0x85,0x08	@ 000b62e4 data
.org 0xb62e8
	ldr r0, [pc, #16]	@ 000b62e8 0448
.org 0xb62ea
	ldrb r1, [r2, #13]	@ 000b62ea 517b
.org 0xb62ec
	lsls r1, r1, #2	@ 000b62ec 8900
.org 0xb62ee
	adds r1, r1, r0	@ 000b62ee 0918
.org 0xb62f0
	ldr r1, [r1, #0]	@ 000b62f0 0968
