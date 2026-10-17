@ FUN_080dbed8  entry 0x080dbed8  size 124
.thumb
.org 0xdbed8
FUN_080dbed8:
	push {r4, r5, r6, r7, lr}	@ 000dbed8 f0b5
.org 0xdbeda
	mov r7, sl	@ 000dbeda 5746
.org 0xdbedc
	mov r6, r9	@ 000dbedc 4e46
.org 0xdbede
	mov r5, r8	@ 000dbede 4546
.org 0xdbee0
	push {r5, r6, r7}	@ 000dbee0 e0b4
.org 0xdbee2
	mov r9, r0	@ 000dbee2 8146
.org 0xdbee4
	adds r6, r1, #0	@ 000dbee4 0e1c
.org 0xdbee6
	mov r8, r2	@ 000dbee6 9046
.org 0xdbee8
	lsls r3, r3, #24	@ 000dbee8 1b06
.org 0xdbeea
	lsrs r7, r3, #24	@ 000dbeea 1f0e
.org 0xdbeec
	movs r5, #0	@ 000dbeec 0025
.org 0xdbeee
	cmp r5, r7	@ 000dbeee bd42
.org 0xdbef0
	bge.n 0xdbf46	@ 000dbef0 29da
.org 0xdbef2
	movs r4, #0	@ 000dbef2 0024
.org 0xdbef4
	ldr r0, [pc, #92]	@ 000dbef4 1748
.org 0xdbef6
	mov sl, r0	@ 000dbef6 8246
.org 0xdbef8
	ldr r0, [pc, #92]	@ 000dbef8 1748
.org 0xdbefa
	ldr r0, [r0, #0]	@ 000dbefa 0068
.org 0xdbefc
	bl 0x5500	@ 000dbefc 29f700fb
.org 0xdbf00
	adds r1, r0, #0	@ 000dbf00 011c
.org 0xdbf02
	cmp r1, #0	@ 000dbf02 0029
.org 0xdbf04
	beq.n 0xdbf40	@ 000dbf04 1cd0
.org 0xdbf06
	adds r2, r1, #0	@ 000dbf06 0a1c
.org 0xdbf08
	adds r2, #37	@ 000dbf08 2532
.org 0xdbf0a
	movs r0, #1	@ 000dbf0a 0120
.org 0xdbf0c
	strb r0, [r2, #0]	@ 000dbf0c 1070
.org 0xdbf0e
	movs r0, #43	@ 000dbf0e 2b20
.org 0xdbf10
	strb r0, [r1, #9]	@ 000dbf10 4872
.org 0xdbf12
	mov r2, sl	@ 000dbf12 5246
.org 0xdbf14
	ldr r0, [r2, #0]	@ 000dbf14 1068
.org 0xdbf16
	ldr r0, [r0, #0]	@ 000dbf16 0068
.org 0xdbf18
	str r0, [r1, #20]	@ 000dbf18 4861
.org 0xdbf1a
	strh r4, [r1, #32]	@ 000dbf1a 0c84
.org 0xdbf1c
	adds r0, r1, #0	@ 000dbf1c 081c
.org 0xdbf1e
	adds r0, #34	@ 000dbf1e 2230
.org 0xdbf20
	strb r4, [r0, #0]	@ 000dbf20 0470
.org 0xdbf22
	strb r4, [r1, #16]	@ 000dbf22 0c74
.org 0xdbf24
	strb r5, [r1, #17]	@ 000dbf24 4d74
.org 0xdbf26
	mov r0, r9	@ 000dbf26 4846
.org 0xdbf28
	str r0, [r1, #40]	@ 000dbf28 8862
.org 0xdbf2a
	mov r2, r8	@ 000dbf2a 4246
.org 0xdbf2c
	str r2, [r1, #116]	@ 000dbf2c 4a67
.org 0xdbf2e
	ldr r0, [r6, #0]	@ 000dbf2e 3068
.org 0xdbf30
	str r0, [r1, #84]	@ 000dbf30 4865
.org 0xdbf32
	ldr r0, [r6, #4]	@ 000dbf32 7068
.org 0xdbf34
	str r0, [r1, #88]	@ 000dbf34 8865
.org 0xdbf36
	adds r0, r1, #0	@ 000dbf36 081c
.org 0xdbf38
	adds r0, #120	@ 000dbf38 7830
.org 0xdbf3a
	strb r4, [r0, #0]	@ 000dbf3a 0470
.org 0xdbf3c
	adds r0, #1	@ 000dbf3c 0130
.org 0xdbf3e
	strb r4, [r0, #0]	@ 000dbf3e 0470
.org 0xdbf40
	adds r5, #1	@ 000dbf40 0135
.org 0xdbf42
	cmp r5, r7	@ 000dbf42 bd42
.org 0xdbf44
	blt.n 0xdbef8	@ 000dbf44 d8db
.org 0xdbf46
	pop {r3, r4, r5}	@ 000dbf46 38bc
.org 0xdbf48
	mov r8, r3	@ 000dbf48 9846
.org 0xdbf4a
	mov r9, r4	@ 000dbf4a a146
.org 0xdbf4c
	mov sl, r5	@ 000dbf4c aa46
.org 0xdbf4e
	pop {r4, r5, r6, r7}	@ 000dbf4e f0bc
.org 0xdbf50
	pop {r0}	@ 000dbf50 01bc
.org 0xdbf52
	bx r0	@ 000dbf52 0047
