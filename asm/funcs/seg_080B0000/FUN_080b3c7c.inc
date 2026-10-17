@ FUN_080b3c7c  entry 0x080b3c7c  size 218
.thumb
.org 0xb3c7c
FUN_080b3c7c:
	push {r4, r5, r6, r7, lr}	@ 000b3c7c f0b5
.org 0xb3c7e
	adds r4, r0, #0	@ 000b3c7e 041c
.org 0xb3c80
	movs r7, #0	@ 000b3c80 0027
.org 0xb3c82
	ldrb r0, [r4, #14]	@ 000b3c82 a07b
.org 0xb3c84
	cmp r0, #0	@ 000b3c84 0028
.org 0xb3c86
	bne.n 0xb3c9a	@ 000b3c86 08d1
.org 0xb3c88
	ldr r1, [pc, #188]	@ 000b3c88 2f49
.org 0xb3c8a
	adds r0, r4, #0	@ 000b3c8a 201c
.org 0xb3c8c
	bl 0x1cf00	@ 000b3c8c 69f738f9
.org 0xb3c90
	movs r0, #10	@ 000b3c90 0a20
.org 0xb3c92
	strb r0, [r4, #18]	@ 000b3c92 a074
.org 0xb3c94
	ldrb r0, [r4, #14]	@ 000b3c94 a07b
.org 0xb3c96
	adds r0, #1	@ 000b3c96 0130
.org 0xb3c98
	strb r0, [r4, #14]	@ 000b3c98 a073
.org 0xb3c9a
	ldrb r1, [r4, #18]	@ 000b3c9a a17c
.org 0xb3c9c
	movs r0, #2	@ 000b3c9c 0220
.org 0xb3c9e
	ands r0, r1	@ 000b3c9e 0840
.org 0xb3ca0
	cmp r0, #0	@ 000b3ca0 0028
.org 0xb3ca2
	beq.n 0xb3cf6	@ 000b3ca2 28d0
.org 0xb3ca4
	ldr r0, [pc, #164]	@ 000b3ca4 2948
.org 0xb3ca6
	ldr r0, [r0, #0]	@ 000b3ca6 0068
.org 0xb3ca8
	ldr r0, [r0, #84]	@ 000b3ca8 406d
.org 0xb3caa
	ldr r1, [r4, #84]	@ 000b3caa 616d
.org 0xb3cac
	cmp r0, r1	@ 000b3cac 8842
.org 0xb3cae
	ble.n 0xb3cb2	@ 000b3cae 00dd
.org 0xb3cb0
	movs r7, #1	@ 000b3cb0 0127
.org 0xb3cb2
	ldr r6, [pc, #156]	@ 000b3cb2 274e
.org 0xb3cb4
	lsls r5, r7, #3	@ 000b3cb4 fd00
.org 0xb3cb6
	adds r0, r5, r6	@ 000b3cb6 a819
.org 0xb3cb8
	ldr r0, [r0, #0]	@ 000b3cb8 0068
.org 0xb3cba
	lsls r0, r0, #8	@ 000b3cba 0002
.org 0xb3cbc
	adds r0, r1, r0	@ 000b3cbc 0818
.org 0xb3cbe
	ldr r1, [r4, #88]	@ 000b3cbe a16d
.org 0xb3cc0
	ldr r2, [pc, #144]	@ 000b3cc0 244a
.org 0xb3cc2
	adds r1, r1, r2	@ 000b3cc2 8918
.org 0xb3cc4
	bl 0x7c7c	@ 000b3cc4 53f7daff
.org 0xb3cc8
	lsls r0, r0, #16	@ 000b3cc8 0004
.org 0xb3cca
	cmp r0, #0	@ 000b3cca 0028
.org 0xb3ccc
	bne.n 0xb3cf6	@ 000b3ccc 13d1
.org 0xb3cce
	adds r0, r6, #4	@ 000b3cce 301d
.org 0xb3cd0
	adds r5, r5, r0	@ 000b3cd0 2d18
.org 0xb3cd2
	ldr r1, [r5, #0]	@ 000b3cd2 2968
.org 0xb3cd4
	lsls r1, r1, #8	@ 000b3cd4 0902
.org 0xb3cd6
	ldr r0, [r4, #84]	@ 000b3cd6 606d
.org 0xb3cd8
	adds r0, r0, r1	@ 000b3cd8 4018
.org 0xb3cda
	str r0, [r4, #84]	@ 000b3cda 6065
.org 0xb3cdc
	adds r0, r4, #0	@ 000b3cdc 201c
.org 0xb3cde
	bl 0xb3eac	@ 000b3cde 00f0e5f8
.org 0xb3ce2
	lsls r0, r0, #24	@ 000b3ce2 0006
.org 0xb3ce4
	cmp r0, #0	@ 000b3ce4 0028
.org 0xb3ce6
	beq.n 0xb3cf6	@ 000b3ce6 06d0
.org 0xb3ce8
	adds r2, r4, #0	@ 000b3ce8 221c
.org 0xb3cea
	adds r2, #184	@ 000b3cea b832
.org 0xb3cec
	ldr r1, [r5, #0]	@ 000b3cec 2968
.org 0xb3cee
	lsls r1, r1, #8	@ 000b3cee 0902
.org 0xb3cf0
	ldr r0, [r2, #0]	@ 000b3cf0 1068
.org 0xb3cf2
	adds r0, r0, r1	@ 000b3cf2 4018
.org 0xb3cf4
	str r0, [r2, #0]	@ 000b3cf4 1060
.org 0xb3cf6
	adds r0, r4, #0	@ 000b3cf6 201c
.org 0xb3cf8
	bl 0xb3f2c	@ 000b3cf8 00f018f9
.org 0xb3cfc
	lsls r0, r0, #24	@ 000b3cfc 0006
.org 0xb3cfe
	cmp r0, #0	@ 000b3cfe 0028
.org 0xb3d00
	beq.n 0xb3d60	@ 000b3d00 2ed0
.org 0xb3d02
	movs r2, #128	@ 000b3d02 8022
.org 0xb3d04
	lsls r2, r2, #1	@ 000b3d04 5200
.org 0xb3d06
	str r2, [r4, #92]	@ 000b3d06 e265
.org 0xb3d08
	ldr r0, [pc, #64]	@ 000b3d08 1048
.org 0xb3d0a
	ldr r0, [r0, #0]	@ 000b3d0a 0068
.org 0xb3d0c
	ldr r1, [r0, #84]	@ 000b3d0c 416d
.org 0xb3d0e
	ldr r0, [r4, #84]	@ 000b3d0e 606d
.org 0xb3d10
	cmp r1, r0	@ 000b3d10 8142
.org 0xb3d12
	ble.n 0xb3d16	@ 000b3d12 00dd
.org 0xb3d14
	movs r7, #1	@ 000b3d14 0127
.org 0xb3d16
	ldrb r1, [r4, #10]	@ 000b3d16 a17a
.org 0xb3d18
	movs r0, #16	@ 000b3d18 1020
.org 0xb3d1a
	ands r0, r1	@ 000b3d1a 0840
.org 0xb3d1c
	cmp r0, #0	@ 000b3d1c 0028
.org 0xb3d1e
	bne.n 0xb3d2a	@ 000b3d1e 04d1
.org 0xb3d20
	lsls r0, r2, #8	@ 000b3d20 1002
.org 0xb3d22
	negs r0, r0	@ 000b3d22 4042
.org 0xb3d24
	adds r0, #255	@ 000b3d24 ff30
.org 0xb3d26
	asrs r0, r0, #8	@ 000b3d26 0012
.org 0xb3d28
	str r0, [r4, #92]	@ 000b3d28 e065
.org 0xb3d2a
	adds r0, r4, #0	@ 000b3d2a 201c
.org 0xb3d2c
	bl 0xb3eac	@ 000b3d2c 00f0bef8
.org 0xb3d30
	lsls r0, r0, #24	@ 000b3d30 0006
.org 0xb3d32
	cmp r0, #0	@ 000b3d32 0028
.org 0xb3d34
	beq.n 0xb3d58	@ 000b3d34 10d0
.org 0xb3d36
	ldrb r1, [r4, #10]	@ 000b3d36 a17a
.org 0xb3d38
	lsrs r1, r1, #4	@ 000b3d38 0909
.org 0xb3d3a
	movs r0, #1	@ 000b3d3a 0120
.org 0xb3d3c
	bics r0, r1	@ 000b3d3c 8843
.org 0xb3d3e
	cmp r0, r7	@ 000b3d3e b842
.org 0xb3d40
	bne.n 0xb3d58	@ 000b3d40 0ad1
.org 0xb3d42
	movs r1, #0	@ 000b3d42 0021
.org 0xb3d44
	movs r0, #2	@ 000b3d44 0220
.org 0xb3d46
	b.n 0xb3d5c	@ 000b3d46 09e0
.org 0xb3d48
	.byte 0x04,0xc7,0x00,0x00	@ 000b3d48 data
.org 0xb3d4c
	.byte 0xf0,0xdb,0x02,0x02	@ 000b3d4c data
.org 0xb3d50
	.byte 0x44,0x38,0x86,0x08	@ 000b3d50 data
.org 0xb3d54
	.byte 0x00,0xf8,0xff,0xff	@ 000b3d54 data
