@ FUN_080c9bc0  entry 0x080c9bc0  size 136
.thumb
.org 0xc9bc0
FUN_080c9bc0:
	push {r4, r5, r6, r7, lr}	@ 000c9bc0 f0b5
.org 0xc9bc2
	mov r7, r8	@ 000c9bc2 4746
.org 0xc9bc4
	push {r7}	@ 000c9bc4 80b4
.org 0xc9bc6
	mov r8, r0	@ 000c9bc6 8046
.org 0xc9bc8
	lsls r1, r1, #24	@ 000c9bc8 0906
.org 0xc9bca
	lsrs r6, r1, #24	@ 000c9bca 0e0e
.org 0xc9bcc
	lsls r2, r2, #24	@ 000c9bcc 1206
.org 0xc9bce
	lsrs r5, r2, #24	@ 000c9bce 150e
.org 0xc9bd0
	lsls r3, r3, #24	@ 000c9bd0 1b06
.org 0xc9bd2
	lsrs r7, r3, #24	@ 000c9bd2 1f0e
.org 0xc9bd4
	ldr r0, [pc, #92]	@ 000c9bd4 1748
.org 0xc9bd6
	ldr r0, [r0, #0]	@ 000c9bd6 0068
.org 0xc9bd8
	bl 0x5500	@ 000c9bd8 3bf792fc
.org 0xc9bdc
	adds r4, r0, #0	@ 000c9bdc 041c
.org 0xc9bde
	cmp r4, #0	@ 000c9bde 002c
.org 0xc9be0
	beq.n 0xc9c40	@ 000c9be0 2ed0
.org 0xc9be2
	adds r1, r4, #0	@ 000c9be2 211c
.org 0xc9be4
	adds r1, #37	@ 000c9be4 2531
.org 0xc9be6
	movs r2, #0	@ 000c9be6 0022
.org 0xc9be8
	movs r0, #8	@ 000c9be8 0820
.org 0xc9bea
	strb r0, [r1, #0]	@ 000c9bea 0870
.org 0xc9bec
	ldr r0, [pc, #72]	@ 000c9bec 1248
.org 0xc9bee
	movs r1, #34	@ 000c9bee 2221
.org 0xc9bf0
	strb r1, [r4, #9]	@ 000c9bf0 6172
.org 0xc9bf2
	adds r0, #136	@ 000c9bf2 8830
.org 0xc9bf4
	ldr r0, [r0, #0]	@ 000c9bf4 0068
.org 0xc9bf6
	ldr r0, [r0, #0]	@ 000c9bf6 0068
.org 0xc9bf8
	str r0, [r4, #20]	@ 000c9bf8 6061
.org 0xc9bfa
	movs r0, #0	@ 000c9bfa 0020
.org 0xc9bfc
	strh r2, [r4, #32]	@ 000c9bfc 2284
.org 0xc9bfe
	adds r1, r4, #0	@ 000c9bfe 211c
.org 0xc9c00
	adds r1, #34	@ 000c9c00 2231
.org 0xc9c02
	strb r0, [r1, #0]	@ 000c9c02 0870
.org 0xc9c04
	mov r2, r8	@ 000c9c04 4246
.org 0xc9c06
	ldr r0, [r2, #0]	@ 000c9c06 1068
.org 0xc9c08
	ldr r1, [r2, #4]	@ 000c9c08 5168
.org 0xc9c0a
	str r0, [r4, #84]	@ 000c9c0a 6065
.org 0xc9c0c
	str r1, [r4, #88]	@ 000c9c0c a165
.org 0xc9c0e
	strb r6, [r4, #16]	@ 000c9c0e 2674
.org 0xc9c10
	strb r5, [r4, #17]	@ 000c9c10 6574
.org 0xc9c12
	adds r0, r4, #0	@ 000c9c12 201c
.org 0xc9c14
	adds r0, #183	@ 000c9c14 b730
.org 0xc9c16
	strb r7, [r0, #0]	@ 000c9c16 0770
.org 0xc9c18
	cmp r6, #0	@ 000c9c18 002e
.org 0xc9c1a
	bne.n 0xc9c44	@ 000c9c1a 13d1
.org 0xc9c1c
	cmp r5, #2	@ 000c9c1c 022d
.org 0xc9c1e
	bhi.n 0xc9c3c	@ 000c9c1e 0dd8
.org 0xc9c20
	adds r2, r5, #1	@ 000c9c20 6a1c
.org 0xc9c22
	lsls r2, r2, #24	@ 000c9c22 1206
.org 0xc9c24
	lsrs r2, r2, #24	@ 000c9c24 120e
.org 0xc9c26
	mov r0, r8	@ 000c9c26 4046
.org 0xc9c28
	movs r1, #0	@ 000c9c28 0021
.org 0xc9c2a
	adds r3, r7, #0	@ 000c9c2a 3b1c
.org 0xc9c2c
	bl 0xc9bc0	@ 000c9c2c fff7c8ff
.org 0xc9c30
	str r0, [r4, #44]	@ 000c9c30 e062
.org 0xc9c32
	b.n 0xc9c44	@ 000c9c32 07e0
.org 0xc9c34
	.byte 0x94,0xed,0x02,0x02	@ 000c9c34 data
.org 0xc9c38
	.byte 0xf4,0x49,0x86,0x08	@ 000c9c38 data
.org 0xc9c3c
	str r6, [r4, #44]	@ 000c9c3c e662
.org 0xc9c3e
	b.n 0xc9c44	@ 000c9c3e 01e0
.org 0xc9c40
	movs r0, #0	@ 000c9c40 0020
.org 0xc9c42
	b.n 0xc9c46	@ 000c9c42 00e0
.org 0xc9c44
	adds r0, r4, #0	@ 000c9c44 201c
.org 0xc9c46
	pop {r3}	@ 000c9c46 08bc
