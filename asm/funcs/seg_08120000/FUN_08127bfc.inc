@ FUN_08127bfc  entry 0x08127bfc  size 126
.thumb
.org 0x127bfc
FUN_08127bfc:
	push {r4, r5, r6, lr}	@ 00127bfc 70b5
.org 0x127bfe
	adds r2, r0, #0	@ 00127bfe 021c
.org 0x127c00
	ldr r0, [pc, #120]	@ 00127c00 1e48
.org 0x127c02
	ldr r4, [r0, #0]	@ 00127c02 0468
.org 0x127c04
	movs r0, #240	@ 00127c04 f020
.org 0x127c06
	lsls r0, r0, #12	@ 00127c06 0003
.org 0x127c08
	ands r0, r2	@ 00127c08 1040
.org 0x127c0a
	lsrs r2, r0, #16	@ 00127c0a 020c
.org 0x127c0c
	movs r6, #0	@ 00127c0c 0026
.org 0x127c0e
	strb r2, [r4, #8]	@ 00127c0e 2272
.org 0x127c10
	ldr r1, [pc, #108]	@ 00127c10 1b49
.org 0x127c12
	subs r0, r2, #1	@ 00127c12 501e
.org 0x127c14
	lsls r0, r0, #1	@ 00127c14 4000
.org 0x127c16
	adds r0, r0, r1	@ 00127c16 4018
.org 0x127c18
	ldrh r5, [r0, #0]	@ 00127c18 0588
.org 0x127c1a
	str r5, [r4, #16]	@ 00127c1a 2561
.org 0x127c1c
	movs r0, #198	@ 00127c1c c620
.org 0x127c1e
	lsls r0, r0, #3	@ 00127c1e c000
.org 0x127c20
	adds r1, r5, #0	@ 00127c20 291c
.org 0x127c22
	bl 0x128fb8	@ 00127c22 01f0c9f9
.org 0x127c26
	strb r0, [r4, #11]	@ 00127c26 e072
.org 0x127c28
	ldr r0, [pc, #88]	@ 00127c28 1648
.org 0x127c2a
	muls r0, r5	@ 00127c2a 6843
.org 0x127c2c
	ldr r1, [pc, #88]	@ 00127c2c 1649
.org 0x127c2e
	adds r0, r0, r1	@ 00127c2e 4018
.org 0x127c30
	ldr r1, [pc, #88]	@ 00127c30 1649
.org 0x127c32
	bl 0x128fb8	@ 00127c32 01f0c1f9
.org 0x127c36
	adds r1, r0, #0	@ 00127c36 011c
.org 0x127c38
	str r1, [r4, #20]	@ 00127c38 6161
.org 0x127c3a
	movs r0, #128	@ 00127c3a 8020
.org 0x127c3c
	lsls r0, r0, #17	@ 00127c3c 4004
.org 0x127c3e
	bl 0x128fb8	@ 00127c3e 01f0bbf9
.org 0x127c42
	adds r0, #1	@ 00127c42 0130
.org 0x127c44
	asrs r0, r0, #1	@ 00127c44 4010
.org 0x127c46
	str r0, [r4, #24]	@ 00127c46 a061
.org 0x127c48
	ldr r0, [pc, #68]	@ 00127c48 1148
.org 0x127c4a
	strh r6, [r0, #0]	@ 00127c4a 0680
.org 0x127c4c
	ldr r4, [pc, #68]	@ 00127c4c 114c
.org 0x127c4e
	ldr r0, [pc, #72]	@ 00127c4e 1248
.org 0x127c50
	adds r1, r5, #0	@ 00127c50 291c
.org 0x127c52
	bl 0x128fb8	@ 00127c52 01f0b1f9
.org 0x127c56
	negs r0, r0	@ 00127c56 4042
.org 0x127c58
	strh r0, [r4, #0]	@ 00127c58 2080
.org 0x127c5a
	bl 0x127df0	@ 00127c5a 00f0c9f8
.org 0x127c5e
	ldr r1, [pc, #60]	@ 00127c5e 0f49
.org 0x127c60
	ldrb r0, [r1, #0]	@ 00127c60 0878
.org 0x127c62
	cmp r0, #159	@ 00127c62 9f28
.org 0x127c64
	beq.n 0x127c60	@ 00127c64 fcd0
.org 0x127c66
	ldr r1, [pc, #52]	@ 00127c66 0d49
.org 0x127c68
	ldrb r0, [r1, #0]	@ 00127c68 0878
.org 0x127c6a
	cmp r0, #159	@ 00127c6a 9f28
.org 0x127c6c
	bne.n 0x127c68	@ 00127c6c fcd1
.org 0x127c6e
	ldr r1, [pc, #32]	@ 00127c6e 0849
.org 0x127c70
	movs r0, #128	@ 00127c70 8020
.org 0x127c72
	strh r0, [r1, #0]	@ 00127c72 0880
.org 0x127c74
	pop {r4, r5, r6}	@ 00127c74 70bc
.org 0x127c76
	pop {r0}	@ 00127c76 01bc
.org 0x127c78
	bx r0	@ 00127c78 0047
