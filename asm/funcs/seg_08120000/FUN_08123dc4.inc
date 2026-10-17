@ FUN_08123dc4  entry 0x08123dc4  size 730
.thumb
.org 0x123dc4
FUN_08123dc4:
	push {r4, r5, r6, r7, lr}	@ 00123dc4 f0b5
.org 0x123dc6
	mov r7, sl	@ 00123dc6 5746
.org 0x123dc8
	mov r6, r9	@ 00123dc8 4e46
.org 0x123dca
	mov r5, r8	@ 00123dca 4546
.org 0x123dcc
	push {r5, r6, r7}	@ 00123dcc e0b4
.org 0x123dce
	sub sp, #12	@ 00123dce 83b0
.org 0x123dd0
	mov r8, r0	@ 00123dd0 8046
.org 0x123dd2
	ldr r1, [pc, #716]	@ 00123dd2 b349
.org 0x123dd4
	add r1, r8	@ 00123dd4 4144
.org 0x123dd6
	movs r0, #180	@ 00123dd6 b420
.org 0x123dd8
	lsls r0, r0, #9	@ 00123dd8 4002
.org 0x123dda
	str r0, [r1, #0]	@ 00123dda 0860
.org 0x123ddc
	movs r0, #240	@ 00123ddc f020
.org 0x123dde
	lsls r0, r0, #8	@ 00123dde 0002
.org 0x123de0
	str r0, [r1, #4]	@ 00123de0 4860
.org 0x123de2
	movs r0, #20	@ 00123de2 1420
.org 0x123de4
	bl 0x6a94	@ 00123de4 e2f656fe
.org 0x123de8
	movs r6, #0	@ 00123de8 0026
.org 0x123dea
	ldr r1, [pc, #696]	@ 00123dea ae49
.org 0x123dec
	mov r9, r1	@ 00123dec 8946
.org 0x123dee
	ldr r2, [pc, #696]	@ 00123dee ae4a
.org 0x123df0
	ldrh r1, [r2, #0]	@ 00123df0 1188
.org 0x123df2
	mov r2, r9	@ 00123df2 4a46
.org 0x123df4
	ldrh r0, [r2, #6]	@ 00123df4 d088
.org 0x123df6
	lsrs r0, r0, #6	@ 00123df6 8009
.org 0x123df8
	subs r1, r1, r0	@ 00123df8 091a
.org 0x123dfa
	lsls r1, r1, #5	@ 00123dfa 4901
.org 0x123dfc
	movs r0, #128	@ 00123dfc 8020
.org 0x123dfe
	lsls r0, r0, #9	@ 00123dfe 4002
.org 0x123e00
	adds r1, r1, r0	@ 00123e00 0918
.org 0x123e02
	mov r0, r9	@ 00123e02 4846
.org 0x123e04
	bl 0x1d30	@ 00123e04 ddf694ff
.org 0x123e08
	ldr r1, [pc, #672]	@ 00123e08 a849
.org 0x123e0a
	mov sl, r1	@ 00123e0a 8a46
.org 0x123e0c
	ldrh r1, [r1, #0]	@ 00123e0c 0988
.org 0x123e0e
	ldr r2, [pc, #672]	@ 00123e0e a84a
.org 0x123e10
	ldrb r0, [r2, #7]	@ 00123e10 d079
.org 0x123e12
	subs r1, r1, r0	@ 00123e12 091a
.org 0x123e14
	lsls r1, r1, #5	@ 00123e14 4901
.org 0x123e16
	movs r7, #128	@ 00123e16 8027
.org 0x123e18
	lsls r7, r7, #2	@ 00123e18 bf00
.org 0x123e1a
	adds r1, r1, r7	@ 00123e1a c919
.org 0x123e1c
	adds r0, r2, #0	@ 00123e1c 101c
.org 0x123e1e
	bl 0x2208	@ 00123e1e def6f3f9
.org 0x123e22
	mov r0, r9	@ 00123e22 4846
.org 0x123e24
	adds r0, #20	@ 00123e24 1430
.org 0x123e26
	ldr r2, [pc, #640]	@ 00123e26 a04a
.org 0x123e28
	ldrh r1, [r2, #2]	@ 00123e28 5188
.org 0x123e2a
	ldrh r2, [r0, #6]	@ 00123e2a c288
.org 0x123e2c
	lsrs r2, r2, #6	@ 00123e2c 9209
.org 0x123e2e
	subs r1, r1, r2	@ 00123e2e 891a
.org 0x123e30
	lsls r1, r1, #5	@ 00123e30 4901
.org 0x123e32
	movs r2, #128	@ 00123e32 8022
.org 0x123e34
	lsls r2, r2, #9	@ 00123e34 5202
.org 0x123e36
	adds r1, r1, r2	@ 00123e36 8918
.org 0x123e38
	bl 0x1d30	@ 00123e38 ddf67aff
.org 0x123e3c
	ldr r0, [pc, #624]	@ 00123e3c 9c48
.org 0x123e3e
	adds r0, #20	@ 00123e3e 1430
.org 0x123e40
	mov r2, sl	@ 00123e40 5246
.org 0x123e42
	ldrh r1, [r2, #2]	@ 00123e42 5188
.org 0x123e44
	ldrb r2, [r0, #7]	@ 00123e44 c279
.org 0x123e46
	subs r1, r1, r2	@ 00123e46 891a
.org 0x123e48
	lsls r1, r1, #5	@ 00123e48 4901
.org 0x123e4a
	adds r1, r1, r7	@ 00123e4a c919
.org 0x123e4c
	bl 0x2208	@ 00123e4c def6dcf9
.org 0x123e50
	mov r0, r9	@ 00123e50 4846
.org 0x123e52
	adds r0, #40	@ 00123e52 2830
.org 0x123e54
	ldr r2, [pc, #592]	@ 00123e54 944a
.org 0x123e56
	ldrh r1, [r2, #4]	@ 00123e56 9188
.org 0x123e58
	ldrh r2, [r0, #6]	@ 00123e58 c288
.org 0x123e5a
	lsrs r2, r2, #6	@ 00123e5a 9209
.org 0x123e5c
	subs r1, r1, r2	@ 00123e5c 891a
.org 0x123e5e
	lsls r1, r1, #5	@ 00123e5e 4901
.org 0x123e60
	movs r2, #128	@ 00123e60 8022
.org 0x123e62
	lsls r2, r2, #9	@ 00123e62 5202
.org 0x123e64
	adds r1, r1, r2	@ 00123e64 8918
.org 0x123e66
	bl 0x1d30	@ 00123e66 ddf663ff
.org 0x123e6a
	ldr r0, [pc, #580]	@ 00123e6a 9148
.org 0x123e6c
	adds r0, #40	@ 00123e6c 2830
.org 0x123e6e
	mov r2, sl	@ 00123e6e 5246
.org 0x123e70
	ldrh r1, [r2, #4]	@ 00123e70 9188
.org 0x123e72
	ldrb r2, [r0, #7]	@ 00123e72 c279
.org 0x123e74
	subs r1, r1, r2	@ 00123e74 891a
.org 0x123e76
	lsls r1, r1, #5	@ 00123e76 4901
.org 0x123e78
	adds r1, r1, r7	@ 00123e78 c919
.org 0x123e7a
	bl 0x2208	@ 00123e7a def6c5f9
.org 0x123e7e
	mov r0, r9	@ 00123e7e 4846
.org 0x123e80
	adds r0, #80	@ 00123e80 5030
.org 0x123e82
	ldr r2, [pc, #548]	@ 00123e82 894a
.org 0x123e84
	ldrh r1, [r2, #8]	@ 00123e84 1189
.org 0x123e86
	ldrh r2, [r0, #6]	@ 00123e86 c288
.org 0x123e88
	lsrs r2, r2, #6	@ 00123e88 9209
.org 0x123e8a
	subs r1, r1, r2	@ 00123e8a 891a
.org 0x123e8c
	lsls r1, r1, #5	@ 00123e8c 4901
.org 0x123e8e
	movs r2, #128	@ 00123e8e 8022
.org 0x123e90
	lsls r2, r2, #9	@ 00123e90 5202
.org 0x123e92
	adds r1, r1, r2	@ 00123e92 8918
.org 0x123e94
	bl 0x1d30	@ 00123e94 ddf64cff
.org 0x123e98
	ldr r0, [pc, #532]	@ 00123e98 8548
.org 0x123e9a
	adds r0, #80	@ 00123e9a 5030
.org 0x123e9c
	mov r2, sl	@ 00123e9c 5246
.org 0x123e9e
	ldrh r1, [r2, #8]	@ 00123e9e 1189
.org 0x123ea0
	ldrb r2, [r0, #7]	@ 00123ea0 c279
.org 0x123ea2
	subs r1, r1, r2	@ 00123ea2 891a
.org 0x123ea4
	lsls r1, r1, #5	@ 00123ea4 4901
.org 0x123ea6
	adds r1, r1, r7	@ 00123ea6 c919
.org 0x123ea8
	bl 0x2208	@ 00123ea8 def6aef9
.org 0x123eac
	mov r0, r9	@ 00123eac 4846
.org 0x123eae
	adds r0, #100	@ 00123eae 6430
.org 0x123eb0
	ldr r2, [pc, #500]	@ 00123eb0 7d4a
.org 0x123eb2
	ldrh r1, [r2, #10]	@ 00123eb2 5189
.org 0x123eb4
	ldrh r2, [r0, #6]	@ 00123eb4 c288
.org 0x123eb6
	lsrs r2, r2, #6	@ 00123eb6 9209
.org 0x123eb8
	subs r1, r1, r2	@ 00123eb8 891a
.org 0x123eba
	lsls r1, r1, #5	@ 00123eba 4901
.org 0x123ebc
	movs r2, #128	@ 00123ebc 8022
.org 0x123ebe
	lsls r2, r2, #9	@ 00123ebe 5202
.org 0x123ec0
	adds r1, r1, r2	@ 00123ec0 8918
.org 0x123ec2
	bl 0x1d30	@ 00123ec2 ddf635ff
.org 0x123ec6
	ldr r0, [pc, #488]	@ 00123ec6 7a48
.org 0x123ec8
	adds r0, #100	@ 00123ec8 6430
.org 0x123eca
	mov r2, sl	@ 00123eca 5246
.org 0x123ecc
	ldrh r1, [r2, #10]	@ 00123ecc 5189
.org 0x123ece
	ldrb r2, [r0, #7]	@ 00123ece c279
.org 0x123ed0
	subs r1, r1, r2	@ 00123ed0 891a
.org 0x123ed2
	lsls r1, r1, #5	@ 00123ed2 4901
.org 0x123ed4
	adds r1, r1, r7	@ 00123ed4 c919
.org 0x123ed6
	bl 0x2208	@ 00123ed6 def697f9
.org 0x123eda
	movs r4, #238	@ 00123eda ee24
.org 0x123edc
	lsls r5, r4, #1	@ 00123edc 6500
.org 0x123ede
	ldr r1, [pc, #456]	@ 00123ede 7249
.org 0x123ee0
	adds r0, r1, r5	@ 00123ee0 4819
.org 0x123ee2
	strh r7, [r0, #0]	@ 00123ee2 0780
.org 0x123ee4
	add r5, sl	@ 00123ee4 5544
.org 0x123ee6
	movs r2, #4	@ 00123ee6 0422
.org 0x123ee8
	strh r2, [r5, #0]	@ 00123ee8 2a80
.org 0x123eea
	lsls r4, r4, #4	@ 00123eea 2401
.org 0x123eec
	movs r0, #238	@ 00123eec ee20
.org 0x123eee
	lsls r0, r0, #2	@ 00123eee 8000
.org 0x123ef0
	adds r4, r4, r0	@ 00123ef0 2418
.org 0x123ef2
	mov r1, r9	@ 00123ef2 4946
.org 0x123ef4
	adds r0, r4, r1	@ 00123ef4 6018
.org 0x123ef6
	ldrh r1, [r0, #6]	@ 00123ef6 c188
.org 0x123ef8
	lsrs r1, r1, #6	@ 00123ef8 8909
.org 0x123efa
	subs r1, r7, r1	@ 00123efa 791a
.org 0x123efc
	lsls r1, r1, #5	@ 00123efc 4901
.org 0x123efe
	movs r2, #128	@ 00123efe 8022
.org 0x123f00
	lsls r2, r2, #9	@ 00123f00 5202
.org 0x123f02
	adds r1, r1, r2	@ 00123f02 8918
.org 0x123f04
	bl 0x1d30	@ 00123f04 ddf614ff
.org 0x123f08
	ldr r0, [pc, #420]	@ 00123f08 6948
.org 0x123f0a
	adds r4, r4, r0	@ 00123f0a 2418
.org 0x123f0c
	ldrh r1, [r5, #0]	@ 00123f0c 2988
.org 0x123f0e
	ldrb r0, [r4, #7]	@ 00123f0e e079
.org 0x123f10
	subs r1, r1, r0	@ 00123f10 091a
.org 0x123f12
	lsls r1, r1, #5	@ 00123f12 4901
.org 0x123f14
	adds r1, r1, r7	@ 00123f14 c919
.org 0x123f16
	adds r0, r4, #0	@ 00123f16 201c
.org 0x123f18
	bl 0x2208	@ 00123f18 def676f9
.org 0x123f1c
	movs r4, #247	@ 00123f1c f724
.org 0x123f1e
	lsls r5, r4, #1	@ 00123f1e 6500
.org 0x123f20
	ldr r2, [pc, #388]	@ 00123f20 614a
.org 0x123f22
	adds r1, r2, r5	@ 00123f22 5119
.org 0x123f24
	ldr r0, [pc, #396]	@ 00123f24 6348
.org 0x123f26
	strh r0, [r1, #0]	@ 00123f26 0880
.org 0x123f28
	add r5, sl	@ 00123f28 5544
.org 0x123f2a
	movs r0, #10	@ 00123f2a 0a20
.org 0x123f2c
	strh r0, [r5, #0]	@ 00123f2c 2880
.org 0x123f2e
	lsls r4, r4, #4	@ 00123f2e 2401
.org 0x123f30
	movs r2, #247	@ 00123f30 f722
.org 0x123f32
	lsls r2, r2, #2	@ 00123f32 9200
.org 0x123f34
	adds r4, r4, r2	@ 00123f34 a418
.org 0x123f36
	mov r2, r9	@ 00123f36 4a46
.org 0x123f38
	adds r0, r4, r2	@ 00123f38 a018
.org 0x123f3a
	ldrh r1, [r1, #0]	@ 00123f3a 0988
.org 0x123f3c
	ldrh r2, [r0, #6]	@ 00123f3c c288
.org 0x123f3e
	lsrs r2, r2, #6	@ 00123f3e 9209
.org 0x123f40
	subs r1, r1, r2	@ 00123f40 891a
.org 0x123f42
	lsls r1, r1, #5	@ 00123f42 4901
.org 0x123f44
	movs r2, #128	@ 00123f44 8022
.org 0x123f46
	lsls r2, r2, #9	@ 00123f46 5202
.org 0x123f48
	adds r1, r1, r2	@ 00123f48 8918
.org 0x123f4a
	bl 0x1d30	@ 00123f4a ddf6f1fe
.org 0x123f4e
	ldr r0, [pc, #352]	@ 00123f4e 5848
.org 0x123f50
	adds r4, r4, r0	@ 00123f50 2418
.org 0x123f52
	ldrh r1, [r5, #0]	@ 00123f52 2988
.org 0x123f54
	ldrb r0, [r4, #7]	@ 00123f54 e079
.org 0x123f56
	subs r1, r1, r0	@ 00123f56 091a
.org 0x123f58
	lsls r1, r1, #5	@ 00123f58 4901
.org 0x123f5a
	adds r1, r1, r7	@ 00123f5a c919
.org 0x123f5c
	adds r0, r4, #0	@ 00123f5c 201c
.org 0x123f5e
	bl 0x2208	@ 00123f5e def653f9
.org 0x123f62
	ldr r0, [pc, #324]	@ 00123f62 5148
.org 0x123f64
	adds r0, #206	@ 00123f64 ce30
.org 0x123f66
	movs r1, #234	@ 00123f66 ea21
.org 0x123f68
	lsls r1, r1, #2	@ 00123f68 8900
.org 0x123f6a
	strh r1, [r0, #0]	@ 00123f6a 0180
.org 0x123f6c
	movs r2, #206	@ 00123f6c ce22
.org 0x123f6e
	add sl, r2	@ 00123f6e 9244
.org 0x123f70
	movs r2, #10	@ 00123f70 0a22
.org 0x123f72
	mov r0, sl	@ 00123f72 5046
.org 0x123f74
	strh r2, [r0, #0]	@ 00123f74 0280
.org 0x123f76
	ldr r4, [pc, #320]	@ 00123f76 504c
.org 0x123f78
	add r9, r4	@ 00123f78 a144
.org 0x123f7a
	mov r2, r9	@ 00123f7a 4a46
.org 0x123f7c
	ldrh r0, [r2, #6]	@ 00123f7c d088
.org 0x123f7e
	lsrs r0, r0, #6	@ 00123f7e 8009
.org 0x123f80
	subs r1, r1, r0	@ 00123f80 091a
.org 0x123f82
	lsls r1, r1, #5	@ 00123f82 4901
.org 0x123f84
	movs r0, #128	@ 00123f84 8020
.org 0x123f86
	lsls r0, r0, #9	@ 00123f86 4002
.org 0x123f88
	adds r1, r1, r0	@ 00123f88 0918
.org 0x123f8a
	mov r0, r9	@ 00123f8a 4846
.org 0x123f8c
	bl 0x1d30	@ 00123f8c ddf6d0fe
.org 0x123f90
	ldr r1, [pc, #284]	@ 00123f90 4749
.org 0x123f92
	adds r4, r4, r1	@ 00123f92 6418
.org 0x123f94
	mov r2, sl	@ 00123f94 5246
.org 0x123f96
	ldrh r1, [r2, #0]	@ 00123f96 1188
.org 0x123f98
	ldrb r0, [r4, #7]	@ 00123f98 e079
.org 0x123f9a
	subs r1, r1, r0	@ 00123f9a 091a
.org 0x123f9c
	lsls r1, r1, #5	@ 00123f9c 4901
.org 0x123f9e
	adds r1, r1, r7	@ 00123f9e c919
.org 0x123fa0
	adds r0, r4, #0	@ 00123fa0 201c
.org 0x123fa2
	bl 0x2208	@ 00123fa2 def631f9
.org 0x123fa6
	movs r0, #180	@ 00123fa6 b420
.org 0x123fa8
	lsls r0, r0, #9	@ 00123fa8 4002
.org 0x123faa
	str r0, [sp, #4]	@ 00123faa 0190
.org 0x123fac
	movs r0, #220	@ 00123fac dc20
.org 0x123fae
	lsls r0, r0, #8	@ 00123fae 0002
.org 0x123fb0
	str r0, [sp, #8]	@ 00123fb0 0290
.org 0x123fb2
	add r0, sp, #4	@ 00123fb2 01a8
.org 0x123fb4
	bl 0x2f190	@ 00123fb4 0bf7ecf8
.org 0x123fb8
	ldr r4, [pc, #256]	@ 00123fb8 404c
.org 0x123fba
	add r4, r8	@ 00123fba 4444
.org 0x123fbc
	str r0, [r4, #0]	@ 00123fbc 2060
.org 0x123fbe
	movs r3, #200	@ 00123fbe c823
.org 0x123fc0
	lsls r3, r3, #9	@ 00123fc0 5b02
.org 0x123fc2
	ldr r1, [pc, #252]	@ 00123fc2 3f49
.org 0x123fc4
	str r1, [sp, #0]	@ 00123fc4 0091
.org 0x123fc6
	movs r1, #0	@ 00123fc6 0021
.org 0x123fc8
	movs r2, #0	@ 00123fc8 0022
.org 0x123fca
	bl 0x2cbec	@ 00123fca 08f70ffe
.org 0x123fce
	ldr r1, [pc, #244]	@ 00123fce 3d49
.org 0x123fd0
	ldr r0, [r4, #0]	@ 00123fd0 2068
.org 0x123fd2
	str r0, [r1, #0]	@ 00123fd2 0860
.org 0x123fd4
	ldr r1, [pc, #240]	@ 00123fd4 3c49
.org 0x123fd6
	bl 0x382b0	@ 00123fd6 14f76bf9
.org 0x123fda
	ldr r0, [r4, #0]	@ 00123fda 2068
.org 0x123fdc
	adds r0, #76	@ 00123fdc 4c30
.org 0x123fde
	movs r1, #1	@ 00123fde 0121
.org 0x123fe0
	strb r1, [r0, #0]	@ 00123fe0 0170
.org 0x123fe2
	ldr r1, [r4, #0]	@ 00123fe2 2168
.org 0x123fe4
	adds r1, #74	@ 00123fe4 4a31
.org 0x123fe6
	ldrb r0, [r1, #0]	@ 00123fe6 0878
.org 0x123fe8
	movs r2, #16	@ 00123fe8 1022
.org 0x123fea
	orrs r0, r2	@ 00123fea 1043
.org 0x123fec
	strb r0, [r1, #0]	@ 00123fec 0870
.org 0x123fee
	ldr r1, [r4, #0]	@ 00123fee 2168
.org 0x123ff0
	ldrb r0, [r1, #10]	@ 00123ff0 887a
.org 0x123ff2
	orrs r2, r0	@ 00123ff2 0243
.org 0x123ff4
	strb r2, [r1, #10]	@ 00123ff4 8a72
.org 0x123ff6
	movs r0, #224	@ 00123ff6 e020
.org 0x123ff8
	lsls r0, r0, #9	@ 00123ff8 4002
.org 0x123ffa
	str r0, [sp, #4]	@ 00123ffa 0190
.org 0x123ffc
	movs r0, #208	@ 00123ffc d020
.org 0x123ffe
	lsls r0, r0, #8	@ 00123ffe 0002
.org 0x124000
	str r0, [sp, #8]	@ 00124000 0290
.org 0x124002
	mov r0, r8	@ 00124002 4046
.org 0x124004
	add r1, sp, #4	@ 00124004 01a9
.org 0x124006
	movs r2, #0	@ 00124006 0022
.org 0x124008
	movs r3, #0	@ 00124008 0023
.org 0x12400a
	bl 0x104a78	@ 0012400a e0f735fd
.org 0x12400e
	mov r0, r8	@ 0012400e 4046
.org 0x124010
	add r1, sp, #4	@ 00124010 01a9
.org 0x124012
	movs r2, #1	@ 00124012 0122
.org 0x124014
	movs r3, #0	@ 00124014 0023
.org 0x124016
	bl 0x104a78	@ 00124016 e0f72ffd
.org 0x12401a
	movs r2, #0	@ 0012401a 0022
.org 0x12401c
	str r2, [r4, #8]	@ 0012401c a260
.org 0x12401e
	str r2, [r4, #12]	@ 0012401e e260
.org 0x124020
	ldr r0, [pc, #168]	@ 00124020 2a48
.org 0x124022
	ldr r0, [r0, #32]	@ 00124022 006a
.org 0x124024
	str r0, [r4, #16]	@ 00124024 2061
.org 0x124026
	movs r0, #225	@ 00124026 e120
.org 0x124028
	lsls r0, r0, #4	@ 00124028 0001
.org 0x12402a
	str r0, [r4, #20]	@ 0012402a 6061
.org 0x12402c
	strb r6, [r4, #24]	@ 0012402c 2676
.org 0x12402e
	strb r6, [r4, #25]	@ 0012402e 6676
.org 0x124030
	strb r6, [r4, #26]	@ 00124030 a676
.org 0x124032
	strb r6, [r4, #27]	@ 00124032 e676
.org 0x124034
	strb r6, [r4, #28]	@ 00124034 2677
.org 0x124036
	strb r6, [r4, #29]	@ 00124036 6677
.org 0x124038
	strb r6, [r4, #30]	@ 00124038 a677
.org 0x12403a
	strb r6, [r4, #31]	@ 0012403a e677
.org 0x12403c
	subs r0, #36	@ 0012403c 2438
.org 0x12403e
	add r0, r8	@ 0012403e 4044
.org 0x124040
	strb r6, [r0, #0]	@ 00124040 0670
.org 0x124042
	ldr r0, [pc, #140]	@ 00124042 2348
.org 0x124044
	add r0, r8	@ 00124044 4044
.org 0x124046
	strb r6, [r0, #0]	@ 00124046 0670
.org 0x124048
	ldr r0, [pc, #136]	@ 00124048 2248
.org 0x12404a
	add r0, r8	@ 0012404a 4044
.org 0x12404c
	strb r6, [r0, #0]	@ 0012404c 0670
.org 0x12404e
	ldr r0, [pc, #136]	@ 0012404e 2248
.org 0x124050
	add r0, r8	@ 00124050 4044
.org 0x124052
	strb r6, [r0, #0]	@ 00124052 0670
.org 0x124054
	str r2, [r4, #36]	@ 00124054 6262
.org 0x124056
	ldr r0, [pc, #132]	@ 00124056 2148
.org 0x124058
	add r0, r8	@ 00124058 4044
.org 0x12405a
	strb r6, [r0, #0]	@ 0012405a 0670
.org 0x12405c
	ldr r0, [pc, #128]	@ 0012405c 2048
.org 0x12405e
	add r0, r8	@ 0012405e 4044
.org 0x124060
	strb r6, [r0, #0]	@ 00124060 0670
.org 0x124062
	ldr r0, [pc, #128]	@ 00124062 2048
.org 0x124064
	add r0, r8	@ 00124064 4044
.org 0x124066
	strb r6, [r0, #0]	@ 00124066 0670
.org 0x124068
	ldr r0, [pc, #124]	@ 00124068 1f48
.org 0x12406a
	add r0, r8	@ 0012406a 4044
.org 0x12406c
	strb r6, [r0, #0]	@ 0012406c 0670
.org 0x12406e
	ldr r0, [pc, #124]	@ 0012406e 1f48
.org 0x124070
	add r0, r8	@ 00124070 4044
.org 0x124072
	strb r6, [r0, #0]	@ 00124072 0670
.org 0x124074
	ldr r0, [pc, #120]	@ 00124074 1e48
.org 0x124076
	add r0, r8	@ 00124076 4044
.org 0x124078
	strb r6, [r0, #0]	@ 00124078 0670
.org 0x12407a
	ldr r0, [pc, #120]	@ 0012407a 1e48
.org 0x12407c
	add r0, r8	@ 0012407c 4044
.org 0x12407e
	strb r6, [r0, #0]	@ 0012407e 0670
.org 0x124080
	ldr r0, [pc, #116]	@ 00124080 1d48
.org 0x124082
	add r8, r0	@ 00124082 8044
.org 0x124084
	mov r1, r8	@ 00124084 4146
.org 0x124086
	strb r6, [r1, #0]	@ 00124086 0e70
.org 0x124088
	movs r0, #140	@ 00124088 8c20
.org 0x12408a
	bl 0x2a88	@ 0012408a def6fdfc
.org 0x12408e
	add sp, #12	@ 0012408e 03b0
.org 0x124090
	pop {r3, r4, r5}	@ 00124090 38bc
.org 0x124092
	mov r8, r3	@ 00124092 9846
.org 0x124094
	mov r9, r4	@ 00124094 a146
.org 0x124096
	mov sl, r5	@ 00124096 aa46
.org 0x124098
	pop {r4, r5, r6, r7}	@ 00124098 f0bc
.org 0x12409a
	pop {r0}	@ 0012409a 01bc
.org 0x12409c
	bx r0	@ 0012409c 0047
