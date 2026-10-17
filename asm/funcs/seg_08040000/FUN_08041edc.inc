@ FUN_08041edc  entry 0x08041edc  size 204
.thumb
.org 0x41edc
FUN_08041edc:
	push {r4, r5, r6, lr}	@ 00041edc 70b5
.org 0x41ede
	adds r4, r0, #0	@ 00041ede 041c
.org 0x41ee0
	adds r6, r2, #0	@ 00041ee0 161c
.org 0x41ee2
	lsls r3, r3, #24	@ 00041ee2 1b06
.org 0x41ee4
	lsrs r5, r3, #24	@ 00041ee4 1d0e
.org 0x41ee6
	ldr r0, [pc, #64]	@ 00041ee6 1048
.org 0x41ee8
	ldr r0, [r0, #0]	@ 00041ee8 0068
.org 0x41eea
	bl 0x5500	@ 00041eea c3f709fb
.org 0x41eee
	mov ip, r0	@ 00041eee 8446
.org 0x41ef0
	cmp r0, #0	@ 00041ef0 0028
.org 0x41ef2
	beq.n 0x41fbc	@ 00041ef2 63d0
.org 0x41ef4
	adds r0, r4, #0	@ 00041ef4 201c
.org 0x41ef6
	adds r0, #248	@ 00041ef6 f830
.org 0x41ef8
	ldrb r0, [r0, #0]	@ 00041ef8 0078
.org 0x41efa
	cmp r0, #2	@ 00041efa 0228
.org 0x41efc
	bne.n 0x41f38	@ 00041efc 1cd1
.org 0x41efe
	ldr r1, [pc, #44]	@ 00041efe 0b49
.org 0x41f00
	movs r0, #13	@ 00041f00 0d20
.org 0x41f02
	mov r2, ip	@ 00041f02 6246
.org 0x41f04
	strb r0, [r2, #9]	@ 00041f04 5072
.org 0x41f06
	ldr r0, [r1, #52]	@ 00041f06 486b
.org 0x41f08
	ldr r0, [r0, #0]	@ 00041f08 0068
.org 0x41f0a
	str r0, [r2, #20]	@ 00041f0a 5061
.org 0x41f0c
	ldrb r1, [r2, #11]	@ 00041f0c d17a
.org 0x41f0e
	movs r0, #191	@ 00041f0e bf20
.org 0x41f10
	ands r0, r1	@ 00041f10 0840
.org 0x41f12
	strb r0, [r2, #11]	@ 00041f12 d072
.org 0x41f14
	mov r1, ip	@ 00041f14 6146
.org 0x41f16
	adds r1, #37	@ 00041f16 2531
.org 0x41f18
	movs r0, #16	@ 00041f18 1020
.org 0x41f1a
	strb r0, [r1, #0]	@ 00041f1a 0870
.org 0x41f1c
	ldr r0, [pc, #16]	@ 00041f1c 0448
.org 0x41f1e
	ldrh r0, [r0, #0]	@ 00041f1e 0088
.org 0x41f20
	strh r0, [r2, #32]	@ 00041f20 1084
.org 0x41f22
	ldr r0, [pc, #16]	@ 00041f22 0448
.org 0x41f24
	ldrb r0, [r0, #0]	@ 00041f24 0078
.org 0x41f26
	b.n 0x41f60	@ 00041f26 1be0
.org 0x41f28
	.byte 0x88,0xed,0x02,0x02	@ 00041f28 data
.org 0x41f2c
	.byte 0xf8,0x39,0x85,0x08	@ 00041f2c data
.org 0x41f30
	.byte 0xfc,0x36,0x85,0x08	@ 00041f30 data
.org 0x41f34
	.byte 0x04,0x37,0x85,0x08	@ 00041f34 data
.org 0x41f38
	ldr r1, [pc, #76]	@ 00041f38 1349
.org 0x41f3a
	movs r0, #13	@ 00041f3a 0d20
.org 0x41f3c
	mov r2, ip	@ 00041f3c 6246
.org 0x41f3e
	strb r0, [r2, #9]	@ 00041f3e 5072
.org 0x41f40
	ldr r0, [r1, #52]	@ 00041f40 486b
.org 0x41f42
	ldr r0, [r0, #0]	@ 00041f42 0068
.org 0x41f44
	str r0, [r2, #20]	@ 00041f44 5061
.org 0x41f46
	ldrb r1, [r2, #11]	@ 00041f46 d17a
.org 0x41f48
	movs r0, #191	@ 00041f48 bf20
.org 0x41f4a
	ands r0, r1	@ 00041f4a 0840
.org 0x41f4c
	strb r0, [r2, #11]	@ 00041f4c d072
.org 0x41f4e
	mov r1, ip	@ 00041f4e 6146
.org 0x41f50
	adds r1, #37	@ 00041f50 2531
.org 0x41f52
	movs r0, #16	@ 00041f52 1020
.org 0x41f54
	strb r0, [r1, #0]	@ 00041f54 0870
.org 0x41f56
	ldr r0, [pc, #52]	@ 00041f56 0d48
.org 0x41f58
	ldrh r0, [r0, #2]	@ 00041f58 4088
.org 0x41f5a
	strh r0, [r2, #32]	@ 00041f5a 1084
.org 0x41f5c
	ldr r0, [pc, #48]	@ 00041f5c 0c48
.org 0x41f5e
	ldrb r0, [r0, #1]	@ 00041f5e 4078
.org 0x41f60
	subs r1, #3	@ 00041f60 0339
.org 0x41f62
	strb r0, [r1, #0]	@ 00041f62 0870
.org 0x41f64
	mov r0, ip	@ 00041f64 6046
.org 0x41f66
	str r4, [r0, #40]	@ 00041f66 8462
.org 0x41f68
	ldr r0, [r6, #0]	@ 00041f68 3068
.org 0x41f6a
	ldr r1, [r6, #4]	@ 00041f6a 7168
.org 0x41f6c
	mov r2, ip	@ 00041f6c 6246
.org 0x41f6e
	str r0, [r2, #84]	@ 00041f6e 5065
.org 0x41f70
	str r1, [r2, #88]	@ 00041f70 9165
.org 0x41f72
	movs r0, #1	@ 00041f72 0120
.org 0x41f74
	strb r0, [r2, #16]	@ 00041f74 1074
.org 0x41f76
	strb r5, [r2, #17]	@ 00041f76 5574
.org 0x41f78
	adds r3, r5, #0	@ 00041f78 2b1c
.org 0x41f7a
	cmp r3, #0	@ 00041f7a 002b
.org 0x41f7c
	beq.n 0x41f94	@ 00041f7c 0ad0
.org 0x41f7e
	ldrb r0, [r2, #10]	@ 00041f7e 907a
.org 0x41f80
	movs r1, #16	@ 00041f80 1021
.org 0x41f82
	orrs r0, r1	@ 00041f82 0843
.org 0x41f84
	strb r0, [r2, #10]	@ 00041f84 9072
.org 0x41f86
	b.n 0x41fa0	@ 00041f86 0be0
.org 0x41f88
	.byte 0xf8,0x39,0x85,0x08	@ 00041f88 data
.org 0x41f8c
	.byte 0xfc,0x36,0x85,0x08	@ 00041f8c data
.org 0x41f90
	.byte 0x04,0x37,0x85,0x08	@ 00041f90 data
.org 0x41f94
	mov r0, ip	@ 00041f94 6046
.org 0x41f96
	ldrb r1, [r0, #10]	@ 00041f96 817a
.org 0x41f98
	movs r0, #239	@ 00041f98 ef20
.org 0x41f9a
	ands r0, r1	@ 00041f9a 0840
.org 0x41f9c
	mov r1, ip	@ 00041f9c 6146
.org 0x41f9e
	strb r0, [r1, #10]	@ 00041f9e 8872
.org 0x41fa0
	movs r1, #1	@ 00041fa0 0121
.org 0x41fa2
	ands r1, r3	@ 00041fa2 1940
.org 0x41fa4
	mov r0, ip	@ 00041fa4 6046
.org 0x41fa6
	adds r0, #76	@ 00041fa6 4c30
