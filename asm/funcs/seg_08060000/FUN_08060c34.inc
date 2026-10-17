@ FUN_08060c34  entry 0x08060c34  size 284
.thumb
.org 0x60c34
FUN_08060c34:
	push {r4, r5, r6, lr}	@ 00060c34 70b5
.org 0x60c36
	sub sp, #8	@ 00060c36 82b0
.org 0x60c38
	adds r4, r0, #0	@ 00060c38 041c
.org 0x60c3a
	ldrb r5, [r4, #14]	@ 00060c3a a57b
.org 0x60c3c
	cmp r5, #0	@ 00060c3c 002d
.org 0x60c3e
	bne.n 0x60c52	@ 00060c3e 08d1
.org 0x60c40
	ldr r1, [pc, #92]	@ 00060c40 1749
.org 0x60c42
	bl 0x1cf00	@ 00060c42 bcf75df9
.org 0x60c46
	movs r0, #16	@ 00060c46 1020
.org 0x60c48
	strb r0, [r4, #18]	@ 00060c48 a074
.org 0x60c4a
	strb r5, [r4, #15]	@ 00060c4a e573
.org 0x60c4c
	ldrb r0, [r4, #14]	@ 00060c4c a07b
.org 0x60c4e
	adds r0, #1	@ 00060c4e 0130
.org 0x60c50
	strb r0, [r4, #14]	@ 00060c50 a073
.org 0x60c52
	adds r0, r4, #0	@ 00060c52 201c
.org 0x60c54
	bl 0x1cff0	@ 00060c54 bcf7ccf9
.org 0x60c58
	ldrb r0, [r4, #15]	@ 00060c58 e07b
.org 0x60c5a
	cmp r0, #0	@ 00060c5a 0028
.org 0x60c5c
	bne.n 0x60d3e	@ 00060c5c 6fd1
.org 0x60c5e
	movs r3, #0	@ 00060c5e 0023
.org 0x60c60
	ldr r0, [pc, #64]	@ 00060c60 1048
.org 0x60c62
	ldr r5, [r0, #0]	@ 00060c62 0568
.org 0x60c64
	ldr r2, [r4, #84]	@ 00060c64 626d
.org 0x60c66
	ldr r1, [r5, #84]	@ 00060c66 696d
.org 0x60c68
	adds r6, r0, #0	@ 00060c68 061c
.org 0x60c6a
	cmp r2, r1	@ 00060c6a 8a42
.org 0x60c6c
	bge.n 0x60c70	@ 00060c6c 00da
.org 0x60c6e
	movs r3, #1	@ 00060c6e 0123
.org 0x60c70
	adds r0, r4, #0	@ 00060c70 201c
.org 0x60c72
	adds r0, #76	@ 00060c72 4c30
.org 0x60c74
	strb r3, [r0, #0]	@ 00060c74 0370
.org 0x60c76
	movs r3, #0	@ 00060c76 0023
.org 0x60c78
	ldr r1, [r4, #84]	@ 00060c78 616d
.org 0x60c7a
	ldr r0, [r5, #84]	@ 00060c7a 686d
.org 0x60c7c
	cmp r1, r0	@ 00060c7c 8142
.org 0x60c7e
	bge.n 0x60c82	@ 00060c7e 00da
.org 0x60c80
	movs r3, #1	@ 00060c80 0123
.org 0x60c82
	adds r5, r4, #0	@ 00060c82 251c
.org 0x60c84
	adds r5, #74	@ 00060c84 4a35
.org 0x60c86
	lsls r2, r3, #4	@ 00060c86 1a01
.org 0x60c88
	ldrb r1, [r5, #0]	@ 00060c88 2978
.org 0x60c8a
	movs r0, #17	@ 00060c8a 1120
.org 0x60c8c
	negs r0, r0	@ 00060c8c 4042
.org 0x60c8e
	ands r0, r1	@ 00060c8e 0840
.org 0x60c90
	orrs r0, r2	@ 00060c90 1043
.org 0x60c92
	strb r0, [r5, #0]	@ 00060c92 2870
.org 0x60c94
	cmp r3, #0	@ 00060c94 002b
.org 0x60c96
	beq.n 0x60ca8	@ 00060c96 07d0
.org 0x60c98
	ldrb r0, [r4, #10]	@ 00060c98 a07a
.org 0x60c9a
	movs r1, #16	@ 00060c9a 1021
.org 0x60c9c
	orrs r0, r1	@ 00060c9c 0843
.org 0x60c9e
	b.n 0x60cae	@ 00060c9e 06e0
.org 0x60ca0
	.byte 0x14,0xa5,0x00,0x00	@ 00060ca0 data
.org 0x60ca4
	.byte 0xf0,0xdb,0x02,0x02	@ 00060ca4 data
.org 0x60ca8
	ldrb r1, [r4, #10]	@ 00060ca8 a17a
.org 0x60caa
	movs r0, #239	@ 00060caa ef20
.org 0x60cac
	ands r0, r1	@ 00060cac 0840
.org 0x60cae
	strb r0, [r4, #10]	@ 00060cae a072
.org 0x60cb0
	adds r0, r4, #0	@ 00060cb0 201c
.org 0x60cb2
	adds r0, #113	@ 00060cb2 7130
.org 0x60cb4
	ldrb r0, [r0, #0]	@ 00060cb4 0078
.org 0x60cb6
	lsls r0, r0, #24	@ 00060cb6 0006
.org 0x60cb8
	asrs r0, r0, #24	@ 00060cb8 0016
.org 0x60cba
	cmp r0, #1	@ 00060cba 0128
.org 0x60cbc
	bne.n 0x60d3e	@ 00060cbc 3fd1
.org 0x60cbe
	ldrb r1, [r4, #10]	@ 00060cbe a17a
.org 0x60cc0
	movs r0, #16	@ 00060cc0 1020
.org 0x60cc2
	ands r0, r1	@ 00060cc2 0840
.org 0x60cc4
	adds r3, r1, #0	@ 00060cc4 0b1c
.org 0x60cc6
	cmp r0, #0	@ 00060cc6 0028
.org 0x60cc8
	beq.n 0x60cd2	@ 00060cc8 03d0
.org 0x60cca
	ldr r1, [r4, #84]	@ 00060cca 616d
.org 0x60ccc
	movs r2, #240	@ 00060ccc f022
.org 0x60cce
	lsls r2, r2, #4	@ 00060cce 1201
.org 0x60cd0
	b.n 0x60cd6	@ 00060cd0 01e0
.org 0x60cd2
	ldr r1, [r4, #84]	@ 00060cd2 616d
.org 0x60cd4
	ldr r2, [pc, #28]	@ 00060cd4 074a
.org 0x60cd6
	adds r0, r1, r2	@ 00060cd6 8818
.org 0x60cd8
	str r0, [sp, #0]	@ 00060cd8 0090
.org 0x60cda
	ldr r0, [r4, #88]	@ 00060cda a06d
.org 0x60cdc
	ldr r2, [pc, #24]	@ 00060cdc 064a
.org 0x60cde
	adds r0, r0, r2	@ 00060cde 8018
.org 0x60ce0
	str r0, [sp, #4]	@ 00060ce0 0190
.org 0x60ce2
	ldr r0, [r6, #0]	@ 00060ce2 3068
.org 0x60ce4
	ldr r0, [r0, #84]	@ 00060ce4 406d
.org 0x60ce6
	subs r2, r1, r0	@ 00060ce6 0a1a
.org 0x60ce8
	cmp r2, #0	@ 00060ce8 002a
.org 0x60cea
	blt.n 0x60d00	@ 00060cea 09db
.org 0x60cec
	ldr r0, [pc, #12]	@ 00060cec 0348
.org 0x60cee
	cmp r2, r0	@ 00060cee 8242
.org 0x60cf0
	ble.n 0x60d08	@ 00060cf0 0add
.org 0x60cf2
	b.n 0x60d20	@ 00060cf2 15e0
.org 0x60cf4
	.byte 0x00,0xf1,0xff,0xff	@ 00060cf4 data
.org 0x60cf8
	.byte 0x00,0xf4,0xff,0xff	@ 00060cf8 data
.org 0x60cfc
	.byte 0xff,0x1f,0x00,0x00	@ 00060cfc data
.org 0x60d00
	subs r1, r0, r1	@ 00060d00 411a
.org 0x60d02
	ldr r0, [pc, #24]	@ 00060d02 0648
.org 0x60d04
	cmp r1, r0	@ 00060d04 8142
.org 0x60d06
	bgt.n 0x60d20	@ 00060d06 0bdc
.org 0x60d08
	lsls r3, r3, #24	@ 00060d08 1b06
.org 0x60d0a
	lsrs r3, r3, #28	@ 00060d0a 1b0f
.org 0x60d0c
	movs r0, #1	@ 00060d0c 0120
.org 0x60d0e
	ands r3, r0	@ 00060d0e 0340
.org 0x60d10
	mov r0, sp	@ 00060d10 6846
.org 0x60d12
	movs r1, #1	@ 00060d12 0121
.org 0x60d14
	movs r2, #1	@ 00060d14 0122
.org 0x60d16
	bl 0x99e6c	@ 00060d16 39f0a9f8
.org 0x60d1a
	b.n 0x60d32	@ 00060d1a 0ae0
.org 0x60d1c
	.byte 0xff,0x1f,0x00,0x00	@ 00060d1c data
.org 0x60d20
	lsls r3, r3, #24	@ 00060d20 1b06
.org 0x60d22
	lsrs r3, r3, #28	@ 00060d22 1b0f
.org 0x60d24
	movs r0, #1	@ 00060d24 0120
.org 0x60d26
	ands r3, r0	@ 00060d26 0340
.org 0x60d28
	mov r0, sp	@ 00060d28 6846
.org 0x60d2a
	movs r1, #1	@ 00060d2a 0121
.org 0x60d2c
	movs r2, #0	@ 00060d2c 0022
.org 0x60d2e
	bl 0x99e6c	@ 00060d2e 39f09df8
.org 0x60d32
	ldr r0, [pc, #52]	@ 00060d32 0d48
.org 0x60d34
	bl 0x2b10	@ 00060d34 a1f7ecfe
.org 0x60d38
	ldrb r0, [r4, #15]	@ 00060d38 e07b
.org 0x60d3a
	adds r0, #1	@ 00060d3a 0130
.org 0x60d3c
	strb r0, [r4, #15]	@ 00060d3c e073
.org 0x60d3e
	ldr r0, [r4, #88]	@ 00060d3e a06d
.org 0x60d40
	ldr r1, [r4, #96]	@ 00060d40 216e
.org 0x60d42
	adds r0, r0, r1	@ 00060d42 4018
.org 0x60d44
	str r0, [r4, #88]	@ 00060d44 a065
.org 0x60d46
	adds r1, #64	@ 00060d46 4031
.org 0x60d48
	str r1, [r4, #96]	@ 00060d48 2166
.org 0x60d4a
	ldrb r0, [r4, #18]	@ 00060d4a a07c
.org 0x60d4c
	subs r0, #1	@ 00060d4c 0138
.org 0x60d4e
	strb r0, [r4, #18]	@ 00060d4e a074
