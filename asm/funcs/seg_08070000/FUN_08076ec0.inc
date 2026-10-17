@ FUN_08076ec0  entry 0x08076ec0  size 208
.thumb
.org 0x76ec0
FUN_08076ec0:
	push {r4, r5, lr}	@ 00076ec0 30b5
.org 0x76ec2
	adds r4, r0, #0	@ 00076ec2 041c
.org 0x76ec4
	ldrb r5, [r4, #14]	@ 00076ec4 a57b
.org 0x76ec6
	cmp r5, #0	@ 00076ec6 002d
.org 0x76ec8
	bne.n 0x76f48	@ 00076ec8 3ed1
.org 0x76eca
	ldr r1, [pc, #68]	@ 00076eca 1149
.org 0x76ecc
	bl 0x1cf00	@ 00076ecc a6f718f8
.org 0x76ed0
	movs r0, #223	@ 00076ed0 df20
.org 0x76ed2
	bl 0x2b10	@ 00076ed2 8bf71dfe
.org 0x76ed6
	adds r0, r4, #0	@ 00076ed6 201c
.org 0x76ed8
	adds r0, #116	@ 00076ed8 7430
.org 0x76eda
	ldr r1, [pc, #56]	@ 00076eda 0e49
.org 0x76edc
	bl 0x5784	@ 00076edc 8ef752fc
.org 0x76ee0
	ldr r0, [pc, #52]	@ 00076ee0 0d48
.org 0x76ee2
	ldr r0, [r0, #0]	@ 00076ee2 0068
.org 0x76ee4
	ldr r1, [r4, #84]	@ 00076ee4 616d
.org 0x76ee6
	ldr r0, [r0, #84]	@ 00076ee6 406d
.org 0x76ee8
	cmp r1, r0	@ 00076ee8 8142
.org 0x76eea
	ble.n 0x76f1c	@ 00076eea 17dd
.org 0x76eec
	movs r0, #224	@ 00076eec e020
.org 0x76eee
	lsls r0, r0, #1	@ 00076eee 4000
.org 0x76ef0
	str r0, [r4, #92]	@ 00076ef0 e065
.org 0x76ef2
	adds r0, r4, #0	@ 00076ef2 201c
.org 0x76ef4
	adds r0, #76	@ 00076ef4 4c30
.org 0x76ef6
	strb r5, [r0, #0]	@ 00076ef6 0570
.org 0x76ef8
	adds r2, r4, #0	@ 00076ef8 221c
.org 0x76efa
	adds r2, #74	@ 00076efa 4a32
.org 0x76efc
	ldrb r1, [r2, #0]	@ 00076efc 1178
.org 0x76efe
	movs r0, #17	@ 00076efe 1120
.org 0x76f00
	negs r0, r0	@ 00076f00 4042
.org 0x76f02
	ands r0, r1	@ 00076f02 0840
.org 0x76f04
	strb r0, [r2, #0]	@ 00076f04 1070
.org 0x76f06
	ldrb r1, [r4, #10]	@ 00076f06 a17a
.org 0x76f08
	movs r0, #239	@ 00076f08 ef20
.org 0x76f0a
	ands r0, r1	@ 00076f0a 0840
.org 0x76f0c
	strb r0, [r4, #10]	@ 00076f0c a072
.org 0x76f0e
	b.n 0x76f3a	@ 00076f0e 14e0
.org 0x76f10
	.byte 0x0c,0xaf,0x00,0x00	@ 00076f10 data
.org 0x76f14
	.byte 0xac,0xce,0x85,0x08	@ 00076f14 data
.org 0x76f18
	.byte 0xf0,0xdb,0x02,0x02	@ 00076f18 data
.org 0x76f1c
	ldr r0, [pc, #96]	@ 00076f1c 1848
.org 0x76f1e
	str r0, [r4, #92]	@ 00076f1e e065
.org 0x76f20
	adds r1, r4, #0	@ 00076f20 211c
.org 0x76f22
	adds r1, #76	@ 00076f22 4c31
.org 0x76f24
	movs r0, #1	@ 00076f24 0120
.org 0x76f26
	strb r0, [r1, #0]	@ 00076f26 0870
.org 0x76f28
	adds r2, r4, #0	@ 00076f28 221c
.org 0x76f2a
	adds r2, #74	@ 00076f2a 4a32
.org 0x76f2c
	ldrb r0, [r2, #0]	@ 00076f2c 1078
.org 0x76f2e
	movs r1, #16	@ 00076f2e 1021
.org 0x76f30
	orrs r0, r1	@ 00076f30 0843
.org 0x76f32
	strb r0, [r2, #0]	@ 00076f32 1070
.org 0x76f34
	ldrb r0, [r4, #10]	@ 00076f34 a07a
.org 0x76f36
	orrs r1, r0	@ 00076f36 0143
.org 0x76f38
	strb r1, [r4, #10]	@ 00076f38 a172
.org 0x76f3a
	ldr r0, [pc, #72]	@ 00076f3a 1248
.org 0x76f3c
	str r0, [r4, #96]	@ 00076f3c 2066
.org 0x76f3e
	movs r0, #0	@ 00076f3e 0020
.org 0x76f40
	strb r0, [r4, #15]	@ 00076f40 e073
.org 0x76f42
	ldrb r0, [r4, #14]	@ 00076f42 a07b
.org 0x76f44
	adds r0, #1	@ 00076f44 0130
.org 0x76f46
	strb r0, [r4, #14]	@ 00076f46 a073
.org 0x76f48
	ldrb r0, [r4, #15]	@ 00076f48 e07b
.org 0x76f4a
	cmp r0, #0	@ 00076f4a 0028
.org 0x76f4c
	bne.n 0x76f8c	@ 00076f4c 1ed1
.org 0x76f4e
	ldr r0, [r4, #84]	@ 00076f4e 606d
.org 0x76f50
	ldr r1, [r4, #92]	@ 00076f50 e16d
.org 0x76f52
	adds r0, r0, r1	@ 00076f52 4018
.org 0x76f54
	str r0, [r4, #84]	@ 00076f54 6065
.org 0x76f56
	ldr r1, [r4, #88]	@ 00076f56 a16d
.org 0x76f58
	ldr r0, [r4, #96]	@ 00076f58 206e
.org 0x76f5a
	adds r1, r1, r0	@ 00076f5a 0918
.org 0x76f5c
	str r1, [r4, #88]	@ 00076f5c a165
.org 0x76f5e
	adds r0, #64	@ 00076f5e 4030
.org 0x76f60
	str r0, [r4, #96]	@ 00076f60 2066
.org 0x76f62
	adds r0, r4, #0	@ 00076f62 201c
.org 0x76f64
	adds r0, #180	@ 00076f64 b430
.org 0x76f66
	ldr r0, [r0, #4]	@ 00076f66 4068
.org 0x76f68
	cmp r1, r0	@ 00076f68 8142
.org 0x76f6a
	blt.n 0x76f9e	@ 00076f6a 18db
.org 0x76f6c
	str r0, [r4, #88]	@ 00076f6c a065
.org 0x76f6e
	ldr r1, [pc, #24]	@ 00076f6e 0649
.org 0x76f70
	adds r0, r4, #0	@ 00076f70 201c
.org 0x76f72
	bl 0x1cf00	@ 00076f72 a5f7c5ff
.org 0x76f76
	ldrb r0, [r4, #15]	@ 00076f76 e07b
.org 0x76f78
	adds r0, #1	@ 00076f78 0130
.org 0x76f7a
	strb r0, [r4, #15]	@ 00076f7a e073
.org 0x76f7c
	b.n 0x76f9e	@ 00076f7c 0fe0
.org 0x76f7e
	.byte 0x00	@ 00076f7e data
.org 0x76f7f
	.byte 0x00	@ 00076f7f data
.org 0x76f80
	.byte 0x40,0xfe,0xff,0xff	@ 00076f80 data
.org 0x76f84
	.byte 0x00,0xfe,0xff,0xff	@ 00076f84 data
.org 0x76f88
	.byte 0x15,0xaf,0x00,0x00	@ 00076f88 data
.org 0x76f8c
	adds r0, r4, #0	@ 00076f8c 201c
.org 0x76f8e
	adds r0, #115	@ 00076f8e 7330
