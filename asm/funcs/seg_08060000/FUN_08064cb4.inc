@ FUN_08064cb4  entry 0x08064cb4  size 428
.thumb
.org 0x64cb4
FUN_08064cb4:
	push {r4, r5, r6, lr}	@ 00064cb4 70b5
.org 0x64cb6
	adds r6, r0, #0	@ 00064cb6 061c
.org 0x64cb8
	ldrb r4, [r6, #15]	@ 00064cb8 f47b
.org 0x64cba
	cmp r4, #0	@ 00064cba 002c
.org 0x64cbc
	beq.n 0x64cc0	@ 00064cbc 00d0
.org 0x64cbe
	b.n 0x64de8	@ 00064cbe 93e0
.org 0x64cc0
	ldr r0, [pc, #236]	@ 00064cc0 3b48
.org 0x64cc2
	bl 0x2b10	@ 00064cc2 9df725ff
.org 0x64cc6
	adds r0, r6, #0	@ 00064cc6 301c
.org 0x64cc8
	adds r0, #196	@ 00064cc8 c430
.org 0x64cca
	ldr r0, [r0, #0]	@ 00064cca 0068
.org 0x64ccc
	cmp r0, #0	@ 00064ccc 0028
.org 0x64cce
	beq.n 0x64cd8	@ 00064cce 03d0
.org 0x64cd0
	adds r1, r0, #0	@ 00064cd0 011c
.org 0x64cd2
	adds r1, #180	@ 00064cd2 b431
.org 0x64cd4
	movs r0, #1	@ 00064cd4 0120
.org 0x64cd6
	strb r0, [r1, #0]	@ 00064cd6 0870
.org 0x64cd8
	adds r2, r6, #0	@ 00064cd8 321c
.org 0x64cda
	adds r2, #188	@ 00064cda bc32
.org 0x64cdc
	ldr r1, [r2, #0]	@ 00064cdc 1168
.org 0x64cde
	cmp r1, #0	@ 00064cde 0029
.org 0x64ce0
	beq.n 0x64cea	@ 00064ce0 03d0
.org 0x64ce2
	adds r1, #181	@ 00064ce2 b531
.org 0x64ce4
	movs r0, #1	@ 00064ce4 0120
.org 0x64ce6
	strb r0, [r1, #0]	@ 00064ce6 0870
.org 0x64ce8
	str r4, [r2, #0]	@ 00064ce8 1460
.org 0x64cea
	adds r3, r6, #0	@ 00064cea 331c
.org 0x64cec
	adds r3, #200	@ 00064cec c833
.org 0x64cee
	ldr r2, [r3, #0]	@ 00064cee 1a68
.org 0x64cf0
	cmp r2, #0	@ 00064cf0 002a
.org 0x64cf2
	beq.n 0x64d2a	@ 00064cf2 1ad0
.org 0x64cf4
	ldrb r1, [r2, #10]	@ 00064cf4 917a
.org 0x64cf6
	movs r0, #254	@ 00064cf6 fe20
.org 0x64cf8
	ands r0, r1	@ 00064cf8 0840
.org 0x64cfa
	movs r1, #253	@ 00064cfa fd21
.org 0x64cfc
	ands r0, r1	@ 00064cfc 0840
.org 0x64cfe
	strb r0, [r2, #10]	@ 00064cfe 9072
.org 0x64d00
	adds r0, r2, #0	@ 00064d00 101c
.org 0x64d02
	adds r0, #140	@ 00064d02 8c30
.org 0x64d04
	str r4, [r0, #0]	@ 00064d04 0460
.org 0x64d06
	adds r0, #4	@ 00064d06 0430
.org 0x64d08
	str r4, [r0, #0]	@ 00064d08 0460
.org 0x64d0a
	adds r0, #4	@ 00064d0a 0430
.org 0x64d0c
	strb r4, [r0, #0]	@ 00064d0c 0470
.org 0x64d0e
	ldrb r1, [r2, #10]	@ 00064d0e 917a
.org 0x64d10
	movs r0, #251	@ 00064d10 fb20
.org 0x64d12
	ands r0, r1	@ 00064d12 0840
.org 0x64d14
	strb r0, [r2, #10]	@ 00064d14 9072
.org 0x64d16
	ldr r1, [pc, #156]	@ 00064d16 2749
.org 0x64d18
	ldrb r0, [r2, #9]	@ 00064d18 507a
.org 0x64d1a
	lsls r0, r0, #2	@ 00064d1a 8000
.org 0x64d1c
	adds r0, r0, r1	@ 00064d1c 4018
.org 0x64d1e
	movs r1, #3	@ 00064d1e 0321
.org 0x64d20
	str r1, [r2, #12]	@ 00064d20 d160
.org 0x64d22
	ldr r0, [r0, #0]	@ 00064d22 0068
.org 0x64d24
	ldr r0, [r0, #12]	@ 00064d24 c068
.org 0x64d26
	str r0, [r2, #20]	@ 00064d26 5061
.org 0x64d28
	str r4, [r3, #0]	@ 00064d28 1c60
.org 0x64d2a
	adds r3, r6, #0	@ 00064d2a 331c
.org 0x64d2c
	adds r3, #216	@ 00064d2c d833
.org 0x64d2e
	ldr r2, [r3, #0]	@ 00064d2e 1a68
.org 0x64d30
	cmp r2, #0	@ 00064d30 002a
.org 0x64d32
	beq.n 0x64d6a	@ 00064d32 1ad0
.org 0x64d34
	ldrb r1, [r2, #10]	@ 00064d34 917a
.org 0x64d36
	movs r0, #254	@ 00064d36 fe20
.org 0x64d38
	ands r0, r1	@ 00064d38 0840
.org 0x64d3a
	movs r1, #253	@ 00064d3a fd21
.org 0x64d3c
	ands r0, r1	@ 00064d3c 0840
.org 0x64d3e
	strb r0, [r2, #10]	@ 00064d3e 9072
.org 0x64d40
	adds r0, r2, #0	@ 00064d40 101c
.org 0x64d42
	adds r0, #140	@ 00064d42 8c30
.org 0x64d44
	str r4, [r0, #0]	@ 00064d44 0460
.org 0x64d46
	adds r0, #4	@ 00064d46 0430
.org 0x64d48
	str r4, [r0, #0]	@ 00064d48 0460
.org 0x64d4a
	adds r0, #4	@ 00064d4a 0430
.org 0x64d4c
	strb r4, [r0, #0]	@ 00064d4c 0470
.org 0x64d4e
	ldrb r1, [r2, #10]	@ 00064d4e 917a
.org 0x64d50
	movs r0, #251	@ 00064d50 fb20
.org 0x64d52
	ands r0, r1	@ 00064d52 0840
.org 0x64d54
	strb r0, [r2, #10]	@ 00064d54 9072
.org 0x64d56
	ldr r1, [pc, #96]	@ 00064d56 1849
.org 0x64d58
	ldrb r0, [r2, #9]	@ 00064d58 507a
.org 0x64d5a
	lsls r0, r0, #2	@ 00064d5a 8000
.org 0x64d5c
	adds r0, r0, r1	@ 00064d5c 4018
.org 0x64d5e
	movs r1, #3	@ 00064d5e 0321
.org 0x64d60
	str r1, [r2, #12]	@ 00064d60 d160
.org 0x64d62
	ldr r0, [r0, #0]	@ 00064d62 0068
.org 0x64d64
	ldr r0, [r0, #12]	@ 00064d64 c068
.org 0x64d66
	str r0, [r2, #20]	@ 00064d66 5061
.org 0x64d68
	str r4, [r3, #0]	@ 00064d68 1c60
.org 0x64d6a
	adds r0, r6, #0	@ 00064d6a 301c
.org 0x64d6c
	adds r0, #84	@ 00064d6c 5430
.org 0x64d6e
	movs r1, #2	@ 00064d6e 0221
.org 0x64d70
	movs r2, #1	@ 00064d70 0122
.org 0x64d72
	bl 0x664bc	@ 00064d72 01f0a3fb
.org 0x64d76
	adds r0, r6, #0	@ 00064d76 301c
.org 0x64d78
	adds r0, #182	@ 00064d78 b630
.org 0x64d7a
	ldrb r5, [r0, #0]	@ 00064d7a 0578
.org 0x64d7c
	adds r0, r6, #0	@ 00064d7c 301c
.org 0x64d7e
	movs r1, #13	@ 00064d7e 0d21
.org 0x64d80
	bl 0x65a94	@ 00064d80 00f088fe
.org 0x64d84
	movs r2, #1	@ 00064d84 0122
.org 0x64d86
	adds r1, r5, #0	@ 00064d86 291c
.org 0x64d88
	ands r1, r2	@ 00064d88 1140
.org 0x64d8a
	adds r0, r6, #0	@ 00064d8a 301c
.org 0x64d8c
	adds r0, #76	@ 00064d8c 4c30
.org 0x64d8e
	strb r1, [r0, #0]	@ 00064d8e 0170
.org 0x64d90
	adds r4, r6, #0	@ 00064d90 341c
.org 0x64d92
	adds r4, #74	@ 00064d92 4a34
.org 0x64d94
	lsls r1, r1, #4	@ 00064d94 0901
.org 0x64d96
	ldrb r3, [r4, #0]	@ 00064d96 2378
.org 0x64d98
	movs r0, #17	@ 00064d98 1120
.org 0x64d9a
	negs r0, r0	@ 00064d9a 4042
.org 0x64d9c
	ands r0, r3	@ 00064d9c 1840
.org 0x64d9e
	orrs r0, r1	@ 00064d9e 0843
.org 0x64da0
	strb r0, [r4, #0]	@ 00064da0 2070
.org 0x64da2
	ands r2, r5	@ 00064da2 2a40
.org 0x64da4
	cmp r2, #0	@ 00064da4 002a
.org 0x64da6
	beq.n 0x64dbc	@ 00064da6 09d0
.org 0x64da8
	ldrb r0, [r6, #10]	@ 00064da8 b07a
.org 0x64daa
	movs r1, #16	@ 00064daa 1021
.org 0x64dac
	orrs r0, r1	@ 00064dac 0843
.org 0x64dae
	b.n 0x64dc2	@ 00064dae 08e0
.org 0x64db0
	.byte 0x11,0x01,0x00,0x00	@ 00064db0 data
.org 0x64db4
	.byte 0x40,0xdb,0x85,0x08	@ 00064db4 data
.org 0x64db8
	.byte 0xfc,0x92,0x86,0x08	@ 00064db8 data
.org 0x64dbc
	ldrb r1, [r6, #10]	@ 00064dbc b17a
.org 0x64dbe
	movs r0, #239	@ 00064dbe ef20
.org 0x64dc0
	ands r0, r1	@ 00064dc0 0840
.org 0x64dc2
	strb r0, [r6, #10]	@ 00064dc2 b072
.org 0x64dc4
	lsls r1, r5, #1	@ 00064dc4 6900
.org 0x64dc6
	subs r1, #1	@ 00064dc6 0139
.org 0x64dc8
	lsls r0, r1, #1	@ 00064dc8 4800
.org 0x64dca
	adds r0, r0, r1	@ 00064dca 4018
.org 0x64dcc
	lsls r0, r0, #7	@ 00064dcc c001
.org 0x64dce
	negs r0, r0	@ 00064dce 4042
.org 0x64dd0
	str r0, [r6, #92]	@ 00064dd0 f065
.org 0x64dd2
	cmp r0, #0	@ 00064dd2 0028
.org 0x64dd4
	bge.n 0x64dd8	@ 00064dd4 00da
.org 0x64dd6
	adds r0, #31	@ 00064dd6 1f30
.org 0x64dd8
	asrs r0, r0, #5	@ 00064dd8 4011
.org 0x64dda
	negs r0, r0	@ 00064dda 4042
.org 0x64ddc
	str r0, [r6, #100]	@ 00064ddc 7066
.org 0x64dde
	movs r0, #32	@ 00064dde 2020
.org 0x64de0
	strb r0, [r6, #18]	@ 00064de0 b074
.org 0x64de2
	ldrb r0, [r6, #15]	@ 00064de2 f07b
.org 0x64de4
	adds r0, #1	@ 00064de4 0130
.org 0x64de6
	strb r0, [r6, #15]	@ 00064de6 f073
.org 0x64de8
	adds r0, r6, #0	@ 00064de8 301c
.org 0x64dea
	bl 0x1cff0	@ 00064dea b8f701f9
.org 0x64dee
	adds r0, r6, #0	@ 00064dee 301c
.org 0x64df0
	adds r0, #116	@ 00064df0 7430
.org 0x64df2
	ldr r4, [pc, #104]	@ 00064df2 1a4c
.org 0x64df4
	ldr r3, [pc, #104]	@ 00064df4 1a4b
.org 0x64df6
	adds r1, r6, #0	@ 00064df6 311c
.org 0x64df8
	adds r1, #180	@ 00064df8 b431
.org 0x64dfa
	ldrb r2, [r1, #0]	@ 00064dfa 0a78
.org 0x64dfc
	lsls r1, r2, #1	@ 00064dfc 5100
.org 0x64dfe
	adds r1, r1, r3	@ 00064dfe c918
.org 0x64e00
	ldrh r1, [r1, #0]	@ 00064e00 0988
.org 0x64e02
	lsls r1, r1, #2	@ 00064e02 8900
.org 0x64e04
	adds r1, r1, r4	@ 00064e04 0919
.org 0x64e06
	adds r3, r6, #0	@ 00064e06 331c
.org 0x64e08
	adds r3, #113	@ 00064e08 7133
.org 0x64e0a
	movs r5, #0	@ 00064e0a 0025
.org 0x64e0c
	ldrsb r5, [r3, r5]	@ 00064e0c 5d57
.org 0x64e0e
	ldr r1, [r1, #0]	@ 00064e0e 0968
.org 0x64e10
	lsls r3, r5, #2	@ 00064e10 ab00
.org 0x64e12
	adds r3, r3, r1	@ 00064e12 5b18
.org 0x64e14
	ldr r4, [pc, #76]	@ 00064e14 134c
.org 0x64e16
	adds r1, r6, #0	@ 00064e16 311c
.org 0x64e18
	adds r1, #181	@ 00064e18 b531
.org 0x64e1a
	ldrb r1, [r1, #0]	@ 00064e1a 0978
.org 0x64e1c
	lsls r1, r1, #2	@ 00064e1c 8900
.org 0x64e1e
	adds r1, r1, r4	@ 00064e1e 0919
.org 0x64e20
	ldr r1, [r1, #0]	@ 00064e20 0968
.org 0x64e22
	lsls r2, r2, #2	@ 00064e22 9200
.org 0x64e24
	adds r2, r2, r1	@ 00064e24 5218
.org 0x64e26
	ldr r1, [r2, #0]	@ 00064e26 1168
.org 0x64e28
	adds r1, r1, r5	@ 00064e28 4919
.org 0x64e2a
	ldrb r1, [r1, #0]	@ 00064e2a 0978
.org 0x64e2c
	lsls r2, r1, #1	@ 00064e2c 4a00
.org 0x64e2e
	adds r2, r2, r1	@ 00064e2e 5218
.org 0x64e30
	lsls r2, r2, #3	@ 00064e30 d200
.org 0x64e32
	ldr r1, [r3, #0]	@ 00064e32 1968
.org 0x64e34
	adds r1, r1, r2	@ 00064e34 8918
.org 0x64e36
	bl 0x5784	@ 00064e36 a0f7a5fc
.org 0x64e3a
	ldrb r0, [r6, #18]	@ 00064e3a b07c
.org 0x64e3c
	cmp r0, #0	@ 00064e3c 0028
.org 0x64e3e
	beq.n 0x64e68	@ 00064e3e 13d0
.org 0x64e40
	subs r0, #1	@ 00064e40 0138
.org 0x64e42
	strb r0, [r6, #18]	@ 00064e42 b074
.org 0x64e44
	lsls r0, r0, #24	@ 00064e44 0006
.org 0x64e46
	cmp r0, #0	@ 00064e46 0028
.org 0x64e48
	beq.n 0x64e68	@ 00064e48 0ed0
.org 0x64e4a
	ldr r0, [r6, #84]	@ 00064e4a 706d
.org 0x64e4c
	ldr r1, [r6, #92]	@ 00064e4c f16d
.org 0x64e4e
	adds r0, r0, r1	@ 00064e4e 4018
.org 0x64e50
	str r0, [r6, #84]	@ 00064e50 7065
.org 0x64e52
	ldr r0, [r6, #100]	@ 00064e52 706e
.org 0x64e54
	adds r1, r1, r0	@ 00064e54 0918
.org 0x64e56
	str r1, [r6, #92]	@ 00064e56 f165
.org 0x64e58
	b.n 0x64e74	@ 00064e58 0ce0
.org 0x64e5a
	.byte 0x00	@ 00064e5a data
.org 0x64e5b
	.byte 0x00	@ 00064e5b data
.org 0x64e5c
	.byte 0x80,0xaf,0x85,0x08	@ 00064e5c data
