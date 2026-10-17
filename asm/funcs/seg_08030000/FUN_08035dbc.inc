@ FUN_08035dbc  entry 0x08035dbc  size 202
.thumb
.org 0x35dbc
FUN_08035dbc:
	push {r4, lr}	@ 00035dbc 10b5
.org 0x35dbe
	adds r4, r0, #0	@ 00035dbe 041c
.org 0x35dc0
	adds r0, #180	@ 00035dc0 b430
.org 0x35dc2
	ldrb r0, [r0, #12]	@ 00035dc2 007b
.org 0x35dc4
	cmp r0, #1	@ 00035dc4 0128
.org 0x35dc6
	bne.n 0x35dce	@ 00035dc6 02d1
.org 0x35dc8
	adds r0, r4, #0	@ 00035dc8 201c
.org 0x35dca
	movs r1, #0	@ 00035dca 0021
.org 0x35dcc
	b.n 0x35dd2	@ 00035dcc 01e0
.org 0x35dce
	adds r0, r4, #0	@ 00035dce 201c
.org 0x35dd0
	movs r1, #1	@ 00035dd0 0121
.org 0x35dd2
	bl 0x3a428	@ 00035dd2 04f029fb
.org 0x35dd6
	lsls r0, r0, #24	@ 00035dd6 0006
.org 0x35dd8
	lsrs r1, r0, #24	@ 00035dd8 010e
.org 0x35dda
	ldr r2, [pc, #44]	@ 00035dda 0b4a
.org 0x35ddc
	adds r0, r4, r2	@ 00035ddc a018
.org 0x35dde
	ldrb r0, [r0, #0]	@ 00035dde 0078
.org 0x35de0
	adds r3, r4, #0	@ 00035de0 231c
.org 0x35de2
	adds r3, #180	@ 00035de2 b433
.org 0x35de4
	cmp r0, #3	@ 00035de4 0328
.org 0x35de6
	bne.n 0x35dea	@ 00035de6 00d1
.org 0x35de8
	movs r1, #2	@ 00035de8 0221
.org 0x35dea
	cmp r1, #2	@ 00035dea 0229
.org 0x35dec
	bne.n 0x35e10	@ 00035dec 10d1
.org 0x35dee
	ldr r0, [pc, #28]	@ 00035dee 0748
.org 0x35df0
	adds r2, r4, r0	@ 00035df0 2218
.org 0x35df2
	movs r1, #0	@ 00035df2 0021
.org 0x35df4
	movs r0, #4	@ 00035df4 0420
.org 0x35df6
	strb r0, [r2, #0]	@ 00035df6 1070
.org 0x35df8
	movs r2, #129	@ 00035df8 8122
.org 0x35dfa
	lsls r2, r2, #1	@ 00035dfa 5200
.org 0x35dfc
	adds r0, r4, r2	@ 00035dfc a018
.org 0x35dfe
	strb r1, [r0, #0]	@ 00035dfe 0170
.org 0x35e00
	adds r0, r4, #0	@ 00035e00 201c
.org 0x35e02
	bl 0x35fec	@ 00035e02 00f0f3f8
.org 0x35e06
	b.n 0x35e94	@ 00035e06 45e0
.org 0x35e08
	.byte 0x6f,0x02,0x00,0x00	@ 00035e08 data
.org 0x35e0c
	.byte 0x01,0x01,0x00,0x00	@ 00035e0c data
.org 0x35e10
	movs r1, #150	@ 00035e10 9621
.org 0x35e12
	lsls r1, r1, #2	@ 00035e12 8900
.org 0x35e14
	adds r0, r4, r1	@ 00035e14 6018
.org 0x35e16
	ldr r1, [r0, #0]	@ 00035e16 0168
.org 0x35e18
	movs r2, #64	@ 00035e18 4022
.org 0x35e1a
	ands r1, r2	@ 00035e1a 1140
.org 0x35e1c
	adds r2, r0, #0	@ 00035e1c 021c
.org 0x35e1e
	cmp r1, #0	@ 00035e1e 0029
.org 0x35e20
	beq.n 0x35e48	@ 00035e20 12d0
.org 0x35e22
	ldrb r0, [r3, #17]	@ 00035e22 587c
.org 0x35e24
	cmp r0, #11	@ 00035e24 0b28
.org 0x35e26
	bne.n 0x35e48	@ 00035e26 0fd1
.org 0x35e28
	ldr r0, [pc, #24]	@ 00035e28 0648
.org 0x35e2a
	adds r2, r4, r0	@ 00035e2a 2218
.org 0x35e2c
	movs r1, #0	@ 00035e2c 0021
.org 0x35e2e
	movs r0, #6	@ 00035e2e 0620
.org 0x35e30
	strb r0, [r2, #0]	@ 00035e30 1070
.org 0x35e32
	movs r2, #129	@ 00035e32 8122
.org 0x35e34
	lsls r2, r2, #1	@ 00035e34 5200
.org 0x35e36
	adds r0, r4, r2	@ 00035e36 a018
.org 0x35e38
	strb r1, [r0, #0]	@ 00035e38 0170
.org 0x35e3a
	adds r0, r4, #0	@ 00035e3a 201c
.org 0x35e3c
	bl 0x36188	@ 00035e3c 00f0a4f9
.org 0x35e40
	b.n 0x35e94	@ 00035e40 28e0
.org 0x35e42
	.byte 0x00	@ 00035e42 data
.org 0x35e43
	.byte 0x00	@ 00035e43 data
.org 0x35e44
	.byte 0x01,0x01,0x00,0x00	@ 00035e44 data
.org 0x35e48
	ldr r0, [r2, #0]	@ 00035e48 1068
.org 0x35e4a
	movs r1, #128	@ 00035e4a 8021
.org 0x35e4c
	ands r0, r1	@ 00035e4c 0840
.org 0x35e4e
	cmp r0, #0	@ 00035e4e 0028
.org 0x35e50
	beq.n 0x35e7c	@ 00035e50 14d0
.org 0x35e52
	ldrh r1, [r3, #20]	@ 00035e52 998a
.org 0x35e54
	movs r0, #16	@ 00035e54 1020
.org 0x35e56
	ands r0, r1	@ 00035e56 0840
.org 0x35e58
	cmp r0, #0	@ 00035e58 0028
.org 0x35e5a
	beq.n 0x35e7c	@ 00035e5a 0fd0
.org 0x35e5c
	ldr r0, [pc, #24]	@ 00035e5c 0648
.org 0x35e5e
	adds r2, r4, r0	@ 00035e5e 2218
.org 0x35e60
	movs r1, #0	@ 00035e60 0021
.org 0x35e62
	movs r0, #7	@ 00035e62 0720
.org 0x35e64
	strb r0, [r2, #0]	@ 00035e64 1070
.org 0x35e66
	movs r2, #129	@ 00035e66 8122
.org 0x35e68
	lsls r2, r2, #1	@ 00035e68 5200
.org 0x35e6a
	adds r0, r4, r2	@ 00035e6a a018
.org 0x35e6c
	strb r1, [r0, #0]	@ 00035e6c 0170
.org 0x35e6e
	adds r0, r4, #0	@ 00035e6e 201c
.org 0x35e70
	bl 0x36204	@ 00035e70 00f0c8f9
.org 0x35e74
	b.n 0x35e94	@ 00035e74 0ee0
.org 0x35e76
	.byte 0x00	@ 00035e76 data
.org 0x35e77
	.byte 0x00	@ 00035e77 data
.org 0x35e78
	.byte 0x01,0x01,0x00,0x00	@ 00035e78 data
.org 0x35e7c
	ldr r0, [pc, #28]	@ 00035e7c 0748
.org 0x35e7e
	adds r2, r4, r0	@ 00035e7e 2218
.org 0x35e80
	movs r1, #0	@ 00035e80 0021
.org 0x35e82
	movs r0, #1	@ 00035e82 0120
.org 0x35e84
	strb r0, [r2, #0]	@ 00035e84 1070
