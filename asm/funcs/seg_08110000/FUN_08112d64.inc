@ FUN_08112d64  entry 0x08112d64  size 384
.thumb
.org 0x112d64
FUN_08112d64:
	push {r4, r5, r6, lr}	@ 00112d64 70b5
.org 0x112d66
	mov r6, sl	@ 00112d66 5646
.org 0x112d68
	mov r5, r9	@ 00112d68 4d46
.org 0x112d6a
	mov r4, r8	@ 00112d6a 4446
.org 0x112d6c
	push {r4, r5, r6}	@ 00112d6c 70b4
.org 0x112d6e
	adds r6, r0, #0	@ 00112d6e 061c
.org 0x112d70
	ldr r4, [pc, #368]	@ 00112d70 5c4c
.org 0x112d72
	ldr r1, [pc, #372]	@ 00112d72 5d49
.org 0x112d74
	adds r0, r4, r1	@ 00112d74 6018
.org 0x112d76
	movs r5, #0	@ 00112d76 0025
.org 0x112d78
	movs r1, #32	@ 00112d78 2021
.org 0x112d7a
	strb r1, [r0, #0]	@ 00112d7a 0170
.org 0x112d7c
	ldr r2, [pc, #364]	@ 00112d7c 5b4a
.org 0x112d7e
	adds r0, r4, r2	@ 00112d7e a018
.org 0x112d80
	strb r1, [r0, #0]	@ 00112d80 0170
.org 0x112d82
	movs r3, #128	@ 00112d82 8023
.org 0x112d84
	lsls r3, r3, #3	@ 00112d84 db00
.org 0x112d86
	adds r0, r4, r3	@ 00112d86 e018
.org 0x112d88
	strb r1, [r0, #0]	@ 00112d88 0170
.org 0x112d8a
	movs r1, #129	@ 00112d8a 8121
.org 0x112d8c
	lsls r1, r1, #3	@ 00112d8c c900
.org 0x112d8e
	adds r0, r4, r1	@ 00112d8e 6018
.org 0x112d90
	str r5, [r0, #0]	@ 00112d90 0560
.org 0x112d92
	bl 0x2348	@ 00112d92 eff6d9fa
.org 0x112d96
	ldr r0, [pc, #344]	@ 00112d96 5648
.org 0x112d98
	movs r2, #0	@ 00112d98 0022
.org 0x112d9a
	mov sl, r2	@ 00112d9a 9246
.org 0x112d9c
	strh r5, [r0, #0]	@ 00112d9c 0580
.org 0x112d9e
	ldr r1, [pc, #340]	@ 00112d9e 5549
.org 0x112da0
	strh r5, [r1, #0]	@ 00112da0 0d80
.org 0x112da2
	movs r0, #255	@ 00112da2 ff20
.org 0x112da4
	strb r0, [r1, #14]	@ 00112da4 8873
.org 0x112da6
	ldr r0, [pc, #336]	@ 00112da6 5448
.org 0x112da8
	strh r5, [r0, #0]	@ 00112da8 0580
.org 0x112daa
	strh r5, [r4, #0]	@ 00112daa 2580
.org 0x112dac
	ldr r2, [pc, #332]	@ 00112dac 534a
.org 0x112dae
	ldrh r1, [r2, #0]	@ 00112dae 1188
.org 0x112db0
	ldr r0, [pc, #332]	@ 00112db0 5348
.org 0x112db2
	ands r0, r1	@ 00112db2 0840
.org 0x112db4
	ldr r1, [pc, #332]	@ 00112db4 5349
.org 0x112db6
	ands r0, r1	@ 00112db6 0840
.org 0x112db8
	movs r3, #128	@ 00112db8 8023
.org 0x112dba
	lsls r3, r3, #1	@ 00112dba 5b00
.org 0x112dbc
	adds r1, r3, #0	@ 00112dbc 191c
.org 0x112dbe
	orrs r0, r1	@ 00112dbe 0843
.org 0x112dc0
	strh r0, [r2, #0]	@ 00112dc0 1080
.org 0x112dc2
	ldr r1, [pc, #324]	@ 00112dc2 5149
.org 0x112dc4
	adds r0, r1, #0	@ 00112dc4 081c
.org 0x112dc6
	strh r0, [r2, #4]	@ 00112dc6 9080
.org 0x112dc8
	str r5, [r2, #12]	@ 00112dc8 d560
.org 0x112dca
	ldr r2, [pc, #320]	@ 00112dca 504a
.org 0x112dcc
	mov r9, r2	@ 00112dcc 9146
.org 0x112dce
	movs r2, #176	@ 00112dce b022
.org 0x112dd0
	lsls r2, r2, #3	@ 00112dd0 d200
.org 0x112dd2
	movs r3, #240	@ 00112dd2 f023
.org 0x112dd4
	lsls r3, r3, #2	@ 00112dd4 9b00
.org 0x112dd6
	mov r0, r9	@ 00112dd6 4846
.org 0x112dd8
	movs r1, #0	@ 00112dd8 0021
.org 0x112dda
	bl 0x1fd4	@ 00112dda eff6fbf8
.org 0x112dde
	bl 0x10d4a8	@ 00112dde faf763fb
.org 0x112de2
	ldr r3, [pc, #300]	@ 00112de2 4b4b
.org 0x112de4
	adds r3, r3, r6	@ 00112de4 9b19
.org 0x112de6
	mov r8, r3	@ 00112de6 9846
.org 0x112de8
	movs r4, #1	@ 00112de8 0124
.org 0x112dea
	negs r4, r4	@ 00112dea 6442
.org 0x112dec
	str r4, [r3, #0]	@ 00112dec 1c60
.org 0x112dee
	ldr r1, [pc, #292]	@ 00112dee 4949
.org 0x112df0
	adds r0, r6, r1	@ 00112df0 7018
.org 0x112df2
	strh r5, [r0, #0]	@ 00112df2 0580
.org 0x112df4
	movs r2, #154	@ 00112df4 9a22
.org 0x112df6
	lsls r2, r2, #4	@ 00112df6 1201
.org 0x112df8
	adds r5, r6, r2	@ 00112df8 b518
.org 0x112dfa
	adds r0, r5, #0	@ 00112dfa 281c
.org 0x112dfc
	bl 0x3384	@ 00112dfc f0f6c2fa
.org 0x112e00
	bl 0x55f4	@ 00112e00 f2f6f8fb
.org 0x112e04
	bl 0x1c734	@ 00112e04 09f796fc
.org 0x112e08
	ldr r1, [pc, #268]	@ 00112e08 4349
.org 0x112e0a
	ldr r3, [pc, #272]	@ 00112e0a 444b
.org 0x112e0c
	adds r0, r6, r3	@ 00112e0c f018
.org 0x112e0e
	ldrh r0, [r0, #0]	@ 00112e0e 0088
.org 0x112e10
	str r0, [r1, #0]	@ 00112e10 0860
.org 0x112e12
	ldr r0, [pc, #268]	@ 00112e12 4348
.org 0x112e14
	str r4, [r0, #0]	@ 00112e14 0460
.org 0x112e16
	ldr r0, [pc, #268]	@ 00112e16 4348
.org 0x112e18
	mov r1, r8	@ 00112e18 4146
.org 0x112e1a
	str r1, [r0, #0]	@ 00112e1a 0160
.org 0x112e1c
	ldr r1, [pc, #264]	@ 00112e1c 4249
.org 0x112e1e
	ldr r2, [pc, #268]	@ 00112e1e 434a
.org 0x112e20
	adds r4, r6, r2	@ 00112e20 b418
.org 0x112e22
	ldr r0, [r4, #0]	@ 00112e22 2068
.org 0x112e24
	str r0, [r1, #0]	@ 00112e24 0860
.org 0x112e26
	movs r3, #129	@ 00112e26 8123
.org 0x112e28
	lsls r3, r3, #4	@ 00112e28 1b01
.org 0x112e2a
	adds r0, r6, r3	@ 00112e2a f018
.org 0x112e2c
	ldr r1, [pc, #256]	@ 00112e2c 4049
.org 0x112e2e
	movs r2, #1	@ 00112e2e 0122
.org 0x112e30
	bl 0x2b400	@ 00112e30 18f7e6fa
.org 0x112e34
	ldr r1, [pc, #252]	@ 00112e34 3f49
.org 0x112e36
	adds r0, r6, r1	@ 00112e36 7018
.org 0x112e38
	ldr r1, [pc, #252]	@ 00112e38 3f49
.org 0x112e3a
	movs r2, #24	@ 00112e3a 1822
.org 0x112e3c
	bl 0x3a72c	@ 00112e3c 27f776fc
.org 0x112e40
	movs r2, #134	@ 00112e40 8622
.org 0x112e42
	lsls r2, r2, #4	@ 00112e42 1201
.org 0x112e44
	adds r0, r6, r2	@ 00112e44 b018
.org 0x112e46
	ldr r1, [pc, #244]	@ 00112e46 3d49
.org 0x112e48
	movs r2, #5	@ 00112e48 0522
.org 0x112e4a
	bl 0x502fc	@ 00112e4a 3df757fa
.org 0x112e4e
	ldr r3, [pc, #240]	@ 00112e4e 3c4b
.org 0x112e50
	adds r0, r6, r3	@ 00112e50 f018
.org 0x112e52
	ldr r1, [pc, #240]	@ 00112e52 3c49
.org 0x112e54
	movs r2, #18	@ 00112e54 1222
.org 0x112e56
	bl 0x7f87c	@ 00112e56 6cf711fd
.org 0x112e5a
	movs r1, #139	@ 00112e5a 8b21
.org 0x112e5c
	lsls r1, r1, #4	@ 00112e5c 0901
.org 0x112e5e
	adds r0, r6, r1	@ 00112e5e 7018
.org 0x112e60
	ldr r1, [pc, #228]	@ 00112e60 3949
.org 0x112e62
	movs r2, #24	@ 00112e62 1822
.org 0x112e64
	bl 0xbd2fc	@ 00112e64 aaf74afa
.org 0x112e68
	ldr r2, [pc, #224]	@ 00112e68 384a
.org 0x112e6a
	adds r0, r6, r2	@ 00112e6a b018
.org 0x112e6c
	ldr r1, [pc, #224]	@ 00112e6c 3849
.org 0x112e6e
	movs r2, #64	@ 00112e6e 4022
.org 0x112e70
	bl 0xd0b78	@ 00112e70 bdf782fe
.org 0x112e74
	movs r3, #144	@ 00112e74 9023
.org 0x112e76
	lsls r3, r3, #4	@ 00112e76 1b01
.org 0x112e78
	adds r0, r6, r3	@ 00112e78 f018
.org 0x112e7a
	ldr r1, [pc, #216]	@ 00112e7a 3649
.org 0x112e7c
	movs r2, #22	@ 00112e7c 1622
.org 0x112e7e
	bl 0xe94dc	@ 00112e7e d6f72dfb
.org 0x112e82
	ldr r1, [pc, #212]	@ 00112e82 3549
.org 0x112e84
	adds r0, r6, r1	@ 00112e84 7018
.org 0x112e86
	ldr r1, [pc, #212]	@ 00112e86 3549
.org 0x112e88
	movs r2, #10	@ 00112e88 0a22
.org 0x112e8a
	bl 0x108324	@ 00112e8a f5f74bfa
.org 0x112e8e
	movs r2, #149	@ 00112e8e 9522
.org 0x112e90
	lsls r2, r2, #4	@ 00112e90 1201
.org 0x112e92
	adds r0, r6, r2	@ 00112e92 b018
.org 0x112e94
	ldr r1, [pc, #200]	@ 00112e94 3249
.org 0x112e96
	movs r2, #16	@ 00112e96 1022
.org 0x112e98
	bl 0x1090cc	@ 00112e98 f6f718f9
.org 0x112e9c
	bl 0x2ad08	@ 00112e9c 17f734ff
.org 0x112ea0
	mov r0, r9	@ 00112ea0 4846
.org 0x112ea2
	bl 0x10de70	@ 00112ea2 faf7e5ff
.org 0x112ea6
	mov r0, r9	@ 00112ea6 4846
.org 0x112ea8
	bl 0x10e480	@ 00112ea8 fbf7eafa
.org 0x112eac
	ldr r0, [r4, #0]	@ 00112eac 2068
.org 0x112eae
	ldr r3, [pc, #180]	@ 00112eae 2d4b
.org 0x112eb0
	adds r1, r6, r3	@ 00112eb0 f118
.org 0x112eb2
	bl 0x382b0	@ 00112eb2 25f7fdf9
.org 0x112eb6
	adds r0, r5, #0	@ 00112eb6 281c
.org 0x112eb8
	bl 0x1f224	@ 00112eb8 0cf7b4f9
.org 0x112ebc
	ldr r2, [pc, #168]	@ 00112ebc 2a4a
.org 0x112ebe
	ldrb r0, [r2, #20]	@ 00112ebe 107d
.org 0x112ec0
	movs r1, #64	@ 00112ec0 4021
.org 0x112ec2
	orrs r0, r1	@ 00112ec2 0843
.org 0x112ec4
	movs r1, #128	@ 00112ec4 8021
.org 0x112ec6
	orrs r0, r1	@ 00112ec6 0843
.org 0x112ec8
	strb r0, [r2, #20]	@ 00112ec8 1075
.org 0x112eca
	adds r2, #38	@ 00112eca 2632
.org 0x112ecc
	mov r0, sl	@ 00112ecc 5046
.org 0x112ece
	strb r0, [r2, #0]	@ 00112ece 1070
.org 0x112ed0
	ldrb r0, [r6, #1]	@ 00112ed0 7078
.org 0x112ed2
	adds r0, #1	@ 00112ed2 0130
.org 0x112ed4
	strb r0, [r6, #1]	@ 00112ed4 7070
.org 0x112ed6
	pop {r3, r4, r5}	@ 00112ed6 38bc
.org 0x112ed8
	mov r8, r3	@ 00112ed8 9846
.org 0x112eda
	mov r9, r4	@ 00112eda a146
.org 0x112edc
	mov sl, r5	@ 00112edc aa46
.org 0x112ede
	pop {r4, r5, r6}	@ 00112ede 70bc
.org 0x112ee0
	pop {r0}	@ 00112ee0 01bc
.org 0x112ee2
	bx r0	@ 00112ee2 0047
