@ FUN_08039b80  entry 0x08039b80  size 270
.thumb
.org 0x39b80
FUN_08039b80:
	push {r4, r5, r6, lr}	@ 00039b80 70b5
.org 0x39b82
	adds r4, r0, #0	@ 00039b82 041c
.org 0x39b84
	ldr r0, [pc, #16]	@ 00039b84 0448
.org 0x39b86
	adds r3, r4, r0	@ 00039b86 2318
.org 0x39b88
	ldrb r1, [r3, #0]	@ 00039b88 1978
.org 0x39b8a
	cmp r1, #1	@ 00039b8a 0129
.org 0x39b8c
	beq.n 0x39bdc	@ 00039b8c 26d0
.org 0x39b8e
	cmp r1, #1	@ 00039b8e 0129
.org 0x39b90
	bgt.n 0x39b9c	@ 00039b90 04dc
.org 0x39b92
	cmp r1, #0	@ 00039b92 0029
.org 0x39b94
	beq.n 0x39ba6	@ 00039b94 07d0
.org 0x39b96
	b.n 0x39ca0	@ 00039b96 83e0
.org 0x39b98
	.byte 0x6f,0x02,0x00,0x00	@ 00039b98 data
.org 0x39b9c
	cmp r1, #2	@ 00039b9c 0229
.org 0x39b9e
	beq.n 0x39c40	@ 00039b9e 4fd0
.org 0x39ba0
	cmp r1, #3	@ 00039ba0 0329
.org 0x39ba2
	beq.n 0x39c80	@ 00039ba2 6dd0
.org 0x39ba4
	b.n 0x39ca0	@ 00039ba4 7ce0
.org 0x39ba6
	ldr r0, [pc, #44]	@ 00039ba6 0b48
.org 0x39ba8
	adds r2, r4, r0	@ 00039ba8 2218
.org 0x39baa
	ldrb r0, [r2, #0]	@ 00039baa 1078
.org 0x39bac
	subs r0, #1	@ 00039bac 0138
.org 0x39bae
	strb r0, [r2, #0]	@ 00039bae 1070
.org 0x39bb0
	lsls r0, r0, #24	@ 00039bb0 0006
.org 0x39bb2
	lsrs r0, r0, #24	@ 00039bb2 000e
.org 0x39bb4
	cmp r0, #255	@ 00039bb4 ff28
.org 0x39bb6
	bne.n 0x39bba	@ 00039bb6 00d1
.org 0x39bb8
	strb r1, [r3, #0]	@ 00039bb8 1970
.org 0x39bba
	ldr r1, [pc, #28]	@ 00039bba 0749
.org 0x39bbc
	adds r0, r4, r1	@ 00039bbc 6018
.org 0x39bbe
	ldrh r1, [r0, #0]	@ 00039bbe 0188
.org 0x39bc0
	movs r0, #128	@ 00039bc0 8020
.org 0x39bc2
	ands r0, r1	@ 00039bc2 0840
.org 0x39bc4
	cmp r0, #0	@ 00039bc4 0028
.org 0x39bc6
	bne.n 0x39ca8	@ 00039bc6 6fd1
.org 0x39bc8
	movs r0, #16	@ 00039bc8 1020
.org 0x39bca
	ands r0, r1	@ 00039bca 0840
.org 0x39bcc
	cmp r0, #0	@ 00039bcc 0028
.org 0x39bce
	bne.n 0x39c6c	@ 00039bce 4dd1
.org 0x39bd0
	movs r0, #32	@ 00039bd0 2020
.org 0x39bd2
	b.n 0x39c66	@ 00039bd2 48e0
.org 0x39bd4
	.byte 0x6e,0x02,0x00,0x00	@ 00039bd4 data
.org 0x39bd8
	.byte 0x52,0x02,0x00,0x00	@ 00039bd8 data
.org 0x39bdc
	ldr r2, [pc, #40]	@ 00039bdc 0a4a
.org 0x39bde
	adds r5, r4, r2	@ 00039bde a518
.org 0x39be0
	ldrb r0, [r5, #0]	@ 00039be0 2878
.org 0x39be2
	subs r0, #1	@ 00039be2 0138
.org 0x39be4
	strb r0, [r5, #0]	@ 00039be4 2870
.org 0x39be6
	lsls r0, r0, #24	@ 00039be6 0006
.org 0x39be8
	lsrs r0, r0, #24	@ 00039be8 000e
.org 0x39bea
	cmp r0, #255	@ 00039bea ff28
.org 0x39bec
	bne.n 0x39bf2	@ 00039bec 01d1
.org 0x39bee
	movs r0, #0	@ 00039bee 0020
.org 0x39bf0
	strb r0, [r3, #0]	@ 00039bf0 1870
.org 0x39bf2
	ldr r2, [pc, #24]	@ 00039bf2 064a
.org 0x39bf4
	adds r0, r4, r2	@ 00039bf4 a018
.org 0x39bf6
	ldrh r2, [r0, #0]	@ 00039bf6 0288
.org 0x39bf8
	movs r0, #128	@ 00039bf8 8020
.org 0x39bfa
	ands r0, r2	@ 00039bfa 1040
.org 0x39bfc
	cmp r0, #0	@ 00039bfc 0028
.org 0x39bfe
	beq.n 0x39c10	@ 00039bfe 07d0
.org 0x39c00
	movs r0, #10	@ 00039c00 0a20
.org 0x39c02
	strb r0, [r5, #0]	@ 00039c02 2870
.org 0x39c04
	b.n 0x39c70	@ 00039c04 34e0
.org 0x39c06
	.byte 0x00	@ 00039c06 data
.org 0x39c07
	.byte 0x00	@ 00039c07 data
.org 0x39c08
	.byte 0x6e,0x02,0x00,0x00	@ 00039c08 data
.org 0x39c0c
	.byte 0x52,0x02,0x00,0x00	@ 00039c0c data
.org 0x39c10
	movs r0, #16	@ 00039c10 1020
.org 0x39c12
	ands r0, r2	@ 00039c12 1040
.org 0x39c14
	lsls r0, r0, #16	@ 00039c14 0004
.org 0x39c16
	lsrs r6, r0, #16	@ 00039c16 060c
.org 0x39c18
	cmp r6, #0	@ 00039c18 002e
.org 0x39c1a
	beq.n 0x39c2a	@ 00039c1a 06d0
.org 0x39c1c
	movs r2, #156	@ 00039c1c 9c22
.org 0x39c1e
	lsls r2, r2, #2	@ 00039c1e 9200
.org 0x39c20
	adds r0, r4, r2	@ 00039c20 a018
.org 0x39c22
	strb r1, [r0, #0]	@ 00039c22 0170
.org 0x39c24
	movs r0, #10	@ 00039c24 0a20
.org 0x39c26
	strb r0, [r5, #0]	@ 00039c26 2870
.org 0x39c28
	b.n 0x39c70	@ 00039c28 22e0
.org 0x39c2a
	movs r0, #32	@ 00039c2a 2020
.org 0x39c2c
	ands r0, r2	@ 00039c2c 1040
.org 0x39c2e
	cmp r0, #0	@ 00039c2e 0028
.org 0x39c30
	beq.n 0x39ca8	@ 00039c30 3ad0
.org 0x39c32
	movs r1, #156	@ 00039c32 9c21
.org 0x39c34
	lsls r1, r1, #2	@ 00039c34 8900
.org 0x39c36
	adds r0, r4, r1	@ 00039c36 6018
.org 0x39c38
	strb r6, [r0, #0]	@ 00039c38 0670
.org 0x39c3a
	movs r0, #10	@ 00039c3a 0a20
.org 0x39c3c
	strb r0, [r5, #0]	@ 00039c3c 2870
.org 0x39c3e
	b.n 0x39c70	@ 00039c3e 17e0
.org 0x39c40
	ldr r0, [pc, #52]	@ 00039c40 0d48
.org 0x39c42
	adds r2, r4, r0	@ 00039c42 2218
.org 0x39c44
	ldrb r0, [r2, #0]	@ 00039c44 1078
.org 0x39c46
	subs r0, #1	@ 00039c46 0138
.org 0x39c48
	strb r0, [r2, #0]	@ 00039c48 1070
.org 0x39c4a
	lsls r0, r0, #24	@ 00039c4a 0006
.org 0x39c4c
	lsrs r0, r0, #24	@ 00039c4c 000e
.org 0x39c4e
	cmp r0, #255	@ 00039c4e ff28
.org 0x39c50
	bne.n 0x39c56	@ 00039c50 01d1
.org 0x39c52
	movs r0, #0	@ 00039c52 0020
.org 0x39c54
	strb r0, [r3, #0]	@ 00039c54 1870
.org 0x39c56
	ldr r1, [pc, #36]	@ 00039c56 0949
.org 0x39c58
	adds r0, r4, r1	@ 00039c58 6018
.org 0x39c5a
	ldrh r1, [r0, #0]	@ 00039c5a 0188
.org 0x39c5c
	movs r0, #48	@ 00039c5c 3020
.org 0x39c5e
	ands r0, r1	@ 00039c5e 0840
.org 0x39c60
	cmp r0, #0	@ 00039c60 0028
.org 0x39c62
	bne.n 0x39ca8	@ 00039c62 21d1
.org 0x39c64
	movs r0, #128	@ 00039c64 8020
.org 0x39c66
	ands r0, r1	@ 00039c66 0840
.org 0x39c68
	cmp r0, #0	@ 00039c68 0028
.org 0x39c6a
	beq.n 0x39ca8	@ 00039c6a 1dd0
.org 0x39c6c
	movs r0, #10	@ 00039c6c 0a20
.org 0x39c6e
	strb r0, [r2, #0]	@ 00039c6e 1070
.org 0x39c70
	ldrb r0, [r3, #0]	@ 00039c70 1878
.org 0x39c72
	adds r0, #1	@ 00039c72 0130
.org 0x39c74
	strb r0, [r3, #0]	@ 00039c74 1870
.org 0x39c76
	b.n 0x39ca8	@ 00039c76 17e0
.org 0x39c78
	.byte 0x6e,0x02,0x00,0x00	@ 00039c78 data
.org 0x39c7c
	.byte 0x52,0x02,0x00,0x00	@ 00039c7c data
.org 0x39c80
	ldr r2, [pc, #20]	@ 00039c80 054a
.org 0x39c82
	adds r1, r4, r2	@ 00039c82 a118
.org 0x39c84
	ldrb r0, [r1, #0]	@ 00039c84 0878
.org 0x39c86
	subs r0, #1	@ 00039c86 0138
.org 0x39c88
	strb r0, [r1, #0]	@ 00039c88 0870
.org 0x39c8a
	lsls r0, r0, #24	@ 00039c8a 0006
.org 0x39c8c
	lsrs r0, r0, #24	@ 00039c8c 000e
