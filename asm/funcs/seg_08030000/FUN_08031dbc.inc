@ FUN_08031dbc  entry 0x08031dbc  size 300
.thumb
.org 0x31dbc
FUN_08031dbc:
	push {r4, r5, r6, lr}	@ 00031dbc 70b5
.org 0x31dbe
	adds r4, r0, #0	@ 00031dbe 041c
.org 0x31dc0
	movs r0, #186	@ 00031dc0 ba20
.org 0x31dc2
	lsls r0, r0, #1	@ 00031dc2 4000
.org 0x31dc4
	adds r5, r4, r0	@ 00031dc4 2518
.org 0x31dc6
	movs r0, #2	@ 00031dc6 0220
.org 0x31dc8
	strb r0, [r5, #0]	@ 00031dc8 2870
.org 0x31dca
	ldr r6, [pc, #40]	@ 00031dca 0a4e
.org 0x31dcc
	adds r1, r6, #0	@ 00031dcc 311c
.org 0x31dce
	adds r1, #16	@ 00031dce 1031
.org 0x31dd0
	adds r0, r4, #0	@ 00031dd0 201c
.org 0x31dd2
	movs r2, #0	@ 00031dd2 0022
.org 0x31dd4
	bl 0x2c24c	@ 00031dd4 faf73afa
.org 0x31dd8
	lsls r0, r0, #16	@ 00031dd8 0004
.org 0x31dda
	lsrs r1, r0, #16	@ 00031dda 010c
.org 0x31ddc
	movs r0, #16	@ 00031ddc 1020
.org 0x31dde
	ands r1, r0	@ 00031dde 0140
.org 0x31de0
	cmp r1, #0	@ 00031de0 0029
.org 0x31de2
	beq.n 0x31df8	@ 00031de2 09d0
.org 0x31de4
	adds r0, r4, #0	@ 00031de4 201c
.org 0x31de6
	bl 0x38988	@ 00031de6 06f0cffd
.org 0x31dea
	adds r0, r4, #0	@ 00031dea 201c
.org 0x31dec
	bl 0x32278	@ 00031dec 00f044fa
.org 0x31df0
	b.n 0x31eee	@ 00031df0 7de0
.org 0x31df2
	.byte 0x00	@ 00031df2 data
.org 0x31df3
	.byte 0x00	@ 00031df3 data
.org 0x31df4
	.byte 0x6c,0x33,0x85,0x08	@ 00031df4 data
.org 0x31df8
	movs r1, #150	@ 00031df8 9621
.org 0x31dfa
	lsls r1, r1, #2	@ 00031dfa 8900
.org 0x31dfc
	adds r2, r4, r1	@ 00031dfc 6218
.org 0x31dfe
	ldr r0, [r2, #0]	@ 00031dfe 1068
.org 0x31e00
	movs r1, #16	@ 00031e00 1021
.org 0x31e02
	ands r0, r1	@ 00031e02 0840
.org 0x31e04
	cmp r0, #0	@ 00031e04 0028
.org 0x31e06
	beq.n 0x31e10	@ 00031e06 03d0
.org 0x31e08
	ldr r0, [r4, #84]	@ 00031e08 606d
.org 0x31e0a
	adds r1, #240	@ 00031e0a f031
.org 0x31e0c
	adds r0, r0, r1	@ 00031e0c 4018
.org 0x31e0e
	str r0, [r4, #84]	@ 00031e0e 6065
.org 0x31e10
	ldr r0, [r2, #0]	@ 00031e10 1068
.org 0x31e12
	movs r1, #32	@ 00031e12 2021
.org 0x31e14
	ands r0, r1	@ 00031e14 0840
.org 0x31e16
	cmp r0, #0	@ 00031e16 0028
.org 0x31e18
	beq.n 0x31e22	@ 00031e18 03d0
.org 0x31e1a
	ldr r0, [r4, #84]	@ 00031e1a 606d
.org 0x31e1c
	ldr r2, [pc, #88]	@ 00031e1c 164a
.org 0x31e1e
	adds r0, r0, r2	@ 00031e1e 8018
.org 0x31e20
	str r0, [r4, #84]	@ 00031e20 6065
.org 0x31e22
	ldrb r1, [r5, #0]	@ 00031e22 2978
.org 0x31e24
	lsls r1, r1, #3	@ 00031e24 c900
.org 0x31e26
	adds r1, r1, r6	@ 00031e26 8919
.org 0x31e28
	adds r0, r4, #0	@ 00031e28 201c
.org 0x31e2a
	movs r2, #0	@ 00031e2a 0022
.org 0x31e2c
	bl 0x2b7f0	@ 00031e2c f9f7e0fc
.org 0x31e30
	adds r0, r4, #0	@ 00031e30 201c
.org 0x31e32
	bl 0x38640	@ 00031e32 06f005fc
.org 0x31e36
	lsls r0, r0, #16	@ 00031e36 0004
.org 0x31e38
	asrs r1, r0, #16	@ 00031e38 0114
.org 0x31e3a
	str r1, [r4, #96]	@ 00031e3a 2166
.org 0x31e3c
	ldr r0, [r4, #88]	@ 00031e3c a06d
.org 0x31e3e
	adds r0, r0, r1	@ 00031e3e 4018
.org 0x31e40
	str r0, [r4, #88]	@ 00031e40 a065
.org 0x31e42
	cmp r1, #0	@ 00031e42 0029
.org 0x31e44
	beq.n 0x31e7c	@ 00031e44 1ad0
.org 0x31e46
	movs r0, #134	@ 00031e46 8620
.org 0x31e48
	lsls r0, r0, #1	@ 00031e48 4000
.org 0x31e4a
	adds r1, r4, r0	@ 00031e4a 2118
.org 0x31e4c
	ldrb r0, [r1, #0]	@ 00031e4c 0878
.org 0x31e4e
	subs r0, #1	@ 00031e4e 0138
.org 0x31e50
	strb r0, [r1, #0]	@ 00031e50 0870
.org 0x31e52
	lsls r0, r0, #24	@ 00031e52 0006
.org 0x31e54
	lsrs r0, r0, #24	@ 00031e54 000e
.org 0x31e56
	cmp r0, #255	@ 00031e56 ff28
.org 0x31e58
	bne.n 0x31eb0	@ 00031e58 2ad1
.org 0x31e5a
	movs r0, #4	@ 00031e5a 0420
.org 0x31e5c
	strb r0, [r1, #0]	@ 00031e5c 0870
.org 0x31e5e
	adds r0, r4, #0	@ 00031e5e 201c
.org 0x31e60
	adds r0, #84	@ 00031e60 5430
.org 0x31e62
	ldrb r1, [r4, #10]	@ 00031e62 a17a
.org 0x31e64
	lsrs r1, r1, #4	@ 00031e64 0909
.org 0x31e66
	movs r2, #1	@ 00031e66 0122
.org 0x31e68
	ands r1, r2	@ 00031e68 1140
.org 0x31e6a
	bl 0xd1d60	@ 00031e6a 9ff079ff
.org 0x31e6e
	movs r0, #9	@ 00031e6e 0920
.org 0x31e70
	bl 0x2b10	@ 00031e70 d0f74efe
.org 0x31e74
	b.n 0x31eb0	@ 00031e74 1ce0
.org 0x31e76
	.byte 0x00	@ 00031e76 data
.org 0x31e77
	.byte 0x00	@ 00031e77 data
.org 0x31e78
	.byte 0x00,0xff,0xff,0xff	@ 00031e78 data
.org 0x31e7c
	movs r2, #134	@ 00031e7c 8622
.org 0x31e7e
	lsls r2, r2, #1	@ 00031e7e 5200
.org 0x31e80
	adds r0, r4, r2	@ 00031e80 a018
.org 0x31e82
	strb r1, [r0, #0]	@ 00031e82 0170
.org 0x31e84
	ldrb r0, [r4, #30]	@ 00031e84 a07f
.org 0x31e86
	lsls r0, r0, #8	@ 00031e86 0002
.org 0x31e88
	adds r1, r4, #0	@ 00031e88 211c
.org 0x31e8a
	adds r1, #112	@ 00031e8a 7031
.org 0x31e8c
	ldrb r1, [r1, #0]	@ 00031e8c 0978
.org 0x31e8e
	orrs r1, r0	@ 00031e8e 0143
.org 0x31e90
	movs r0, #160	@ 00031e90 a020
.org 0x31e92
	lsls r0, r0, #3	@ 00031e92 c000
.org 0x31e94
	cmp r1, r0	@ 00031e94 8142
.org 0x31e96
	bne.n 0x31eb0	@ 00031e96 0bd1
.org 0x31e98
	adds r0, r4, #0	@ 00031e98 201c
.org 0x31e9a
	adds r0, #113	@ 00031e9a 7130
.org 0x31e9c
	ldrb r0, [r0, #0]	@ 00031e9c 0078
.org 0x31e9e
	lsls r0, r0, #24	@ 00031e9e 0006
.org 0x31ea0
	asrs r0, r0, #24	@ 00031ea0 0016
.org 0x31ea2
	cmp r0, #3	@ 00031ea2 0328
.org 0x31ea4
	ble.n 0x31eb0	@ 00031ea4 04dd
.org 0x31ea6
	adds r0, r4, #0	@ 00031ea6 201c
.org 0x31ea8
	movs r2, #5	@ 00031ea8 0522
.org 0x31eaa
	movs r3, #2	@ 00031eaa 0223
.org 0x31eac
	bl 0x1cfc8	@ 00031eac ebf78cf8
.org 0x31eb0
	movs r0, #186	@ 00031eb0 ba20
.org 0x31eb2
	lsls r0, r0, #1	@ 00031eb2 4000
.org 0x31eb4
	adds r5, r4, r0	@ 00031eb4 2518
.org 0x31eb6
	ldrb r1, [r5, #0]	@ 00031eb6 2978
.org 0x31eb8
	lsls r1, r1, #3	@ 00031eb8 c900
.org 0x31eba
	ldr r6, [pc, #56]	@ 00031eba 0e4e
.org 0x31ebc
	adds r1, r1, r6	@ 00031ebc 8919
.org 0x31ebe
	adds r0, r4, #0	@ 00031ebe 201c
.org 0x31ec0
	movs r2, #1	@ 00031ec0 0122
.org 0x31ec2
	bl 0x2baf0	@ 00031ec2 f9f715fe
.org 0x31ec6
	lsls r0, r0, #16	@ 00031ec6 0004
.org 0x31ec8
	cmp r0, #0	@ 00031ec8 0028
.org 0x31eca
	beq.n 0x31eee	@ 00031eca 10d0
.org 0x31ecc
	ldrb r1, [r5, #0]	@ 00031ecc 2978
.org 0x31ece
	lsls r1, r1, #3	@ 00031ece c900
.org 0x31ed0
	adds r1, r1, r6	@ 00031ed0 8919
.org 0x31ed2
	adds r0, r4, #0	@ 00031ed2 201c
.org 0x31ed4
	movs r2, #0	@ 00031ed4 0022
.org 0x31ed6
	bl 0x2c2d4	@ 00031ed6 faf7fdf9
.org 0x31eda
	lsls r0, r0, #16	@ 00031eda 0004
.org 0x31edc
	cmp r0, #0	@ 00031edc 0028
.org 0x31ede
	beq.n 0x31eee	@ 00031ede 06d0
.org 0x31ee0
	movs r0, #0	@ 00031ee0 0020
.org 0x31ee2
	strb r0, [r4, #13]	@ 00031ee2 6073
.org 0x31ee4
	strb r0, [r4, #14]	@ 00031ee4 a073
.org 0x31ee6
	strb r0, [r4, #15]	@ 00031ee6 e073
