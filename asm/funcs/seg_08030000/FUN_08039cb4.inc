@ FUN_08039cb4  entry 0x08039cb4  size 304
.thumb
.org 0x39cb4
FUN_08039cb4:
	push {r4, r5, lr}	@ 00039cb4 30b5
.org 0x39cb6
	adds r1, r0, #0	@ 00039cb6 011c
.org 0x39cb8
	ldr r0, [pc, #16]	@ 00039cb8 0448
.org 0x39cba
	adds r3, r1, r0	@ 00039cba 0b18
.org 0x39cbc
	ldrb r2, [r3, #0]	@ 00039cbc 1a78
.org 0x39cbe
	cmp r2, #1	@ 00039cbe 012a
.org 0x39cc0
	beq.n 0x39d40	@ 00039cc0 3ed0
.org 0x39cc2
	cmp r2, #1	@ 00039cc2 012a
.org 0x39cc4
	bgt.n 0x39cd0	@ 00039cc4 04dc
.org 0x39cc6
	cmp r2, #0	@ 00039cc6 002a
.org 0x39cc8
	beq.n 0x39cdc	@ 00039cc8 08d0
.org 0x39cca
	b.n 0x39e0c	@ 00039cca 9fe0
.org 0x39ccc
	.byte 0x72,0x02,0x00,0x00	@ 00039ccc data
.org 0x39cd0
	cmp r2, #2	@ 00039cd0 022a
.org 0x39cd2
	beq.n 0x39d98	@ 00039cd2 61d0
.org 0x39cd4
	cmp r2, #3	@ 00039cd4 032a
.org 0x39cd6
	bne.n 0x39cda	@ 00039cd6 00d1
.org 0x39cd8
	b.n 0x39dec	@ 00039cd8 88e0
.org 0x39cda
	b.n 0x39e0c	@ 00039cda 97e0
.org 0x39cdc
	ldr r4, [pc, #60]	@ 00039cdc 0f4c
.org 0x39cde
	adds r5, r1, r4	@ 00039cde 0d19
.org 0x39ce0
	ldrb r0, [r5, #0]	@ 00039ce0 2878
.org 0x39ce2
	subs r0, #1	@ 00039ce2 0138
.org 0x39ce4
	strb r0, [r5, #0]	@ 00039ce4 2870
.org 0x39ce6
	lsls r0, r0, #24	@ 00039ce6 0006
.org 0x39ce8
	lsrs r0, r0, #24	@ 00039ce8 000e
.org 0x39cea
	cmp r0, #255	@ 00039cea ff28
.org 0x39cec
	bne.n 0x39cf0	@ 00039cec 00d1
.org 0x39cee
	strb r2, [r3, #0]	@ 00039cee 1a70
.org 0x39cf0
	ldr r2, [pc, #44]	@ 00039cf0 0b4a
.org 0x39cf2
	adds r0, r1, r2	@ 00039cf2 8818
.org 0x39cf4
	ldrh r2, [r0, #0]	@ 00039cf4 0288
.org 0x39cf6
	movs r0, #128	@ 00039cf6 8020
.org 0x39cf8
	ands r0, r2	@ 00039cf8 1040
.org 0x39cfa
	cmp r0, #0	@ 00039cfa 0028
.org 0x39cfc
	bne.n 0x39d00	@ 00039cfc 00d1
.org 0x39cfe
	b.n 0x39e14	@ 00039cfe 89e0
.org 0x39d00
	movs r0, #16	@ 00039d00 1020
.org 0x39d02
	ands r0, r2	@ 00039d02 1040
.org 0x39d04
	lsls r0, r0, #16	@ 00039d04 0004
.org 0x39d06
	lsrs r4, r0, #16	@ 00039d06 040c
.org 0x39d08
	cmp r4, #0	@ 00039d08 002c
.org 0x39d0a
	beq.n 0x39d28	@ 00039d0a 0dd0
.org 0x39d0c
	ldr r4, [pc, #20]	@ 00039d0c 054c
.org 0x39d0e
	adds r1, r1, r4	@ 00039d0e 0919
.org 0x39d10
	movs r0, #1	@ 00039d10 0120
.org 0x39d12
	strb r0, [r1, #0]	@ 00039d12 0870
.org 0x39d14
	movs r0, #10	@ 00039d14 0a20
.org 0x39d16
	strb r0, [r5, #0]	@ 00039d16 2870
.org 0x39d18
	b.n 0x39de4	@ 00039d18 64e0
.org 0x39d1a
	.byte 0x00	@ 00039d1a data
.org 0x39d1b
	.byte 0x00	@ 00039d1b data
.org 0x39d1c
	.byte 0x71,0x02,0x00,0x00	@ 00039d1c data
.org 0x39d20
	.byte 0x52,0x02,0x00,0x00	@ 00039d20 data
.org 0x39d24
	.byte 0x73,0x02,0x00,0x00	@ 00039d24 data
.org 0x39d28
	movs r0, #32	@ 00039d28 2020
.org 0x39d2a
	ands r0, r2	@ 00039d2a 1040
.org 0x39d2c
	cmp r0, #0	@ 00039d2c 0028
.org 0x39d2e
	beq.n 0x39e14	@ 00039d2e 71d0
.org 0x39d30
	ldr r2, [pc, #8]	@ 00039d30 024a
.org 0x39d32
	adds r0, r1, r2	@ 00039d32 8818
.org 0x39d34
	strb r4, [r0, #0]	@ 00039d34 0470
.org 0x39d36
	movs r0, #10	@ 00039d36 0a20
.org 0x39d38
	strb r0, [r5, #0]	@ 00039d38 2870
.org 0x39d3a
	b.n 0x39de4	@ 00039d3a 53e0
.org 0x39d3c
	.byte 0x73,0x02,0x00,0x00	@ 00039d3c data
.org 0x39d40
	ldr r4, [pc, #48]	@ 00039d40 0c4c
.org 0x39d42
	adds r2, r1, r4	@ 00039d42 0a19
.org 0x39d44
	ldrb r0, [r2, #0]	@ 00039d44 1078
.org 0x39d46
	subs r0, #1	@ 00039d46 0138
.org 0x39d48
	strb r0, [r2, #0]	@ 00039d48 1070
.org 0x39d4a
	lsls r0, r0, #24	@ 00039d4a 0006
.org 0x39d4c
	lsrs r0, r0, #24	@ 00039d4c 000e
.org 0x39d4e
	cmp r0, #255	@ 00039d4e ff28
.org 0x39d50
	bne.n 0x39d56	@ 00039d50 01d1
.org 0x39d52
	movs r0, #0	@ 00039d52 0020
.org 0x39d54
	strb r0, [r3, #0]	@ 00039d54 1870
.org 0x39d56
	ldr r5, [pc, #32]	@ 00039d56 084d
.org 0x39d58
	adds r0, r1, r5	@ 00039d58 4819
.org 0x39d5a
	ldrb r0, [r0, #0]	@ 00039d5a 0078
.org 0x39d5c
	cmp r0, #1	@ 00039d5c 0128
.org 0x39d5e
	bne.n 0x39d80	@ 00039d5e 0fd1
.org 0x39d60
	ldr r4, [pc, #24]	@ 00039d60 064c
.org 0x39d62
	adds r0, r1, r4	@ 00039d62 0819
.org 0x39d64
	ldrh r1, [r0, #0]	@ 00039d64 0188
.org 0x39d66
	movs r0, #16	@ 00039d66 1020
.org 0x39d68
	ands r0, r1	@ 00039d68 0840
.org 0x39d6a
	cmp r0, #0	@ 00039d6a 0028
.org 0x39d6c
	beq.n 0x39e14	@ 00039d6c 52d0
.org 0x39d6e
	movs r0, #10	@ 00039d6e 0a20
.org 0x39d70
	strb r0, [r2, #0]	@ 00039d70 1070
.org 0x39d72
	b.n 0x39de4	@ 00039d72 37e0
.org 0x39d74
	.byte 0x71,0x02,0x00,0x00	@ 00039d74 data
.org 0x39d78
	.byte 0x73,0x02,0x00,0x00	@ 00039d78 data
.org 0x39d7c
	.byte 0x52,0x02,0x00,0x00	@ 00039d7c data
.org 0x39d80
	ldr r5, [pc, #16]	@ 00039d80 044d
.org 0x39d82
	adds r0, r1, r5	@ 00039d82 4819
.org 0x39d84
	ldrh r1, [r0, #0]	@ 00039d84 0188
.org 0x39d86
	movs r0, #32	@ 00039d86 2020
.org 0x39d88
	ands r0, r1	@ 00039d88 0840
.org 0x39d8a
	cmp r0, #0	@ 00039d8a 0028
.org 0x39d8c
	beq.n 0x39e14	@ 00039d8c 42d0
.org 0x39d8e
	movs r0, #10	@ 00039d8e 0a20
.org 0x39d90
	strb r0, [r2, #0]	@ 00039d90 1070
.org 0x39d92
	b.n 0x39de4	@ 00039d92 27e0
.org 0x39d94
	.byte 0x52,0x02,0x00,0x00	@ 00039d94 data
.org 0x39d98
	ldr r0, [pc, #48]	@ 00039d98 0c48
.org 0x39d9a
	adds r4, r1, r0	@ 00039d9a 0c18
.org 0x39d9c
	ldrb r0, [r4, #0]	@ 00039d9c 2078
.org 0x39d9e
	subs r0, #1	@ 00039d9e 0138
.org 0x39da0
	strb r0, [r4, #0]	@ 00039da0 2070
.org 0x39da2
	lsls r0, r0, #24	@ 00039da2 0006
.org 0x39da4
	lsrs r0, r0, #24	@ 00039da4 000e
.org 0x39da6
	cmp r0, #255	@ 00039da6 ff28
.org 0x39da8
	bne.n 0x39dae	@ 00039da8 01d1
.org 0x39daa
	movs r0, #0	@ 00039daa 0020
.org 0x39dac
	strb r0, [r3, #0]	@ 00039dac 1870
.org 0x39dae
	ldr r2, [pc, #32]	@ 00039dae 084a
.org 0x39db0
	adds r0, r1, r2	@ 00039db0 8818
.org 0x39db2
	ldrh r2, [r0, #0]	@ 00039db2 0288
.org 0x39db4
	movs r0, #64	@ 00039db4 4020
.org 0x39db6
	ands r0, r2	@ 00039db6 1040
.org 0x39db8
	cmp r0, #0	@ 00039db8 0028
.org 0x39dba
	bne.n 0x39e14	@ 00039dba 2bd1
.org 0x39dbc
	ldr r5, [pc, #20]	@ 00039dbc 054d
.org 0x39dbe
	adds r0, r1, r5	@ 00039dbe 4819
.org 0x39dc0
	ldrb r0, [r0, #0]	@ 00039dc0 0078
.org 0x39dc2
	cmp r0, #1	@ 00039dc2 0128
.org 0x39dc4
	bne.n 0x39dd8	@ 00039dc4 08d1
.org 0x39dc6
	movs r0, #16	@ 00039dc6 1020
.org 0x39dc8
	b.n 0x39dda	@ 00039dc8 07e0
.org 0x39dca
	.byte 0x00	@ 00039dca data
.org 0x39dcb
	.byte 0x00	@ 00039dcb data
.org 0x39dcc
	.byte 0x71,0x02,0x00,0x00	@ 00039dcc data
.org 0x39dd0
	.byte 0x52,0x02,0x00,0x00	@ 00039dd0 data
.org 0x39dd4
	.byte 0x73,0x02,0x00,0x00	@ 00039dd4 data
.org 0x39dd8
	movs r0, #32	@ 00039dd8 2020
.org 0x39dda
	ands r0, r2	@ 00039dda 1040
.org 0x39ddc
	cmp r0, #0	@ 00039ddc 0028
.org 0x39dde
	beq.n 0x39e14	@ 00039dde 19d0
.org 0x39de0
	movs r0, #10	@ 00039de0 0a20
.org 0x39de2
	strb r0, [r4, #0]	@ 00039de2 2070
