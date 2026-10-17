@ FUN_080d99e8  entry 0x080d99e8  size 140
.thumb
.org 0xd99e8
FUN_080d99e8:
	push {r4, r5, r6, lr}	@ 000d99e8 70b5
.org 0xd99ea
	adds r5, r0, #0	@ 000d99ea 051c
.org 0xd99ec
	ldrb r4, [r5, #17]	@ 000d99ec 6c7c
.org 0xd99ee
	ldr r1, [pc, #76]	@ 000d99ee 1349
.org 0xd99f0
	ldrb r0, [r5, #9]	@ 000d99f0 687a
.org 0xd99f2
	lsls r0, r0, #2	@ 000d99f2 8000
.org 0xd99f4
	adds r0, r0, r1	@ 000d99f4 4018
.org 0xd99f6
	movs r1, #1	@ 000d99f6 0121
.org 0xd99f8
	str r1, [r5, #12]	@ 000d99f8 e960
.org 0xd99fa
	ldr r0, [r0, #0]	@ 000d99fa 0068
.org 0xd99fc
	ldr r0, [r0, #4]	@ 000d99fc 4068
.org 0xd99fe
	str r0, [r5, #20]	@ 000d99fe 6861
.org 0xd9a00
	ldrb r1, [r5, #10]	@ 000d9a00 a97a
.org 0xd9a02
	movs r0, #1	@ 000d9a02 0120
.org 0xd9a04
	movs r6, #0	@ 000d9a04 0026
.org 0xd9a06
	orrs r0, r1	@ 000d9a06 0843
.org 0xd9a08
	movs r1, #2	@ 000d9a08 0221
.org 0xd9a0a
	orrs r0, r1	@ 000d9a0a 0843
.org 0xd9a0c
	strb r0, [r5, #10]	@ 000d9a0c a872
.org 0xd9a0e
	lsls r1, r4, #1	@ 000d9a0e 6100
.org 0xd9a10
	subs r1, #1	@ 000d9a10 0139
.org 0xd9a12
	lsls r0, r1, #1	@ 000d9a12 4800
.org 0xd9a14
	adds r0, r0, r1	@ 000d9a14 4018
.org 0xd9a16
	lsls r0, r0, #7	@ 000d9a16 c001
.org 0xd9a18
	negs r0, r0	@ 000d9a18 4042
.org 0xd9a1a
	str r0, [r5, #92]	@ 000d9a1a e865
.org 0xd9a1c
	movs r1, #16	@ 000d9a1c 1021
.org 0xd9a1e
	strb r1, [r5, #18]	@ 000d9a1e a974
.org 0xd9a20
	ldrb r1, [r5, #18]	@ 000d9a20 a97c
.org 0xd9a22
	bl 0x128fb8	@ 000d9a22 4ff0c9fa
.org 0xd9a26
	negs r0, r0	@ 000d9a26 4042
.org 0xd9a28
	str r0, [r5, #100]	@ 000d9a28 6866
.org 0xd9a2a
	adds r0, r5, #0	@ 000d9a2a 281c
.org 0xd9a2c
	bl 0x1cc9c	@ 000d9a2c 43f736f9
.org 0xd9a30
	cmp r4, #0	@ 000d9a30 002c
.org 0xd9a32
	beq.n 0xd9a40	@ 000d9a32 05d0
.org 0xd9a34
	ldrb r0, [r5, #10]	@ 000d9a34 a87a
.org 0xd9a36
	movs r1, #16	@ 000d9a36 1021
.org 0xd9a38
	orrs r0, r1	@ 000d9a38 0843
.org 0xd9a3a
	b.n 0xd9a46	@ 000d9a3a 04e0
.org 0xd9a3c
	.byte 0x64,0x6f,0x86,0x08	@ 000d9a3c data
.org 0xd9a40
	ldrb r1, [r5, #10]	@ 000d9a40 a97a
.org 0xd9a42
	movs r0, #239	@ 000d9a42 ef20
.org 0xd9a44
	ands r0, r1	@ 000d9a44 0840
.org 0xd9a46
	strb r0, [r5, #10]	@ 000d9a46 a872
.org 0xd9a48
	movs r1, #1	@ 000d9a48 0121
.org 0xd9a4a
	ands r1, r4	@ 000d9a4a 2140
.org 0xd9a4c
	adds r0, r5, #0	@ 000d9a4c 281c
.org 0xd9a4e
	adds r0, #76	@ 000d9a4e 4c30
.org 0xd9a50
	strb r1, [r0, #0]	@ 000d9a50 0170
.org 0xd9a52
	adds r3, r5, #0	@ 000d9a52 2b1c
.org 0xd9a54
	adds r3, #74	@ 000d9a54 4a33
.org 0xd9a56
	lsls r1, r1, #4	@ 000d9a56 0901
.org 0xd9a58
	ldrb r2, [r3, #0]	@ 000d9a58 1a78
.org 0xd9a5a
	movs r0, #17	@ 000d9a5a 1120
.org 0xd9a5c
	negs r0, r0	@ 000d9a5c 4042
.org 0xd9a5e
	ands r0, r2	@ 000d9a5e 1040
.org 0xd9a60
	orrs r0, r1	@ 000d9a60 0843
.org 0xd9a62
	strb r0, [r3, #0]	@ 000d9a62 1870
.org 0xd9a64
	ldr r1, [pc, #16]	@ 000d9a64 0449
.org 0xd9a66
	adds r0, r5, #0	@ 000d9a66 281c
.org 0xd9a68
	bl 0x1cf00	@ 000d9a68 43f74afa
.org 0xd9a6c
	adds r0, r5, #0	@ 000d9a6c 281c
.org 0xd9a6e
	bl 0xd9a7c	@ 000d9a6e 00f005f8
.org 0xd9a72
	pop {r4, r5, r6}	@ 000d9a72 70bc
