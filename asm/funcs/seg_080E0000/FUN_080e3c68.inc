@ FUN_080e3c68  entry 0x080e3c68  size 154
.thumb
.org 0xe3c68
FUN_080e3c68:
	push {r4, r5, r6, lr}	@ 000e3c68 70b5
.org 0xe3c6a
	sub sp, #8	@ 000e3c6a 82b0
.org 0xe3c6c
	adds r5, r0, #0	@ 000e3c6c 051c
.org 0xe3c6e
	ldr r0, [r5, #84]	@ 000e3c6e 686d
.org 0xe3c70
	ldr r1, [r5, #92]	@ 000e3c70 e96d
.org 0xe3c72
	adds r0, r0, r1	@ 000e3c72 4018
.org 0xe3c74
	str r0, [r5, #84]	@ 000e3c74 6865
.org 0xe3c76
	ldr r1, [r5, #88]	@ 000e3c76 a96d
.org 0xe3c78
	ldr r2, [r5, #96]	@ 000e3c78 2a6e
.org 0xe3c7a
	adds r1, r1, r2	@ 000e3c7a 8918
.org 0xe3c7c
	str r1, [r5, #88]	@ 000e3c7c a965
.org 0xe3c7e
	adds r2, #64	@ 000e3c7e 4032
.org 0xe3c80
	str r2, [r5, #96]	@ 000e3c80 2a66
.org 0xe3c82
	ldr r2, [pc, #88]	@ 000e3c82 164a
.org 0xe3c84
	adds r1, r1, r2	@ 000e3c84 8918
.org 0xe3c86
	bl 0x7c7c	@ 000e3c86 23f7f9ff
.org 0xe3c8a
	lsls r0, r0, #16	@ 000e3c8a 0004
.org 0xe3c8c
	cmp r0, #0	@ 000e3c8c 0028
.org 0xe3c8e
	beq.n 0xe3d08	@ 000e3c8e 3bd0
.org 0xe3c90
	ldr r0, [r5, #84]	@ 000e3c90 686d
.org 0xe3c92
	str r0, [sp, #0]	@ 000e3c92 0090
.org 0xe3c94
	ldr r0, [r5, #88]	@ 000e3c94 a86d
.org 0xe3c96
	ldr r1, [pc, #68]	@ 000e3c96 1149
.org 0xe3c98
	adds r0, r0, r1	@ 000e3c98 4018
.org 0xe3c9a
	str r0, [sp, #4]	@ 000e3c9a 0190
.org 0xe3c9c
	movs r0, #2	@ 000e3c9c 0220
.org 0xe3c9e
	mov r1, sp	@ 000e3c9e 6946
.org 0xe3ca0
	bl 0xd0c88	@ 000e3ca0 ecf7f2ff
.org 0xe3ca4
	movs r0, #42	@ 000e3ca4 2a20
.org 0xe3ca6
	bl 0x2b10	@ 000e3ca6 1ef733ff
.org 0xe3caa
	ldr r1, [pc, #52]	@ 000e3caa 0d49
.org 0xe3cac
	ldrb r0, [r5, #9]	@ 000e3cac 687a
.org 0xe3cae
	lsls r0, r0, #2	@ 000e3cae 8000
.org 0xe3cb0
	adds r0, r0, r1	@ 000e3cb0 4018
.org 0xe3cb2
	movs r1, #2	@ 000e3cb2 0221
.org 0xe3cb4
	str r1, [r5, #12]	@ 000e3cb4 e960
.org 0xe3cb6
	ldr r0, [r0, #0]	@ 000e3cb6 0068
.org 0xe3cb8
	ldr r0, [r0, #8]	@ 000e3cb8 8068
.org 0xe3cba
	str r0, [r5, #20]	@ 000e3cba 6861
.org 0xe3cbc
	ldrb r1, [r5, #17]	@ 000e3cbc 697c
.org 0xe3cbe
	movs r6, #1	@ 000e3cbe 0126
.org 0xe3cc0
	adds r0, r6, #0	@ 000e3cc0 301c
.org 0xe3cc2
	ands r0, r1	@ 000e3cc2 0840
.org 0xe3cc4
	cmp r0, #0	@ 000e3cc4 0028
.org 0xe3cc6
	beq.n 0xe3ce8	@ 000e3cc6 0fd0
.org 0xe3cc8
	adds r0, r5, #0	@ 000e3cc8 281c
.org 0xe3cca
	adds r0, #84	@ 000e3cca 5430
.org 0xe3ccc
	ldr r1, [pc, #20]	@ 000e3ccc 0549
.org 0xe3cce
	ldrb r2, [r5, #10]	@ 000e3cce aa7a
.org 0xe3cd0
	lsrs r2, r2, #4	@ 000e3cd0 1209
.org 0xe3cd2
	ands r2, r6	@ 000e3cd2 3240
.org 0xe3cd4
	bl 0xe37a0	@ 000e3cd4 fff764fd
.org 0xe3cd8
	b.n 0xe3d08	@ 000e3cd8 16e0
.org 0xe3cda
	.byte 0x00	@ 000e3cda data
.org 0xe3cdb
	.byte 0x00	@ 000e3cdb data
.org 0xe3cdc
	.byte 0x00,0xee,0xff,0xff	@ 000e3cdc data
.org 0xe3ce0
	.byte 0x64,0x6f,0x86,0x08	@ 000e3ce0 data
.org 0xe3ce4
	.byte 0x03,0x02,0x00,0x00	@ 000e3ce4 data
.org 0xe3ce8
	adds r4, r5, #0	@ 000e3ce8 2c1c
.org 0xe3cea
	adds r4, #84	@ 000e3cea 5434
.org 0xe3cec
	ldr r1, [pc, #32]	@ 000e3cec 0849
.org 0xe3cee
	ldrb r2, [r5, #10]	@ 000e3cee aa7a
.org 0xe3cf0
	lsrs r2, r2, #4	@ 000e3cf0 1209
.org 0xe3cf2
	ands r2, r6	@ 000e3cf2 3240
.org 0xe3cf4
	adds r0, r4, #0	@ 000e3cf4 201c
.org 0xe3cf6
	bl 0xe37a0	@ 000e3cf6 fff753fd
.org 0xe3cfa
	ldr r1, [pc, #24]	@ 000e3cfa 0649
.org 0xe3cfc
	ldrb r2, [r5, #10]	@ 000e3cfc aa7a
.org 0xe3cfe
	lsrs r2, r2, #4	@ 000e3cfe 1209
.org 0xe3d00
	ands r2, r6	@ 000e3d00 3240
