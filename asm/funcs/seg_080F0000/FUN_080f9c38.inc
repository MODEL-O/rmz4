@ FUN_080f9c38  entry 0x080f9c38  size 292
.thumb
.org 0xf9c38
FUN_080f9c38:
	push {r4, r5, r6, r7, lr}	@ 000f9c38 f0b5
.org 0xf9c3a
	sub sp, #8	@ 000f9c3a 82b0
.org 0xf9c3c
	adds r7, r0, #0	@ 000f9c3c 071c
.org 0xf9c3e
	ldrb r0, [r7, #10]	@ 000f9c3e b87a
.org 0xf9c40
	lsrs r5, r0, #4	@ 000f9c40 0509
.org 0xf9c42
	movs r0, #1	@ 000f9c42 0120
.org 0xf9c44
	ands r5, r0	@ 000f9c44 0540
.org 0xf9c46
	ldrb r4, [r7, #15]	@ 000f9c46 fc7b
.org 0xf9c48
	cmp r4, #0	@ 000f9c48 002c
.org 0xf9c4a
	bne.n 0xf9ca4	@ 000f9c4a 2bd1
.org 0xf9c4c
	ldr r0, [pc, #268]	@ 000f9c4c 4348
.org 0xf9c4e
	bl 0x2b10	@ 000f9c4e 08f75fff
.org 0xf9c52
	ldr r0, [r7, #84]	@ 000f9c52 786d
.org 0xf9c54
	str r0, [sp, #0]	@ 000f9c54 0090
.org 0xf9c56
	ldr r0, [r7, #88]	@ 000f9c56 b86d
.org 0xf9c58
	ldr r1, [pc, #260]	@ 000f9c58 4149
.org 0xf9c5a
	adds r0, r0, r1	@ 000f9c5a 4018
.org 0xf9c5c
	str r0, [sp, #4]	@ 000f9c5c 0190
.org 0xf9c5e
	movs r2, #128	@ 000f9c5e 8022
.org 0xf9c60
	lsls r2, r2, #2	@ 000f9c60 9200
.org 0xf9c62
	adds r0, r7, #0	@ 000f9c62 381c
.org 0xf9c64
	adds r0, #182	@ 000f9c64 b630
.org 0xf9c66
	ldrb r3, [r0, #0]	@ 000f9c66 0378
.org 0xf9c68
	movs r0, #0	@ 000f9c68 0020
.org 0xf9c6a
	mov r1, sp	@ 000f9c6a 6946
.org 0xf9c6c
	bl 0xd0dc4	@ 000f9c6c d7f7aaf8
.org 0xf9c70
	adds r0, r7, #0	@ 000f9c70 381c
.org 0xf9c72
	adds r0, #84	@ 000f9c72 5430
.org 0xf9c74
	movs r1, #0	@ 000f9c74 0021
.org 0xf9c76
	adds r2, r5, #0	@ 000f9c76 2a1c
.org 0xf9c78
	bl 0xe057c	@ 000f9c78 e6f780fc
.org 0xf9c7c
	adds r0, r7, #0	@ 000f9c7c 381c
.org 0xf9c7e
	adds r0, #140	@ 000f9c7e 8c30
.org 0xf9c80
	str r4, [r0, #0]	@ 000f9c80 0460
.org 0xf9c82
	adds r0, #4	@ 000f9c82 0430
.org 0xf9c84
	str r4, [r0, #0]	@ 000f9c84 0460
.org 0xf9c86
	adds r0, #4	@ 000f9c86 0430
.org 0xf9c88
	strb r4, [r0, #0]	@ 000f9c88 0470
.org 0xf9c8a
	ldrb r1, [r7, #10]	@ 000f9c8a b97a
.org 0xf9c8c
	movs r0, #251	@ 000f9c8c fb20
.org 0xf9c8e
	ands r0, r1	@ 000f9c8e 0840
.org 0xf9c90
	strb r0, [r7, #10]	@ 000f9c90 b872
.org 0xf9c92
	ldr r1, [pc, #208]	@ 000f9c92 3449
.org 0xf9c94
	adds r0, r7, #0	@ 000f9c94 381c
.org 0xf9c96
	bl 0x1cf00	@ 000f9c96 23f733f9
.org 0xf9c9a
	movs r0, #64	@ 000f9c9a 4020
.org 0xf9c9c
	strb r0, [r7, #18]	@ 000f9c9c b874
.org 0xf9c9e
	ldrb r0, [r7, #15]	@ 000f9c9e f87b
.org 0xf9ca0
	adds r0, #1	@ 000f9ca0 0130
.org 0xf9ca2
	strb r0, [r7, #15]	@ 000f9ca2 f873
.org 0xf9ca4
	adds r0, r7, #0	@ 000f9ca4 381c
.org 0xf9ca6
	bl 0x1cff0	@ 000f9ca6 23f7a3f9
.org 0xf9caa
	ldrb r0, [r7, #18]	@ 000f9caa b87c
.org 0xf9cac
	subs r0, #1	@ 000f9cac 0138
.org 0xf9cae
	strb r0, [r7, #18]	@ 000f9cae b874
.org 0xf9cb0
	lsls r0, r0, #24	@ 000f9cb0 0006
.org 0xf9cb2
	cmp r0, #0	@ 000f9cb2 0028
.org 0xf9cb4
	bne.n 0xf9d54	@ 000f9cb4 4ed1
.org 0xf9cb6
	movs r0, #42	@ 000f9cb6 2a20
.org 0xf9cb8
	bl 0x2b10	@ 000f9cb8 08f72aff
.org 0xf9cbc
	ldrb r1, [r7, #10]	@ 000f9cbc b97a
.org 0xf9cbe
	movs r0, #254	@ 000f9cbe fe20
.org 0xf9cc0
	ands r0, r1	@ 000f9cc0 0840
.org 0xf9cc2
	strb r0, [r7, #10]	@ 000f9cc2 b872
.org 0xf9cc4
	ldr r6, [pc, #160]	@ 000f9cc4 284e
.org 0xf9cc6
	ldr r0, [r6, #0]	@ 000f9cc6 3068
.org 0xf9cc8
	ldr r5, [pc, #160]	@ 000f9cc8 284d
.org 0xf9cca
	muls r0, r5	@ 000f9cca 6843
.org 0xf9ccc
	ldr r2, [pc, #160]	@ 000f9ccc 284a
.org 0xf9cce
	adds r0, r0, r2	@ 000f9cce 8018
.org 0xf9cd0
	lsls r0, r0, #1	@ 000f9cd0 4000
.org 0xf9cd2
	lsrs r4, r0, #1	@ 000f9cd2 4408
.org 0xf9cd4
	lsrs r0, r0, #17	@ 000f9cd4 400c
.org 0xf9cd6
	movs r3, #7	@ 000f9cd6 0723
.org 0xf9cd8
	ands r0, r3	@ 000f9cd8 1840
.org 0xf9cda
	subs r0, #3	@ 000f9cda 0338
.org 0xf9cdc
	lsls r0, r0, #8	@ 000f9cdc 0002
.org 0xf9cde
	ldr r1, [r7, #84]	@ 000f9cde 796d
.org 0xf9ce0
	adds r1, r1, r0	@ 000f9ce0 0918
.org 0xf9ce2
	str r1, [sp, #0]	@ 000f9ce2 0091
.org 0xf9ce4
	adds r0, r4, #0	@ 000f9ce4 201c
.org 0xf9ce6
	muls r0, r5	@ 000f9ce6 6843
.org 0xf9ce8
	adds r0, r0, r2	@ 000f9ce8 8018
.org 0xf9cea
	lsls r0, r0, #1	@ 000f9cea 4000
.org 0xf9cec
	lsrs r1, r0, #1	@ 000f9cec 4108
.org 0xf9cee
	str r1, [r6, #0]	@ 000f9cee 3160
.org 0xf9cf0
	lsrs r0, r0, #17	@ 000f9cf0 400c
.org 0xf9cf2
	ands r0, r3	@ 000f9cf2 1840
.org 0xf9cf4
	lsls r0, r0, #8	@ 000f9cf4 0002
.org 0xf9cf6
	ldr r1, [pc, #124]	@ 000f9cf6 1f49
.org 0xf9cf8
	adds r0, r0, r1	@ 000f9cf8 4018
.org 0xf9cfa
	ldr r1, [r7, #88]	@ 000f9cfa b96d
.org 0xf9cfc
	adds r1, r1, r0	@ 000f9cfc 0918
.org 0xf9cfe
	str r1, [sp, #4]	@ 000f9cfe 0191
.org 0xf9d00
	movs r0, #1	@ 000f9d00 0120
.org 0xf9d02
	mov r1, sp	@ 000f9d02 6946
.org 0xf9d04
	bl 0xd0c88	@ 000f9d04 d6f7c0ff
.org 0xf9d08
	adds r0, r7, #0	@ 000f9d08 381c
.org 0xf9d0a
	bl 0xf9e70	@ 000f9d0a 00f0b1f8
.org 0xf9d0e
	adds r4, r7, #0	@ 000f9d0e 3c1c
.org 0xf9d10
	adds r4, #84	@ 000f9d10 5434
.org 0xf9d12
	movs r0, #4	@ 000f9d12 0420
.org 0xf9d14
	movs r1, #42	@ 000f9d14 2a21
.org 0xf9d16
	adds r2, r4, #0	@ 000f9d16 221c
.org 0xf9d18
	bl 0x2ab88	@ 000f9d18 30f736ff
.org 0xf9d1c
	ldr r0, [pc, #88]	@ 000f9d1c 1648
.org 0xf9d1e
	adds r1, r0, #0	@ 000f9d1e 011c
.org 0xf9d20
	adds r1, #38	@ 000f9d20 2631
.org 0xf9d22
	ldrb r0, [r1, #0]	@ 000f9d22 0878
.org 0xf9d24
	cmp r0, #0	@ 000f9d24 0028
.org 0xf9d26
	beq.n 0xf9d2c	@ 000f9d26 01d0
.org 0xf9d28
	adds r0, #255	@ 000f9d28 ff30
.org 0xf9d2a
	strb r0, [r1, #0]	@ 000f9d2a 0870
.org 0xf9d2c
	ldr r2, [pc, #76]	@ 000f9d2c 134a
.org 0xf9d2e
	ldrh r1, [r2, #12]	@ 000f9d2e 9189
.org 0xf9d30
	ldr r0, [pc, #76]	@ 000f9d30 1348
.org 0xf9d32
	cmp r1, r0	@ 000f9d32 8142
.org 0xf9d34
	bhi.n 0xf9d3a	@ 000f9d34 01d8
.org 0xf9d36
	adds r0, r1, #1	@ 000f9d36 481c
.org 0xf9d38
	strh r0, [r2, #12]	@ 000f9d38 9081
.org 0xf9d3a
	adds r0, r7, #0	@ 000f9d3a 381c
.org 0xf9d3c
	adds r1, r4, #0	@ 000f9d3c 211c
.org 0xf9d3e
	bl 0x2abe0	@ 000f9d3e 30f74fff
.org 0xf9d42
	ldr r1, [pc, #64]	@ 000f9d42 1049
.org 0xf9d44
	ldrb r0, [r7, #9]	@ 000f9d44 787a
.org 0xf9d46
	lsls r0, r0, #2	@ 000f9d46 8000
.org 0xf9d48
	adds r0, r0, r1	@ 000f9d48 4018
.org 0xf9d4a
	movs r1, #4	@ 000f9d4a 0421
.org 0xf9d4c
	str r1, [r7, #12]	@ 000f9d4c f960
.org 0xf9d4e
	ldr r0, [r0, #0]	@ 000f9d4e 0068
.org 0xf9d50
	ldr r0, [r0, #16]	@ 000f9d50 0069
.org 0xf9d52
	str r0, [r7, #20]	@ 000f9d52 7861
.org 0xf9d54
	add sp, #8	@ 000f9d54 02b0
.org 0xf9d56
	pop {r4, r5, r6, r7}	@ 000f9d56 f0bc
.org 0xf9d58
	pop {r0}	@ 000f9d58 01bc
.org 0xf9d5a
	bx r0	@ 000f9d5a 0047
