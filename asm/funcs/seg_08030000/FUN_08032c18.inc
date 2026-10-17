@ FUN_08032c18  entry 0x08032c18  size 68
.thumb
.org 0x32c18
FUN_08032c18:
	push {r4, lr}	@ 00032c18 10b5
.org 0x32c1a
	adds r4, r0, #0	@ 00032c1a 041c
.org 0x32c1c
	bl 0x38a48	@ 00032c1c 05f014ff
.org 0x32c20
	lsls r0, r0, #24	@ 00032c20 0006
.org 0x32c22
	lsrs r1, r0, #24	@ 00032c22 010e
.org 0x32c24
	cmp r1, #0	@ 00032c24 0029
.org 0x32c26
	beq.n 0x32c40	@ 00032c26 0bd0
.org 0x32c28
	ldr r0, [pc, #16]	@ 00032c28 0448
.org 0x32c2a
	ldrb r1, [r4, #14]	@ 00032c2a a17b
.org 0x32c2c
	lsls r1, r1, #2	@ 00032c2c 8900
.org 0x32c2e
	adds r1, r1, r0	@ 00032c2e 0918
.org 0x32c30
	ldr r1, [r1, #0]	@ 00032c30 0968
.org 0x32c32
	adds r0, r4, #0	@ 00032c32 201c
.org 0x32c34
	bl 0x128f80	@ 00032c34 f6f0a4f9
.org 0x32c38
	b.n 0x32c4c	@ 00032c38 08e0
.org 0x32c3a
	.byte 0x00	@ 00032c3a data
.org 0x32c3b
	.byte 0x00	@ 00032c3b data
.org 0x32c3c
	.byte 0xe4,0x2f,0x85,0x08	@ 00032c3c data
.org 0x32c40
	movs r0, #1	@ 00032c40 0120
.org 0x32c42
	strb r0, [r4, #13]	@ 00032c42 6073
.org 0x32c44
	movs r0, #2	@ 00032c44 0220
.org 0x32c46
	strb r0, [r4, #14]	@ 00032c46 a073
.org 0x32c48
	strb r1, [r4, #15]	@ 00032c48 e173
.org 0x32c4a
	str r1, [r4, #96]	@ 00032c4a 2166
.org 0x32c4c
	movs r0, #161	@ 00032c4c a120
.org 0x32c4e
	lsls r0, r0, #1	@ 00032c4e 4000
.org 0x32c50
	adds r2, r4, r0	@ 00032c50 2218
.org 0x32c52
	ldrb r1, [r2, #0]	@ 00032c52 1178
.org 0x32c54
	movs r0, #65	@ 00032c54 4120
.org 0x32c56
	negs r0, r0	@ 00032c56 4042
.org 0x32c58
	ands r0, r1	@ 00032c58 0840
.org 0x32c5a
	strb r0, [r2, #0]	@ 00032c5a 1070
