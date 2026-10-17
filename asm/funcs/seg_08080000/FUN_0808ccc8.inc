@ FUN_0808ccc8  entry 0x0808ccc8  size 110
.thumb
.org 0x8ccc8
FUN_0808ccc8:
	push {r4, r5, r6, r7, lr}	@ 0008ccc8 f0b5
.org 0x8ccca
	adds r4, r0, #0	@ 0008ccca 041c
.org 0x8cccc
	lsls r1, r1, #24	@ 0008cccc 0906
.org 0x8ccce
	lsrs r2, r1, #24	@ 0008ccce 0a0e
.org 0x8ccd0
	adds r7, r2, #0	@ 0008ccd0 171c
.org 0x8ccd2
	ldrb r1, [r4, #17]	@ 0008ccd2 617c
.org 0x8ccd4
	adds r0, #180	@ 0008ccd4 b430
.org 0x8ccd6
	ldrb r3, [r0, #0]	@ 0008ccd6 0378
.org 0x8ccd8
	cmp r3, r2	@ 0008ccd8 9342
.org 0x8ccda
	bne.n 0x8cce0	@ 0008ccda 01d1
.org 0x8ccdc
	adds r0, r2, #0	@ 0008ccdc 101c
.org 0x8ccde
	b.n 0x8cd36	@ 0008ccde 2ae0
.org 0x8cce0
	ldr r0, [pc, #76]	@ 0008cce0 1348
.org 0x8cce2
	adds r6, r1, r0	@ 0008cce2 0e18
.org 0x8cce4
	ldrb r1, [r6, #0]	@ 0008cce4 3178
.org 0x8cce6
	subs r0, r3, r1	@ 0008cce6 581a
.org 0x8cce8
	lsls r0, r0, #24	@ 0008cce8 0006
.org 0x8ccea
	lsrs r3, r0, #24	@ 0008ccea 030e
.org 0x8ccec
	subs r1, r2, r1	@ 0008ccec 511a
.org 0x8ccee
	lsls r1, r1, #24	@ 0008ccee 0906
.org 0x8ccf0
	lsrs r1, r1, #24	@ 0008ccf0 090e
.org 0x8ccf2
	subs r0, r3, r1	@ 0008ccf2 581a
.org 0x8ccf4
	asrs r0, r0, #31	@ 0008ccf4 c017
.org 0x8ccf6
	lsls r0, r0, #16	@ 0008ccf6 0004
.org 0x8ccf8
	lsrs r5, r0, #16	@ 0008ccf8 050c
.org 0x8ccfa
	movs r2, #0	@ 0008ccfa 0022
.org 0x8ccfc
	cmp r3, r1	@ 0008ccfc 8b42
.org 0x8ccfe
	bcs.n 0x8cd02	@ 0008ccfe 00d2
.org 0x8cd00
	movs r2, #1	@ 0008cd00 0122
.org 0x8cd02
	adds r0, r4, #0	@ 0008cd02 201c
.org 0x8cd04
	adds r0, #181	@ 0008cd04 b530
.org 0x8cd06
	strb r2, [r0, #0]	@ 0008cd06 0270
.org 0x8cd08
	ldrb r0, [r0, #0]	@ 0008cd08 0078
.org 0x8cd0a
	lsls r0, r0, #1	@ 0008cd0a 4000
.org 0x8cd0c
	subs r0, #1	@ 0008cd0c 0138
.org 0x8cd0e
	adds r0, r3, r0	@ 0008cd0e 1818
.org 0x8cd10
	lsls r0, r0, #24	@ 0008cd10 0006
.org 0x8cd12
	lsrs r2, r0, #24	@ 0008cd12 020e
.org 0x8cd14
	subs r0, r2, r1	@ 0008cd14 501a
.org 0x8cd16
	asrs r0, r0, #31	@ 0008cd16 c017
.org 0x8cd18
	lsls r0, r0, #16	@ 0008cd18 0004
.org 0x8cd1a
	asrs r0, r0, #16	@ 0008cd1a 0014
.org 0x8cd1c
	lsls r1, r5, #16	@ 0008cd1c 2904
.org 0x8cd1e
	asrs r1, r1, #16	@ 0008cd1e 0914
.org 0x8cd20
	cmp r0, r1	@ 0008cd20 8842
.org 0x8cd22
	bne.n 0x8cd34	@ 0008cd22 07d1
.org 0x8cd24
	ldrb r0, [r6, #0]	@ 0008cd24 3078
.org 0x8cd26
	adds r0, r2, r0	@ 0008cd26 1018
.org 0x8cd28
	lsls r0, r0, #24	@ 0008cd28 0006
.org 0x8cd2a
	lsrs r0, r0, #24	@ 0008cd2a 000e
.org 0x8cd2c
	b.n 0x8cd36	@ 0008cd2c 03e0
.org 0x8cd2e
	.byte 0x00	@ 0008cd2e data
.org 0x8cd2f
	.byte 0x00	@ 0008cd2f data
.org 0x8cd30
	.byte 0xc0,0xf8,0x85,0x08	@ 0008cd30 data
.org 0x8cd34
	adds r0, r7, #0	@ 0008cd34 381c
