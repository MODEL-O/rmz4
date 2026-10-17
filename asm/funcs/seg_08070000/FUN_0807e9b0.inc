@ FUN_0807e9b0  entry 0x0807e9b0  size 144
.thumb
.org 0x7e9b0
FUN_0807e9b0:
	push {r4, r5, lr}	@ 0007e9b0 30b5
.org 0x7e9b2
	sub sp, #8	@ 0007e9b2 82b0
.org 0x7e9b4
	adds r4, r0, #0	@ 0007e9b4 041c
.org 0x7e9b6
	adds r5, r4, #0	@ 0007e9b6 251c
.org 0x7e9b8
	adds r5, #192	@ 0007e9b8 c035
.org 0x7e9ba
	bl 0x7ea9c	@ 0007e9ba 00f06ff8
.org 0x7e9be
	lsls r0, r0, #24	@ 0007e9be 0006
.org 0x7e9c0
	lsrs r0, r0, #24	@ 0007e9c0 000e
.org 0x7e9c2
	adds r1, r4, #0	@ 0007e9c2 211c
.org 0x7e9c4
	adds r1, #189	@ 0007e9c4 bd31
.org 0x7e9c6
	ldrb r2, [r1, #0]	@ 0007e9c6 0a78
.org 0x7e9c8
	cmp r0, r2	@ 0007e9c8 9042
.org 0x7e9ca
	beq.n 0x7e9d0	@ 0007e9ca 01d0
.org 0x7e9cc
	strb r0, [r1, #0]	@ 0007e9cc 0870
.org 0x7e9ce
	b.n 0x7ea1a	@ 0007e9ce 24e0
.org 0x7e9d0
	ldr r0, [pc, #20]	@ 0007e9d0 0548
.org 0x7e9d2
	ldrh r1, [r0, #8]	@ 0007e9d2 0189
.org 0x7e9d4
	movs r0, #8	@ 0007e9d4 0820
.org 0x7e9d6
	ands r0, r1	@ 0007e9d6 0840
.org 0x7e9d8
	cmp r0, #0	@ 0007e9d8 0028
.org 0x7e9da
	beq.n 0x7e9ec	@ 0007e9da 07d0
.org 0x7e9dc
	movs r0, #0	@ 0007e9dc 0020
.org 0x7e9de
	strb r0, [r4, #13]	@ 0007e9de 6073
.org 0x7e9e0
	strb r0, [r4, #14]	@ 0007e9e0 a073
.org 0x7e9e2
	strb r0, [r4, #15]	@ 0007e9e2 e073
.org 0x7e9e4
	b.n 0x7ea3e	@ 0007e9e4 2be0
.org 0x7e9e6
	.byte 0x00	@ 0007e9e6 data
.org 0x7e9e7
	.byte 0x00	@ 0007e9e7 data
.org 0x7e9e8
	.byte 0x10,0xe9,0x02,0x02	@ 0007e9e8 data
.org 0x7e9ec
	movs r2, #0	@ 0007e9ec 0022
.org 0x7e9ee
	movs r3, #1	@ 0007e9ee 0123
.org 0x7e9f0
	mov r1, sp	@ 0007e9f0 6946
.org 0x7e9f2
	adds r0, r5, r2	@ 0007e9f2 a818
.org 0x7e9f4
	ldrb r0, [r0, #0]	@ 0007e9f4 0078
.org 0x7e9f6
	cmp r0, #0	@ 0007e9f6 0028
.org 0x7e9f8
	beq.n 0x7e9fe	@ 0007e9f8 01d0
.org 0x7e9fa
	strb r3, [r1, #0]	@ 0007e9fa 0b70
.org 0x7e9fc
	b.n 0x7ea00	@ 0007e9fc 00e0
.org 0x7e9fe
	strb r0, [r1, #0]	@ 0007e9fe 0870
.org 0x7ea00
	adds r1, #1	@ 0007ea00 0131
.org 0x7ea02
	adds r2, #1	@ 0007ea02 0132
.org 0x7ea04
	cmp r2, #6	@ 0007ea04 062a
.org 0x7ea06
	ble.n 0x7e9f2	@ 0007ea06 f4dd
.org 0x7ea08
	mov r0, sp	@ 0007ea08 6846
.org 0x7ea0a
	movs r1, #7	@ 0007ea0a 0721
.org 0x7ea0c
	bl 0x7eb38	@ 0007ea0c 00f094f8
.org 0x7ea10
	adds r2, r0, #0	@ 0007ea10 021c
.org 0x7ea12
	movs r0, #1	@ 0007ea12 0120
.org 0x7ea14
	negs r0, r0	@ 0007ea14 4042
.org 0x7ea16
	cmp r2, r0	@ 0007ea16 8242
.org 0x7ea18
	bne.n 0x7ea28	@ 0007ea18 06d1
.org 0x7ea1a
	adds r0, r4, #0	@ 0007ea1a 201c
.org 0x7ea1c
	bl 0x7ea4c	@ 0007ea1c 00f016f8
.org 0x7ea20
	adds r0, r4, #0	@ 0007ea20 201c
.org 0x7ea22
	bl 0x7e9b0	@ 0007ea22 fff7c5ff
.org 0x7ea26
	b.n 0x7ea3e	@ 0007ea26 0ae0
.org 0x7ea28
	ldr r0, [pc, #28]	@ 0007ea28 0748
.org 0x7ea2a
	adds r0, r2, r0	@ 0007ea2a 1018
.org 0x7ea2c
	ldrb r0, [r0, #0]	@ 0007ea2c 0078
.org 0x7ea2e
	movs r1, #0	@ 0007ea2e 0021
.org 0x7ea30
	strb r0, [r4, #13]	@ 0007ea30 6073
.org 0x7ea32
	strb r1, [r4, #14]	@ 0007ea32 a173
.org 0x7ea34
	strb r1, [r4, #15]	@ 0007ea34 e173
.org 0x7ea36
	adds r1, r5, r2	@ 0007ea36 a918
.org 0x7ea38
	ldrb r0, [r1, #0]	@ 0007ea38 0878
.org 0x7ea3a
	subs r0, #1	@ 0007ea3a 0138
.org 0x7ea3c
	strb r0, [r1, #0]	@ 0007ea3c 0870
.org 0x7ea3e
	add sp, #8	@ 0007ea3e 02b0
