@ FUN_08036bd8  entry 0x08036bd8  size 78
.thumb
.org 0x36bd8
FUN_08036bd8:
	push {r4, r5, lr}	@ 00036bd8 30b5
.org 0x36bda
	adds r4, r0, #0	@ 00036bda 041c
.org 0x36bdc
	movs r0, #129	@ 00036bdc 8120
.org 0x36bde
	lsls r0, r0, #1	@ 00036bde 4000
.org 0x36be0
	adds r5, r4, r0	@ 00036be0 2518
.org 0x36be2
	ldrb r0, [r5, #0]	@ 00036be2 2878
.org 0x36be4
	cmp r0, #0	@ 00036be4 0028
.org 0x36be6
	bne.n 0x36c00	@ 00036be6 0bd1
.org 0x36be8
	ldr r1, [pc, #60]	@ 00036be8 0f49
.org 0x36bea
	adds r0, r4, #0	@ 00036bea 201c
.org 0x36bec
	bl 0x1cf00	@ 00036bec e6f788f9
.org 0x36bf0
	movs r0, #169	@ 00036bf0 a920
.org 0x36bf2
	lsls r0, r0, #1	@ 00036bf2 4000
.org 0x36bf4
	adds r1, r4, r0	@ 00036bf4 2118
.org 0x36bf6
	movs r0, #14	@ 00036bf6 0e20
.org 0x36bf8
	strb r0, [r1, #0]	@ 00036bf8 0870
.org 0x36bfa
	ldrb r0, [r5, #0]	@ 00036bfa 2878
.org 0x36bfc
	adds r0, #1	@ 00036bfc 0130
.org 0x36bfe
	strb r0, [r5, #0]	@ 00036bfe 2870
.org 0x36c00
	movs r0, #169	@ 00036c00 a920
.org 0x36c02
	lsls r0, r0, #1	@ 00036c02 4000
.org 0x36c04
	adds r1, r4, r0	@ 00036c04 2118
.org 0x36c06
	ldrb r0, [r1, #0]	@ 00036c06 0878
.org 0x36c08
	subs r0, #1	@ 00036c08 0138
.org 0x36c0a
	strb r0, [r1, #0]	@ 00036c0a 0870
.org 0x36c0c
	lsls r0, r0, #24	@ 00036c0c 0006
.org 0x36c0e
	lsrs r0, r0, #24	@ 00036c0e 000e
.org 0x36c10
	cmp r0, #255	@ 00036c10 ff28
.org 0x36c12
	bne.n 0x36c20	@ 00036c12 05d1
.org 0x36c14
	ldr r0, [pc, #20]	@ 00036c14 0548
.org 0x36c16
	adds r1, r4, r0	@ 00036c16 2118
.org 0x36c18
	movs r0, #4	@ 00036c18 0420
.org 0x36c1a
	strb r0, [r1, #0]	@ 00036c1a 0870
.org 0x36c1c
	movs r0, #0	@ 00036c1c 0020
.org 0x36c1e
	strb r0, [r5, #0]	@ 00036c1e 2870
.org 0x36c20
	pop {r4, r5}	@ 00036c20 30bc
.org 0x36c22
	pop {r0}	@ 00036c22 01bc
.org 0x36c24
	bx r0	@ 00036c24 0047
