@ FUN_08042e98  entry 0x08042e98  size 144
.thumb
.org 0x42e98
FUN_08042e98:
	push {r4, r5, r6, r7, lr}	@ 00042e98 f0b5
.org 0x42e9a
	adds r5, r0, #0	@ 00042e9a 051c
.org 0x42e9c
	ldr r6, [r5, #40]	@ 00042e9c ae6a
.org 0x42e9e
	ldr r7, [r5, #44]	@ 00042e9e ef6a
.org 0x42ea0
	ldrb r0, [r6, #12]	@ 00042ea0 307b
.org 0x42ea2
	cmp r0, #1	@ 00042ea2 0128
.org 0x42ea4
	bls.n 0x42ec0	@ 00042ea4 0cd9
.org 0x42ea6
	ldr r1, [pc, #20]	@ 00042ea6 0549
.org 0x42ea8
	ldrb r0, [r5, #9]	@ 00042ea8 687a
.org 0x42eaa
	lsls r0, r0, #2	@ 00042eaa 8000
.org 0x42eac
	adds r0, r0, r1	@ 00042eac 4018
.org 0x42eae
	movs r1, #2	@ 00042eae 0221
.org 0x42eb0
	str r1, [r5, #12]	@ 00042eb0 e960
.org 0x42eb2
	ldr r0, [r0, #0]	@ 00042eb2 0068
.org 0x42eb4
	ldr r0, [r0, #8]	@ 00042eb4 8068
.org 0x42eb6
	str r0, [r5, #20]	@ 00042eb6 6861
.org 0x42eb8
	b.n 0x42f28	@ 00042eb8 36e0
.org 0x42eba
	.byte 0x00	@ 00042eba data
.org 0x42ebb
	.byte 0x00	@ 00042ebb data
.org 0x42ebc
	.byte 0xf8,0x39,0x85,0x08	@ 00042ebc data
.org 0x42ec0
	adds r0, r5, #0	@ 00042ec0 281c
.org 0x42ec2
	bl 0x1cff0	@ 00042ec2 daf795f8
.org 0x42ec6
	ldrb r0, [r6, #10]	@ 00042ec6 b07a
.org 0x42ec8
	lsrs r2, r0, #4	@ 00042ec8 0209
.org 0x42eca
	movs r0, #1	@ 00042eca 0120
.org 0x42ecc
	ands r2, r0	@ 00042ecc 0240
.org 0x42ece
	cmp r2, #0	@ 00042ece 002a
.org 0x42ed0
	beq.n 0x42eda	@ 00042ed0 03d0
.org 0x42ed2
	ldrb r1, [r5, #10]	@ 00042ed2 a97a
.org 0x42ed4
	movs r0, #16	@ 00042ed4 1020
.org 0x42ed6
	orrs r0, r1	@ 00042ed6 0843
.org 0x42ed8
	b.n 0x42ee0	@ 00042ed8 02e0
.org 0x42eda
	ldrb r1, [r5, #10]	@ 00042eda a97a
.org 0x42edc
	movs r0, #239	@ 00042edc ef20
.org 0x42ede
	ands r0, r1	@ 00042ede 0840
.org 0x42ee0
	strb r0, [r5, #10]	@ 00042ee0 a872
.org 0x42ee2
	adds r1, r2, #0	@ 00042ee2 111c
.org 0x42ee4
	adds r0, r5, #0	@ 00042ee4 281c
.org 0x42ee6
	adds r0, #76	@ 00042ee6 4c30
.org 0x42ee8
	strb r1, [r0, #0]	@ 00042ee8 0170
.org 0x42eea
	adds r3, r5, #0	@ 00042eea 2b1c
.org 0x42eec
	adds r3, #74	@ 00042eec 4a33
.org 0x42eee
	lsls r1, r1, #4	@ 00042eee 0901
.org 0x42ef0
	ldrb r2, [r3, #0]	@ 00042ef0 1a78
.org 0x42ef2
	movs r0, #17	@ 00042ef2 1120
.org 0x42ef4
	negs r0, r0	@ 00042ef4 4042
.org 0x42ef6
	ands r0, r2	@ 00042ef6 1040
.org 0x42ef8
	orrs r0, r1	@ 00042ef8 0843
.org 0x42efa
	strb r0, [r3, #0]	@ 00042efa 1870
.org 0x42efc
	ldr r0, [r7, #84]	@ 00042efc 786d
.org 0x42efe
	ldr r4, [r6, #84]	@ 00042efe 746d
.org 0x42f00
	subs r0, r0, r4	@ 00042f00 001b
.org 0x42f02
	movs r1, #5	@ 00042f02 0521
.org 0x42f04
	bl 0x128fb8	@ 00042f04 e6f058f8
.org 0x42f08
	ldrb r1, [r5, #17]	@ 00042f08 697c
.org 0x42f0a
	adds r1, #1	@ 00042f0a 0131
.org 0x42f0c
	muls r0, r1	@ 00042f0c 4843
.org 0x42f0e
	adds r4, r4, r0	@ 00042f0e 2418
.org 0x42f10
	str r4, [r5, #84]	@ 00042f10 6c65
.org 0x42f12
	ldr r0, [r7, #88]	@ 00042f12 b86d
.org 0x42f14
	ldr r4, [r6, #88]	@ 00042f14 b46d
.org 0x42f16
	subs r0, r0, r4	@ 00042f16 001b
.org 0x42f18
	movs r1, #5	@ 00042f18 0521
.org 0x42f1a
	bl 0x128fb8	@ 00042f1a e6f04df8
.org 0x42f1e
	ldrb r1, [r5, #17]	@ 00042f1e 697c
.org 0x42f20
	adds r1, #1	@ 00042f20 0131
.org 0x42f22
	muls r0, r1	@ 00042f22 4843
.org 0x42f24
	adds r4, r4, r0	@ 00042f24 2418
.org 0x42f26
	str r4, [r5, #88]	@ 00042f26 ac65
