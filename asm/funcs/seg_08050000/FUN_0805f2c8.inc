@ FUN_0805f2c8  entry 0x0805f2c8  size 126
.thumb
.org 0x5f2c8
FUN_0805f2c8:
	push {r4, lr}	@ 0005f2c8 10b5
.org 0x5f2ca
	adds r4, r0, #0	@ 0005f2ca 041c
.org 0x5f2cc
	adds r0, #140	@ 0005f2cc 8c30
.org 0x5f2ce
	ldr r0, [r0, #0]	@ 0005f2ce 0068
.org 0x5f2d0
	movs r1, #128	@ 0005f2d0 8021
.org 0x5f2d2
	lsls r1, r1, #2	@ 0005f2d2 8900
.org 0x5f2d4
	ands r0, r1	@ 0005f2d4 0840
.org 0x5f2d6
	cmp r0, #0	@ 0005f2d6 0028
.org 0x5f2d8
	bne.n 0x5f2e6	@ 0005f2d8 05d1
.org 0x5f2da
	adds r0, r4, #0	@ 0005f2da 201c
.org 0x5f2dc
	adds r0, #164	@ 0005f2dc a430
.org 0x5f2de
	movs r1, #0	@ 0005f2de 0021
.org 0x5f2e0
	ldrsh r0, [r0, r1]	@ 0005f2e0 405e
.org 0x5f2e2
	cmp r0, #0	@ 0005f2e2 0028
.org 0x5f2e4
	bne.n 0x5f314	@ 0005f2e4 16d1
.org 0x5f2e6
	ldr r0, [pc, #36]	@ 0005f2e6 0948
.org 0x5f2e8
	ldrh r1, [r0, #8]	@ 0005f2e8 0189
.org 0x5f2ea
	movs r0, #8	@ 0005f2ea 0820
.org 0x5f2ec
	ands r0, r1	@ 0005f2ec 0840
.org 0x5f2ee
	cmp r0, #0	@ 0005f2ee 0028
.org 0x5f2f0
	bne.n 0x5f314	@ 0005f2f0 10d1
.org 0x5f2f2
	ldr r1, [pc, #28]	@ 0005f2f2 0749
.org 0x5f2f4
	ldrb r0, [r4, #9]	@ 0005f2f4 607a
.org 0x5f2f6
	lsls r0, r0, #2	@ 0005f2f6 8000
.org 0x5f2f8
	adds r0, r0, r1	@ 0005f2f8 4018
.org 0x5f2fa
	movs r1, #2	@ 0005f2fa 0221
.org 0x5f2fc
	str r1, [r4, #12]	@ 0005f2fc e160
.org 0x5f2fe
	ldr r0, [r0, #0]	@ 0005f2fe 0068
.org 0x5f300
	ldr r0, [r0, #8]	@ 0005f300 8068
.org 0x5f302
	str r0, [r4, #20]	@ 0005f302 6061
.org 0x5f304
	adds r0, r4, #0	@ 0005f304 201c
.org 0x5f306
	bl 0x5f360	@ 0005f306 00f02bf8
.org 0x5f30a
	b.n 0x5f348	@ 0005f30a 1de0
.org 0x5f30c
	.byte 0x10,0xe9,0x02,0x02	@ 0005f30c data
.org 0x5f310
	.byte 0x70,0x7d,0x85,0x08	@ 0005f310 data
.org 0x5f314
	ldr r1, [pc, #56]	@ 0005f314 0e49
.org 0x5f316
	ldrb r0, [r4, #13]	@ 0005f316 607b
.org 0x5f318
	lsls r0, r0, #2	@ 0005f318 8000
.org 0x5f31a
	adds r0, r0, r1	@ 0005f31a 4018
.org 0x5f31c
	ldr r1, [r0, #0]	@ 0005f31c 0168
.org 0x5f31e
	adds r0, r4, #0	@ 0005f31e 201c
.org 0x5f320
	bl 0x128f80	@ 0005f320 c9f02efe
.org 0x5f324
	ldrb r0, [r4, #13]	@ 0005f324 607b
.org 0x5f326
	cmp r0, #1	@ 0005f326 0128
.org 0x5f328
	bls.n 0x5f348	@ 0005f328 0ed9
.org 0x5f32a
	ldr r2, [pc, #40]	@ 0005f32a 0a4a
.org 0x5f32c
	ldr r0, [r2, #56]	@ 0005f32c 906b
.org 0x5f32e
	ldr r3, [pc, #40]	@ 0005f32e 0a4b
.org 0x5f330
	adds r1, r0, r3	@ 0005f330 c118
.org 0x5f332
	ldr r0, [r4, #84]	@ 0005f332 606d
.org 0x5f334
	cmp r0, r1	@ 0005f334 8842
.org 0x5f336
	bge.n 0x5f33a	@ 0005f336 00da
.org 0x5f338
	str r1, [r4, #84]	@ 0005f338 6165
.org 0x5f33a
	ldr r0, [r2, #56]	@ 0005f33a 906b
.org 0x5f33c
	ldr r2, [pc, #28]	@ 0005f33c 074a
.org 0x5f33e
	adds r1, r0, r2	@ 0005f33e 8118
.org 0x5f340
	ldr r0, [r4, #84]	@ 0005f340 606d
.org 0x5f342
	cmp r0, r1	@ 0005f342 8842
.org 0x5f344
	ble.n 0x5f348	@ 0005f344 00dd
