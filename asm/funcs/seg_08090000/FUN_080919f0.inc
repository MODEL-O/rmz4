@ FUN_080919f0  entry 0x080919f0  size 108
.thumb
.org 0x919f0
FUN_080919f0:
	push {r4, r5, r6, lr}	@ 000919f0 70b5
.org 0x919f2
	adds r4, r0, #0	@ 000919f2 041c
.org 0x919f4
	ldr r5, [r4, #40]	@ 000919f4 a56a
.org 0x919f6
	ldrb r0, [r4, #14]	@ 000919f6 a07b
.org 0x919f8
	cmp r0, #0	@ 000919f8 0028
.org 0x919fa
	bne.n 0x91a22	@ 000919fa 12d1
.org 0x919fc
	ldr r1, [pc, #92]	@ 000919fc 1749
.org 0x919fe
	adds r0, r4, #0	@ 000919fe 201c
.org 0x91a00
	bl 0x1cf00	@ 00091a00 8bf77efa
.org 0x91a04
	adds r0, r4, #0	@ 00091a04 201c
.org 0x91a06
	adds r0, #116	@ 00091a06 7430
.org 0x91a08
	ldr r1, [pc, #84]	@ 00091a08 1549
.org 0x91a0a
	bl 0x5784	@ 00091a0a 73f7bbfe
.org 0x91a0e
	ldr r0, [r4, #44]	@ 00091a0e e06a
.org 0x91a10
	cmp r0, #0	@ 00091a10 0028
.org 0x91a12
	bne.n 0x91a1c	@ 00091a12 03d1
.org 0x91a14
	adds r0, r4, #0	@ 00091a14 201c
.org 0x91a16
	bl 0x90e0c	@ 00091a16 fff7f9f9
.org 0x91a1a
	str r0, [r4, #44]	@ 00091a1a e062
.org 0x91a1c
	ldrb r0, [r4, #14]	@ 00091a1c a07b
.org 0x91a1e
	adds r0, #1	@ 00091a1e 0130
.org 0x91a20
	strb r0, [r4, #14]	@ 00091a20 a073
.org 0x91a22
	adds r0, r4, #0	@ 00091a22 201c
.org 0x91a24
	bl 0x1cff0	@ 00091a24 8bf7e4fa
.org 0x91a28
	adds r0, r4, #0	@ 00091a28 201c
.org 0x91a2a
	adds r0, #140	@ 00091a2a 8c30
.org 0x91a2c
	ldr r0, [r0, #0]	@ 00091a2c 0068
.org 0x91a2e
	movs r6, #4	@ 00091a2e 0426
.org 0x91a30
	ands r0, r6	@ 00091a30 3040
.org 0x91a32
	cmp r0, #0	@ 00091a32 0028
.org 0x91a34
	beq.n 0x91a56	@ 00091a34 0fd0
.org 0x91a36
	adds r0, r5, #0	@ 00091a36 281c
.org 0x91a38
	adds r0, #180	@ 00091a38 b430
.org 0x91a3a
	ldrh r5, [r0, #30]	@ 00091a3a c58b
.org 0x91a3c
	cmp r5, #0	@ 00091a3c 002d
.org 0x91a3e
	bne.n 0x91a56	@ 00091a3e 0ad1
.org 0x91a40
	adds r0, r4, #0	@ 00091a40 201c
.org 0x91a42
	adds r0, #116	@ 00091a42 7430
.org 0x91a44
	ldr r1, [pc, #28]	@ 00091a44 0749
.org 0x91a46
	bl 0x5784	@ 00091a46 73f79dfe
.org 0x91a4a
	strb r6, [r4, #13]	@ 00091a4a 6673
.org 0x91a4c
	strb r5, [r4, #14]	@ 00091a4c a573
.org 0x91a4e
	adds r1, r4, #0	@ 00091a4e 211c
.org 0x91a50
	adds r1, #193	@ 00091a50 c131
.org 0x91a52
	movs r0, #1	@ 00091a52 0120
.org 0x91a54
	strb r0, [r1, #0]	@ 00091a54 0870
.org 0x91a56
	pop {r4, r5, r6}	@ 00091a56 70bc
.org 0x91a58
	pop {r0}	@ 00091a58 01bc
.org 0x91a5a
	bx r0	@ 00091a5a 0047
