@ FUN_08018294  entry 0x08018294  size 200
.thumb
.org 0x18294
FUN_08018294:
	push {r4, r5, lr}	@ 00018294 30b5
.org 0x18296
	ldr r3, [pc, #36]	@ 00018296 094b
.org 0x18298
	ldrh r1, [r3, #20]	@ 00018298 998a
.org 0x1829a
	movs r0, #1	@ 0001829a 0120
.org 0x1829c
	ands r0, r1	@ 0001829c 0840
.org 0x1829e
	cmp r0, #0	@ 0001829e 0028
.org 0x182a0
	beq.n 0x182c0	@ 000182a0 0ed0
.org 0x182a2
	movs r0, #162	@ 000182a2 a220
.org 0x182a4
	lsls r0, r0, #1	@ 000182a4 4000
.org 0x182a6
	adds r1, r3, r0	@ 000182a6 1918
.org 0x182a8
	movs r0, #240	@ 000182a8 f020
.org 0x182aa
	lsls r0, r0, #8	@ 000182aa 0002
.org 0x182ac
	str r0, [r1, #0]	@ 000182ac 0860
.org 0x182ae
	movs r0, #164	@ 000182ae a420
.org 0x182b0
	lsls r0, r0, #1	@ 000182b0 4000
.org 0x182b2
	adds r1, r3, r0	@ 000182b2 1918
.org 0x182b4
	movs r0, #240	@ 000182b4 f020
.org 0x182b6
	lsls r0, r0, #14	@ 000182b6 8003
.org 0x182b8
	b.n 0x18386	@ 000182b8 65e0
.org 0x182ba
	.byte 0x00	@ 000182ba data
.org 0x182bb
	.byte 0x00	@ 000182bb data
.org 0x182bc
	.byte 0x10,0xe9,0x02,0x02	@ 000182bc data
.org 0x182c0
	ldr r1, [pc, #32]	@ 000182c0 0849
.org 0x182c2
	ldr r4, [r1, #0]	@ 000182c2 0c68
.org 0x182c4
	ldr r2, [r4, #84]	@ 000182c4 626d
.org 0x182c6
	ldr r0, [pc, #32]	@ 000182c6 0848
.org 0x182c8
	adds r5, r1, #0	@ 000182c8 0d1c
.org 0x182ca
	cmp r2, r0	@ 000182ca 8242
.org 0x182cc
	bgt.n 0x182fc	@ 000182cc 16dc
.org 0x182ce
	ldr r1, [r4, #88]	@ 000182ce a16d
.org 0x182d0
	ldr r0, [pc, #24]	@ 000182d0 0648
.org 0x182d2
	cmp r1, r0	@ 000182d2 8142
.org 0x182d4
	bgt.n 0x182f0	@ 000182d4 0cdc
.org 0x182d6
	movs r0, #162	@ 000182d6 a220
.org 0x182d8
	lsls r0, r0, #1	@ 000182d8 4000
.org 0x182da
	adds r1, r3, r0	@ 000182da 1918
.org 0x182dc
	movs r0, #240	@ 000182dc f020
.org 0x182de
	lsls r0, r0, #9	@ 000182de 4002
.org 0x182e0
	b.n 0x18386	@ 000182e0 51e0
.org 0x182e2
	.byte 0x00	@ 000182e2 data
.org 0x182e3
	.byte 0x00	@ 000182e3 data
.org 0x182e4
	.byte 0xf0,0xdb,0x02,0x02	@ 000182e4 data
.org 0x182e8
	.byte 0xff,0xaf,0x04,0x00	@ 000182e8 data
.org 0x182ec
	.byte 0xff,0x7f,0x02,0x00	@ 000182ec data
.org 0x182f0
	movs r0, #162	@ 000182f0 a220
.org 0x182f2
	lsls r0, r0, #1	@ 000182f2 4000
.org 0x182f4
	adds r1, r3, r0	@ 000182f4 1918
.org 0x182f6
	movs r0, #240	@ 000182f6 f020
.org 0x182f8
	lsls r0, r0, #8	@ 000182f8 0002
.org 0x182fa
	b.n 0x18386	@ 000182fa 44e0
.org 0x182fc
	ldr r0, [pc, #16]	@ 000182fc 0448
.org 0x182fe
	cmp r2, r0	@ 000182fe 8242
.org 0x18300
	bgt.n 0x18314	@ 00018300 08dc
.org 0x18302
	movs r0, #164	@ 00018302 a420
.org 0x18304
	lsls r0, r0, #1	@ 00018304 4000
.org 0x18306
	adds r1, r3, r0	@ 00018306 1918
.org 0x18308
	movs r0, #180	@ 00018308 b420
.org 0x1830a
	lsls r0, r0, #11	@ 0001830a c002
.org 0x1830c
	b.n 0x18386	@ 0001830c 3be0
.org 0x1830e
	.byte 0x00	@ 0001830e data
.org 0x1830f
	.byte 0x00	@ 0001830f data
.org 0x18310
	.byte 0xff,0x0f,0x06,0x00	@ 00018310 data
.org 0x18314
	ldr r0, [pc, #24]	@ 00018314 0648
.org 0x18316
	cmp r2, r0	@ 00018316 8242
.org 0x18318
	bgt.n 0x18334	@ 00018318 0cdc
.org 0x1831a
	ldr r1, [r4, #88]	@ 0001831a a16d
.org 0x1831c
	movs r0, #200	@ 0001831c c820
.org 0x1831e
	lsls r0, r0, #10	@ 0001831e 8002
.org 0x18320
	cmp r1, r0	@ 00018320 8142
.org 0x18322
	ble.n 0x18334	@ 00018322 07dd
.org 0x18324
	movs r0, #164	@ 00018324 a420
.org 0x18326
	lsls r0, r0, #1	@ 00018326 4000
.org 0x18328
	adds r1, r3, r0	@ 00018328 1918
.org 0x1832a
	movs r0, #240	@ 0001832a f020
.org 0x1832c
	lsls r0, r0, #11	@ 0001832c c002
.org 0x1832e
	b.n 0x18386	@ 0001832e 2ae0
.org 0x18330
	.byte 0xff,0x7f,0x07,0x00	@ 00018330 data
.org 0x18334
	ldr r2, [r5, #0]	@ 00018334 2a68
.org 0x18336
	ldr r1, [r2, #84]	@ 00018336 516d
.org 0x18338
	ldr r0, [pc, #8]	@ 00018338 0248
.org 0x1833a
	cmp r1, r0	@ 0001833a 8142
.org 0x1833c
	bgt.n 0x18350	@ 0001833c 08dc
.org 0x1833e
	ldr r1, [pc, #8]	@ 0001833e 0249
.org 0x18340
	ldr r0, [pc, #8]	@ 00018340 0248
.org 0x18342
	b.n 0x18386	@ 00018342 20e0
.org 0x18344
	.byte 0xff,0x6f,0x17,0x00	@ 00018344 data
.org 0x18348
	.byte 0x54,0xea,0x02,0x02	@ 00018348 data
.org 0x1834c
	.byte 0x00,0x90,0x15,0x00	@ 0001834c data
.org 0x18350
	ldr r0, [pc, #20]	@ 00018350 0548
.org 0x18352
	cmp r1, r0	@ 00018352 8142
.org 0x18354
	bgt.n 0x18370	@ 00018354 0cdc
.org 0x18356
	ldr r1, [r2, #88]	@ 00018356 916d
.org 0x18358
	movs r0, #160	@ 00018358 a020
.org 0x1835a
	lsls r0, r0, #10	@ 0001835a 8002
