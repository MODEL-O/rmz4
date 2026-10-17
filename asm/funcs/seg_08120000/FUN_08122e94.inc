@ FUN_08122e94  entry 0x08122e94  size 468
.thumb
.org 0x122e94
FUN_08122e94:
	push {r4, r5, r6, r7, lr}	@ 00122e94 f0b5
.org 0x122e96
	mov r7, sl	@ 00122e96 5746
.org 0x122e98
	mov r6, r9	@ 00122e98 4e46
.org 0x122e9a
	mov r5, r8	@ 00122e9a 4546
.org 0x122e9c
	push {r5, r6, r7}	@ 00122e9c e0b4
.org 0x122e9e
	sub sp, #4	@ 00122e9e 81b0
.org 0x122ea0
	adds r5, r0, #0	@ 00122ea0 051c
.org 0x122ea2
	ldr r0, [pc, #452]	@ 00122ea2 7148
.org 0x122ea4
	adds r0, r0, r5	@ 00122ea4 4019
.org 0x122ea6
	mov sl, r0	@ 00122ea6 8246
.org 0x122ea8
	ldr r1, [pc, #448]	@ 00122ea8 7049
.org 0x122eaa
	adds r0, r5, r1	@ 00122eaa 6818
.org 0x122eac
	movs r2, #0	@ 00122eac 0022
.org 0x122eae
	mov r9, r2	@ 00122eae 9146
.org 0x122eb0
	mov r3, r9	@ 00122eb0 4b46
.org 0x122eb2
	strh r3, [r0, #2]	@ 00122eb2 4380
.org 0x122eb4
	ldr r4, [pc, #440]	@ 00122eb4 6e4c
.org 0x122eb6
	ldr r0, [pc, #444]	@ 00122eb6 6f48
.org 0x122eb8
	adds r1, r4, r0	@ 00122eb8 2118
.org 0x122eba
	ldr r2, [pc, #444]	@ 00122eba 6f4a
.org 0x122ebc
	adds r0, r4, r2	@ 00122ebc a018
.org 0x122ebe
	ldr r3, [pc, #444]	@ 00122ebe 6f4b
.org 0x122ec0
	str r3, [r0, #0]	@ 00122ec0 0360
.org 0x122ec2
	str r3, [r1, #0]	@ 00122ec2 0b60
.org 0x122ec4
	ldr r4, [pc, #440]	@ 00122ec4 6e4c
.org 0x122ec6
	adds r0, r5, r4	@ 00122ec6 2819
.org 0x122ec8
	ldrb r1, [r5, #1]	@ 00122ec8 6978
.org 0x122eca
	bl 0x38108	@ 00122eca 15f71df9
.org 0x122ece
	ldr r7, [pc, #436]	@ 00122ece 6d4f
.org 0x122ed0
	ldr r0, [pc, #436]	@ 00122ed0 6d48
.org 0x122ed2
	adds r0, r0, r7	@ 00122ed2 c019
.org 0x122ed4
	mov r8, r0	@ 00122ed4 8046
.org 0x122ed6
	movs r0, #32	@ 00122ed6 2020
.org 0x122ed8
	mov r1, r8	@ 00122ed8 4146
.org 0x122eda
	strb r0, [r1, #0]	@ 00122eda 0870
.org 0x122edc
	ldr r2, [pc, #428]	@ 00122edc 6b4a
.org 0x122ede
	adds r6, r7, r2	@ 00122ede be18
.org 0x122ee0
	strb r0, [r6, #0]	@ 00122ee0 3070
.org 0x122ee2
	movs r3, #128	@ 00122ee2 8023
.org 0x122ee4
	lsls r3, r3, #3	@ 00122ee4 db00
.org 0x122ee6
	adds r4, r7, r3	@ 00122ee6 fc18
.org 0x122ee8
	strb r0, [r4, #0]	@ 00122ee8 2070
.org 0x122eea
	movs r1, #129	@ 00122eea 8121
.org 0x122eec
	lsls r1, r1, #3	@ 00122eec c900
.org 0x122eee
	adds r0, r7, r1	@ 00122eee 7818
.org 0x122ef0
	mov r2, r9	@ 00122ef0 4a46
.org 0x122ef2
	str r2, [r0, #0]	@ 00122ef2 0260
.org 0x122ef4
	bl 0x2348	@ 00122ef4 dff628fa
.org 0x122ef8
	ldr r0, [pc, #404]	@ 00122ef8 6548
.org 0x122efa
	mov r3, r9	@ 00122efa 4b46
.org 0x122efc
	strh r3, [r0, #0]	@ 00122efc 0380
.org 0x122efe
	ldr r1, [pc, #404]	@ 00122efe 6549
.org 0x122f00
	strh r3, [r1, #0]	@ 00122f00 0b80
.org 0x122f02
	movs r0, #255	@ 00122f02 ff20
.org 0x122f04
	strb r0, [r1, #14]	@ 00122f04 8873
.org 0x122f06
	ldr r0, [pc, #400]	@ 00122f06 6448
.org 0x122f08
	strh r3, [r0, #0]	@ 00122f08 0380
.org 0x122f0a
	strh r3, [r7, #0]	@ 00122f0a 3b80
.org 0x122f0c
	movs r1, #0	@ 00122f0c 0021
.org 0x122f0e
	mov r0, r8	@ 00122f0e 4046
.org 0x122f10
	strb r1, [r0, #0]	@ 00122f10 0170
.org 0x122f12
	strb r1, [r6, #0]	@ 00122f12 3170
.org 0x122f14
	strb r1, [r4, #0]	@ 00122f14 2170
.org 0x122f16
	ldr r2, [pc, #388]	@ 00122f16 614a
.org 0x122f18
	ldrh r1, [r2, #0]	@ 00122f18 1188
.org 0x122f1a
	ldr r0, [pc, #388]	@ 00122f1a 6148
.org 0x122f1c
	ands r0, r1	@ 00122f1c 0840
.org 0x122f1e
	ldr r1, [pc, #388]	@ 00122f1e 6149
.org 0x122f20
	ands r0, r1	@ 00122f20 0840
.org 0x122f22
	movs r3, #128	@ 00122f22 8023
.org 0x122f24
	lsls r3, r3, #1	@ 00122f24 5b00
.org 0x122f26
	adds r1, r3, #0	@ 00122f26 191c
.org 0x122f28
	orrs r0, r1	@ 00122f28 0843
.org 0x122f2a
	strh r0, [r2, #0]	@ 00122f2a 1080
.org 0x122f2c
	ldr r4, [pc, #376]	@ 00122f2c 5e4c
.org 0x122f2e
	adds r4, r4, r5	@ 00122f2e 6419
.org 0x122f30
	mov r8, r4	@ 00122f30 a046
.org 0x122f32
	movs r6, #1	@ 00122f32 0126
.org 0x122f34
	negs r6, r6	@ 00122f34 7642
.org 0x122f36
	str r6, [r4, #0]	@ 00122f36 2660
.org 0x122f38
	ldr r1, [pc, #368]	@ 00122f38 5c49
.org 0x122f3a
	adds r0, r5, r1	@ 00122f3a 6818
.org 0x122f3c
	mov r2, r9	@ 00122f3c 4a46
.org 0x122f3e
	strh r2, [r0, #0]	@ 00122f3e 0280
.org 0x122f40
	ldr r3, [pc, #364]	@ 00122f40 5b4b
.org 0x122f42
	adds r1, r5, r3	@ 00122f42 e918
.org 0x122f44
	mov r0, sl	@ 00122f44 5046
.org 0x122f46
	movs r2, #0	@ 00122f46 0022
.org 0x122f48
	movs r3, #0	@ 00122f48 0023
.org 0x122f4a
	bl 0x2c0c	@ 00122f4a dff65ffe
.org 0x122f4e
	movs r0, #154	@ 00122f4e 9a20
.org 0x122f50
	lsls r0, r0, #4	@ 00122f50 0001
.org 0x122f52
	adds r4, r5, r0	@ 00122f52 2c18
.org 0x122f54
	adds r0, r4, #0	@ 00122f54 201c
.org 0x122f56
	bl 0x3384	@ 00122f56 e0f615fa
.org 0x122f5a
	adds r0, r4, #0	@ 00122f5a 201c
.org 0x122f5c
	mov r1, sl	@ 00122f5c 5146
.org 0x122f5e
	bl 0x33bc	@ 00122f5e e0f62dfa
.org 0x122f62
	bl 0x55f4	@ 00122f62 e2f647fb
.org 0x122f66
	bl 0x1c734	@ 00122f66 f9f6e5fb
.org 0x122f6a
	ldr r1, [pc, #328]	@ 00122f6a 5249
.org 0x122f6c
	ldr r2, [pc, #328]	@ 00122f6c 524a
.org 0x122f6e
	adds r0, r5, r2	@ 00122f6e a818
.org 0x122f70
	ldrh r0, [r0, #0]	@ 00122f70 0088
.org 0x122f72
	str r0, [r1, #0]	@ 00122f72 0860
.org 0x122f74
	ldr r0, [pc, #324]	@ 00122f74 5148
.org 0x122f76
	str r6, [r0, #0]	@ 00122f76 0660
.org 0x122f78
	ldr r0, [pc, #324]	@ 00122f78 5148
.org 0x122f7a
	mov r3, r8	@ 00122f7a 4346
.org 0x122f7c
	str r3, [r0, #0]	@ 00122f7c 0360
.org 0x122f7e
	ldr r1, [pc, #324]	@ 00122f7e 5149
.org 0x122f80
	ldr r4, [pc, #240]	@ 00122f80 3c4c
.org 0x122f82
	adds r4, r5, r4	@ 00122f82 2c19
.org 0x122f84
	str r4, [sp, #0]	@ 00122f84 0094
.org 0x122f86
	ldr r0, [r4, #0]	@ 00122f86 2068
.org 0x122f88
	str r0, [r1, #0]	@ 00122f88 0860
.org 0x122f8a
	movs r1, #129	@ 00122f8a 8121
.org 0x122f8c
	lsls r1, r1, #4	@ 00122f8c 0901
.org 0x122f8e
	adds r0, r5, r1	@ 00122f8e 6818
.org 0x122f90
	ldr r1, [pc, #232]	@ 00122f90 3a49
.org 0x122f92
	movs r2, #1	@ 00122f92 0122
.org 0x122f94
	bl 0x2b400	@ 00122f94 08f734fa
.org 0x122f98
	ldr r2, [pc, #300]	@ 00122f98 4b4a
.org 0x122f9a
	adds r0, r5, r2	@ 00122f9a a818
.org 0x122f9c
	ldr r1, [pc, #300]	@ 00122f9c 4b49
.org 0x122f9e
	movs r2, #24	@ 00122f9e 1822
.org 0x122fa0
	bl 0x3a72c	@ 00122fa0 17f7c4fb
.org 0x122fa4
	ldr r3, [pc, #296]	@ 00122fa4 4a4b
.org 0x122fa6
	adds r0, r5, r3	@ 00122fa6 e818
.org 0x122fa8
	ldr r1, [pc, #296]	@ 00122fa8 4a49
.org 0x122faa
	movs r2, #18	@ 00122faa 1222
.org 0x122fac
	bl 0x7f87c	@ 00122fac 5cf766fc
.org 0x122fb0
	movs r4, #139	@ 00122fb0 8b24
.org 0x122fb2
	lsls r4, r4, #4	@ 00122fb2 2401
.org 0x122fb4
	adds r0, r5, r4	@ 00122fb4 2819
.org 0x122fb6
	ldr r1, [pc, #288]	@ 00122fb6 4849
.org 0x122fb8
	movs r2, #24	@ 00122fb8 1822
.org 0x122fba
	bl 0xbd2fc	@ 00122fba 9af79ff9
.org 0x122fbe
	ldr r1, [pc, #284]	@ 00122fbe 4749
.org 0x122fc0
	adds r0, r5, r1	@ 00122fc0 6818
.org 0x122fc2
	ldr r1, [pc, #284]	@ 00122fc2 4749
.org 0x122fc4
	movs r2, #64	@ 00122fc4 4022
.org 0x122fc6
	bl 0xd0b78	@ 00122fc6 adf7d7fd
.org 0x122fca
	movs r2, #144	@ 00122fca 9022
.org 0x122fcc
	lsls r2, r2, #4	@ 00122fcc 1201
.org 0x122fce
	adds r0, r5, r2	@ 00122fce a818
.org 0x122fd0
	ldr r1, [pc, #272]	@ 00122fd0 4449
.org 0x122fd2
	movs r2, #22	@ 00122fd2 1622
.org 0x122fd4
	bl 0xe94dc	@ 00122fd4 c6f782fa
.org 0x122fd8
	ldr r3, [pc, #268]	@ 00122fd8 434b
.org 0x122fda
	adds r0, r5, r3	@ 00122fda e818
.org 0x122fdc
	ldr r1, [pc, #268]	@ 00122fdc 4349
.org 0x122fde
	movs r2, #10	@ 00122fde 0a22
.org 0x122fe0
	bl 0x108324	@ 00122fe0 e5f7a0f9
.org 0x122fe4
	ldr r4, [pc, #136]	@ 00122fe4 224c
.org 0x122fe6
	adds r4, #16	@ 00122fe6 1034
.org 0x122fe8
	adds r0, r4, #0	@ 00122fe8 201c
.org 0x122fea
	bl 0x10de70	@ 00122fea eaf741ff
.org 0x122fee
	adds r0, r4, #0	@ 00122fee 201c
.org 0x122ff0
	bl 0x10e480	@ 00122ff0 ebf746fa
.org 0x122ff4
	movs r4, #232	@ 00122ff4 e824
.org 0x122ff6
	lsls r4, r4, #2	@ 00122ff6 a400
.org 0x122ff8
	adds r4, r4, r7	@ 00122ff8 e419
.org 0x122ffa
	mov ip, r4	@ 00122ffa a446
.org 0x122ffc
	movs r0, #234	@ 00122ffc ea20
.org 0x122ffe
	lsls r0, r0, #2	@ 00122ffe 8000
.org 0x123000
	adds r0, r0, r7	@ 00123000 c019
.org 0x123002
	mov r8, r0	@ 00123002 8046
.org 0x123004
	movs r1, #236	@ 00123004 ec21
.org 0x123006
	lsls r1, r1, #2	@ 00123006 8900
.org 0x123008
	adds r3, r7, r1	@ 00123008 7b18
.org 0x12300a
	movs r4, #237	@ 0012300a ed24
.org 0x12300c
	lsls r4, r4, #2	@ 0012300c a400
.org 0x12300e
	adds r2, r7, r4	@ 0012300e 3a19
.org 0x123010
	movs r0, #238	@ 00123010 ee20
.org 0x123012
	lsls r0, r0, #2	@ 00123012 8000
.org 0x123014
	adds r1, r7, r0	@ 00123014 3918
.org 0x123016
	adds r4, #8	@ 00123016 0834
.org 0x123018
	adds r0, r7, r4	@ 00123018 3819
.org 0x12301a
	str r6, [r0, #0]	@ 0012301a 0660
.org 0x12301c
	str r6, [r1, #0]	@ 0012301c 0e60
.org 0x12301e
	str r6, [r2, #0]	@ 0012301e 1660
.org 0x123020
	str r6, [r3, #0]	@ 00123020 1e60
.org 0x123022
	ldr r0, [pc, #204]	@ 00123022 3348
.org 0x123024
	str r6, [r0, #0]	@ 00123024 0660
.org 0x123026
	mov r1, r8	@ 00123026 4146
.org 0x123028
	str r6, [r1, #0]	@ 00123028 0e60
.org 0x12302a
	ldr r2, [pc, #200]	@ 0012302a 324a
.org 0x12302c
	str r6, [r2, #0]	@ 0012302c 1660
.org 0x12302e
	mov r3, ip	@ 0012302e 6346
.org 0x123030
	str r6, [r3, #0]	@ 00123030 1e60
.org 0x123032
	ldr r0, [pc, #196]	@ 00123032 3148
.org 0x123034
	adds r0, #56	@ 00123034 3830
.org 0x123036
	movs r4, #0	@ 00123036 0024
.org 0x123038
	strb r4, [r0, #0]	@ 00123038 0470
.org 0x12303a
	ldr r1, [pc, #192]	@ 0012303a 3049
.org 0x12303c
	ldrb r0, [r5, #1]	@ 0012303c 6878
.org 0x12303e
	lsls r0, r0, #2	@ 0012303e 8000
.org 0x123040
	adds r0, r0, r1	@ 00123040 4018
.org 0x123042
	ldr r1, [r0, #0]	@ 00123042 0168
.org 0x123044
	adds r0, r5, #0	@ 00123044 281c
.org 0x123046
	bl 0x128f80	@ 00123046 05f09bff
.org 0x12304a
	mov r0, r9	@ 0012304a 4846
.org 0x12304c
	strh r0, [r5, #4]	@ 0012304c a880
.org 0x12304e
	movs r0, #1	@ 0012304e 0120
.org 0x123050
	strh r0, [r5, #6]	@ 00123050 e880
.org 0x123052
	ldrb r0, [r5, #2]	@ 00123052 a878
.org 0x123054
	adds r0, #1	@ 00123054 0130
.org 0x123056
	strb r0, [r5, #2]	@ 00123056 a870
.org 0x123058
	add sp, #4	@ 00123058 01b0
.org 0x12305a
	pop {r3, r4, r5}	@ 0012305a 38bc
.org 0x12305c
	mov r8, r3	@ 0012305c 9846
.org 0x12305e
	mov r9, r4	@ 0012305e a146
.org 0x123060
	mov sl, r5	@ 00123060 aa46
.org 0x123062
	pop {r4, r5, r6, r7}	@ 00123062 f0bc
.org 0x123064
	pop {r0}	@ 00123064 01bc
.org 0x123066
	bx r0	@ 00123066 0047
