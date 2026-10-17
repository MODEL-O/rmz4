@ FUN_08102bfc  entry 0x08102bfc  size 112
.thumb
.org 0x102bfc
FUN_08102bfc:
	push {r4, r5, r6, lr}	@ 00102bfc 70b5
.org 0x102bfe
	adds r6, r0, #0	@ 00102bfe 061c
.org 0x102c00
	adds r0, #190	@ 00102c00 be30
.org 0x102c02
	movs r5, #0	@ 00102c02 0025
.org 0x102c04
	movs r2, #244	@ 00102c04 f422
.org 0x102c06
	lsls r2, r2, #7	@ 00102c06 d201
.org 0x102c08
	strh r2, [r0, #0]	@ 00102c08 0280
.org 0x102c0a
	adds r1, r6, #0	@ 00102c0a 311c
.org 0x102c0c
	adds r1, #192	@ 00102c0c c031
.org 0x102c0e
	ldr r0, [pc, #92]	@ 00102c0e 1748
.org 0x102c10
	strh r0, [r1, #0]	@ 00102c10 0880
.org 0x102c12
	adds r0, r6, #0	@ 00102c12 301c
.org 0x102c14
	adds r0, #194	@ 00102c14 c230
.org 0x102c16
	strh r2, [r0, #0]	@ 00102c16 0280
.org 0x102c18
	ldrb r1, [r6, #10]	@ 00102c18 b17a
.org 0x102c1a
	movs r0, #4	@ 00102c1a 0420
.org 0x102c1c
	orrs r0, r1	@ 00102c1c 0843
.org 0x102c1e
	strb r0, [r6, #10]	@ 00102c1e b072
.org 0x102c20
	adds r4, r6, #0	@ 00102c20 341c
.org 0x102c22
	adds r4, #116	@ 00102c22 7434
.org 0x102c24
	ldr r1, [pc, #72]	@ 00102c24 1249
.org 0x102c26
	adds r2, r6, #0	@ 00102c26 321c
.org 0x102c28
	adds r2, #84	@ 00102c28 5432
.org 0x102c2a
	adds r0, r4, #0	@ 00102c2a 201c
.org 0x102c2c
	movs r3, #1	@ 00102c2c 0123
.org 0x102c2e
	bl 0x5760	@ 00102c2e 02f797fd
.org 0x102c32
	str r6, [r4, #44]	@ 00102c32 e662
.org 0x102c34
	str r5, [r4, #36]	@ 00102c34 6562
.org 0x102c36
	movs r2, #128	@ 00102c36 8022
.org 0x102c38
	lsls r2, r2, #1	@ 00102c38 5200
.org 0x102c3a
	str r2, [r6, #92]	@ 00102c3a f265
.org 0x102c3c
	ldrb r1, [r6, #10]	@ 00102c3c b17a
.org 0x102c3e
	movs r0, #16	@ 00102c3e 1020
.org 0x102c40
	ands r0, r1	@ 00102c40 0840
.org 0x102c42
	cmp r0, #0	@ 00102c42 0028
.org 0x102c44
	bne.n 0x102c50	@ 00102c44 04d1
.org 0x102c46
	lsls r0, r2, #8	@ 00102c46 1002
.org 0x102c48
	negs r0, r0	@ 00102c48 4042
.org 0x102c4a
	adds r0, #255	@ 00102c4a ff30
.org 0x102c4c
	asrs r0, r0, #8	@ 00102c4c 0012
.org 0x102c4e
	str r0, [r6, #92]	@ 00102c4e f065
.org 0x102c50
	adds r0, r6, #0	@ 00102c50 301c
.org 0x102c52
	adds r0, #185	@ 00102c52 b930
.org 0x102c54
	movs r2, #1	@ 00102c54 0122
.org 0x102c56
	strb r2, [r0, #0]	@ 00102c56 0270
.org 0x102c58
	adds r1, r6, #0	@ 00102c58 311c
.org 0x102c5a
	adds r1, #184	@ 00102c5a b831
.org 0x102c5c
	movs r0, #48	@ 00102c5c 3020
.org 0x102c5e
	strb r0, [r1, #0]	@ 00102c5e 0870
.org 0x102c60
	strb r2, [r6, #13]	@ 00102c60 7273
.org 0x102c62
	movs r0, #0	@ 00102c62 0020
.org 0x102c64
	strb r0, [r6, #14]	@ 00102c64 b073
.org 0x102c66
	pop {r4, r5, r6}	@ 00102c66 70bc
.org 0x102c68
	pop {r0}	@ 00102c68 01bc
.org 0x102c6a
	bx r0	@ 00102c6a 0047
