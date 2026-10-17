@ FUN_08085e24  entry 0x08085e24  size 144
.thumb
.org 0x85e24
FUN_08085e24:
	push {r4, r5, lr}	@ 00085e24 30b5
.org 0x85e26
	sub sp, #8	@ 00085e26 82b0
.org 0x85e28
	adds r5, r0, #0	@ 00085e28 051c
.org 0x85e2a
	ldrb r2, [r5, #14]	@ 00085e2a aa7b
.org 0x85e2c
	cmp r2, #0	@ 00085e2c 002a
.org 0x85e2e
	beq.n 0x85e36	@ 00085e2e 02d0
.org 0x85e30
	cmp r2, #1	@ 00085e30 012a
.org 0x85e32
	beq.n 0x85ea8	@ 00085e32 39d0
.org 0x85e34
	b.n 0x85eba	@ 00085e34 41e0
.org 0x85e36
	ldrb r1, [r5, #10]	@ 00085e36 a97a
.org 0x85e38
	movs r0, #254	@ 00085e38 fe20
.org 0x85e3a
	ands r0, r1	@ 00085e3a 0840
.org 0x85e3c
	strb r0, [r5, #10]	@ 00085e3c a872
.org 0x85e3e
	adds r0, r5, #0	@ 00085e3e 281c
.org 0x85e40
	adds r0, #140	@ 00085e40 8c30
.org 0x85e42
	str r2, [r0, #0]	@ 00085e42 0260
.org 0x85e44
	adds r0, #4	@ 00085e44 0430
.org 0x85e46
	str r2, [r0, #0]	@ 00085e46 0260
.org 0x85e48
	adds r0, #4	@ 00085e48 0430
.org 0x85e4a
	strb r2, [r0, #0]	@ 00085e4a 0270
.org 0x85e4c
	ldrb r1, [r5, #10]	@ 00085e4c a97a
.org 0x85e4e
	movs r0, #251	@ 00085e4e fb20
.org 0x85e50
	ands r0, r1	@ 00085e50 0840
.org 0x85e52
	strb r0, [r5, #10]	@ 00085e52 a872
.org 0x85e54
	ldr r0, [r5, #84]	@ 00085e54 686d
.org 0x85e56
	str r0, [sp, #0]	@ 00085e56 0090
.org 0x85e58
	ldr r0, [r5, #88]	@ 00085e58 a86d
.org 0x85e5a
	ldr r1, [pc, #64]	@ 00085e5a 1049
.org 0x85e5c
	adds r0, r0, r1	@ 00085e5c 4018
.org 0x85e5e
	str r0, [sp, #4]	@ 00085e5e 0190
.org 0x85e60
	movs r0, #1	@ 00085e60 0120
.org 0x85e62
	mov r1, sp	@ 00085e62 6946
.org 0x85e64
	bl 0xd0c88	@ 00085e64 4af010ff
.org 0x85e68
	movs r0, #42	@ 00085e68 2a20
.org 0x85e6a
	bl 0x2b10	@ 00085e6a 7cf751fe
.org 0x85e6e
	ldr r2, [pc, #48]	@ 00085e6e 0c4a
.org 0x85e70
	ldrh r1, [r2, #12]	@ 00085e70 9189
.org 0x85e72
	ldr r0, [pc, #48]	@ 00085e72 0c48
.org 0x85e74
	cmp r1, r0	@ 00085e74 8142
.org 0x85e76
	bhi.n 0x85e7c	@ 00085e76 01d8
.org 0x85e78
	adds r0, r1, #1	@ 00085e78 481c
.org 0x85e7a
	strh r0, [r2, #12]	@ 00085e7a 9081
.org 0x85e7c
	adds r4, r5, #0	@ 00085e7c 2c1c
.org 0x85e7e
	adds r4, #84	@ 00085e7e 5434
.org 0x85e80
	adds r0, r5, #0	@ 00085e80 281c
.org 0x85e82
	adds r1, r4, #0	@ 00085e82 211c
.org 0x85e84
	bl 0x2abe0	@ 00085e84 a4f7acfe
.org 0x85e88
	movs r0, #4	@ 00085e88 0420
.org 0x85e8a
	movs r1, #43	@ 00085e8a 2b21
.org 0x85e8c
	adds r2, r4, #0	@ 00085e8c 221c
.org 0x85e8e
	bl 0x2ab88	@ 00085e8e a4f77bfe
.org 0x85e92
	ldrb r0, [r5, #14]	@ 00085e92 a87b
.org 0x85e94
	adds r0, #1	@ 00085e94 0130
.org 0x85e96
	strb r0, [r5, #14]	@ 00085e96 a873
.org 0x85e98
	b.n 0x85eba	@ 00085e98 0fe0
.org 0x85e9a
	.byte 0x00	@ 00085e9a data
.org 0x85e9b
	.byte 0x00	@ 00085e9b data
.org 0x85e9c
	.byte 0x00,0xf8,0xff,0xff	@ 00085e9c data
.org 0x85ea0
	.byte 0xe0,0xe8,0x02,0x02	@ 00085ea0 data
.org 0x85ea4
	.byte 0x0e,0x27,0x00,0x00	@ 00085ea4 data
.org 0x85ea8
	ldr r1, [pc, #24]	@ 00085ea8 0649
.org 0x85eaa
	ldrb r0, [r5, #9]	@ 00085eaa 687a
.org 0x85eac
	lsls r0, r0, #2	@ 00085eac 8000
.org 0x85eae
	adds r0, r0, r1	@ 00085eae 4018
.org 0x85eb0
	movs r1, #4	@ 00085eb0 0421
.org 0x85eb2
	str r1, [r5, #12]	@ 00085eb2 e960
