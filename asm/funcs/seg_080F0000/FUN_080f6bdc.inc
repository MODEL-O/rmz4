@ FUN_080f6bdc  entry 0x080f6bdc  size 206
.thumb
.org 0xf6bdc
FUN_080f6bdc:
	push {r4, r5, r6, r7, lr}	@ 000f6bdc f0b5
.org 0xf6bde
	mov r7, r8	@ 000f6bde 4746
.org 0xf6be0
	push {r7}	@ 000f6be0 80b4
.org 0xf6be2
	adds r6, r0, #0	@ 000f6be2 061c
.org 0xf6be4
	bl 0x1cc9c	@ 000f6be4 26f75af8
.org 0xf6be8
	ldrb r1, [r6, #10]	@ 000f6be8 b17a
.org 0xf6bea
	movs r0, #1	@ 000f6bea 0120
.org 0xf6bec
	movs r4, #0	@ 000f6bec 0024
.org 0xf6bee
	orrs r0, r1	@ 000f6bee 0843
.org 0xf6bf0
	movs r1, #2	@ 000f6bf0 0221
.org 0xf6bf2
	orrs r0, r1	@ 000f6bf2 0843
.org 0xf6bf4
	strb r0, [r6, #10]	@ 000f6bf4 b072
.org 0xf6bf6
	movs r1, #188	@ 000f6bf6 bc21
.org 0xf6bf8
	lsls r1, r1, #7	@ 000f6bf8 c901
.org 0xf6bfa
	adds r0, r6, #0	@ 000f6bfa 301c
.org 0xf6bfc
	bl 0x1cf00	@ 000f6bfc 26f780f9
.org 0xf6c00
	movs r1, #0	@ 000f6c00 0021
.org 0xf6c02
	ldrb r0, [r6, #16]	@ 000f6c02 307c
.org 0xf6c04
	cmp r0, #0	@ 000f6c04 0028
.org 0xf6c06
	bne.n 0xf6c0a	@ 000f6c06 00d1
.org 0xf6c08
	movs r1, #1	@ 000f6c08 0121
.org 0xf6c0a
	adds r2, r1, #0	@ 000f6c0a 0a1c
.org 0xf6c0c
	cmp r2, #0	@ 000f6c0c 002a
.org 0xf6c0e
	beq.n 0xf6c18	@ 000f6c0e 03d0
.org 0xf6c10
	ldrb r0, [r6, #10]	@ 000f6c10 b07a
.org 0xf6c12
	movs r1, #16	@ 000f6c12 1021
.org 0xf6c14
	orrs r0, r1	@ 000f6c14 0843
.org 0xf6c16
	b.n 0xf6c1e	@ 000f6c16 02e0
.org 0xf6c18
	ldrb r1, [r6, #10]	@ 000f6c18 b17a
.org 0xf6c1a
	movs r0, #239	@ 000f6c1a ef20
.org 0xf6c1c
	ands r0, r1	@ 000f6c1c 0840
.org 0xf6c1e
	strb r0, [r6, #10]	@ 000f6c1e b072
.org 0xf6c20
	movs r0, #1	@ 000f6c20 0120
.org 0xf6c22
	mov r8, r0	@ 000f6c22 8046
.org 0xf6c24
	mov r1, r8	@ 000f6c24 4146
.org 0xf6c26
	ands r1, r2	@ 000f6c26 1140
.org 0xf6c28
	adds r0, r6, #0	@ 000f6c28 301c
.org 0xf6c2a
	adds r0, #76	@ 000f6c2a 4c30
.org 0xf6c2c
	movs r5, #0	@ 000f6c2c 0025
.org 0xf6c2e
	strb r1, [r0, #0]	@ 000f6c2e 0170
.org 0xf6c30
	adds r3, r6, #0	@ 000f6c30 331c
.org 0xf6c32
	adds r3, #74	@ 000f6c32 4a33
.org 0xf6c34
	lsls r1, r1, #4	@ 000f6c34 0901
.org 0xf6c36
	ldrb r2, [r3, #0]	@ 000f6c36 1a78
.org 0xf6c38
	movs r0, #17	@ 000f6c38 1120
.org 0xf6c3a
	negs r0, r0	@ 000f6c3a 4042
.org 0xf6c3c
	ands r0, r2	@ 000f6c3c 1040
.org 0xf6c3e
	orrs r0, r1	@ 000f6c3e 0843
.org 0xf6c40
	strb r0, [r3, #0]	@ 000f6c40 1870
.org 0xf6c42
	ldrb r1, [r6, #10]	@ 000f6c42 b17a
.org 0xf6c44
	movs r0, #4	@ 000f6c44 0420
.org 0xf6c46
	orrs r0, r1	@ 000f6c46 0843
.org 0xf6c48
	strb r0, [r6, #10]	@ 000f6c48 b072
.org 0xf6c4a
	adds r4, r6, #0	@ 000f6c4a 341c
.org 0xf6c4c
	adds r4, #116	@ 000f6c4c 7434
.org 0xf6c4e
	ldr r1, [pc, #92]	@ 000f6c4e 1749
.org 0xf6c50
	adds r7, r6, #0	@ 000f6c50 371c
.org 0xf6c52
	adds r7, #84	@ 000f6c52 5437
.org 0xf6c54
	adds r0, r4, #0	@ 000f6c54 201c
.org 0xf6c56
	adds r2, r7, #0	@ 000f6c56 3a1c
.org 0xf6c58
	movs r3, #0	@ 000f6c58 0023
.org 0xf6c5a
	bl 0x5760	@ 000f6c5a 0ef781fd
.org 0xf6c5e
	str r6, [r4, #44]	@ 000f6c5e e662
.org 0xf6c60
	str r5, [r4, #36]	@ 000f6c60 6562
.org 0xf6c62
	ldr r0, [pc, #76]	@ 000f6c62 1348
.org 0xf6c64
	adds r1, r7, #0	@ 000f6c64 391c
.org 0xf6c66
	bl 0x1fb14	@ 000f6c66 28f755ff
.org 0xf6c6a
	ldr r1, [pc, #72]	@ 000f6c6a 1249
.org 0xf6c6c
	cmp r0, r1	@ 000f6c6c 8842
.org 0xf6c6e
	bhi.n 0xf6c80	@ 000f6c6e 07d8
.org 0xf6c70
	movs r0, #1	@ 000f6c70 0120
.org 0xf6c72
	adds r1, r7, #0	@ 000f6c72 391c
.org 0xf6c74
	bl 0x1fe64	@ 000f6c74 29f7f6f8
.org 0xf6c78
	movs r0, #191	@ 000f6c78 bf20
.org 0xf6c7a
	lsls r0, r0, #1	@ 000f6c7a 4000
.org 0xf6c7c
	bl 0x2b10	@ 000f6c7c 0bf748ff
.org 0xf6c80
	ldr r0, [r6, #84]	@ 000f6c80 706d
.org 0xf6c82
	ldr r1, [r6, #88]	@ 000f6c82 b16d
.org 0xf6c84
	str r0, [r6, #92]	@ 000f6c84 f065
.org 0xf6c86
	str r1, [r6, #96]	@ 000f6c86 3166
.org 0xf6c88
	ldr r1, [pc, #44]	@ 000f6c88 0b49
.org 0xf6c8a
	ldrb r0, [r6, #9]	@ 000f6c8a 707a
.org 0xf6c8c
	lsls r0, r0, #2	@ 000f6c8c 8000
.org 0xf6c8e
	adds r0, r0, r1	@ 000f6c8e 4018
.org 0xf6c90
	mov r1, r8	@ 000f6c90 4146
.org 0xf6c92
	str r1, [r6, #12]	@ 000f6c92 f160
.org 0xf6c94
	ldr r0, [r0, #0]	@ 000f6c94 0068
.org 0xf6c96
	ldr r0, [r0, #4]	@ 000f6c96 4068
.org 0xf6c98
	str r0, [r6, #20]	@ 000f6c98 7061
.org 0xf6c9a
	adds r0, r6, #0	@ 000f6c9a 301c
.org 0xf6c9c
	bl 0xf6cbc	@ 000f6c9c 00f00ef8
.org 0xf6ca0
	pop {r3}	@ 000f6ca0 08bc
.org 0xf6ca2
	mov r8, r3	@ 000f6ca2 9846
.org 0xf6ca4
	pop {r4, r5, r6, r7}	@ 000f6ca4 f0bc
.org 0xf6ca6
	pop {r0}	@ 000f6ca6 01bc
.org 0xf6ca8
	bx r0	@ 000f6ca8 0047
