@ FUN_08044fb8  entry 0x08044fb8  size 192
.thumb
.org 0x44fb8
FUN_08044fb8:
	push {r4, r5, r6, r7, lr}	@ 00044fb8 f0b5
.org 0x44fba
	adds r4, r0, #0	@ 00044fba 041c
.org 0x44fbc
	adds r5, r1, #0	@ 00044fbc 0d1c
.org 0x44fbe
	lsls r2, r2, #24	@ 00044fbe 1206
.org 0x44fc0
	lsrs r7, r2, #24	@ 00044fc0 170e
.org 0x44fc2
	lsls r3, r3, #24	@ 00044fc2 1b06
.org 0x44fc4
	lsrs r6, r3, #24	@ 00044fc4 1e0e
.org 0x44fc6
	ldr r0, [pc, #64]	@ 00044fc6 1048
.org 0x44fc8
	ldr r0, [r0, #0]	@ 00044fc8 0068
.org 0x44fca
	bl 0x5500	@ 00044fca c0f799fa
.org 0x44fce
	adds r2, r0, #0	@ 00044fce 021c
.org 0x44fd0
	cmp r2, #0	@ 00044fd0 002a
.org 0x44fd2
	beq.n 0x45090	@ 00044fd2 5dd0
.org 0x44fd4
	adds r0, r4, #0	@ 00044fd4 201c
.org 0x44fd6
	adds r0, #248	@ 00044fd6 f830
.org 0x44fd8
	ldrb r0, [r0, #0]	@ 00044fd8 0078
.org 0x44fda
	cmp r0, #2	@ 00044fda 0228
.org 0x44fdc
	bne.n 0x45018	@ 00044fdc 1cd1
.org 0x44fde
	ldr r1, [pc, #44]	@ 00044fde 0b49
.org 0x44fe0
	movs r0, #22	@ 00044fe0 1620
.org 0x44fe2
	strb r0, [r2, #9]	@ 00044fe2 5072
.org 0x44fe4
	ldr r0, [r1, #88]	@ 00044fe4 886d
.org 0x44fe6
	ldr r0, [r0, #0]	@ 00044fe6 0068
.org 0x44fe8
	str r0, [r2, #20]	@ 00044fe8 5061
.org 0x44fea
	ldrb r1, [r2, #11]	@ 00044fea d17a
.org 0x44fec
	movs r0, #191	@ 00044fec bf20
.org 0x44fee
	ands r0, r1	@ 00044fee 0840
.org 0x44ff0
	strb r0, [r2, #11]	@ 00044ff0 d072
.org 0x44ff2
	adds r1, r2, #0	@ 00044ff2 111c
.org 0x44ff4
	adds r1, #37	@ 00044ff4 2531
.org 0x44ff6
	movs r0, #16	@ 00044ff6 1020
.org 0x44ff8
	strb r0, [r1, #0]	@ 00044ff8 0870
.org 0x44ffa
	ldr r0, [pc, #20]	@ 00044ffa 0548
.org 0x44ffc
	ldrh r0, [r0, #0]	@ 00044ffc 0088
.org 0x44ffe
	strh r0, [r2, #32]	@ 00044ffe 1084
.org 0x45000
	ldr r0, [pc, #16]	@ 00045000 0448
.org 0x45002
	ldrb r0, [r0, #0]	@ 00045002 0078
.org 0x45004
	b.n 0x4503e	@ 00045004 1be0
.org 0x45006
	.byte 0x00	@ 00045006 data
.org 0x45007
	.byte 0x00	@ 00045007 data
.org 0x45008
	.byte 0x88,0xed,0x02,0x02	@ 00045008 data
.org 0x4500c
	.byte 0xf8,0x39,0x85,0x08	@ 0004500c data
.org 0x45010
	.byte 0xfc,0x36,0x85,0x08	@ 00045010 data
.org 0x45014
	.byte 0x04,0x37,0x85,0x08	@ 00045014 data
.org 0x45018
	ldr r1, [pc, #68]	@ 00045018 1149
.org 0x4501a
	movs r0, #22	@ 0004501a 1620
.org 0x4501c
	strb r0, [r2, #9]	@ 0004501c 5072
.org 0x4501e
	ldr r0, [r1, #88]	@ 0004501e 886d
.org 0x45020
	ldr r0, [r0, #0]	@ 00045020 0068
.org 0x45022
	str r0, [r2, #20]	@ 00045022 5061
.org 0x45024
	ldrb r1, [r2, #11]	@ 00045024 d17a
.org 0x45026
	movs r0, #191	@ 00045026 bf20
.org 0x45028
	ands r0, r1	@ 00045028 0840
.org 0x4502a
	strb r0, [r2, #11]	@ 0004502a d072
.org 0x4502c
	adds r1, r2, #0	@ 0004502c 111c
.org 0x4502e
	adds r1, #37	@ 0004502e 2531
.org 0x45030
	movs r0, #16	@ 00045030 1020
.org 0x45032
	strb r0, [r1, #0]	@ 00045032 0870
.org 0x45034
	ldr r0, [pc, #44]	@ 00045034 0b48
.org 0x45036
	ldrh r0, [r0, #2]	@ 00045036 4088
.org 0x45038
	strh r0, [r2, #32]	@ 00045038 1084
.org 0x4503a
	ldr r0, [pc, #44]	@ 0004503a 0b48
.org 0x4503c
	ldrb r0, [r0, #1]	@ 0004503c 4078
.org 0x4503e
	subs r1, #3	@ 0004503e 0339
.org 0x45040
	strb r0, [r1, #0]	@ 00045040 0870
.org 0x45042
	str r4, [r2, #44]	@ 00045042 d462
.org 0x45044
	ldr r0, [r5, #0]	@ 00045044 2868
.org 0x45046
	ldr r1, [r5, #4]	@ 00045046 6968
.org 0x45048
	str r0, [r2, #84]	@ 00045048 5065
.org 0x4504a
	str r1, [r2, #88]	@ 0004504a 9165
.org 0x4504c
	movs r0, #1	@ 0004504c 0120
.org 0x4504e
	strb r0, [r2, #16]	@ 0004504e 1074
.org 0x45050
	strb r7, [r2, #17]	@ 00045050 5774
.org 0x45052
	adds r3, r6, #0	@ 00045052 331c
.org 0x45054
	cmp r3, #0	@ 00045054 002b
.org 0x45056
	beq.n 0x4506c	@ 00045056 09d0
.org 0x45058
	ldrb r0, [r2, #10]	@ 00045058 907a
.org 0x4505a
	movs r1, #16	@ 0004505a 1021
.org 0x4505c
	orrs r0, r1	@ 0004505c 0843
.org 0x4505e
	b.n 0x45072	@ 0004505e 08e0
.org 0x45060
	.byte 0xf8,0x39,0x85,0x08	@ 00045060 data
.org 0x45064
	.byte 0xfc,0x36,0x85,0x08	@ 00045064 data
.org 0x45068
	.byte 0x04,0x37,0x85,0x08	@ 00045068 data
.org 0x4506c
	ldrb r1, [r2, #10]	@ 0004506c 917a
.org 0x4506e
	movs r0, #239	@ 0004506e ef20
.org 0x45070
	ands r0, r1	@ 00045070 0840
.org 0x45072
	strb r0, [r2, #10]	@ 00045072 9072
.org 0x45074
	movs r1, #1	@ 00045074 0121
.org 0x45076
	ands r1, r3	@ 00045076 1940
