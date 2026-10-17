@ FUN_080a3d58  entry 0x080a3d58  size 408
.thumb
.org 0xa3d58
FUN_080a3d58:
	push {r4, r5, lr}	@ 000a3d58 30b5
.org 0xa3d5a
	adds r4, r0, #0	@ 000a3d5a 041c
.org 0xa3d5c
	ldrb r5, [r4, #16]	@ 000a3d5c 257c
.org 0xa3d5e
	cmp r5, #1	@ 000a3d5e 012d
.org 0xa3d60
	beq.n 0xa3dc0	@ 000a3d60 2ed0
.org 0xa3d62
	cmp r5, #1	@ 000a3d62 012d
.org 0xa3d64
	bgt.n 0xa3d6c	@ 000a3d64 02dc
.org 0xa3d66
	cmp r5, #0	@ 000a3d66 002d
.org 0xa3d68
	beq.n 0xa3d76	@ 000a3d68 05d0
.org 0xa3d6a
	b.n 0xa3eb0	@ 000a3d6a a1e0
.org 0xa3d6c
	cmp r5, #2	@ 000a3d6c 022d
.org 0xa3d6e
	beq.n 0xa3e14	@ 000a3d6e 51d0
.org 0xa3d70
	cmp r5, #3	@ 000a3d70 032d
.org 0xa3d72
	beq.n 0xa3e64	@ 000a3d72 77d0
.org 0xa3d74
	b.n 0xa3eb0	@ 000a3d74 9ce0
.org 0xa3d76
	ldr r1, [r4, #88]	@ 000a3d76 a16d
.org 0xa3d78
	ldr r0, [r4, #96]	@ 000a3d78 206e
.org 0xa3d7a
	subs r1, r1, r0	@ 000a3d7a 091a
.org 0xa3d7c
	str r1, [r4, #88]	@ 000a3d7c a165
.org 0xa3d7e
	ldr r0, [r4, #84]	@ 000a3d7e 606d
.org 0xa3d80
	ldr r2, [pc, #52]	@ 000a3d80 0d4a
.org 0xa3d82
	adds r1, r1, r2	@ 000a3d82 8918
.org 0xa3d84
	bl 0x7c7c	@ 000a3d84 63f77aff
.org 0xa3d88
	lsls r0, r0, #16	@ 000a3d88 0004
.org 0xa3d8a
	cmp r0, #0	@ 000a3d8a 0028
.org 0xa3d8c
	bne.n 0xa3d90	@ 000a3d8c 00d1
.org 0xa3d8e
	b.n 0xa3eb0	@ 000a3d8e 8fe0
.org 0xa3d90
	ldr r0, [r4, #84]	@ 000a3d90 606d
.org 0xa3d92
	ldr r1, [r4, #88]	@ 000a3d92 a16d
.org 0xa3d94
	bl 0x8748	@ 000a3d94 64f7d8fc
.org 0xa3d98
	movs r1, #208	@ 000a3d98 d021
.org 0xa3d9a
	lsls r1, r1, #4	@ 000a3d9a 0901
.org 0xa3d9c
	adds r0, r0, r1	@ 000a3d9c 4018
.org 0xa3d9e
	str r0, [r4, #88]	@ 000a3d9e a065
.org 0xa3da0
	movs r2, #1	@ 000a3da0 0122
.org 0xa3da2
	strb r2, [r4, #18]	@ 000a3da2 a274
.org 0xa3da4
	ldr r0, [pc, #20]	@ 000a3da4 0548
.org 0xa3da6
	ldr r0, [r0, #0]	@ 000a3da6 0068
.org 0xa3da8
	ldr r1, [r4, #84]	@ 000a3da8 616d
.org 0xa3daa
	ldr r0, [r0, #84]	@ 000a3daa 406d
.org 0xa3dac
	cmp r1, r0	@ 000a3dac 8142
.org 0xa3dae
	ble.n 0xa3e58	@ 000a3dae 53dd
.org 0xa3db0
	ldr r0, [r4, #92]	@ 000a3db0 e06d
.org 0xa3db2
	negs r0, r0	@ 000a3db2 4042
.org 0xa3db4
	str r0, [r4, #92]	@ 000a3db4 e065
.org 0xa3db6
	b.n 0xa3e58	@ 000a3db6 4fe0
.org 0xa3db8
	.byte 0x00,0xf3,0xff,0xff	@ 000a3db8 data
.org 0xa3dbc
	.byte 0xf0,0xdb,0x02,0x02	@ 000a3dbc data
.org 0xa3dc0
	ldr r0, [r4, #84]	@ 000a3dc0 606d
.org 0xa3dc2
	ldr r1, [r4, #92]	@ 000a3dc2 e16d
.org 0xa3dc4
	subs r0, r0, r1	@ 000a3dc4 401a
.org 0xa3dc6
	str r0, [r4, #84]	@ 000a3dc6 6065
.org 0xa3dc8
	ldr r2, [pc, #60]	@ 000a3dc8 0f4a
.org 0xa3dca
	adds r0, r0, r2	@ 000a3dca 8018
.org 0xa3dcc
	ldr r1, [r4, #88]	@ 000a3dcc a16d
.org 0xa3dce
	bl 0x7c7c	@ 000a3dce 63f755ff
.org 0xa3dd2
	lsls r0, r0, #16	@ 000a3dd2 0004
.org 0xa3dd4
	cmp r0, #0	@ 000a3dd4 0028
.org 0xa3dd6
	beq.n 0xa3eb0	@ 000a3dd6 6bd0
.org 0xa3dd8
	ldr r0, [r4, #84]	@ 000a3dd8 606d
.org 0xa3dda
	ldr r1, [r4, #88]	@ 000a3dda a16d
.org 0xa3ddc
	bl 0x8988	@ 000a3ddc 64f7d4fd
.org 0xa3de0
	movs r1, #208	@ 000a3de0 d021
.org 0xa3de2
	lsls r1, r1, #4	@ 000a3de2 0901
.org 0xa3de4
	adds r0, r0, r1	@ 000a3de4 4018
.org 0xa3de6
	str r0, [r4, #84]	@ 000a3de6 6065
.org 0xa3de8
	movs r0, #0	@ 000a3de8 0020
.org 0xa3dea
	strb r0, [r4, #18]	@ 000a3dea a074
.org 0xa3dec
	ldr r0, [pc, #28]	@ 000a3dec 0748
.org 0xa3dee
	ldr r0, [r0, #0]	@ 000a3dee 0068
.org 0xa3df0
	ldr r0, [r0, #88]	@ 000a3df0 806d
.org 0xa3df2
	ldr r2, [pc, #28]	@ 000a3df2 074a
.org 0xa3df4
	adds r0, r0, r2	@ 000a3df4 8018
.org 0xa3df6
	ldr r1, [r4, #88]	@ 000a3df6 a16d
.org 0xa3df8
	cmp r1, r0	@ 000a3df8 8142
.org 0xa3dfa
	ble.n 0xa3e02	@ 000a3dfa 02dd
.org 0xa3dfc
	ldr r0, [r4, #96]	@ 000a3dfc 206e
.org 0xa3dfe
	negs r0, r0	@ 000a3dfe 4042
.org 0xa3e00
	str r0, [r4, #96]	@ 000a3e00 2066
.org 0xa3e02
	strb r5, [r4, #13]	@ 000a3e02 6573
.org 0xa3e04
	b.n 0xa3eb0	@ 000a3e04 54e0
.org 0xa3e06
	.byte 0x00	@ 000a3e06 data
.org 0xa3e07
	.byte 0x00	@ 000a3e07 data
.org 0xa3e08
	.byte 0x00,0xf3,0xff,0xff	@ 000a3e08 data
.org 0xa3e0c
	.byte 0xf0,0xdb,0x02,0x02	@ 000a3e0c data
.org 0xa3e10
	.byte 0x00,0xf1,0xff,0xff	@ 000a3e10 data
.org 0xa3e14
	ldr r1, [r4, #88]	@ 000a3e14 a16d
.org 0xa3e16
	ldr r0, [r4, #96]	@ 000a3e16 206e
.org 0xa3e18
	adds r1, r1, r0	@ 000a3e18 0918
.org 0xa3e1a
	str r1, [r4, #88]	@ 000a3e1a a165
.org 0xa3e1c
	ldr r0, [r4, #84]	@ 000a3e1c 606d
.org 0xa3e1e
	movs r2, #208	@ 000a3e1e d022
.org 0xa3e20
	lsls r2, r2, #4	@ 000a3e20 1201
.org 0xa3e22
	adds r1, r1, r2	@ 000a3e22 8918
.org 0xa3e24
	bl 0x7c7c	@ 000a3e24 63f72aff
.org 0xa3e28
	lsls r0, r0, #16	@ 000a3e28 0004
.org 0xa3e2a
	cmp r0, #0	@ 000a3e2a 0028
.org 0xa3e2c
	beq.n 0xa3eb0	@ 000a3e2c 40d0
.org 0xa3e2e
	ldr r0, [r4, #84]	@ 000a3e2e 606d
.org 0xa3e30
	ldr r1, [r4, #88]	@ 000a3e30 a16d
.org 0xa3e32
	bl 0x8534	@ 000a3e32 64f77ffb
.org 0xa3e36
	ldr r1, [pc, #36]	@ 000a3e36 0949
.org 0xa3e38
	adds r0, r0, r1	@ 000a3e38 4018
.org 0xa3e3a
	str r0, [r4, #88]	@ 000a3e3a a065
.org 0xa3e3c
	movs r2, #1	@ 000a3e3c 0122
.org 0xa3e3e
	strb r2, [r4, #18]	@ 000a3e3e a274
.org 0xa3e40
	ldr r0, [pc, #28]	@ 000a3e40 0748
.org 0xa3e42
	ldr r0, [r0, #0]	@ 000a3e42 0068
.org 0xa3e44
	ldr r1, [r4, #84]	@ 000a3e44 616d
.org 0xa3e46
	ldr r0, [r0, #84]	@ 000a3e46 406d
.org 0xa3e48
	cmp r1, r0	@ 000a3e48 8142
.org 0xa3e4a
	ble.n 0xa3e52	@ 000a3e4a 02dd
.org 0xa3e4c
	ldr r0, [r4, #92]	@ 000a3e4c e06d
.org 0xa3e4e
	negs r0, r0	@ 000a3e4e 4042
.org 0xa3e50
	str r0, [r4, #92]	@ 000a3e50 e065
.org 0xa3e52
	ldr r0, [r4, #96]	@ 000a3e52 206e
.org 0xa3e54
	negs r0, r0	@ 000a3e54 4042
.org 0xa3e56
	str r0, [r4, #96]	@ 000a3e56 2066
.org 0xa3e58
	strb r2, [r4, #13]	@ 000a3e58 6273
.org 0xa3e5a
	b.n 0xa3eb0	@ 000a3e5a 29e0
.org 0xa3e5c
	.byte 0x00,0xf3,0xff,0xff	@ 000a3e5c data
.org 0xa3e60
	.byte 0xf0,0xdb,0x02,0x02	@ 000a3e60 data
.org 0xa3e64
	ldr r0, [r4, #84]	@ 000a3e64 606d
.org 0xa3e66
	ldr r1, [r4, #92]	@ 000a3e66 e16d
.org 0xa3e68
	adds r0, r0, r1	@ 000a3e68 4018
.org 0xa3e6a
	str r0, [r4, #84]	@ 000a3e6a 6065
.org 0xa3e6c
	movs r2, #208	@ 000a3e6c d022
.org 0xa3e6e
	lsls r2, r2, #4	@ 000a3e6e 1201
.org 0xa3e70
	adds r0, r0, r2	@ 000a3e70 8018
.org 0xa3e72
	ldr r1, [r4, #88]	@ 000a3e72 a16d
.org 0xa3e74
	bl 0x7c7c	@ 000a3e74 63f702ff
.org 0xa3e78
	lsls r0, r0, #16	@ 000a3e78 0004
.org 0xa3e7a
	cmp r0, #0	@ 000a3e7a 0028
.org 0xa3e7c
	beq.n 0xa3eb0	@ 000a3e7c 18d0
.org 0xa3e7e
	ldr r0, [r4, #84]	@ 000a3e7e 606d
.org 0xa3e80
	ldr r1, [r4, #88]	@ 000a3e80 a16d
.org 0xa3e82
	bl 0x8868	@ 000a3e82 64f7f1fc
.org 0xa3e86
	ldr r1, [pc, #64]	@ 000a3e86 1049
.org 0xa3e88
	adds r0, r0, r1	@ 000a3e88 4018
.org 0xa3e8a
	str r0, [r4, #84]	@ 000a3e8a 6065
.org 0xa3e8c
	movs r0, #0	@ 000a3e8c 0020
.org 0xa3e8e
	strb r0, [r4, #18]	@ 000a3e8e a074
.org 0xa3e90
	ldr r0, [pc, #56]	@ 000a3e90 0e48
.org 0xa3e92
	ldr r0, [r0, #0]	@ 000a3e92 0068
.org 0xa3e94
	ldr r0, [r0, #88]	@ 000a3e94 806d
.org 0xa3e96
	ldr r2, [pc, #56]	@ 000a3e96 0e4a
.org 0xa3e98
	adds r0, r0, r2	@ 000a3e98 8018
.org 0xa3e9a
	ldr r1, [r4, #88]	@ 000a3e9a a16d
.org 0xa3e9c
	cmp r1, r0	@ 000a3e9c 8142
.org 0xa3e9e
	ble.n 0xa3ea6	@ 000a3e9e 02dd
.org 0xa3ea0
	ldr r0, [r4, #96]	@ 000a3ea0 206e
.org 0xa3ea2
	negs r0, r0	@ 000a3ea2 4042
.org 0xa3ea4
	str r0, [r4, #96]	@ 000a3ea4 2066
.org 0xa3ea6
	ldr r0, [r4, #92]	@ 000a3ea6 e06d
.org 0xa3ea8
	negs r0, r0	@ 000a3ea8 4042
.org 0xa3eaa
	str r0, [r4, #92]	@ 000a3eaa e065
.org 0xa3eac
	movs r0, #1	@ 000a3eac 0120
.org 0xa3eae
	strb r0, [r4, #13]	@ 000a3eae 6073
.org 0xa3eb0
	adds r0, r4, #0	@ 000a3eb0 201c
.org 0xa3eb2
	adds r0, #180	@ 000a3eb2 b430
.org 0xa3eb4
	ldr r0, [r0, #0]	@ 000a3eb4 0068
.org 0xa3eb6
	ldr r1, [r4, #84]	@ 000a3eb6 616d
.org 0xa3eb8
	subs r2, r0, r1	@ 000a3eb8 421a
.org 0xa3eba
	cmp r2, #0	@ 000a3eba 002a
.org 0xa3ebc
	blt.n 0xa3ed4	@ 000a3ebc 0adb
.org 0xa3ebe
	movs r0, #144	@ 000a3ebe 9020
.org 0xa3ec0
	lsls r0, r0, #6	@ 000a3ec0 8001
.org 0xa3ec2
	cmp r2, r0	@ 000a3ec2 8242
.org 0xa3ec4
	bgt.n 0xa3f00	@ 000a3ec4 1cdc
.org 0xa3ec6
	b.n 0xa3ede	@ 000a3ec6 0ae0
.org 0xa3ec8
	.byte 0x00,0xf3,0xff,0xff	@ 000a3ec8 data
.org 0xa3ecc
	.byte 0xf0,0xdb,0x02,0x02	@ 000a3ecc data
.org 0xa3ed0
	.byte 0x00,0xf1,0xff,0xff	@ 000a3ed0 data
.org 0xa3ed4
	subs r1, r1, r0	@ 000a3ed4 091a
.org 0xa3ed6
	movs r0, #144	@ 000a3ed6 9020
.org 0xa3ed8
	lsls r0, r0, #6	@ 000a3ed8 8001
.org 0xa3eda
	cmp r1, r0	@ 000a3eda 8142
.org 0xa3edc
	bgt.n 0xa3f00	@ 000a3edc 10dc
.org 0xa3ede
	adds r0, r4, #0	@ 000a3ede 201c
.org 0xa3ee0
	adds r0, #184	@ 000a3ee0 b830
.org 0xa3ee2
	ldr r0, [r0, #0]	@ 000a3ee2 0068
.org 0xa3ee4
	ldr r1, [r4, #88]	@ 000a3ee4 a16d
.org 0xa3ee6
	subs r2, r0, r1	@ 000a3ee6 421a
.org 0xa3ee8
	cmp r2, #0	@ 000a3ee8 002a
.org 0xa3eea
	blt.n 0xa3ef6	@ 000a3eea 04db
.org 0xa3eec
	movs r0, #144	@ 000a3eec 9020
.org 0xa3eee
	lsls r0, r0, #6	@ 000a3eee 8001
