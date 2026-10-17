@ FUN_08128d84  entry 0x08128d84  size 328
.thumb
.org 0x128d84
FUN_08128d84:
	push {r4, r5, r6, r7, lr}	@ 00128d84 f0b5
.org 0x128d86
	sub sp, #176	@ 00128d86 acb0
.org 0x128d88
	adds r5, r1, #0	@ 00128d88 0d1c
.org 0x128d8a
	lsls r0, r0, #16	@ 00128d8a 0004
.org 0x128d8c
	lsrs r1, r0, #16	@ 00128d8c 010c
.org 0x128d8e
	lsls r2, r2, #24	@ 00128d8e 1206
.org 0x128d90
	lsrs r7, r2, #24	@ 00128d90 170e
.org 0x128d92
	ldr r0, [pc, #12]	@ 00128d92 0348
.org 0x128d94
	ldr r0, [r0, #0]	@ 00128d94 0068
.org 0x128d96
	ldrh r0, [r0, #4]	@ 00128d96 8088
.org 0x128d98
	cmp r1, r0	@ 00128d98 8142
.org 0x128d9a
	bcc.n 0x128da8	@ 00128d9a 05d3
.org 0x128d9c
	ldr r0, [pc, #4]	@ 00128d9c 0148
.org 0x128d9e
	b.n 0x128edc	@ 00128d9e 9de0
.org 0x128da0
	.byte 0xb0,0xd7,0x03,0x02	@ 00128da0 data
.org 0x128da4
	.byte 0xff,0x80,0x00,0x00	@ 00128da4 data
.org 0x128da8
	ldr r0, [pc, #60]	@ 00128da8 0f48
.org 0x128daa
	ldr r0, [r0, #0]	@ 00128daa 0068
.org 0x128dac
	ldrb r0, [r0, #8]	@ 00128dac 007a
.org 0x128dae
	lsls r0, r0, #1	@ 00128dae 4000
.org 0x128db0
	mov r2, sp	@ 00128db0 6a46
.org 0x128db2
	adds r3, r0, r2	@ 00128db2 8318
.org 0x128db4
	adds r3, #132	@ 00128db4 8433
.org 0x128db6
	movs r0, #0	@ 00128db6 0020
.org 0x128db8
	strh r0, [r3, #0]	@ 00128db8 1880
.org 0x128dba
	subs r3, #2	@ 00128dba 023b
.org 0x128dbc
	movs r4, #0	@ 00128dbc 0024
.org 0x128dbe
	ldrh r2, [r5, #0]	@ 00128dbe 2a88
.org 0x128dc0
	adds r5, #2	@ 00128dc0 0235
.org 0x128dc2
	movs r0, #0	@ 00128dc2 0020
.org 0x128dc4
	strh r2, [r3, #0]	@ 00128dc4 1a80
.org 0x128dc6
	subs r3, #2	@ 00128dc6 023b
.org 0x128dc8
	lsrs r2, r2, #1	@ 00128dc8 5208
.org 0x128dca
	adds r0, #1	@ 00128dca 0130
.org 0x128dcc
	lsls r0, r0, #24	@ 00128dcc 0006
.org 0x128dce
	lsrs r0, r0, #24	@ 00128dce 000e
.org 0x128dd0
	cmp r0, #15	@ 00128dd0 0f28
.org 0x128dd2
	bls.n 0x128dc4	@ 00128dd2 f7d9
.org 0x128dd4
	adds r0, r4, #1	@ 00128dd4 601c
.org 0x128dd6
	lsls r0, r0, #24	@ 00128dd6 0006
.org 0x128dd8
	lsrs r4, r0, #24	@ 00128dd8 040e
.org 0x128dda
	cmp r4, #3	@ 00128dda 032c
.org 0x128ddc
	bls.n 0x128dbe	@ 00128ddc efd9
.org 0x128dde
	movs r4, #0	@ 00128dde 0024
.org 0x128de0
	ldr r0, [pc, #4]	@ 00128de0 0148
.org 0x128de2
	adds r2, r0, #0	@ 00128de2 021c
.org 0x128de4
	ldr r0, [r0, #0]	@ 00128de4 0068
.org 0x128de6
	b.n 0x128dfa	@ 00128de6 08e0
.org 0x128de8
	.byte 0xb0,0xd7,0x03,0x02	@ 00128de8 data
.org 0x128dec
	strh r1, [r3, #0]	@ 00128dec 1980
.org 0x128dee
	subs r3, #2	@ 00128dee 023b
.org 0x128df0
	lsrs r1, r1, #1	@ 00128df0 4908
.org 0x128df2
	adds r0, r4, #1	@ 00128df2 601c
.org 0x128df4
	lsls r0, r0, #24	@ 00128df4 0006
.org 0x128df6
	lsrs r4, r0, #24	@ 00128df6 040e
.org 0x128df8
	ldr r0, [r2, #0]	@ 00128df8 1068
.org 0x128dfa
	ldrb r0, [r0, #8]	@ 00128dfa 007a
.org 0x128dfc
	cmp r4, r0	@ 00128dfc 8442
.org 0x128dfe
	bcc.n 0x128dec	@ 00128dfe f5d3
.org 0x128e00
	movs r0, #0	@ 00128e00 0020
.org 0x128e02
	strh r0, [r3, #0]	@ 00128e02 1880
.org 0x128e04
	subs r3, #2	@ 00128e04 023b
.org 0x128e06
	movs r6, #1	@ 00128e06 0126
.org 0x128e08
	strh r6, [r3, #0]	@ 00128e08 1e80
.org 0x128e0a
	movs r4, #208	@ 00128e0a d024
.org 0x128e0c
	lsls r4, r4, #20	@ 00128e0c 2405
.org 0x128e0e
	ldr r0, [pc, #92]	@ 00128e0e 1748
.org 0x128e10
	ldr r0, [r0, #0]	@ 00128e10 0068
.org 0x128e12
	ldrb r2, [r0, #8]	@ 00128e12 027a
.org 0x128e14
	adds r2, #67	@ 00128e14 4332
.org 0x128e16
	mov r0, sp	@ 00128e16 6846
.org 0x128e18
	adds r1, r4, #0	@ 00128e18 211c
.org 0x128e1a
	bl 0x128c40	@ 00128e1a fff711ff
.org 0x128e1e
	movs r5, #0	@ 00128e1e 0025
.org 0x128e20
	add r2, sp, #164	@ 00128e20 29aa
.org 0x128e22
	strh r5, [r2, #0]	@ 00128e22 1580
.org 0x128e24
	mov r1, sp	@ 00128e24 6946
.org 0x128e26
	adds r1, #166	@ 00128e26 a631
.org 0x128e28
	ldr r0, [pc, #68]	@ 00128e28 1148
.org 0x128e2a
	ldrh r0, [r0, #0]	@ 00128e2a 0088
.org 0x128e2c
	strh r0, [r1, #0]	@ 00128e2c 0880
.org 0x128e2e
	add r0, sp, #172	@ 00128e2e 2ba8
.org 0x128e30
	str r5, [r0, #0]	@ 00128e30 0560
.org 0x128e32
	ldrh r0, [r2, #0]	@ 00128e32 1088
.org 0x128e34
	cmp r0, #0	@ 00128e34 0028
.org 0x128e36
	bne.n 0x128e40	@ 00128e36 03d1
.org 0x128e38
	ldrh r0, [r4, #0]	@ 00128e38 2088
.org 0x128e3a
	ands r0, r6	@ 00128e3a 3040
.org 0x128e3c
	cmp r0, #0	@ 00128e3c 0028
.org 0x128e3e
	bne.n 0x128ed0	@ 00128e3e 47d1
.org 0x128e40
	add r3, sp, #168	@ 00128e40 2aab
.org 0x128e42
	ldr r0, [pc, #44]	@ 00128e42 0b48
.org 0x128e44
	ldrh r0, [r0, #0]	@ 00128e44 0088
.org 0x128e46
	strh r0, [r3, #0]	@ 00128e46 1880
.org 0x128e48
	mov r4, sp	@ 00128e48 6c46
.org 0x128e4a
	adds r4, #166	@ 00128e4a a634
.org 0x128e4c
	ldrh r1, [r3, #0]	@ 00128e4c 1988
.org 0x128e4e
	ldrh r0, [r4, #0]	@ 00128e4e 2088
.org 0x128e50
	cmp r1, r0	@ 00128e50 8142
.org 0x128e52
	beq.n 0x128eba	@ 00128e52 32d0
.org 0x128e54
	ldrh r1, [r3, #0]	@ 00128e54 1988
.org 0x128e56
	ldrh r0, [r4, #0]	@ 00128e56 2088
.org 0x128e58
	cmp r1, r0	@ 00128e58 8142
.org 0x128e5a
	bls.n 0x128e74	@ 00128e5a 0bd9
.org 0x128e5c
	add r2, sp, #172	@ 00128e5c 2baa
.org 0x128e5e
	ldrh r1, [r3, #0]	@ 00128e5e 1988
.org 0x128e60
	ldrh r0, [r4, #0]	@ 00128e60 2088
.org 0x128e62
	subs r1, r1, r0	@ 00128e62 091a
.org 0x128e64
	ldr r0, [r2, #0]	@ 00128e64 1068
.org 0x128e66
	adds r1, r1, r0	@ 00128e66 0918
.org 0x128e68
	str r1, [r2, #0]	@ 00128e68 1160
.org 0x128e6a
	b.n 0x128e8a	@ 00128e6a 0ee0
.org 0x128e6c
	.byte 0xb0,0xd7,0x03,0x02	@ 00128e6c data
.org 0x128e70
	.byte 0x06,0x00,0x00,0x04	@ 00128e70 data
.org 0x128e74
	add r2, sp, #172	@ 00128e74 2baa
.org 0x128e76
	add r0, sp, #168	@ 00128e76 2aa8
.org 0x128e78
	ldrh r0, [r0, #0]	@ 00128e78 0088
.org 0x128e7a
	adds r0, #228	@ 00128e7a e430
.org 0x128e7c
	mov r1, sp	@ 00128e7c 6946
.org 0x128e7e
	adds r1, #166	@ 00128e7e a631
.org 0x128e80
	ldrh r1, [r1, #0]	@ 00128e80 0988
.org 0x128e82
	subs r0, r0, r1	@ 00128e82 401a
.org 0x128e84
	ldr r1, [r2, #0]	@ 00128e84 1168
.org 0x128e86
	adds r0, r0, r1	@ 00128e86 4018
.org 0x128e88
	str r0, [r2, #0]	@ 00128e88 1060
.org 0x128e8a
	add r0, sp, #172	@ 00128e8a 2ba8
.org 0x128e8c
	ldr r0, [r0, #0]	@ 00128e8c 0068
.org 0x128e8e
	cmp r0, #136	@ 00128e8e 8828
.org 0x128e90
	bls.n 0x128eb0	@ 00128e90 0ed9
.org 0x128e92
	add r0, sp, #164	@ 00128e92 29a8
.org 0x128e94
	ldrh r0, [r0, #0]	@ 00128e94 0088
.org 0x128e96
	cmp r0, #0	@ 00128e96 0028
.org 0x128e98
	bne.n 0x128eda	@ 00128e98 1fd1
.org 0x128e9a
	movs r0, #208	@ 00128e9a d020
.org 0x128e9c
	lsls r0, r0, #20	@ 00128e9c 0005
.org 0x128e9e
	ldrh r0, [r0, #0]	@ 00128e9e 0088
.org 0x128ea0
	movs r1, #1	@ 00128ea0 0121
.org 0x128ea2
	ands r0, r1	@ 00128ea2 0840
.org 0x128ea4
	cmp r0, #0	@ 00128ea4 0028
.org 0x128ea6
	bne.n 0x128eda	@ 00128ea6 18d1
.org 0x128ea8
	ldr r5, [pc, #0]	@ 00128ea8 004d
.org 0x128eaa
	b.n 0x128eda	@ 00128eaa 16e0
.org 0x128eac
	.byte 0x01,0xc0,0x00,0x00	@ 00128eac data
.org 0x128eb0
	mov r0, sp	@ 00128eb0 6846
.org 0x128eb2
	adds r0, #166	@ 00128eb2 a630
.org 0x128eb4
	add r1, sp, #168	@ 00128eb4 2aa9
.org 0x128eb6
	ldrh r1, [r1, #0]	@ 00128eb6 0988
.org 0x128eb8
	strh r1, [r0, #0]	@ 00128eb8 0180
.org 0x128eba
	add r2, sp, #164	@ 00128eba 29aa
.org 0x128ebc
	ldrh r0, [r2, #0]	@ 00128ebc 1088
.org 0x128ebe
	cmp r0, #0	@ 00128ebe 0028
.org 0x128ec0
	bne.n 0x128e40	@ 00128ec0 bed1
.org 0x128ec2
	movs r0, #208	@ 00128ec2 d020
.org 0x128ec4
	lsls r0, r0, #20	@ 00128ec4 0005
.org 0x128ec6
	movs r1, #1	@ 00128ec6 0121
.org 0x128ec8
	ldrh r0, [r0, #0]	@ 00128ec8 0088
.org 0x128eca
	ands r1, r0	@ 00128eca 0140
