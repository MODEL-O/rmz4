@ FUN_08098be4  entry 0x08098be4  size 150
.thumb
.org 0x98be4
FUN_08098be4:
	push {r4, r5, r6, r7, lr}	@ 00098be4 f0b5
.org 0x98be6
	adds r6, r0, #0	@ 00098be6 061c
.org 0x98be8
	bl 0x1cff0	@ 00098be8 84f702fa
.org 0x98bec
	adds r7, r6, #0	@ 00098bec 371c
.org 0x98bee
	adds r7, #84	@ 00098bee 5437
.org 0x98bf0
	ldr r5, [pc, #136]	@ 00098bf0 224d
.org 0x98bf2
	ldrb r0, [r6, #10]	@ 00098bf2 b07a
.org 0x98bf4
	movs r4, #16	@ 00098bf4 1024
.org 0x98bf6
	adds r3, r4, #0	@ 00098bf6 231c
.org 0x98bf8
	ands r3, r0	@ 00098bf8 0340
.org 0x98bfa
	lsls r3, r3, #24	@ 00098bfa 1b06
.org 0x98bfc
	lsrs r3, r3, #24	@ 00098bfc 1b0e
.org 0x98bfe
	adds r0, r7, #0	@ 00098bfe 381c
.org 0x98c00
	adds r1, r5, #0	@ 00098c00 291c
.org 0x98c02
	movs r2, #0	@ 00098c02 0022
.org 0x98c04
	bl 0xd4c8c	@ 00098c04 3cf042f8
.org 0x98c08
	adds r1, r5, #0	@ 00098c08 291c
.org 0x98c0a
	adds r1, #28	@ 00098c0a 1c31
.org 0x98c0c
	ldrb r0, [r6, #10]	@ 00098c0c b07a
.org 0x98c0e
	adds r3, r4, #0	@ 00098c0e 231c
.org 0x98c10
	ands r3, r0	@ 00098c10 0340
.org 0x98c12
	lsls r3, r3, #24	@ 00098c12 1b06
.org 0x98c14
	lsrs r3, r3, #24	@ 00098c14 1b0e
.org 0x98c16
	adds r0, r7, #0	@ 00098c16 381c
.org 0x98c18
	movs r2, #0	@ 00098c18 0022
.org 0x98c1a
	bl 0xd4c8c	@ 00098c1a 3cf037f8
.org 0x98c1e
	adds r5, #56	@ 00098c1e 3835
.org 0x98c20
	ldrb r0, [r6, #10]	@ 00098c20 b07a
.org 0x98c22
	ands r4, r0	@ 00098c22 0440
.org 0x98c24
	lsls r4, r4, #24	@ 00098c24 2406
.org 0x98c26
	lsrs r4, r4, #24	@ 00098c26 240e
.org 0x98c28
	adds r0, r7, #0	@ 00098c28 381c
.org 0x98c2a
	adds r1, r5, #0	@ 00098c2a 291c
.org 0x98c2c
	movs r2, #0	@ 00098c2c 0022
.org 0x98c2e
	adds r3, r4, #0	@ 00098c2e 231c
.org 0x98c30
	bl 0xd4c8c	@ 00098c30 3cf02cf8
.org 0x98c34
	movs r0, #1	@ 00098c34 0120
.org 0x98c36
	adds r1, r7, #0	@ 00098c36 391c
.org 0x98c38
	bl 0xd0c88	@ 00098c38 38f026f8
.org 0x98c3c
	movs r0, #42	@ 00098c3c 2a20
.org 0x98c3e
	bl 0x2b10	@ 00098c3e 69f767ff
.org 0x98c42
	movs r0, #3	@ 00098c42 0320
.org 0x98c44
	movs r1, #36	@ 00098c44 2421
.org 0x98c46
	adds r2, r7, #0	@ 00098c46 3a1c
.org 0x98c48
	bl 0x2ab88	@ 00098c48 91f79eff
.org 0x98c4c
	ldr r2, [pc, #48]	@ 00098c4c 0c4a
.org 0x98c4e
	ldrh r1, [r2, #12]	@ 00098c4e 9189
.org 0x98c50
	ldr r0, [pc, #48]	@ 00098c50 0c48
.org 0x98c52
	cmp r1, r0	@ 00098c52 8142
.org 0x98c54
	bhi.n 0x98c5a	@ 00098c54 01d8
.org 0x98c56
	adds r0, r1, #1	@ 00098c56 481c
.org 0x98c58
	strh r0, [r2, #12]	@ 00098c58 9081
.org 0x98c5a
	adds r0, r6, #0	@ 00098c5a 301c
.org 0x98c5c
	adds r1, r7, #0	@ 00098c5c 391c
.org 0x98c5e
	bl 0x2abe0	@ 00098c5e 91f7bfff
.org 0x98c62
	ldr r1, [pc, #36]	@ 00098c62 0949
.org 0x98c64
	ldrb r0, [r6, #9]	@ 00098c64 707a
.org 0x98c66
	lsls r0, r0, #2	@ 00098c66 8000
.org 0x98c68
	adds r0, r0, r1	@ 00098c68 4018
.org 0x98c6a
	movs r1, #4	@ 00098c6a 0421
.org 0x98c6c
	str r1, [r6, #12]	@ 00098c6c f160
.org 0x98c6e
	ldr r0, [r0, #0]	@ 00098c6e 0068
.org 0x98c70
	ldr r0, [r0, #16]	@ 00098c70 0069
.org 0x98c72
	str r0, [r6, #20]	@ 00098c72 7061
.org 0x98c74
	pop {r4, r5, r6, r7}	@ 00098c74 f0bc
.org 0x98c76
	pop {r0}	@ 00098c76 01bc
.org 0x98c78
	bx r0	@ 00098c78 0047
