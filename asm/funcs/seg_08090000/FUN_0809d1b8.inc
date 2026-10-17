@ FUN_0809d1b8  entry 0x0809d1b8  size 110
.thumb
.org 0x9d1b8
FUN_0809d1b8:
	push {r4, r5, lr}	@ 0009d1b8 30b5
.org 0x9d1ba
	adds r4, r0, #0	@ 0009d1ba 041c
.org 0x9d1bc
	ldr r5, [r4, #40]	@ 0009d1bc a56a
.org 0x9d1be
	ldrb r0, [r5, #30]	@ 0009d1be a87f
.org 0x9d1c0
	lsls r0, r0, #8	@ 0009d1c0 0002
.org 0x9d1c2
	adds r1, r5, #0	@ 0009d1c2 291c
.org 0x9d1c4
	adds r1, #112	@ 0009d1c4 7031
.org 0x9d1c6
	ldrb r1, [r1, #0]	@ 0009d1c6 0978
.org 0x9d1c8
	orrs r0, r1	@ 0009d1c8 0843
.org 0x9d1ca
	ldr r1, [pc, #60]	@ 0009d1ca 0f49
.org 0x9d1cc
	cmp r0, r1	@ 0009d1cc 8842
.org 0x9d1ce
	bne.n 0x9d210	@ 0009d1ce 1fd1
.org 0x9d1d0
	ldrb r1, [r4, #10]	@ 0009d1d0 a17a
.org 0x9d1d2
	movs r0, #254	@ 0009d1d2 fe20
.org 0x9d1d4
	ands r0, r1	@ 0009d1d4 0840
.org 0x9d1d6
	movs r2, #0	@ 0009d1d6 0022
.org 0x9d1d8
	movs r1, #253	@ 0009d1d8 fd21
.org 0x9d1da
	ands r0, r1	@ 0009d1da 0840
.org 0x9d1dc
	strb r0, [r4, #10]	@ 0009d1dc a072
.org 0x9d1de
	adds r0, r4, #0	@ 0009d1de 201c
.org 0x9d1e0
	adds r0, #140	@ 0009d1e0 8c30
.org 0x9d1e2
	str r2, [r0, #0]	@ 0009d1e2 0260
.org 0x9d1e4
	adds r0, #4	@ 0009d1e4 0430
.org 0x9d1e6
	str r2, [r0, #0]	@ 0009d1e6 0260
.org 0x9d1e8
	adds r0, #4	@ 0009d1e8 0430
.org 0x9d1ea
	strb r2, [r0, #0]	@ 0009d1ea 0270
.org 0x9d1ec
	ldrb r1, [r4, #10]	@ 0009d1ec a17a
.org 0x9d1ee
	movs r0, #251	@ 0009d1ee fb20
.org 0x9d1f0
	ands r0, r1	@ 0009d1f0 0840
.org 0x9d1f2
	strb r0, [r4, #10]	@ 0009d1f2 a072
.org 0x9d1f4
	ldr r1, [pc, #20]	@ 0009d1f4 0549
.org 0x9d1f6
	ldrb r0, [r4, #9]	@ 0009d1f6 607a
.org 0x9d1f8
	lsls r0, r0, #2	@ 0009d1f8 8000
.org 0x9d1fa
	adds r0, r0, r1	@ 0009d1fa 4018
.org 0x9d1fc
	movs r1, #3	@ 0009d1fc 0321
.org 0x9d1fe
	str r1, [r4, #12]	@ 0009d1fe e160
.org 0x9d200
	ldr r0, [r0, #0]	@ 0009d200 0068
.org 0x9d202
	ldr r0, [r0, #12]	@ 0009d202 c068
.org 0x9d204
	str r0, [r4, #20]	@ 0009d204 6061
.org 0x9d206
	b.n 0x9d3a4	@ 0009d206 cde0
.org 0x9d208
	.byte 0x22,0xa9,0x00,0x00	@ 0009d208 data
.org 0x9d20c
	.byte 0x40,0xdb,0x85,0x08	@ 0009d20c data
.org 0x9d210
	adds r0, r4, #0	@ 0009d210 201c
.org 0x9d212
	bl 0x1cff0	@ 0009d212 7ff7edfe
.org 0x9d216
	ldrb r0, [r4, #13]	@ 0009d216 607b
.org 0x9d218
	cmp r0, #9	@ 0009d218 0928
.org 0x9d21a
	bls.n 0x9d21e	@ 0009d21a 00d9
.org 0x9d21c
	b.n 0x9d3a4	@ 0009d21c c2e0
.org 0x9d21e
	lsls r0, r0, #2	@ 0009d21e 8000
.org 0x9d220
	ldr r1, [pc, #4]	@ 0009d220 0149
.org 0x9d222
	adds r0, r0, r1	@ 0009d222 4018
.org 0x9d224
	ldr r0, [r0, #0]	@ 0009d224 0068
