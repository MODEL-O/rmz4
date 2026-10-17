@ FUN_080e9bb4  entry 0x080e9bb4  size 150
.thumb
.org 0xe9bb4
FUN_080e9bb4:
	push {r4, r5, r6, lr}	@ 000e9bb4 70b5
.org 0xe9bb6
	ldr r3, [r0, #44]	@ 000e9bb6 c36a
.org 0xe9bb8
	ldr r0, [r0, #12]	@ 000e9bb8 c068
.org 0xe9bba
	ldr r5, [r0, #44]	@ 000e9bba c56a
.org 0xe9bbc
	movs r0, #8	@ 000e9bbc 0820
.org 0xe9bbe
	ldrsb r0, [r5, r0]	@ 000e9bbe 2856
.org 0xe9bc0
	cmp r0, #0	@ 000e9bc0 0028
.org 0xe9bc2
	bne.n 0xe9c4a	@ 000e9bc2 42d1
.org 0xe9bc4
	ldr r0, [r3, #88]	@ 000e9bc4 986d
.org 0xe9bc6
	ldr r1, [r5, #88]	@ 000e9bc6 a96d
.org 0xe9bc8
	cmp r0, r1	@ 000e9bc8 8842
.org 0xe9bca
	blt.n 0xe9c4a	@ 000e9bca 3edb
.org 0xe9bcc
	subs r1, r0, r1	@ 000e9bcc 411a
.org 0xe9bce
	movs r0, #128	@ 000e9bce 8020
.org 0xe9bd0
	lsls r0, r0, #4	@ 000e9bd0 0001
.org 0xe9bd2
	cmp r1, r0	@ 000e9bd2 8142
.org 0xe9bd4
	bgt.n 0xe9c4a	@ 000e9bd4 39dc
.org 0xe9bd6
	ldrb r2, [r3, #16]	@ 000e9bd6 1a7c
.org 0xe9bd8
	movs r6, #2	@ 000e9bd8 0226
.org 0xe9bda
	adds r0, r6, #0	@ 000e9bda 301c
.org 0xe9bdc
	ands r0, r2	@ 000e9bdc 1040
.org 0xe9bde
	lsls r0, r0, #24	@ 000e9bde 0006
.org 0xe9be0
	lsrs r4, r0, #24	@ 000e9be0 040e
.org 0xe9be2
	cmp r4, #0	@ 000e9be2 002c
.org 0xe9be4
	beq.n 0xe9c12	@ 000e9be4 15d0
.org 0xe9be6
	ldr r0, [pc, #32]	@ 000e9be6 0848
.org 0xe9be8
	ldrb r1, [r0, #4]	@ 000e9be8 0179
.org 0xe9bea
	movs r0, #8	@ 000e9bea 0820
.org 0xe9bec
	ands r0, r1	@ 000e9bec 0840
.org 0xe9bee
	lsls r0, r0, #24	@ 000e9bee 0006
.org 0xe9bf0
	lsrs r2, r0, #24	@ 000e9bf0 020e
.org 0xe9bf2
	cmp r2, #0	@ 000e9bf2 002a
.org 0xe9bf4
	bne.n 0xe9c4a	@ 000e9bf4 29d1
.org 0xe9bf6
	ldr r1, [r3, #84]	@ 000e9bf6 596d
.org 0xe9bf8
	ldr r0, [r5, #84]	@ 000e9bf8 686d
.org 0xe9bfa
	cmp r1, r0	@ 000e9bfa 8142
.org 0xe9bfc
	ble.n 0xe9c0c	@ 000e9bfc 06dd
.org 0xe9bfe
	movs r0, #1	@ 000e9bfe 0120
.org 0xe9c00
	strb r0, [r3, #13]	@ 000e9c00 5873
.org 0xe9c02
	strb r2, [r3, #14]	@ 000e9c02 9a73
.org 0xe9c04
	b.n 0xe9c34	@ 000e9c04 16e0
.org 0xe9c06
	.byte 0x00	@ 000e9c06 data
.org 0xe9c07
	.byte 0x00	@ 000e9c07 data
.org 0xe9c08
	.byte 0xb0,0xe8,0x02,0x02	@ 000e9c08 data
.org 0xe9c0c
	strb r6, [r3, #13]	@ 000e9c0c 5e73
.org 0xe9c0e
	strb r2, [r3, #14]	@ 000e9c0e 9a73
.org 0xe9c10
	b.n 0xe9c34	@ 000e9c10 10e0
.org 0xe9c12
	ldr r1, [r3, #84]	@ 000e9c12 596d
.org 0xe9c14
	ldr r0, [r5, #84]	@ 000e9c14 686d
.org 0xe9c16
	cmp r1, r0	@ 000e9c16 8142
.org 0xe9c18
	ble.n 0xe9c28	@ 000e9c18 06dd
.org 0xe9c1a
	movs r1, #1	@ 000e9c1a 0121
.org 0xe9c1c
	adds r0, r1, #0	@ 000e9c1c 081c
.org 0xe9c1e
	ands r0, r2	@ 000e9c1e 1040
.org 0xe9c20
	cmp r0, #0	@ 000e9c20 0028
.org 0xe9c22
	bne.n 0xe9c4a	@ 000e9c22 12d1
.org 0xe9c24
	strb r1, [r3, #13]	@ 000e9c24 5973
.org 0xe9c26
	b.n 0xe9c32	@ 000e9c26 04e0
.org 0xe9c28
	movs r0, #1	@ 000e9c28 0120
.org 0xe9c2a
	ands r0, r2	@ 000e9c2a 1040
.org 0xe9c2c
	cmp r0, #0	@ 000e9c2c 0028
.org 0xe9c2e
	beq.n 0xe9c4a	@ 000e9c2e 0cd0
.org 0xe9c30
	strb r6, [r3, #13]	@ 000e9c30 5e73
.org 0xe9c32
	strb r4, [r3, #14]	@ 000e9c32 9c73
.org 0xe9c34
	ldr r0, [pc, #24]	@ 000e9c34 0648
.org 0xe9c36
	adds r1, r5, r0	@ 000e9c36 2918
.org 0xe9c38
	movs r0, #1	@ 000e9c38 0120
.org 0xe9c3a
	strb r0, [r1, #0]	@ 000e9c3a 0870
.org 0xe9c3c
	ldr r2, [pc, #20]	@ 000e9c3c 054a
.org 0xe9c3e
	ldrh r1, [r2, #20]	@ 000e9c3e 918a
.org 0xe9c40
	orrs r0, r1	@ 000e9c40 0843
.org 0xe9c42
	strh r0, [r2, #20]	@ 000e9c42 9082
.org 0xe9c44
	adds r0, r3, #0	@ 000e9c44 181c
.org 0xe9c46
	adds r0, #180	@ 000e9c46 b430
.org 0xe9c48
	str r5, [r0, #0]	@ 000e9c48 0560
