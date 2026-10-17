@ FUN_08041e3c  entry 0x08041e3c  size 130
.thumb
.org 0x41e3c
FUN_08041e3c:
	push {r4, r5, lr}	@ 00041e3c 30b5
.org 0x41e3e
	adds r4, r0, #0	@ 00041e3e 041c
.org 0x41e40
	lsls r1, r1, #24	@ 00041e40 0906
.org 0x41e42
	lsrs r5, r1, #24	@ 00041e42 0d0e
.org 0x41e44
	ldr r0, [pc, #60]	@ 00041e44 0f48
.org 0x41e46
	ldr r0, [r0, #0]	@ 00041e46 0068
.org 0x41e48
	bl 0x5500	@ 00041e48 c3f75afb
.org 0x41e4c
	adds r2, r0, #0	@ 00041e4c 021c
.org 0x41e4e
	cmp r2, #0	@ 00041e4e 002a
.org 0x41e50
	beq.n 0x41ec6	@ 00041e50 39d0
.org 0x41e52
	adds r0, r4, #0	@ 00041e52 201c
.org 0x41e54
	adds r0, #248	@ 00041e54 f830
.org 0x41e56
	ldrb r0, [r0, #0]	@ 00041e56 0078
.org 0x41e58
	cmp r0, #2	@ 00041e58 0228
.org 0x41e5a
	bne.n 0x41e94	@ 00041e5a 1bd1
.org 0x41e5c
	ldr r1, [pc, #40]	@ 00041e5c 0a49
.org 0x41e5e
	movs r0, #13	@ 00041e5e 0d20
.org 0x41e60
	strb r0, [r2, #9]	@ 00041e60 5072
.org 0x41e62
	ldr r0, [r1, #52]	@ 00041e62 486b
.org 0x41e64
	ldr r0, [r0, #0]	@ 00041e64 0068
.org 0x41e66
	str r0, [r2, #20]	@ 00041e66 5061
.org 0x41e68
	ldrb r1, [r2, #11]	@ 00041e68 d17a
.org 0x41e6a
	movs r0, #191	@ 00041e6a bf20
.org 0x41e6c
	ands r0, r1	@ 00041e6c 0840
.org 0x41e6e
	strb r0, [r2, #11]	@ 00041e6e d072
.org 0x41e70
	adds r1, r2, #0	@ 00041e70 111c
.org 0x41e72
	adds r1, #37	@ 00041e72 2531
.org 0x41e74
	movs r0, #16	@ 00041e74 1020
.org 0x41e76
	strb r0, [r1, #0]	@ 00041e76 0870
.org 0x41e78
	ldr r0, [pc, #16]	@ 00041e78 0448
.org 0x41e7a
	ldrh r0, [r0, #0]	@ 00041e7a 0088
.org 0x41e7c
	strh r0, [r2, #32]	@ 00041e7c 1084
.org 0x41e7e
	ldr r0, [pc, #16]	@ 00041e7e 0448
.org 0x41e80
	ldrb r0, [r0, #0]	@ 00041e80 0078
.org 0x41e82
	b.n 0x41eba	@ 00041e82 1ae0
.org 0x41e84
	.byte 0x88,0xed,0x02,0x02	@ 00041e84 data
.org 0x41e88
	.byte 0xf8,0x39,0x85,0x08	@ 00041e88 data
.org 0x41e8c
	.byte 0xfc,0x36,0x85,0x08	@ 00041e8c data
.org 0x41e90
	.byte 0x04,0x37,0x85,0x08	@ 00041e90 data
.org 0x41e94
	ldr r1, [pc, #56]	@ 00041e94 0e49
.org 0x41e96
	movs r0, #13	@ 00041e96 0d20
.org 0x41e98
	strb r0, [r2, #9]	@ 00041e98 5072
.org 0x41e9a
	ldr r0, [r1, #52]	@ 00041e9a 486b
.org 0x41e9c
	ldr r0, [r0, #0]	@ 00041e9c 0068
.org 0x41e9e
	str r0, [r2, #20]	@ 00041e9e 5061
.org 0x41ea0
	ldrb r1, [r2, #11]	@ 00041ea0 d17a
.org 0x41ea2
	movs r0, #191	@ 00041ea2 bf20
.org 0x41ea4
	ands r0, r1	@ 00041ea4 0840
.org 0x41ea6
	strb r0, [r2, #11]	@ 00041ea6 d072
.org 0x41ea8
	adds r1, r2, #0	@ 00041ea8 111c
.org 0x41eaa
	adds r1, #37	@ 00041eaa 2531
.org 0x41eac
	movs r0, #16	@ 00041eac 1020
.org 0x41eae
	strb r0, [r1, #0]	@ 00041eae 0870
.org 0x41eb0
	ldr r0, [pc, #32]	@ 00041eb0 0848
.org 0x41eb2
	ldrh r0, [r0, #2]	@ 00041eb2 4088
.org 0x41eb4
	strh r0, [r2, #32]	@ 00041eb4 1084
.org 0x41eb6
	ldr r0, [pc, #32]	@ 00041eb6 0848
.org 0x41eb8
	ldrb r0, [r0, #1]	@ 00041eb8 4078
.org 0x41eba
	subs r1, #3	@ 00041eba 0339
.org 0x41ebc
	strb r0, [r1, #0]	@ 00041ebc 0870
