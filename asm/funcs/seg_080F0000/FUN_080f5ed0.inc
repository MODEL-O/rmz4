@ FUN_080f5ed0  entry 0x080f5ed0  size 296
.thumb
.org 0xf5ed0
FUN_080f5ed0:
	push {r4, r5, r6, lr}	@ 000f5ed0 70b5
.org 0xf5ed2
	adds r6, r0, #0	@ 000f5ed2 061c
.org 0xf5ed4
	ldr r5, [r6, #88]	@ 000f5ed4 b56d
.org 0xf5ed6
	ldr r4, [pc, #76]	@ 000f5ed6 134c
.org 0xf5ed8
	ldr r0, [r4, #0]	@ 000f5ed8 2068
.org 0xf5eda
	ldr r0, [r0, #84]	@ 000f5eda 406d
.org 0xf5edc
	ldr r1, [pc, #72]	@ 000f5edc 1249
.org 0xf5ede
	adds r0, r0, r1	@ 000f5ede 4018
.org 0xf5ee0
	movs r1, #150	@ 000f5ee0 9621
.org 0xf5ee2
	lsls r1, r1, #11	@ 000f5ee2 c902
.org 0xf5ee4
	cmp r0, r1	@ 000f5ee4 8842
.org 0xf5ee6
	bls.n 0xf5f00	@ 000f5ee6 0bd9
.org 0xf5ee8
	ldr r1, [pc, #64]	@ 000f5ee8 1049
.org 0xf5eea
	ldrb r0, [r6, #9]	@ 000f5eea 707a
.org 0xf5eec
	lsls r0, r0, #2	@ 000f5eec 8000
.org 0xf5eee
	adds r0, r0, r1	@ 000f5eee 4018
.org 0xf5ef0
	movs r1, #2	@ 000f5ef0 0221
.org 0xf5ef2
	str r1, [r6, #12]	@ 000f5ef2 f160
.org 0xf5ef4
	ldr r0, [r0, #0]	@ 000f5ef4 0068
.org 0xf5ef6
	ldr r0, [r0, #8]	@ 000f5ef6 8068
.org 0xf5ef8
	str r0, [r6, #20]	@ 000f5ef8 7061
.org 0xf5efa
	adds r0, r6, #0	@ 000f5efa 301c
.org 0xf5efc
	bl 0xf5df4	@ 000f5efc fff77aff
.org 0xf5f00
	adds r0, r6, #0	@ 000f5f00 301c
.org 0xf5f02
	adds r0, #140	@ 000f5f02 8c30
.org 0xf5f04
	ldr r0, [r0, #0]	@ 000f5f04 0068
.org 0xf5f06
	movs r1, #4	@ 000f5f06 0421
.org 0xf5f08
	ands r0, r1	@ 000f5f08 0840
.org 0xf5f0a
	cmp r0, #0	@ 000f5f0a 0028
.org 0xf5f0c
	beq.n 0xf5f48	@ 000f5f0c 1cd0
.org 0xf5f0e
	ldr r0, [r4, #0]	@ 000f5f0e 2068
.org 0xf5f10
	ldr r1, [r6, #88]	@ 000f5f10 b16d
.org 0xf5f12
	ldr r0, [r0, #88]	@ 000f5f12 806d
.org 0xf5f14
	subs r2, r1, r0	@ 000f5f14 0a1a
.org 0xf5f16
	cmp r2, #0	@ 000f5f16 002a
.org 0xf5f18
	blt.n 0xf5f34	@ 000f5f18 0cdb
.org 0xf5f1a
	ldr r0, [pc, #20]	@ 000f5f1a 0548
.org 0xf5f1c
	cmp r2, r0	@ 000f5f1c 8242
.org 0xf5f1e
	ble.n 0xf5f3c	@ 000f5f1e 0ddd
.org 0xf5f20
	b.n 0xf5f48	@ 000f5f20 12e0
.org 0xf5f22
	.byte 0x00	@ 000f5f22 data
.org 0xf5f23
	.byte 0x00	@ 000f5f23 data
.org 0xf5f24
	.byte 0xf0,0xdb,0x02,0x02	@ 000f5f24 data
.org 0xf5f28
	.byte 0x00,0x50,0xec,0xff	@ 000f5f28 data
.org 0xf5f2c
	.byte 0xfc,0x92,0x86,0x08	@ 000f5f2c data
.org 0xf5f30
	.byte 0xff,0x01,0x00,0x00	@ 000f5f30 data
.org 0xf5f34
	subs r1, r0, r1	@ 000f5f34 411a
.org 0xf5f36
	ldr r0, [pc, #12]	@ 000f5f36 0348
.org 0xf5f38
	cmp r1, r0	@ 000f5f38 8142
.org 0xf5f3a
	bgt.n 0xf5f48	@ 000f5f3a 05dc
.org 0xf5f3c
	movs r1, #0	@ 000f5f3c 0021
.org 0xf5f3e
	movs r0, #1	@ 000f5f3e 0120
.org 0xf5f40
	b.n 0xf5f52	@ 000f5f40 07e0
.org 0xf5f42
	.byte 0x00	@ 000f5f42 data
.org 0xf5f43
	.byte 0x00	@ 000f5f43 data
.org 0xf5f44
	.byte 0xff,0x01,0x00,0x00	@ 000f5f44 data
.org 0xf5f48
	ldrb r0, [r6, #13]	@ 000f5f48 707b
.org 0xf5f4a
	cmp r0, #1	@ 000f5f4a 0128
.org 0xf5f4c
	bne.n 0xf5f56	@ 000f5f4c 03d1
.org 0xf5f4e
	movs r1, #0	@ 000f5f4e 0021
.org 0xf5f50
	movs r0, #2	@ 000f5f50 0220
.org 0xf5f52
	strb r0, [r6, #13]	@ 000f5f52 7073
.org 0xf5f54
	strb r1, [r6, #14]	@ 000f5f54 b173
.org 0xf5f56
	ldr r0, [pc, #64]	@ 000f5f56 1048
.org 0xf5f58
	ldrb r1, [r6, #13]	@ 000f5f58 717b
.org 0xf5f5a
	lsls r1, r1, #2	@ 000f5f5a 8900
.org 0xf5f5c
	adds r1, r1, r0	@ 000f5f5c 0918
.org 0xf5f5e
	ldr r1, [r1, #0]	@ 000f5f5e 0968
.org 0xf5f60
	adds r0, r6, #0	@ 000f5f60 301c
.org 0xf5f62
	bl 0x128f80	@ 000f5f62 33f00df8
.org 0xf5f66
	ldr r0, [r6, #88]	@ 000f5f66 b06d
.org 0xf5f68
	cmp r5, r0	@ 000f5f68 8542
.org 0xf5f6a
	bge.n 0xf5fa0	@ 000f5f6a 19da
.org 0xf5f6c
	ldrb r1, [r6, #10]	@ 000f5f6c b17a
.org 0xf5f6e
	movs r0, #4	@ 000f5f6e 0420
.org 0xf5f70
	movs r5, #0	@ 000f5f70 0025
.org 0xf5f72
	orrs r0, r1	@ 000f5f72 0843
.org 0xf5f74
	strb r0, [r6, #10]	@ 000f5f74 b072
.org 0xf5f76
	adds r4, r6, #0	@ 000f5f76 341c
.org 0xf5f78
	adds r4, #116	@ 000f5f78 7434
.org 0xf5f7a
	ldr r1, [pc, #32]	@ 000f5f7a 0849
.org 0xf5f7c
	adds r2, r6, #0	@ 000f5f7c 321c
.org 0xf5f7e
	adds r2, #84	@ 000f5f7e 5432
.org 0xf5f80
	adds r0, r4, #0	@ 000f5f80 201c
.org 0xf5f82
	movs r3, #0	@ 000f5f82 0023
.org 0xf5f84
	bl 0x5760	@ 000f5f84 0ff7ecfb
.org 0xf5f88
	str r6, [r4, #44]	@ 000f5f88 e662
.org 0xf5f8a
	str r5, [r4, #36]	@ 000f5f8a 6562
.org 0xf5f8c
	adds r5, r6, #0	@ 000f5f8c 351c
.org 0xf5f8e
	adds r5, #180	@ 000f5f8e b435
.org 0xf5f90
	ldrh r0, [r5, #0]	@ 000f5f90 2888
.org 0xf5f92
	movs r4, #186	@ 000f5f92 ba24
.org 0xf5f94
	lsls r4, r4, #1	@ 000f5f94 6400
.org 0xf5f96
	b.n 0xf5fcc	@ 000f5f96 19e0
.org 0xf5f98
	.byte 0x38,0xa1,0x86,0x08	@ 000f5f98 data
.org 0xf5f9c
	.byte 0x5c,0xa1,0x86,0x08	@ 000f5f9c data
.org 0xf5fa0
	cmp r5, r0	@ 000f5fa0 8542
.org 0xf5fa2
	ble.n 0xf5fe4	@ 000f5fa2 1fdd
.org 0xf5fa4
	ldrb r1, [r6, #10]	@ 000f5fa4 b17a
.org 0xf5fa6
	movs r0, #4	@ 000f5fa6 0420
.org 0xf5fa8
	movs r5, #0	@ 000f5fa8 0025
.org 0xf5faa
	orrs r0, r1	@ 000f5faa 0843
.org 0xf5fac
	strb r0, [r6, #10]	@ 000f5fac b072
.org 0xf5fae
	adds r4, r6, #0	@ 000f5fae 341c
.org 0xf5fb0
	adds r4, #116	@ 000f5fb0 7434
.org 0xf5fb2
	ldr r1, [pc, #40]	@ 000f5fb2 0a49
.org 0xf5fb4
	adds r2, r6, #0	@ 000f5fb4 321c
.org 0xf5fb6
	adds r2, #84	@ 000f5fb6 5432
.org 0xf5fb8
	adds r0, r4, #0	@ 000f5fb8 201c
.org 0xf5fba
	movs r3, #0	@ 000f5fba 0023
.org 0xf5fbc
	bl 0x5760	@ 000f5fbc 0ff7d0fb
.org 0xf5fc0
	str r6, [r4, #44]	@ 000f5fc0 e662
.org 0xf5fc2
	str r5, [r4, #36]	@ 000f5fc2 6562
.org 0xf5fc4
	adds r5, r6, #0	@ 000f5fc4 351c
.org 0xf5fc6
	adds r5, #180	@ 000f5fc6 b435
.org 0xf5fc8
	ldrh r0, [r5, #0]	@ 000f5fc8 2888
.org 0xf5fca
	ldr r4, [pc, #20]	@ 000f5fca 054c
.org 0xf5fcc
	cmp r0, r4	@ 000f5fcc a042
.org 0xf5fce
	beq.n 0xf6016	@ 000f5fce 22d0
.org 0xf5fd0
	adds r0, r4, #0	@ 000f5fd0 201c
.org 0xf5fd2
	bl 0x2b10	@ 000f5fd2 0cf79dfd
.org 0xf5fd6
	strh r4, [r5, #0]	@ 000f5fd6 2c80
.org 0xf5fd8
	b.n 0xf6016	@ 000f5fd8 1de0
.org 0xf5fda
	.byte 0x00	@ 000f5fda data
.org 0xf5fdb
	.byte 0x00	@ 000f5fdb data
.org 0xf5fdc
	.byte 0x44,0xa1,0x86,0x08	@ 000f5fdc data
.org 0xf5fe0
	.byte 0xc9,0x01,0x00,0x00	@ 000f5fe0 data
.org 0xf5fe4
	ldrb r1, [r6, #10]	@ 000f5fe4 b17a
.org 0xf5fe6
	movs r0, #4	@ 000f5fe6 0420
.org 0xf5fe8
	movs r5, #0	@ 000f5fe8 0025
.org 0xf5fea
	orrs r0, r1	@ 000f5fea 0843
.org 0xf5fec
	strb r0, [r6, #10]	@ 000f5fec b072
.org 0xf5fee
	adds r4, r6, #0	@ 000f5fee 341c
.org 0xf5ff0
	adds r4, #116	@ 000f5ff0 7434
.org 0xf5ff2
	ldr r1, [pc, #48]	@ 000f5ff2 0c49
.org 0xf5ff4
	adds r2, r6, #0	@ 000f5ff4 321c
.org 0xf5ff6
	adds r2, #84	@ 000f5ff6 5432
