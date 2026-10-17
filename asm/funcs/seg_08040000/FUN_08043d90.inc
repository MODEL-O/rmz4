@ FUN_08043d90  entry 0x08043d90  size 608
.thumb
.org 0x43d90
FUN_08043d90:
	push {r4, r5, r6, r7, lr}	@ 00043d90 f0b5
.org 0x43d92
	mov r7, r8	@ 00043d92 4746
.org 0x43d94
	push {r7}	@ 00043d94 80b4
.org 0x43d96
	adds r5, r0, #0	@ 00043d96 051c
.org 0x43d98
	ldr r7, [r5, #40]	@ 00043d98 af6a
.org 0x43d9a
	bl 0x1cff0	@ 00043d9a d9f729f9
.org 0x43d9e
	ldrb r6, [r5, #13]	@ 00043d9e 6e7b
.org 0x43da0
	cmp r6, #0	@ 00043da0 002e
.org 0x43da2
	beq.n 0x43da6	@ 00043da2 00d0
.org 0x43da4
	b.n 0x43ea6	@ 00043da4 7fe0
.org 0x43da6
	ldrb r0, [r5, #18]	@ 00043da6 a87c
.org 0x43da8
	subs r0, #1	@ 00043da8 0138
.org 0x43daa
	movs r1, #0	@ 00043daa 0021
.org 0x43dac
	mov r8, r1	@ 00043dac 8846
.org 0x43dae
	strb r0, [r5, #18]	@ 00043dae a874
.org 0x43db0
	lsls r0, r0, #24	@ 00043db0 0006
.org 0x43db2
	lsrs r0, r0, #24	@ 00043db2 000e
.org 0x43db4
	cmp r0, #255	@ 00043db4 ff28
.org 0x43db6
	beq.n 0x43dba	@ 00043db6 00d0
.org 0x43db8
	b.n 0x44002	@ 00043db8 23e1
.org 0x43dba
	adds r4, r5, #0	@ 00043dba 2c1c
.org 0x43dbc
	adds r4, #84	@ 00043dbc 5434
.org 0x43dbe
	adds r0, r7, #0	@ 00043dbe 381c
.org 0x43dc0
	adds r1, r4, #0	@ 00043dc0 211c
.org 0x43dc2
	bl 0x41318	@ 00043dc2 fdf7a9fa
.org 0x43dc6
	lsls r0, r0, #24	@ 00043dc6 0006
.org 0x43dc8
	lsrs r2, r0, #24	@ 00043dc8 020e
.org 0x43dca
	mov ip, r4	@ 00043dca a446
.org 0x43dcc
	cmp r2, #0	@ 00043dcc 002a
.org 0x43dce
	beq.n 0x43e08	@ 00043dce 1bd0
.org 0x43dd0
	ldrb r1, [r5, #10]	@ 00043dd0 a97a
.org 0x43dd2
	movs r0, #254	@ 00043dd2 fe20
.org 0x43dd4
	ands r0, r1	@ 00043dd4 0840
.org 0x43dd6
	movs r1, #253	@ 00043dd6 fd21
.org 0x43dd8
	ands r0, r1	@ 00043dd8 0840
.org 0x43dda
	strb r0, [r5, #10]	@ 00043dda a872
.org 0x43ddc
	adds r0, r5, #0	@ 00043ddc 281c
.org 0x43dde
	adds r0, #140	@ 00043dde 8c30
.org 0x43de0
	str r6, [r0, #0]	@ 00043de0 0660
.org 0x43de2
	adds r0, #4	@ 00043de2 0430
.org 0x43de4
	str r6, [r0, #0]	@ 00043de4 0660
.org 0x43de6
	adds r0, #4	@ 00043de6 0430
.org 0x43de8
	strb r6, [r0, #0]	@ 00043de8 0670
.org 0x43dea
	ldrb r1, [r5, #10]	@ 00043dea a97a
.org 0x43dec
	movs r0, #251	@ 00043dec fb20
.org 0x43dee
	ands r0, r1	@ 00043dee 0840
.org 0x43df0
	strb r0, [r5, #10]	@ 00043df0 a872
.org 0x43df2
	ldr r1, [pc, #16]	@ 00043df2 0449
.org 0x43df4
	ldrb r0, [r5, #9]	@ 00043df4 687a
.org 0x43df6
	lsls r0, r0, #2	@ 00043df6 8000
.org 0x43df8
	adds r0, r0, r1	@ 00043df8 4018
.org 0x43dfa
	movs r1, #3	@ 00043dfa 0321
.org 0x43dfc
	str r1, [r5, #12]	@ 00043dfc e960
.org 0x43dfe
	ldr r0, [r0, #0]	@ 00043dfe 0068
.org 0x43e00
	ldr r0, [r0, #12]	@ 00043e00 c068
.org 0x43e02
	b.n 0x44000	@ 00043e02 fde0
.org 0x43e04
	.byte 0xf8,0x39,0x85,0x08	@ 00043e04 data
.org 0x43e08
	ldrb r0, [r5, #16]	@ 00043e08 287c
.org 0x43e0a
	cmp r0, #0	@ 00043e0a 0028
.org 0x43e0c
	bne.n 0x43e28	@ 00043e0c 0cd1
.org 0x43e0e
	ldr r1, [r5, #84]	@ 00043e0e 696d
.org 0x43e10
	ldr r0, [r7, #84]	@ 00043e10 786d
.org 0x43e12
	cmp r1, r0	@ 00043e12 8142
.org 0x43e14
	ble.n 0x43e1e	@ 00043e14 03dd
.org 0x43e16
	movs r0, #160	@ 00043e16 a020
.org 0x43e18
	lsls r0, r0, #2	@ 00043e18 8000
.org 0x43e1a
	str r0, [r5, #92]	@ 00043e1a e865
.org 0x43e1c
	b.n 0x43e32	@ 00043e1c 09e0
.org 0x43e1e
	ldr r0, [pc, #4]	@ 00043e1e 0148
.org 0x43e20
	str r0, [r5, #92]	@ 00043e20 e865
.org 0x43e22
	b.n 0x43e56	@ 00043e22 18e0
.org 0x43e24
	.byte 0x80,0xfd,0xff,0xff	@ 00043e24 data
.org 0x43e28
	str r2, [r5, #92]	@ 00043e28 ea65
.org 0x43e2a
	ldr r1, [r5, #84]	@ 00043e2a 696d
.org 0x43e2c
	ldr r0, [r7, #84]	@ 00043e2c 786d
.org 0x43e2e
	cmp r1, r0	@ 00043e2e 8142
.org 0x43e30
	ble.n 0x43e56	@ 00043e30 11dd
.org 0x43e32
	movs r2, #1	@ 00043e32 0122
.org 0x43e34
	ldrb r0, [r5, #10]	@ 00043e34 a87a
.org 0x43e36
	movs r1, #16	@ 00043e36 1021
.org 0x43e38
	orrs r0, r1	@ 00043e38 0843
.org 0x43e3a
	strb r0, [r5, #10]	@ 00043e3a a872
.org 0x43e3c
	adds r0, r5, #0	@ 00043e3c 281c
.org 0x43e3e
	adds r0, #76	@ 00043e3e 4c30
.org 0x43e40
	strb r2, [r0, #0]	@ 00043e40 0270
.org 0x43e42
	adds r3, r5, #0	@ 00043e42 2b1c
.org 0x43e44
	adds r3, #74	@ 00043e44 4a33
.org 0x43e46
	movs r2, #16	@ 00043e46 1022
.org 0x43e48
	ldrb r1, [r3, #0]	@ 00043e48 1978
.org 0x43e4a
	movs r0, #17	@ 00043e4a 1120
.org 0x43e4c
	negs r0, r0	@ 00043e4c 4042
.org 0x43e4e
	ands r0, r1	@ 00043e4e 0840
.org 0x43e50
	orrs r0, r2	@ 00043e50 1043
.org 0x43e52
	strb r0, [r3, #0]	@ 00043e52 1870
.org 0x43e54
	b.n 0x43e72	@ 00043e54 0de0
.org 0x43e56
	ldrb r1, [r5, #10]	@ 00043e56 a97a
.org 0x43e58
	movs r0, #239	@ 00043e58 ef20
.org 0x43e5a
	ands r0, r1	@ 00043e5a 0840
.org 0x43e5c
	strb r0, [r5, #10]	@ 00043e5c a872
.org 0x43e5e
	adds r0, r5, #0	@ 00043e5e 281c
.org 0x43e60
	adds r0, #76	@ 00043e60 4c30
.org 0x43e62
	strb r2, [r0, #0]	@ 00043e62 0270
.org 0x43e64
	adds r2, r5, #0	@ 00043e64 2a1c
.org 0x43e66
	adds r2, #74	@ 00043e66 4a32
.org 0x43e68
	ldrb r1, [r2, #0]	@ 00043e68 1178
.org 0x43e6a
	movs r0, #17	@ 00043e6a 1120
.org 0x43e6c
	negs r0, r0	@ 00043e6c 4042
.org 0x43e6e
	ands r0, r1	@ 00043e6e 0840
.org 0x43e70
	strb r0, [r2, #0]	@ 00043e70 1070
.org 0x43e72
	ldr r0, [pc, #116]	@ 00043e72 1d48
.org 0x43e74
	str r0, [r5, #96]	@ 00043e74 2866
.org 0x43e76
	ldrb r1, [r5, #10]	@ 00043e76 a97a
.org 0x43e78
	movs r0, #4	@ 00043e78 0420
.org 0x43e7a
	orrs r0, r1	@ 00043e7a 0843
.org 0x43e7c
	strb r0, [r5, #10]	@ 00043e7c a872
.org 0x43e7e
	adds r4, r5, #0	@ 00043e7e 2c1c
.org 0x43e80
	adds r4, #116	@ 00043e80 7434
.org 0x43e82
	ldr r1, [pc, #104]	@ 00043e82 1a49
.org 0x43e84
	adds r0, r4, #0	@ 00043e84 201c
.org 0x43e86
	mov r2, ip	@ 00043e86 6246
.org 0x43e88
	movs r3, #8	@ 00043e88 0823
.org 0x43e8a
	bl 0x5760	@ 00043e8a c1f769fc
.org 0x43e8e
	str r5, [r4, #44]	@ 00043e8e e562
.org 0x43e90
	ldr r0, [pc, #92]	@ 00043e90 1748
.org 0x43e92
	str r0, [r4, #36]	@ 00043e92 6062
.org 0x43e94
	ldrb r1, [r5, #10]	@ 00043e94 a97a
.org 0x43e96
	movs r0, #1	@ 00043e96 0120
.org 0x43e98
	orrs r0, r1	@ 00043e98 0843
.org 0x43e9a
	strb r0, [r5, #10]	@ 00043e9a a872
.org 0x43e9c
	adds r0, r7, #0	@ 00043e9c 381c
.org 0x43e9e
	bl 0x3aa4c	@ 00043e9e f6f7d5fd
.org 0x43ea2
	movs r0, #1	@ 00043ea2 0120
.org 0x43ea4
	strb r0, [r5, #13]	@ 00043ea4 6873
.org 0x43ea6
	ldr r1, [r5, #84]	@ 00043ea6 696d
.org 0x43ea8
	ldr r0, [r5, #92]	@ 00043ea8 e86d
.org 0x43eaa
	adds r2, r1, r0	@ 00043eaa 0a18
.org 0x43eac
	str r2, [r5, #84]	@ 00043eac 6a65
.org 0x43eae
	ldrb r1, [r5, #10]	@ 00043eae a97a
.org 0x43eb0
	movs r0, #16	@ 00043eb0 1020
.org 0x43eb2
	ands r0, r1	@ 00043eb2 0840
.org 0x43eb4
	lsls r0, r0, #24	@ 00043eb4 0006
.org 0x43eb6
	lsrs r4, r0, #24	@ 00043eb6 040e
.org 0x43eb8
	cmp r4, #0	@ 00043eb8 002c
.org 0x43eba
	beq.n 0x43ef4	@ 00043eba 1bd0
.org 0x43ebc
	movs r1, #128	@ 00043ebc 8021
.org 0x43ebe
	lsls r1, r1, #3	@ 00043ebe c900
.org 0x43ec0
	adds r0, r2, r1	@ 00043ec0 5018
.org 0x43ec2
	ldr r1, [r5, #88]	@ 00043ec2 a96d
.org 0x43ec4
	bl 0x4409c	@ 00043ec4 00f0eaf8
.org 0x43ec8
	lsls r0, r0, #16	@ 00043ec8 0004
.org 0x43eca
	cmp r0, #0	@ 00043eca 0028
.org 0x43ecc
	beq.n 0x43f18	@ 00043ecc 24d0
.org 0x43ece
	ldr r0, [r5, #84]	@ 00043ece 686d
.org 0x43ed0
	movs r2, #128	@ 00043ed0 8022
.org 0x43ed2
	lsls r2, r2, #3	@ 00043ed2 d200
.org 0x43ed4
	adds r0, r0, r2	@ 00043ed4 8018
.org 0x43ed6
	ldr r1, [r5, #88]	@ 00043ed6 a96d
.org 0x43ed8
	bl 0x816c	@ 00043ed8 c4f748f9
.org 0x43edc
	ldr r1, [r5, #84]	@ 00043edc 696d
.org 0x43ede
	adds r1, r1, r0	@ 00043ede 0918
.org 0x43ee0
	str r1, [r5, #84]	@ 00043ee0 6965
.org 0x43ee2
	movs r0, #0	@ 00043ee2 0020
.org 0x43ee4
	str r0, [r5, #92]	@ 00043ee4 e865
.org 0x43ee6
	b.n 0x43f18	@ 00043ee6 17e0
.org 0x43ee8
	.byte 0x00,0xfc,0xff,0xff	@ 00043ee8 data
.org 0x43eec
	.byte 0x44,0x5d,0x85,0x08	@ 00043eec data
.org 0x43ef0
	.byte 0x71,0x40,0x04,0x08	@ 00043ef0 data
.org 0x43ef4
	ldr r1, [pc, #172]	@ 00043ef4 2b49
.org 0x43ef6
	adds r0, r2, r1	@ 00043ef6 5018
.org 0x43ef8
	ldr r1, [r5, #88]	@ 00043ef8 a96d
.org 0x43efa
	bl 0x4409c	@ 00043efa 00f0cff8
.org 0x43efe
	lsls r0, r0, #16	@ 00043efe 0004
.org 0x43f00
	cmp r0, #0	@ 00043f00 0028
.org 0x43f02
	beq.n 0x43f18	@ 00043f02 09d0
.org 0x43f04
	ldr r0, [r5, #84]	@ 00043f04 686d
.org 0x43f06
	ldr r2, [pc, #156]	@ 00043f06 274a
.org 0x43f08
	adds r0, r0, r2	@ 00043f08 8018
.org 0x43f0a
	ldr r1, [r5, #88]	@ 00043f0a a96d
.org 0x43f0c
	bl 0x834c	@ 00043f0c c4f71efa
.org 0x43f10
	ldr r1, [r5, #84]	@ 00043f10 696d
.org 0x43f12
	adds r1, r1, r0	@ 00043f12 0918
.org 0x43f14
	str r1, [r5, #84]	@ 00043f14 6965
.org 0x43f16
	str r4, [r5, #92]	@ 00043f16 ec65
.org 0x43f18
	ldr r0, [r5, #96]	@ 00043f18 286e
.org 0x43f1a
	adds r0, #64	@ 00043f1a 4030
.org 0x43f1c
	str r0, [r5, #96]	@ 00043f1c 2866
.org 0x43f1e
	movs r1, #224	@ 00043f1e e021
.org 0x43f20
	lsls r1, r1, #3	@ 00043f20 c900
.org 0x43f22
	cmp r0, r1	@ 00043f22 8842
.org 0x43f24
	ble.n 0x43f28	@ 00043f24 00dd
.org 0x43f26
	str r1, [r5, #96]	@ 00043f26 2966
.org 0x43f28
	ldr r1, [r5, #88]	@ 00043f28 a96d
.org 0x43f2a
	ldr r0, [r5, #96]	@ 00043f2a 286e
.org 0x43f2c
	adds r1, r1, r0	@ 00043f2c 0918
.org 0x43f2e
	str r1, [r5, #88]	@ 00043f2e a965
.org 0x43f30
	ldr r0, [r5, #84]	@ 00043f30 686d
.org 0x43f32
	movs r2, #128	@ 00043f32 8022
.org 0x43f34
	lsls r2, r2, #3	@ 00043f34 d200
.org 0x43f36
	adds r1, r1, r2	@ 00043f36 8918
.org 0x43f38
	bl 0x4409c	@ 00043f38 00f0b0f8
.org 0x43f3c
	lsls r0, r0, #16	@ 00043f3c 0004
.org 0x43f3e
	cmp r0, #0	@ 00043f3e 0028
.org 0x43f40
	beq.n 0x43f5c	@ 00043f40 0cd0
.org 0x43f42
	ldr r0, [r5, #84]	@ 00043f42 686d
.org 0x43f44
	ldr r1, [r5, #88]	@ 00043f44 a96d
.org 0x43f46
	movs r2, #128	@ 00043f46 8022
.org 0x43f48
	lsls r2, r2, #3	@ 00043f48 d200
.org 0x43f4a
	adds r1, r1, r2	@ 00043f4a 8918
.org 0x43f4c
	bl 0x7db4	@ 00043f4c c3f732ff
.org 0x43f50
	ldr r1, [r5, #88]	@ 00043f50 a96d
.org 0x43f52
	adds r1, r1, r0	@ 00043f52 0918
.org 0x43f54
	str r1, [r5, #88]	@ 00043f54 a965
.org 0x43f56
	movs r0, #0	@ 00043f56 0020
.org 0x43f58
	str r0, [r5, #96]	@ 00043f58 2866
.org 0x43f5a
	str r0, [r5, #92]	@ 00043f5a e865
.org 0x43f5c
	ldr r0, [r5, #84]	@ 00043f5c 686d
.org 0x43f5e
	ldr r1, [r5, #88]	@ 00043f5e a96d
.org 0x43f60
	ldr r2, [pc, #64]	@ 00043f60 104a
.org 0x43f62
	adds r1, r1, r2	@ 00043f62 8918
.org 0x43f64
	bl 0x4409c	@ 00043f64 00f09af8
.org 0x43f68
	lsls r0, r0, #16	@ 00043f68 0004
.org 0x43f6a
	cmp r0, #0	@ 00043f6a 0028
.org 0x43f6c
	beq.n 0x43f86	@ 00043f6c 0bd0
.org 0x43f6e
	ldr r0, [r5, #84]	@ 00043f6e 686d
.org 0x43f70
	ldr r1, [r5, #88]	@ 00043f70 a96d
.org 0x43f72
	ldr r2, [pc, #48]	@ 00043f72 0c4a
.org 0x43f74
	adds r1, r1, r2	@ 00043f74 8918
.org 0x43f76
	bl 0x7f8c	@ 00043f76 c4f709f8
.org 0x43f7a
	ldr r1, [r5, #88]	@ 00043f7a a96d
.org 0x43f7c
	adds r1, r1, r0	@ 00043f7c 0918
.org 0x43f7e
	str r1, [r5, #88]	@ 00043f7e a965
.org 0x43f80
	movs r0, #0	@ 00043f80 0020
.org 0x43f82
	str r0, [r5, #96]	@ 00043f82 2866
.org 0x43f84
	str r0, [r5, #92]	@ 00043f84 e865
.org 0x43f86
	ldrb r1, [r5, #19]	@ 00043f86 e97c
.org 0x43f88
	cmp r1, #23	@ 00043f88 1729
.org 0x43f8a
	bhi.n 0x43fba	@ 00043f8a 16d8
.org 0x43f8c
	movs r0, #3	@ 00043f8c 0320
.org 0x43f8e
	ands r0, r1	@ 00043f8e 0840
.org 0x43f90
	cmp r0, #1	@ 00043f90 0128
.org 0x43f92
	bls.n 0x43fac	@ 00043f92 0bd9
.org 0x43f94
	ldr r1, [pc, #16]	@ 00043f94 0449
.org 0x43f96
	adds r0, r5, #0	@ 00043f96 281c
.org 0x43f98
	bl 0x1cf00	@ 00043f98 d8f7b2ff
.org 0x43f9c
	adds r0, r5, #0	@ 00043f9c 281c
.org 0x43f9e
	bl 0x1cff0	@ 00043f9e d9f727f8
.org 0x43fa2
	b.n 0x43fba	@ 00043fa2 0ae0
.org 0x43fa4
	.byte 0x00,0xfc,0xff,0xff	@ 00043fa4 data
.org 0x43fa8
	.byte 0x2b,0x80,0x00,0x00	@ 00043fa8 data
.org 0x43fac
	ldr r1, [pc, #92]	@ 00043fac 1749
.org 0x43fae
	adds r0, r5, #0	@ 00043fae 281c
.org 0x43fb0
	bl 0x1cf00	@ 00043fb0 d8f7a6ff
.org 0x43fb4
	adds r0, r5, #0	@ 00043fb4 281c
.org 0x43fb6
	bl 0x1cff0	@ 00043fb6 d9f71bf8
.org 0x43fba
	ldrb r0, [r5, #19]	@ 00043fba e87c
.org 0x43fbc
	subs r0, #1	@ 00043fbc 0138
.org 0x43fbe
	strb r0, [r5, #19]	@ 00043fbe e874
.org 0x43fc0
	lsls r0, r0, #24	@ 00043fc0 0006
.org 0x43fc2
	lsrs r0, r0, #24	@ 00043fc2 000e
.org 0x43fc4
	cmp r0, #255	@ 00043fc4 ff28
.org 0x43fc6
	beq.n 0x43fd6	@ 00043fc6 06d0
.org 0x43fc8
	adds r0, r5, #0	@ 00043fc8 281c
.org 0x43fca
	adds r0, #140	@ 00043fca 8c30
.org 0x43fcc
	ldr r0, [r0, #0]	@ 00043fcc 0068
.org 0x43fce
	ldr r1, [pc, #64]	@ 00043fce 1049
.org 0x43fd0
	ands r0, r1	@ 00043fd0 0840
.org 0x43fd2
	cmp r0, #0	@ 00043fd2 0028
.org 0x43fd4
	beq.n 0x44002	@ 00043fd4 15d0
.org 0x43fd6
	adds r1, r5, #0	@ 00043fd6 291c
.org 0x43fd8
	adds r1, #84	@ 00043fd8 5431
.org 0x43fda
	movs r0, #1	@ 00043fda 0120
.org 0x43fdc
	bl 0xd0c88	@ 00043fdc 8cf054fe
.org 0x43fe0
	movs r0, #53	@ 00043fe0 3520
.org 0x43fe2
	bl 0x2b10	@ 00043fe2 bef795fd
.org 0x43fe6
	adds r0, r5, #0	@ 00043fe6 281c
.org 0x43fe8
	adds r0, #116	@ 00043fe8 7430
.org 0x43fea
	ldr r1, [pc, #40]	@ 00043fea 0a49
.org 0x43fec
	bl 0x5784	@ 00043fec c1f7cafb
