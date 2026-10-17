@ FUN_08036e48  entry 0x08036e48  size 150
.thumb
.org 0x36e48
FUN_08036e48:
	push {r4, r5, r6, lr}	@ 00036e48 70b5
.org 0x36e4a
	adds r4, r0, #0	@ 00036e4a 041c
.org 0x36e4c
	movs r0, #162	@ 00036e4c a220
.org 0x36e4e
	lsls r0, r0, #1	@ 00036e4e 4000
.org 0x36e50
	adds r1, r4, r0	@ 00036e50 2118
.org 0x36e52
	adds r0, r4, #0	@ 00036e52 201c
.org 0x36e54
	bl 0x39fd8	@ 00036e54 03f0c0f8
.org 0x36e58
	lsls r0, r0, #24	@ 00036e58 0006
.org 0x36e5a
	lsrs r3, r0, #24	@ 00036e5a 030e
.org 0x36e5c
	cmp r3, #0	@ 00036e5c 002b
.org 0x36e5e
	beq.n 0x36e84	@ 00036e5e 11d0
.org 0x36e60
	ldr r0, [pc, #24]	@ 00036e60 0648
.org 0x36e62
	adds r1, r4, r0	@ 00036e62 2118
.org 0x36e64
	movs r0, #255	@ 00036e64 ff20
.org 0x36e66
	strb r0, [r1, #0]	@ 00036e66 0870
.org 0x36e68
	adds r0, #1	@ 00036e68 0130
.org 0x36e6a
	adds r1, r4, r0	@ 00036e6a 2118
.org 0x36e6c
	movs r2, #0	@ 00036e6c 0022
.org 0x36e6e
	movs r0, #3	@ 00036e6e 0320
.org 0x36e70
	strb r0, [r1, #0]	@ 00036e70 0870
.org 0x36e72
	ldr r1, [pc, #12]	@ 00036e72 0349
.org 0x36e74
	adds r0, r4, r1	@ 00036e74 6018
.org 0x36e76
	strb r2, [r0, #0]	@ 00036e76 0270
.org 0x36e78
	b.n 0x36eda	@ 00036e78 2fe0
.org 0x36e7a
	.byte 0x00	@ 00036e7a data
.org 0x36e7b
	.byte 0x00	@ 00036e7b data
.org 0x36e7c
	.byte 0x47,0x01,0x00,0x00	@ 00036e7c data
.org 0x36e80
	.byte 0x01,0x01,0x00,0x00	@ 00036e80 data
.org 0x36e84
	adds r5, r4, #0	@ 00036e84 251c
.org 0x36e86
	adds r5, #180	@ 00036e86 b435
.org 0x36e88
	ldr r1, [pc, #28]	@ 00036e88 0749
.org 0x36e8a
	adds r0, r4, r1	@ 00036e8a 6018
.org 0x36e8c
	ldrb r2, [r0, #0]	@ 00036e8c 0278
.org 0x36e8e
	adds r1, r2, #0	@ 00036e8e 111c
.org 0x36e90
	adds r6, r0, #0	@ 00036e90 061c
.org 0x36e92
	cmp r1, #255	@ 00036e92 ff29
.org 0x36e94
	beq.n 0x36eac	@ 00036e94 0ad0
.org 0x36e96
	movs r1, #162	@ 00036e96 a221
.org 0x36e98
	lsls r1, r1, #1	@ 00036e98 4900
.org 0x36e9a
	adds r0, r4, r1	@ 00036e9a 6018
.org 0x36e9c
	strb r2, [r0, #0]	@ 00036e9c 0270
.org 0x36e9e
	movs r0, #255	@ 00036e9e ff20
.org 0x36ea0
	strb r0, [r6, #0]	@ 00036ea0 3070
.org 0x36ea2
	adds r0, #1	@ 00036ea2 0130
.org 0x36ea4
	b.n 0x36ece	@ 00036ea4 13e0
.org 0x36ea6
	.byte 0x00	@ 00036ea6 data
.org 0x36ea7
	.byte 0x00	@ 00036ea7 data
.org 0x36ea8
	.byte 0x47,0x01,0x00,0x00	@ 00036ea8 data
.org 0x36eac
	ldr r0, [pc, #52]	@ 00036eac 0d48
.org 0x36eae
	adds r1, r4, r0	@ 00036eae 2118
.org 0x36eb0
	ldrb r0, [r1, #0]	@ 00036eb0 0878
.org 0x36eb2
	cmp r0, #0	@ 00036eb2 0028
.org 0x36eb4
	beq.n 0x36eee	@ 00036eb4 1bd0
.org 0x36eb6
	ldrb r0, [r5, #12]	@ 00036eb6 287b
.org 0x36eb8
	cmp r0, #4	@ 00036eb8 0428
.org 0x36eba
	beq.n 0x36ec2	@ 00036eba 02d0
.org 0x36ebc
	ldrb r0, [r5, #13]	@ 00036ebc 687b
.org 0x36ebe
	cmp r0, #4	@ 00036ebe 0428
.org 0x36ec0
	bne.n 0x36eec	@ 00036ec0 14d1
.org 0x36ec2
	movs r0, #162	@ 00036ec2 a220
.org 0x36ec4
	lsls r0, r0, #1	@ 00036ec4 4000
.org 0x36ec6
	adds r1, r4, r0	@ 00036ec6 2118
.org 0x36ec8
	movs r0, #4	@ 00036ec8 0420
.org 0x36eca
	strb r0, [r1, #0]	@ 00036eca 0870
.org 0x36ecc
	adds r0, #252	@ 00036ecc fc30
.org 0x36ece
	adds r1, r4, r0	@ 00036ece 2118
.org 0x36ed0
	movs r0, #3	@ 00036ed0 0320
.org 0x36ed2
	strb r0, [r1, #0]	@ 00036ed2 0870
.org 0x36ed4
	ldr r1, [pc, #16]	@ 00036ed4 0449
.org 0x36ed6
	adds r0, r4, r1	@ 00036ed6 6018
.org 0x36ed8
	strb r3, [r0, #0]	@ 00036ed8 0370
.org 0x36eda
	adds r0, r4, #0	@ 00036eda 201c
.org 0x36edc
	bl 0x36efc	@ 00036edc 00f00ef8
