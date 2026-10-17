@ FUN_080b8e28  entry 0x080b8e28  size 268
.thumb
.org 0xb8e28
FUN_080b8e28:
	push {r4, r5, r6, r7, lr}	@ 000b8e28 f0b5
.org 0xb8e2a
	mov r7, sl	@ 000b8e2a 5746
.org 0xb8e2c
	mov r6, r9	@ 000b8e2c 4e46
.org 0xb8e2e
	mov r5, r8	@ 000b8e2e 4546
.org 0xb8e30
	push {r5, r6, r7}	@ 000b8e30 e0b4
.org 0xb8e32
	adds r7, r0, #0	@ 000b8e32 071c
.org 0xb8e34
	ldr r1, [pc, #252]	@ 000b8e34 3f49
.org 0xb8e36
	ldrb r0, [r7, #9]	@ 000b8e36 787a
.org 0xb8e38
	lsls r0, r0, #2	@ 000b8e38 8000
.org 0xb8e3a
	adds r0, r0, r1	@ 000b8e3a 4018
.org 0xb8e3c
	movs r1, #1	@ 000b8e3c 0121
.org 0xb8e3e
	str r1, [r7, #12]	@ 000b8e3e f960
.org 0xb8e40
	ldr r0, [r0, #0]	@ 000b8e40 0068
.org 0xb8e42
	ldr r0, [r0, #4]	@ 000b8e42 4068
.org 0xb8e44
	str r0, [r7, #20]	@ 000b8e44 7861
.org 0xb8e46
	movs r2, #0	@ 000b8e46 0022
.org 0xb8e48
	strb r2, [r7, #13]	@ 000b8e48 7a73
.org 0xb8e4a
	strb r2, [r7, #14]	@ 000b8e4a ba73
.org 0xb8e4c
	strb r2, [r7, #15]	@ 000b8e4c fa73
.org 0xb8e4e
	ldrb r0, [r7, #10]	@ 000b8e4e b87a
.org 0xb8e50
	orrs r0, r1	@ 000b8e50 0843
.org 0xb8e52
	movs r1, #2	@ 000b8e52 0221
.org 0xb8e54
	orrs r0, r1	@ 000b8e54 0843
.org 0xb8e56
	strb r0, [r7, #10]	@ 000b8e56 b872
.org 0xb8e58
	ldr r5, [pc, #220]	@ 000b8e58 374d
.org 0xb8e5a
	ldr r0, [pc, #224]	@ 000b8e5a 3848
.org 0xb8e5c
	mov r9, r0	@ 000b8e5c 8146
.org 0xb8e5e
	adds r0, r5, r0	@ 000b8e5e 2818
.org 0xb8e60
	ldr r1, [pc, #220]	@ 000b8e60 3749
.org 0xb8e62
	mov r8, r1	@ 000b8e62 8846
.org 0xb8e64
	movs r4, #182	@ 000b8e64 b624
.org 0xb8e66
	lsls r4, r4, #1	@ 000b8e66 6400
.org 0xb8e68
	adds r1, r1, r4	@ 000b8e68 0919
.org 0xb8e6a
	ldrh r1, [r1, #0]	@ 000b8e6a 0988
.org 0xb8e6c
	ldrh r2, [r0, #6]	@ 000b8e6c c288
.org 0xb8e6e
	lsrs r2, r2, #6	@ 000b8e6e 9209
.org 0xb8e70
	subs r1, r1, r2	@ 000b8e70 891a
.org 0xb8e72
	lsls r1, r1, #5	@ 000b8e72 4901
.org 0xb8e74
	movs r2, #128	@ 000b8e74 8022
.org 0xb8e76
	lsls r2, r2, #9	@ 000b8e76 5202
.org 0xb8e78
	adds r1, r1, r2	@ 000b8e78 8918
.org 0xb8e7a
	bl 0x1d30	@ 000b8e7a 48f759ff
.org 0xb8e7e
	ldr r0, [pc, #196]	@ 000b8e7e 3148
.org 0xb8e80
	adds r5, r5, r0	@ 000b8e80 2d18
.org 0xb8e82
	ldr r6, [pc, #196]	@ 000b8e82 314e
.org 0xb8e84
	adds r4, r6, r4	@ 000b8e84 3419
.org 0xb8e86
	ldrh r1, [r4, #0]	@ 000b8e86 2188
.org 0xb8e88
	ldrb r0, [r5, #7]	@ 000b8e88 e879
.org 0xb8e8a
	subs r1, r1, r0	@ 000b8e8a 091a
.org 0xb8e8c
	lsls r1, r1, #5	@ 000b8e8c 4901
.org 0xb8e8e
	movs r2, #128	@ 000b8e8e 8022
.org 0xb8e90
	lsls r2, r2, #2	@ 000b8e90 9200
.org 0xb8e92
	mov sl, r2	@ 000b8e92 9246
.org 0xb8e94
	add r1, sl	@ 000b8e94 5144
.org 0xb8e96
	adds r0, r5, #0	@ 000b8e96 281c
.org 0xb8e98
	bl 0x2208	@ 000b8e98 49f7b6f9
.org 0xb8e9c
	ldr r4, [pc, #172]	@ 000b8e9c 2b4c
.org 0xb8e9e
	add r9, r4	@ 000b8e9e a144
.org 0xb8ea0
	movs r5, #231	@ 000b8ea0 e725
.org 0xb8ea2
	lsls r5, r5, #1	@ 000b8ea2 6d00
.org 0xb8ea4
	add r8, r5	@ 000b8ea4 a844
.org 0xb8ea6
	mov r0, r8	@ 000b8ea6 4046
.org 0xb8ea8
	ldrh r1, [r0, #0]	@ 000b8ea8 0188
.org 0xb8eaa
	mov r2, r9	@ 000b8eaa 4a46
.org 0xb8eac
	ldrh r0, [r2, #6]	@ 000b8eac d088
.org 0xb8eae
	lsrs r0, r0, #6	@ 000b8eae 8009
.org 0xb8eb0
	subs r1, r1, r0	@ 000b8eb0 091a
.org 0xb8eb2
	lsls r1, r1, #5	@ 000b8eb2 4901
.org 0xb8eb4
	movs r0, #128	@ 000b8eb4 8020
.org 0xb8eb6
	lsls r0, r0, #9	@ 000b8eb6 4002
.org 0xb8eb8
	adds r1, r1, r0	@ 000b8eb8 0918
.org 0xb8eba
	mov r0, r9	@ 000b8eba 4846
.org 0xb8ebc
	bl 0x1d30	@ 000b8ebc 48f738ff
.org 0xb8ec0
	ldr r1, [pc, #128]	@ 000b8ec0 2049
.org 0xb8ec2
	adds r4, r4, r1	@ 000b8ec2 6418
.org 0xb8ec4
	adds r6, r6, r5	@ 000b8ec4 7619
.org 0xb8ec6
	ldrh r1, [r6, #0]	@ 000b8ec6 3188
.org 0xb8ec8
	ldrb r0, [r4, #7]	@ 000b8ec8 e079
.org 0xb8eca
	subs r1, r1, r0	@ 000b8eca 091a
.org 0xb8ecc
	lsls r1, r1, #5	@ 000b8ecc 4901
.org 0xb8ece
	add r1, sl	@ 000b8ece 5144
.org 0xb8ed0
	adds r0, r4, #0	@ 000b8ed0 201c
.org 0xb8ed2
	bl 0x2208	@ 000b8ed2 49f799f9
.org 0xb8ed6
	adds r0, r7, #0	@ 000b8ed6 381c
.org 0xb8ed8
	bl 0x1cc9c	@ 000b8ed8 63f7e0fe
.org 0xb8edc
	adds r0, r7, #0	@ 000b8edc 381c
.org 0xb8ede
	adds r0, #37	@ 000b8ede 2530
.org 0xb8ee0
	movs r2, #1	@ 000b8ee0 0122
.org 0xb8ee2
	strb r2, [r0, #0]	@ 000b8ee2 0270
.org 0xb8ee4
	ldrb r1, [r7, #10]	@ 000b8ee4 b97a
.org 0xb8ee6
	movs r0, #239	@ 000b8ee6 ef20
.org 0xb8ee8
	ands r0, r1	@ 000b8ee8 0840
.org 0xb8eea
	strb r0, [r7, #10]	@ 000b8eea b872
.org 0xb8eec
	adds r0, r7, #0	@ 000b8eec 381c
.org 0xb8eee
	adds r0, #76	@ 000b8eee 4c30
.org 0xb8ef0
	movs r1, #0	@ 000b8ef0 0021
.org 0xb8ef2
	strb r1, [r0, #0]	@ 000b8ef2 0170
.org 0xb8ef4
	adds r2, r7, #0	@ 000b8ef4 3a1c
.org 0xb8ef6
	adds r2, #74	@ 000b8ef6 4a32
.org 0xb8ef8
	ldrb r1, [r2, #0]	@ 000b8ef8 1178
.org 0xb8efa
	movs r0, #17	@ 000b8efa 1120
.org 0xb8efc
	negs r0, r0	@ 000b8efc 4042
.org 0xb8efe
	ands r0, r1	@ 000b8efe 0840
.org 0xb8f00
	strb r0, [r2, #0]	@ 000b8f00 1070
.org 0xb8f02
	ldrb r1, [r7, #10]	@ 000b8f02 b97a
.org 0xb8f04
	movs r0, #4	@ 000b8f04 0420
.org 0xb8f06
	orrs r0, r1	@ 000b8f06 0843
.org 0xb8f08
	strb r0, [r7, #10]	@ 000b8f08 b872
.org 0xb8f0a
	adds r4, r7, #0	@ 000b8f0a 3c1c
.org 0xb8f0c
	adds r4, #116	@ 000b8f0c 7434
.org 0xb8f0e
	ldr r1, [pc, #64]	@ 000b8f0e 1049
.org 0xb8f10
	adds r2, #10	@ 000b8f10 0a32
.org 0xb8f12
	adds r0, r4, #0	@ 000b8f12 201c
.org 0xb8f14
	movs r3, #64	@ 000b8f14 4023
.org 0xb8f16
	bl 0x5760	@ 000b8f16 4cf723fc
.org 0xb8f1a
	str r7, [r4, #44]	@ 000b8f1a e762
.org 0xb8f1c
	movs r2, #0	@ 000b8f1c 0022
.org 0xb8f1e
	str r2, [r4, #36]	@ 000b8f1e 6262
.org 0xb8f20
	adds r0, r7, #0	@ 000b8f20 381c
.org 0xb8f22
	bl 0xb8f54	@ 000b8f22 00f017f8
.org 0xb8f26
	pop {r3, r4, r5}	@ 000b8f26 38bc
.org 0xb8f28
	mov r8, r3	@ 000b8f28 9846
.org 0xb8f2a
	mov r9, r4	@ 000b8f2a a146
.org 0xb8f2c
	mov sl, r5	@ 000b8f2c aa46
.org 0xb8f2e
	pop {r4, r5, r6, r7}	@ 000b8f2e f0bc
.org 0xb8f30
	pop {r0}	@ 000b8f30 01bc
.org 0xb8f32
	bx r0	@ 000b8f32 0047
