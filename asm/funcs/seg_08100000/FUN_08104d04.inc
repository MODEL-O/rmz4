@ FUN_08104d04  entry 0x08104d04  size 192
.thumb
.org 0x104d04
FUN_08104d04:
	push {r4, r5, r6, lr}	@ 00104d04 70b5
.org 0x104d06
	adds r5, r0, #0	@ 00104d06 051c
.org 0x104d08
	bl 0x1cc9c	@ 00104d08 17f7c8ff
.org 0x104d0c
	ldrb r1, [r5, #10]	@ 00104d0c a97a
.org 0x104d0e
	movs r0, #1	@ 00104d0e 0120
.org 0x104d10
	movs r3, #0	@ 00104d10 0023
.org 0x104d12
	movs r6, #0	@ 00104d12 0026
.org 0x104d14
	adds r2, r0, #0	@ 00104d14 021c
.org 0x104d16
	orrs r2, r1	@ 00104d16 0a43
.org 0x104d18
	movs r0, #2	@ 00104d18 0220
.org 0x104d1a
	orrs r2, r0	@ 00104d1a 0243
.org 0x104d1c
	orrs r2, r3	@ 00104d1c 1a43
.org 0x104d1e
	strb r2, [r5, #10]	@ 00104d1e aa72
.org 0x104d20
	ldr r1, [pc, #56]	@ 00104d20 0e49
.org 0x104d22
	ldrb r0, [r5, #9]	@ 00104d22 687a
.org 0x104d24
	lsls r0, r0, #2	@ 00104d24 8000
.org 0x104d26
	adds r0, r0, r1	@ 00104d26 4018
.org 0x104d28
	movs r1, #1	@ 00104d28 0121
.org 0x104d2a
	str r1, [r5, #12]	@ 00104d2a e960
.org 0x104d2c
	ldr r0, [r0, #0]	@ 00104d2c 0068
.org 0x104d2e
	ldr r0, [r0, #4]	@ 00104d2e 4068
.org 0x104d30
	str r0, [r5, #20]	@ 00104d30 6861
.org 0x104d32
	ldrb r0, [r5, #16]	@ 00104d32 287c
.org 0x104d34
	cmp r0, #0	@ 00104d34 0028
.org 0x104d36
	bne.n 0x104d64	@ 00104d36 15d1
.org 0x104d38
	movs r0, #254	@ 00104d38 fe20
.org 0x104d3a
	ands r2, r0	@ 00104d3a 0240
.org 0x104d3c
	movs r0, #4	@ 00104d3c 0420
.org 0x104d3e
	orrs r2, r0	@ 00104d3e 0243
.org 0x104d40
	strb r2, [r5, #10]	@ 00104d40 aa72
.org 0x104d42
	adds r4, r5, #0	@ 00104d42 2c1c
.org 0x104d44
	adds r4, #116	@ 00104d44 7434
.org 0x104d46
	ldr r1, [pc, #24]	@ 00104d46 0649
.org 0x104d48
	adds r2, r5, #0	@ 00104d48 2a1c
.org 0x104d4a
	adds r2, #84	@ 00104d4a 5432
.org 0x104d4c
	adds r0, r4, #0	@ 00104d4c 201c
.org 0x104d4e
	movs r3, #1	@ 00104d4e 0123
.org 0x104d50
	bl 0x5760	@ 00104d50 00f706fd
.org 0x104d54
	str r5, [r4, #44]	@ 00104d54 e562
.org 0x104d56
	str r6, [r4, #36]	@ 00104d56 6662
.org 0x104d58
	b.n 0x104dc2	@ 00104d58 33e0
.org 0x104d5a
	.byte 0x00	@ 00104d5a data
.org 0x104d5b
	.byte 0x00	@ 00104d5b data
.org 0x104d5c
	.byte 0xfc,0x92,0x86,0x08	@ 00104d5c data
.org 0x104d60
	.byte 0x40,0xc1,0x86,0x08	@ 00104d60 data
.org 0x104d64
	ldrb r0, [r5, #17]	@ 00104d64 687c
.org 0x104d66
	cmp r0, #0	@ 00104d66 0028
.org 0x104d68
	bne.n 0x104d7c	@ 00104d68 08d1
.org 0x104d6a
	movs r0, #4	@ 00104d6a 0420
.org 0x104d6c
	orrs r2, r0	@ 00104d6c 0243
.org 0x104d6e
	strb r2, [r5, #10]	@ 00104d6e aa72
.org 0x104d70
	adds r4, r5, #0	@ 00104d70 2c1c
.org 0x104d72
	adds r4, #116	@ 00104d72 7434
.org 0x104d74
	ldr r1, [pc, #0]	@ 00104d74 0049
.org 0x104d76
	b.n 0x104d88	@ 00104d76 07e0
.org 0x104d78
	.byte 0x58,0xc1,0x86,0x08	@ 00104d78 data
.org 0x104d7c
	movs r0, #4	@ 00104d7c 0420
.org 0x104d7e
	orrs r2, r0	@ 00104d7e 0243
.org 0x104d80
	strb r2, [r5, #10]	@ 00104d80 aa72
.org 0x104d82
	adds r4, r5, #0	@ 00104d82 2c1c
.org 0x104d84
	adds r4, #116	@ 00104d84 7434
.org 0x104d86
	ldr r1, [pc, #76]	@ 00104d86 1349
.org 0x104d88
	adds r2, r5, #0	@ 00104d88 2a1c
.org 0x104d8a
	adds r2, #84	@ 00104d8a 5432
.org 0x104d8c
	adds r0, r4, #0	@ 00104d8c 201c
.org 0x104d8e
	movs r3, #1	@ 00104d8e 0123
.org 0x104d90
	bl 0x5760	@ 00104d90 00f7e6fc
.org 0x104d94
	str r5, [r4, #44]	@ 00104d94 e562
.org 0x104d96
	str r6, [r4, #36]	@ 00104d96 6662
.org 0x104d98
	movs r1, #189	@ 00104d98 bd21
.org 0x104d9a
	lsls r1, r1, #8	@ 00104d9a 0902
.org 0x104d9c
	adds r0, r5, #0	@ 00104d9c 281c
.org 0x104d9e
	bl 0x1cf00	@ 00104d9e 18f7aff8
.org 0x104da2
	adds r1, r5, #0	@ 00104da2 291c
.org 0x104da4
	adds r1, #184	@ 00104da4 b831
.org 0x104da6
	ldr r0, [r5, #88]	@ 00104da6 a86d
.org 0x104da8
	str r0, [r1, #0]	@ 00104da8 0860
.org 0x104daa
	adds r2, r5, #0	@ 00104daa 2a1c
.org 0x104dac
	adds r2, #180	@ 00104dac b432
.org 0x104dae
	movs r1, #0	@ 00104dae 0021
.org 0x104db0
	movs r0, #1	@ 00104db0 0120
.org 0x104db2
	strb r0, [r2, #0]	@ 00104db2 1070
.org 0x104db4
	adds r0, r5, #0	@ 00104db4 281c
.org 0x104db6
	adds r0, #181	@ 00104db6 b530
.org 0x104db8
	strb r1, [r0, #0]	@ 00104db8 0170
.org 0x104dba
	ldrb r0, [r5, #17]	@ 00104dba 687c
.org 0x104dbc
	cmp r0, #0	@ 00104dbc 0028
.org 0x104dbe
	bne.n 0x104dc2	@ 00104dbe 00d1
.org 0x104dc0
	strb r0, [r2, #0]	@ 00104dc0 1070
.org 0x104dc2
	movs r0, #0	@ 00104dc2 0020
