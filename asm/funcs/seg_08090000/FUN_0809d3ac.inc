@ FUN_0809d3ac  entry 0x0809d3ac  size 110
.thumb
.org 0x9d3ac
FUN_0809d3ac:
	push {r4, r5, r6, lr}	@ 0009d3ac 70b5
.org 0x9d3ae
	adds r5, r0, #0	@ 0009d3ae 051c
.org 0x9d3b0
	ldr r4, [r5, #40]	@ 0009d3b0 ac6a
.org 0x9d3b2
	ldrb r0, [r4, #30]	@ 0009d3b2 a07f
.org 0x9d3b4
	lsls r0, r0, #8	@ 0009d3b4 0002
.org 0x9d3b6
	adds r1, r4, #0	@ 0009d3b6 211c
.org 0x9d3b8
	adds r1, #112	@ 0009d3b8 7031
.org 0x9d3ba
	ldrb r1, [r1, #0]	@ 0009d3ba 0978
.org 0x9d3bc
	orrs r0, r1	@ 0009d3bc 0843
.org 0x9d3be
	ldr r1, [pc, #60]	@ 0009d3be 0f49
.org 0x9d3c0
	cmp r0, r1	@ 0009d3c0 8842
.org 0x9d3c2
	bne.n 0x9d404	@ 0009d3c2 1fd1
.org 0x9d3c4
	ldrb r1, [r5, #10]	@ 0009d3c4 a97a
.org 0x9d3c6
	movs r0, #254	@ 0009d3c6 fe20
.org 0x9d3c8
	ands r0, r1	@ 0009d3c8 0840
.org 0x9d3ca
	movs r2, #0	@ 0009d3ca 0022
.org 0x9d3cc
	movs r1, #253	@ 0009d3cc fd21
.org 0x9d3ce
	ands r0, r1	@ 0009d3ce 0840
.org 0x9d3d0
	strb r0, [r5, #10]	@ 0009d3d0 a872
.org 0x9d3d2
	adds r0, r5, #0	@ 0009d3d2 281c
.org 0x9d3d4
	adds r0, #140	@ 0009d3d4 8c30
.org 0x9d3d6
	str r2, [r0, #0]	@ 0009d3d6 0260
.org 0x9d3d8
	adds r0, #4	@ 0009d3d8 0430
.org 0x9d3da
	str r2, [r0, #0]	@ 0009d3da 0260
.org 0x9d3dc
	adds r0, #4	@ 0009d3dc 0430
.org 0x9d3de
	strb r2, [r0, #0]	@ 0009d3de 0270
.org 0x9d3e0
	ldrb r1, [r5, #10]	@ 0009d3e0 a97a
.org 0x9d3e2
	movs r0, #251	@ 0009d3e2 fb20
.org 0x9d3e4
	ands r0, r1	@ 0009d3e4 0840
.org 0x9d3e6
	strb r0, [r5, #10]	@ 0009d3e6 a872
.org 0x9d3e8
	ldr r1, [pc, #20]	@ 0009d3e8 0549
.org 0x9d3ea
	ldrb r0, [r5, #9]	@ 0009d3ea 687a
.org 0x9d3ec
	lsls r0, r0, #2	@ 0009d3ec 8000
.org 0x9d3ee
	adds r0, r0, r1	@ 0009d3ee 4018
.org 0x9d3f0
	movs r1, #3	@ 0009d3f0 0321
.org 0x9d3f2
	str r1, [r5, #12]	@ 0009d3f2 e960
.org 0x9d3f4
	ldr r0, [r0, #0]	@ 0009d3f4 0068
.org 0x9d3f6
	ldr r0, [r0, #12]	@ 0009d3f6 c068
.org 0x9d3f8
	str r0, [r5, #20]	@ 0009d3f8 6861
.org 0x9d3fa
	b.n 0x9d7d6	@ 0009d3fa ece1
.org 0x9d3fc
	.byte 0x22,0xa9,0x00,0x00	@ 0009d3fc data
.org 0x9d400
	.byte 0x40,0xdb,0x85,0x08	@ 0009d400 data
.org 0x9d404
	ldrb r0, [r5, #13]	@ 0009d404 687b
.org 0x9d406
	cmp r0, #7	@ 0009d406 0728
.org 0x9d408
	bls.n 0x9d40c	@ 0009d408 00d9
.org 0x9d40a
	b.n 0x9d7d0	@ 0009d40a e1e1
.org 0x9d40c
	lsls r0, r0, #2	@ 0009d40c 8000
.org 0x9d40e
	ldr r1, [pc, #8]	@ 0009d40e 0249
.org 0x9d410
	adds r0, r0, r1	@ 0009d410 4018
.org 0x9d412
	ldr r0, [r0, #0]	@ 0009d412 0068
.org 0x9d414
	mov pc, r0	@ 0009d414 8746
.org 0x9d416
	.byte 0x00	@ 0009d416 data
.org 0x9d417
	.byte 0x00	@ 0009d417 data
.org 0x9d418
	.byte 0x1c,0xd4,0x09,0x08	@ 0009d418 data
