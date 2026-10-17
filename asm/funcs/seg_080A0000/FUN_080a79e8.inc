@ FUN_080a79e8  entry 0x080a79e8  size 144
.thumb
.org 0xa79e8
FUN_080a79e8:
	push {r4, r5, r6, r7, lr}	@ 000a79e8 f0b5
.org 0xa79ea
	adds r5, r0, #0	@ 000a79ea 051c
.org 0xa79ec
	ldr r7, [r5, #40]	@ 000a79ec af6a
.org 0xa79ee
	ldrb r4, [r5, #17]	@ 000a79ee 6c7c
.org 0xa79f0
	ldr r1, [pc, #64]	@ 000a79f0 1049
.org 0xa79f2
	ldrb r0, [r5, #9]	@ 000a79f2 687a
.org 0xa79f4
	lsls r0, r0, #2	@ 000a79f4 8000
.org 0xa79f6
	adds r0, r0, r1	@ 000a79f6 4018
.org 0xa79f8
	movs r1, #1	@ 000a79f8 0121
.org 0xa79fa
	str r1, [r5, #12]	@ 000a79fa e960
.org 0xa79fc
	ldr r0, [r0, #0]	@ 000a79fc 0068
.org 0xa79fe
	ldr r0, [r0, #4]	@ 000a79fe 4068
.org 0xa7a00
	str r0, [r5, #20]	@ 000a7a00 6861
.org 0xa7a02
	ldrb r1, [r5, #10]	@ 000a7a02 a97a
.org 0xa7a04
	movs r0, #1	@ 000a7a04 0120
.org 0xa7a06
	movs r6, #0	@ 000a7a06 0026
.org 0xa7a08
	orrs r0, r1	@ 000a7a08 0843
.org 0xa7a0a
	movs r1, #2	@ 000a7a0a 0221
.org 0xa7a0c
	orrs r0, r1	@ 000a7a0c 0843
.org 0xa7a0e
	strb r0, [r5, #10]	@ 000a7a0e a872
.org 0xa7a10
	ldr r0, [r5, #84]	@ 000a7a10 686d
.org 0xa7a12
	str r0, [r5, #100]	@ 000a7a12 6866
.org 0xa7a14
	ldr r0, [r5, #88]	@ 000a7a14 a86d
.org 0xa7a16
	str r0, [r5, #104]	@ 000a7a16 a866
.org 0xa7a18
	movs r0, #80	@ 000a7a18 5020
.org 0xa7a1a
	strb r0, [r5, #18]	@ 000a7a1a a874
.org 0xa7a1c
	adds r0, r5, #0	@ 000a7a1c 281c
.org 0xa7a1e
	bl 0x1cc9c	@ 000a7a1e 75f73df9
.org 0xa7a22
	adds r0, r5, #0	@ 000a7a22 281c
.org 0xa7a24
	bl 0x1ceec	@ 000a7a24 75f762fa
.org 0xa7a28
	cmp r4, #0	@ 000a7a28 002c
.org 0xa7a2a
	beq.n 0xa7a38	@ 000a7a2a 05d0
.org 0xa7a2c
	ldrb r0, [r5, #10]	@ 000a7a2c a87a
.org 0xa7a2e
	movs r1, #16	@ 000a7a2e 1021
.org 0xa7a30
	orrs r0, r1	@ 000a7a30 0843
.org 0xa7a32
	b.n 0xa7a3e	@ 000a7a32 04e0
.org 0xa7a34
	.byte 0x40,0xdb,0x85,0x08	@ 000a7a34 data
.org 0xa7a38
	ldrb r1, [r5, #10]	@ 000a7a38 a97a
.org 0xa7a3a
	movs r0, #239	@ 000a7a3a ef20
.org 0xa7a3c
	ands r0, r1	@ 000a7a3c 0840
.org 0xa7a3e
	strb r0, [r5, #10]	@ 000a7a3e a872
.org 0xa7a40
	movs r1, #1	@ 000a7a40 0121
.org 0xa7a42
	ands r1, r4	@ 000a7a42 2140
.org 0xa7a44
	adds r0, r5, #0	@ 000a7a44 281c
.org 0xa7a46
	adds r0, #76	@ 000a7a46 4c30
.org 0xa7a48
	strb r1, [r0, #0]	@ 000a7a48 0170
.org 0xa7a4a
	adds r3, r5, #0	@ 000a7a4a 2b1c
.org 0xa7a4c
	adds r3, #74	@ 000a7a4c 4a33
.org 0xa7a4e
	lsls r1, r1, #4	@ 000a7a4e 0901
.org 0xa7a50
	ldrb r2, [r3, #0]	@ 000a7a50 1a78
.org 0xa7a52
	movs r0, #17	@ 000a7a52 1120
.org 0xa7a54
	negs r0, r0	@ 000a7a54 4042
.org 0xa7a56
	ands r0, r2	@ 000a7a56 1040
.org 0xa7a58
	orrs r0, r1	@ 000a7a58 0843
.org 0xa7a5a
	strb r0, [r3, #0]	@ 000a7a5a 1870
.org 0xa7a5c
	ldr r1, [pc, #28]	@ 000a7a5c 0749
.org 0xa7a5e
	adds r0, r5, #0	@ 000a7a5e 281c
.org 0xa7a60
	bl 0x1cf00	@ 000a7a60 75f74efa
.org 0xa7a64
	ldrb r1, [r5, #11]	@ 000a7a64 e97a
.org 0xa7a66
	movs r0, #16	@ 000a7a66 1020
.org 0xa7a68
	orrs r0, r1	@ 000a7a68 0843
.org 0xa7a6a
	strb r0, [r5, #11]	@ 000a7a6a e872
.org 0xa7a6c
	ldrb r0, [r7, #28]	@ 000a7a6c 387f
.org 0xa7a6e
	strb r0, [r5, #29]	@ 000a7a6e 6877
.org 0xa7a70
	adds r0, r5, #0	@ 000a7a70 281c
.org 0xa7a72
	bl 0xa7a80	@ 000a7a72 00f005f8
.org 0xa7a76
	pop {r4, r5, r6, r7}	@ 000a7a76 f0bc
