@ FUN_08062e4c  entry 0x08062e4c  size 356
.thumb
.org 0x62e4c
FUN_08062e4c:
	push {r4, r5, r6, r7, lr}	@ 00062e4c f0b5
.org 0x62e4e
	sub sp, #48	@ 00062e4e 8cb0
.org 0x62e50
	adds r6, r0, #0	@ 00062e50 061c
.org 0x62e52
	ldr r1, [pc, #88]	@ 00062e52 1649
.org 0x62e54
	mov r0, sp	@ 00062e54 6846
.org 0x62e56
	movs r2, #32	@ 00062e56 2022
.org 0x62e58
	bl 0x129258	@ 00062e58 c6f0fef9
.org 0x62e5c
	movs r7, #1	@ 00062e5c 0127
.org 0x62e5e
	ldrb r0, [r6, #15]	@ 00062e5e f07b
.org 0x62e60
	cmp r0, #0	@ 00062e60 0028
.org 0x62e62
	bne.n 0x62f02	@ 00062e62 4ed1
.org 0x62e64
	adds r0, r6, #0	@ 00062e64 301c
.org 0x62e66
	bl 0x66204	@ 00062e66 03f0cdf9
.org 0x62e6a
	adds r5, r0, #0	@ 00062e6a 051c
.org 0x62e6c
	add r0, sp, #32	@ 00062e6c 08a8
.org 0x62e6e
	adds r1, r6, #0	@ 00062e6e 311c
.org 0x62e70
	adds r2, r5, #0	@ 00062e70 2a1c
.org 0x62e72
	bl 0x6630c	@ 00062e72 03f04bfa
.org 0x62e76
	ldr r0, [sp, #32]	@ 00062e76 0898
.org 0x62e78
	ldr r1, [sp, #36]	@ 00062e78 0999
.org 0x62e7a
	str r0, [sp, #40]	@ 00062e7a 0a90
.org 0x62e7c
	str r1, [sp, #44]	@ 00062e7c 0b91
.org 0x62e7e
	ldr r0, [pc, #48]	@ 00062e7e 0c48
.org 0x62e80
	ldr r0, [r0, #0]	@ 00062e80 0068
.org 0x62e82
	ldrb r0, [r0, #10]	@ 00062e82 807a
.org 0x62e84
	lsrs r0, r0, #4	@ 00062e84 0009
.org 0x62e86
	adds r4, r7, #0	@ 00062e86 3c1c
.org 0x62e88
	bics r4, r0	@ 00062e88 8443
.org 0x62e8a
	add r1, sp, #40	@ 00062e8a 0aa9
.org 0x62e8c
	adds r0, r6, #0	@ 00062e8c 301c
.org 0x62e8e
	movs r2, #1	@ 00062e8e 0122
.org 0x62e90
	adds r3, r4, #0	@ 00062e90 231c
.org 0x62e92
	bl 0x9b734	@ 00062e92 38f04ffc
.org 0x62e96
	adds r1, r0, #0	@ 00062e96 011c
.org 0x62e98
	adds r0, r6, #0	@ 00062e98 301c
.org 0x62e9a
	adds r0, #196	@ 00062e9a c430
.org 0x62e9c
	str r1, [r0, #0]	@ 00062e9c 0160
.org 0x62e9e
	cmp r1, #0	@ 00062e9e 0029
.org 0x62ea0
	bne.n 0x62eb4	@ 00062ea0 08d1
.org 0x62ea2
	movs r0, #6	@ 00062ea2 0620
.org 0x62ea4
	strb r0, [r6, #13]	@ 00062ea4 7073
.org 0x62ea6
	strb r1, [r6, #14]	@ 00062ea6 b173
.org 0x62ea8
	b.n 0x62fbe	@ 00062ea8 89e0
.org 0x62eaa
	.byte 0x00	@ 00062eaa data
.org 0x62eab
	.byte 0x00	@ 00062eab data
.org 0x62eac
	.byte 0x28,0x98,0x12,0x08	@ 00062eac data
.org 0x62eb0
	.byte 0xf0,0xdb,0x02,0x02	@ 00062eb0 data
.org 0x62eb4
	adds r0, r6, #0	@ 00062eb4 301c
.org 0x62eb6
	movs r1, #25	@ 00062eb6 1921
.org 0x62eb8
	bl 0x65a94	@ 00062eb8 02f0ecfd
.org 0x62ebc
	adds r1, r4, #0	@ 00062ebc 211c
.org 0x62ebe
	ands r1, r7	@ 00062ebe 3940
.org 0x62ec0
	adds r0, r6, #0	@ 00062ec0 301c
.org 0x62ec2
	adds r0, #76	@ 00062ec2 4c30
.org 0x62ec4
	strb r1, [r0, #0]	@ 00062ec4 0170
.org 0x62ec6
	adds r3, r6, #0	@ 00062ec6 331c
.org 0x62ec8
	adds r3, #74	@ 00062ec8 4a33
.org 0x62eca
	lsls r1, r1, #4	@ 00062eca 0901
.org 0x62ecc
	ldrb r2, [r3, #0]	@ 00062ecc 1a78
.org 0x62ece
	movs r0, #17	@ 00062ece 1120
.org 0x62ed0
	negs r0, r0	@ 00062ed0 4042
.org 0x62ed2
	ands r0, r2	@ 00062ed2 1040
.org 0x62ed4
	orrs r0, r1	@ 00062ed4 0843
.org 0x62ed6
	strb r0, [r3, #0]	@ 00062ed6 1870
.org 0x62ed8
	ands r4, r7	@ 00062ed8 3c40
.org 0x62eda
	cmp r4, #0	@ 00062eda 002c
.org 0x62edc
	beq.n 0x62ee6	@ 00062edc 03d0
.org 0x62ede
	ldrb r0, [r6, #10]	@ 00062ede b07a
.org 0x62ee0
	movs r1, #16	@ 00062ee0 1021
.org 0x62ee2
	orrs r0, r1	@ 00062ee2 0843
.org 0x62ee4
	b.n 0x62eec	@ 00062ee4 02e0
.org 0x62ee6
	ldrb r1, [r6, #10]	@ 00062ee6 b17a
.org 0x62ee8
	movs r0, #239	@ 00062ee8 ef20
.org 0x62eea
	ands r0, r1	@ 00062eea 0840
.org 0x62eec
	strb r0, [r6, #10]	@ 00062eec b072
.org 0x62eee
	ldr r0, [sp, #40]	@ 00062eee 0a98
.org 0x62ef0
	ldr r1, [sp, #44]	@ 00062ef0 0b99
.org 0x62ef2
	str r0, [r6, #84]	@ 00062ef2 7065
.org 0x62ef4
	str r1, [r6, #88]	@ 00062ef4 b165
.org 0x62ef6
	movs r0, #32	@ 00062ef6 2020
.org 0x62ef8
	strb r0, [r6, #18]	@ 00062ef8 b074
.org 0x62efa
	strb r5, [r6, #19]	@ 00062efa f574
.org 0x62efc
	ldrb r0, [r6, #15]	@ 00062efc f07b
.org 0x62efe
	adds r0, #1	@ 00062efe 0130
.org 0x62f00
	strb r0, [r6, #15]	@ 00062f00 f073
.org 0x62f02
	adds r0, r6, #0	@ 00062f02 301c
.org 0x62f04
	bl 0x1cff0	@ 00062f04 baf774f8
.org 0x62f08
	adds r0, r6, #0	@ 00062f08 301c
.org 0x62f0a
	adds r0, #116	@ 00062f0a 7430
.org 0x62f0c
	ldr r4, [pc, #156]	@ 00062f0c 274c
.org 0x62f0e
	ldr r3, [pc, #160]	@ 00062f0e 284b
.org 0x62f10
	adds r1, r6, #0	@ 00062f10 311c
.org 0x62f12
	adds r1, #180	@ 00062f12 b431
.org 0x62f14
	ldrb r2, [r1, #0]	@ 00062f14 0a78
.org 0x62f16
	lsls r1, r2, #1	@ 00062f16 5100
.org 0x62f18
	adds r1, r1, r3	@ 00062f18 c918
.org 0x62f1a
	ldrh r1, [r1, #0]	@ 00062f1a 0988
.org 0x62f1c
	lsls r1, r1, #2	@ 00062f1c 8900
.org 0x62f1e
	adds r1, r1, r4	@ 00062f1e 0919
.org 0x62f20
	adds r3, r6, #0	@ 00062f20 331c
.org 0x62f22
	adds r3, #113	@ 00062f22 7133
.org 0x62f24
	movs r5, #0	@ 00062f24 0025
.org 0x62f26
	ldrsb r5, [r3, r5]	@ 00062f26 5d57
.org 0x62f28
	ldr r1, [r1, #0]	@ 00062f28 0968
.org 0x62f2a
	lsls r3, r5, #2	@ 00062f2a ab00
.org 0x62f2c
	adds r3, r3, r1	@ 00062f2c 5b18
.org 0x62f2e
	ldr r4, [pc, #132]	@ 00062f2e 214c
.org 0x62f30
	adds r1, r6, #0	@ 00062f30 311c
.org 0x62f32
	adds r1, #181	@ 00062f32 b531
.org 0x62f34
	ldrb r1, [r1, #0]	@ 00062f34 0978
.org 0x62f36
	lsls r1, r1, #2	@ 00062f36 8900
.org 0x62f38
	adds r1, r1, r4	@ 00062f38 0919
.org 0x62f3a
	ldr r1, [r1, #0]	@ 00062f3a 0968
.org 0x62f3c
	lsls r2, r2, #2	@ 00062f3c 9200
.org 0x62f3e
	adds r2, r2, r1	@ 00062f3e 5218
.org 0x62f40
	ldr r1, [r2, #0]	@ 00062f40 1168
.org 0x62f42
	adds r1, r1, r5	@ 00062f42 4919
.org 0x62f44
	ldrb r1, [r1, #0]	@ 00062f44 0978
.org 0x62f46
	lsls r2, r1, #1	@ 00062f46 4a00
.org 0x62f48
	adds r2, r2, r1	@ 00062f48 5218
.org 0x62f4a
	lsls r2, r2, #3	@ 00062f4a d200
.org 0x62f4c
	ldr r1, [r3, #0]	@ 00062f4c 1968
.org 0x62f4e
	adds r1, r1, r2	@ 00062f4e 8918
.org 0x62f50
	bl 0x5784	@ 00062f50 a2f718fc
.org 0x62f54
	ldrb r0, [r6, #18]	@ 00062f54 b07c
.org 0x62f56
	subs r0, #1	@ 00062f56 0138
.org 0x62f58
	strb r0, [r6, #18]	@ 00062f58 b074
.org 0x62f5a
	lsls r0, r0, #24	@ 00062f5a 0006
.org 0x62f5c
	cmp r0, #0	@ 00062f5c 0028
.org 0x62f5e
	bne.n 0x62fc0	@ 00062f5e 2fd1
.org 0x62f60
	ldrb r5, [r6, #19]	@ 00062f60 f57c
.org 0x62f62
	lsls r0, r5, #2	@ 00062f62 a800
.org 0x62f64
	add r0, sp	@ 00062f64 6844
.org 0x62f66
	movs r1, #4	@ 00062f66 0421
.org 0x62f68
	bl 0x6635c	@ 00062f68 03f0f8f9
.org 0x62f6c
	adds r2, r0, #0	@ 00062f6c 021c
.org 0x62f6e
	cmp r2, #1	@ 00062f6e 012a
.org 0x62f70
	bgt.n 0x62f82	@ 00062f70 07dc
.org 0x62f72
	ldrb r1, [r6, #10]	@ 00062f72 b17a
.org 0x62f74
	movs r0, #16	@ 00062f74 1020
.org 0x62f76
	ands r0, r1	@ 00062f76 0840
.org 0x62f78
	cmp r0, #0	@ 00062f78 0028
.org 0x62f7a
	beq.n 0x62f7e	@ 00062f7a 00d0
.org 0x62f7c
	adds r2, #1	@ 00062f7c 0132
.org 0x62f7e
	movs r0, #1	@ 00062f7e 0120
.org 0x62f80
	ands r2, r0	@ 00062f80 0240
.org 0x62f82
	ldr r0, [r6, #84]	@ 00062f82 706d
.org 0x62f84
	str r0, [sp, #40]	@ 00062f84 0a90
.org 0x62f86
	add r1, sp, #40	@ 00062f86 0aa9
.org 0x62f88
	ldr r0, [r6, #88]	@ 00062f88 b06d
.org 0x62f8a
	str r0, [r1, #4]	@ 00062f8a 4860
.org 0x62f8c
	lsls r2, r2, #24	@ 00062f8c 1206
.org 0x62f8e
	lsrs r2, r2, #24	@ 00062f8e 120e
.org 0x62f90
	adds r0, r6, #0	@ 00062f90 301c
.org 0x62f92
	bl 0x9ba34	@ 00062f92 38f04ffd
.org 0x62f96
	adds r1, r0, #0	@ 00062f96 011c
.org 0x62f98
	adds r0, r6, #0	@ 00062f98 301c
.org 0x62f9a
	adds r0, #200	@ 00062f9a c830
.org 0x62f9c
	str r1, [r0, #0]	@ 00062f9c 0160
.org 0x62f9e
	cmp r1, #0	@ 00062f9e 0029
.org 0x62fa0
	bne.n 0x62fb8	@ 00062fa0 0ad1
.org 0x62fa2
	movs r0, #6	@ 00062fa2 0620
.org 0x62fa4
	strb r0, [r6, #13]	@ 00062fa4 7073
.org 0x62fa6
	strb r1, [r6, #14]	@ 00062fa6 b173
.org 0x62fa8
	b.n 0x62fbe	@ 00062fa8 09e0
.org 0x62faa
	.byte 0x00	@ 00062faa data
.org 0x62fab
	.byte 0x00	@ 00062fab data
.org 0x62fac
	.byte 0x80,0xaf,0x85,0x08	@ 00062fac data
