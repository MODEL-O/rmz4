@ FUN_08061e40  entry 0x08061e40  size 216
.thumb
.org 0x61e40
FUN_08061e40:
	push {r4, r5, lr}	@ 00061e40 30b5
.org 0x61e42
	adds r4, r0, #0	@ 00061e42 041c
.org 0x61e44
	ldrb r0, [r4, #14]	@ 00061e44 a07b
.org 0x61e46
	cmp r0, #0	@ 00061e46 0028
.org 0x61e48
	bne.n 0x61eaa	@ 00061e48 2fd1
.org 0x61e4a
	ldr r1, [pc, #24]	@ 00061e4a 0649
.org 0x61e4c
	adds r0, r4, #0	@ 00061e4c 201c
.org 0x61e4e
	bl 0x1cf00	@ 00061e4e bbf757f8
.org 0x61e52
	ldr r0, [pc, #20]	@ 00061e52 0548
.org 0x61e54
	str r0, [r4, #96]	@ 00061e54 2066
.org 0x61e56
	ldrb r1, [r4, #10]	@ 00061e56 a17a
.org 0x61e58
	movs r0, #16	@ 00061e58 1020
.org 0x61e5a
	ands r0, r1	@ 00061e5a 0840
.org 0x61e5c
	cmp r0, #0	@ 00061e5c 0028
.org 0x61e5e
	beq.n 0x61e70	@ 00061e5e 07d0
.org 0x61e60
	ldr r0, [pc, #8]	@ 00061e60 0248
.org 0x61e62
	b.n 0x61e74	@ 00061e62 07e0
.org 0x61e64
	.byte 0x1c,0xa5,0x00,0x00	@ 00061e64 data
.org 0x61e68
	.byte 0x00,0xfd,0xff,0xff	@ 00061e68 data
.org 0x61e6c
	.byte 0x40,0xfe,0xff,0xff	@ 00061e6c data
.org 0x61e70
	movs r0, #224	@ 00061e70 e020
.org 0x61e72
	lsls r0, r0, #1	@ 00061e72 4000
.org 0x61e74
	str r0, [r4, #92]	@ 00061e74 e065
.org 0x61e76
	adds r5, r4, #0	@ 00061e76 251c
.org 0x61e78
	adds r5, #180	@ 00061e78 b435
.org 0x61e7a
	ldr r0, [r5, #12]	@ 00061e7a e868
.org 0x61e7c
	cmp r0, #0	@ 00061e7c 0028
.org 0x61e7e
	beq.n 0x61e8a	@ 00061e7e 04d0
.org 0x61e80
	adds r0, #119	@ 00061e80 7730
.org 0x61e82
	movs r2, #0	@ 00061e82 0022
.org 0x61e84
	movs r1, #1	@ 00061e84 0121
.org 0x61e86
	strb r1, [r0, #0]	@ 00061e86 0170
.org 0x61e88
	str r2, [r5, #12]	@ 00061e88 ea60
.org 0x61e8a
	ldrh r0, [r5, #22]	@ 00061e8a e88a
.org 0x61e8c
	cmp r0, #0	@ 00061e8c 0028
.org 0x61e8e
	beq.n 0x61e9a	@ 00061e8e 04d0
.org 0x61e90
	movs r0, #93	@ 00061e90 5d20
.org 0x61e92
	bl 0x2b5c	@ 00061e92 a0f763fe
.org 0x61e96
	movs r0, #0	@ 00061e96 0020
.org 0x61e98
	strh r0, [r5, #22]	@ 00061e98 e882
.org 0x61e9a
	ldr r0, [pc, #100]	@ 00061e9a 1948
.org 0x61e9c
	bl 0x2b10	@ 00061e9c a0f738fe
.org 0x61ea0
	movs r0, #0	@ 00061ea0 0020
.org 0x61ea2
	strb r0, [r4, #15]	@ 00061ea2 e073
.org 0x61ea4
	ldrb r0, [r4, #14]	@ 00061ea4 a07b
.org 0x61ea6
	adds r0, #1	@ 00061ea6 0130
.org 0x61ea8
	strb r0, [r4, #14]	@ 00061ea8 a073
.org 0x61eaa
	ldrb r0, [r4, #15]	@ 00061eaa e07b
.org 0x61eac
	cmp r0, #0	@ 00061eac 0028
.org 0x61eae
	bne.n 0x61f1e	@ 00061eae 36d1
.org 0x61eb0
	ldr r0, [r4, #84]	@ 00061eb0 606d
.org 0x61eb2
	ldr r1, [r4, #92]	@ 00061eb2 e16d
.org 0x61eb4
	adds r0, r0, r1	@ 00061eb4 4018
.org 0x61eb6
	str r0, [r4, #84]	@ 00061eb6 6065
.org 0x61eb8
	ldr r1, [r4, #88]	@ 00061eb8 a16d
.org 0x61eba
	ldr r0, [r4, #96]	@ 00061eba 206e
.org 0x61ebc
	adds r1, r1, r0	@ 00061ebc 0918
.org 0x61ebe
	str r1, [r4, #88]	@ 00061ebe a165
.org 0x61ec0
	adds r0, #64	@ 00061ec0 4030
.org 0x61ec2
	str r0, [r4, #96]	@ 00061ec2 2066
.org 0x61ec4
	adds r5, r4, #0	@ 00061ec4 251c
.org 0x61ec6
	adds r5, #180	@ 00061ec6 b435
.org 0x61ec8
	ldr r3, [r5, #4]	@ 00061ec8 6b68
.org 0x61eca
	cmp r1, r3	@ 00061eca 9942
.org 0x61ecc
	ble.n 0x61f2e	@ 00061ecc 2fdd
.org 0x61ece
	ldr r2, [pc, #52]	@ 00061ece 0d4a
.org 0x61ed0
	ldr r1, [r2, #0]	@ 00061ed0 1168
.org 0x61ed2
	ldr r0, [pc, #52]	@ 00061ed2 0d48
.org 0x61ed4
	muls r0, r1	@ 00061ed4 4843
.org 0x61ed6
	ldr r1, [pc, #52]	@ 00061ed6 0d49
.org 0x61ed8
	adds r0, r0, r1	@ 00061ed8 4018
.org 0x61eda
	lsls r0, r0, #1	@ 00061eda 4000
.org 0x61edc
	lsrs r1, r0, #1	@ 00061edc 4108
.org 0x61ede
	str r1, [r2, #0]	@ 00061ede 1160
.org 0x61ee0
	lsrs r1, r0, #17	@ 00061ee0 410c
.org 0x61ee2
	movs r0, #1	@ 00061ee2 0120
.org 0x61ee4
	ands r1, r0	@ 00061ee4 0140
.org 0x61ee6
	cmp r1, #0	@ 00061ee6 0029
.org 0x61ee8
	beq.n 0x61f14	@ 00061ee8 14d0
.org 0x61eea
	ldr r1, [pc, #36]	@ 00061eea 0949
.org 0x61eec
	adds r0, r4, #0	@ 00061eec 201c
.org 0x61eee
	bl 0x1cf00	@ 00061eee bbf707f8
.org 0x61ef2
	ldr r0, [r5, #4]	@ 00061ef2 6868
.org 0x61ef4
	str r0, [r4, #88]	@ 00061ef4 a065
.org 0x61ef6
	ldrb r0, [r4, #15]	@ 00061ef6 e07b
.org 0x61ef8
	adds r0, #1	@ 00061ef8 0130
.org 0x61efa
	strb r0, [r4, #15]	@ 00061efa e073
.org 0x61efc
	b.n 0x61f2e	@ 00061efc 17e0
.org 0x61efe
	.byte 0x00	@ 00061efe data
.org 0x61eff
	.byte 0x00	@ 00061eff data
.org 0x61f00
	.byte 0x21,0x01,0x00,0x00	@ 00061f00 data
.org 0x61f04
	.byte 0x38,0xdc,0x02,0x02	@ 00061f04 data
.org 0x61f08
	.byte 0xfd,0x43,0x03,0x00	@ 00061f08 data
.org 0x61f0c
	.byte 0xc3,0x9e,0x26,0x00	@ 00061f0c data
.org 0x61f10
	.byte 0x03,0xa5,0x00,0x00	@ 00061f10 data
.org 0x61f14
	str r3, [r4, #88]	@ 00061f14 a365
.org 0x61f16
	movs r0, #6	@ 00061f16 0620
