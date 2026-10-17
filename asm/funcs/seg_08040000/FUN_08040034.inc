@ FUN_08040034  entry 0x08040034  size 196
.thumb
.org 0x40034
FUN_08040034:
	push {r4, r5, r6, r7, lr}	@ 00040034 f0b5
.org 0x40036
	adds r4, r0, #0	@ 00040036 041c
.org 0x40038
	adds r5, r1, #0	@ 00040038 0d1c
.org 0x4003a
	lsls r2, r2, #24	@ 0004003a 1206
.org 0x4003c
	lsrs r7, r2, #24	@ 0004003c 170e
.org 0x4003e
	lsls r3, r3, #24	@ 0004003e 1b06
.org 0x40040
	lsrs r6, r3, #24	@ 00040040 1e0e
.org 0x40042
	ldr r0, [pc, #64]	@ 00040042 1048
.org 0x40044
	ldr r0, [r0, #0]	@ 00040044 0068
.org 0x40046
	bl 0x5500	@ 00040046 c5f75bfa
.org 0x4004a
	adds r2, r0, #0	@ 0004004a 021c
.org 0x4004c
	cmp r2, #0	@ 0004004c 002a
.org 0x4004e
	beq.n 0x40112	@ 0004004e 60d0
.org 0x40050
	adds r0, r5, #0	@ 00040050 281c
.org 0x40052
	adds r0, #248	@ 00040052 f830
.org 0x40054
	ldrb r0, [r0, #0]	@ 00040054 0078
.org 0x40056
	cmp r0, #2	@ 00040056 0228
.org 0x40058
	bne.n 0x40094	@ 00040058 1cd1
.org 0x4005a
	ldr r1, [pc, #44]	@ 0004005a 0b49
.org 0x4005c
	movs r0, #8	@ 0004005c 0820
.org 0x4005e
	strb r0, [r2, #9]	@ 0004005e 5072
.org 0x40060
	ldr r0, [r1, #32]	@ 00040060 086a
.org 0x40062
	ldr r0, [r0, #0]	@ 00040062 0068
.org 0x40064
	str r0, [r2, #20]	@ 00040064 5061
.org 0x40066
	ldrb r1, [r2, #11]	@ 00040066 d17a
.org 0x40068
	movs r0, #191	@ 00040068 bf20
.org 0x4006a
	ands r0, r1	@ 0004006a 0840
.org 0x4006c
	strb r0, [r2, #11]	@ 0004006c d072
.org 0x4006e
	adds r1, r2, #0	@ 0004006e 111c
.org 0x40070
	adds r1, #37	@ 00040070 2531
.org 0x40072
	movs r0, #16	@ 00040072 1020
.org 0x40074
	strb r0, [r1, #0]	@ 00040074 0870
.org 0x40076
	ldr r0, [pc, #20]	@ 00040076 0548
.org 0x40078
	ldrh r0, [r0, #0]	@ 00040078 0088
.org 0x4007a
	strh r0, [r2, #32]	@ 0004007a 1084
.org 0x4007c
	ldr r0, [pc, #16]	@ 0004007c 0448
.org 0x4007e
	ldrb r0, [r0, #0]	@ 0004007e 0078
.org 0x40080
	b.n 0x400ba	@ 00040080 1be0
.org 0x40082
	.byte 0x00	@ 00040082 data
.org 0x40083
	.byte 0x00	@ 00040083 data
.org 0x40084
	.byte 0x88,0xed,0x02,0x02	@ 00040084 data
.org 0x40088
	.byte 0xf8,0x39,0x85,0x08	@ 00040088 data
.org 0x4008c
	.byte 0xfc,0x36,0x85,0x08	@ 0004008c data
.org 0x40090
	.byte 0x04,0x37,0x85,0x08	@ 00040090 data
.org 0x40094
	ldr r1, [pc, #76]	@ 00040094 1349
.org 0x40096
	movs r0, #8	@ 00040096 0820
.org 0x40098
	strb r0, [r2, #9]	@ 00040098 5072
.org 0x4009a
	ldr r0, [r1, #32]	@ 0004009a 086a
.org 0x4009c
	ldr r0, [r0, #0]	@ 0004009c 0068
.org 0x4009e
	str r0, [r2, #20]	@ 0004009e 5061
.org 0x400a0
	ldrb r1, [r2, #11]	@ 000400a0 d17a
.org 0x400a2
	movs r0, #191	@ 000400a2 bf20
.org 0x400a4
	ands r0, r1	@ 000400a4 0840
.org 0x400a6
	strb r0, [r2, #11]	@ 000400a6 d072
.org 0x400a8
	adds r1, r2, #0	@ 000400a8 111c
.org 0x400aa
	adds r1, #37	@ 000400aa 2531
.org 0x400ac
	movs r0, #16	@ 000400ac 1020
.org 0x400ae
	strb r0, [r1, #0]	@ 000400ae 0870
.org 0x400b0
	ldr r0, [pc, #52]	@ 000400b0 0d48
.org 0x400b2
	ldrh r0, [r0, #2]	@ 000400b2 4088
.org 0x400b4
	strh r0, [r2, #32]	@ 000400b4 1084
.org 0x400b6
	ldr r0, [pc, #52]	@ 000400b6 0d48
.org 0x400b8
	ldrb r0, [r0, #1]	@ 000400b8 4078
.org 0x400ba
	subs r1, #3	@ 000400ba 0339
.org 0x400bc
	strb r0, [r1, #0]	@ 000400bc 0870
.org 0x400be
	str r4, [r2, #40]	@ 000400be 9462
.org 0x400c0
	str r5, [r2, #44]	@ 000400c0 d562
.org 0x400c2
	ldr r0, [r4, #84]	@ 000400c2 606d
.org 0x400c4
	ldr r1, [r4, #88]	@ 000400c4 a16d
.org 0x400c6
	str r0, [r2, #84]	@ 000400c6 5065
.org 0x400c8
	str r1, [r2, #88]	@ 000400c8 9165
.org 0x400ca
	strb r7, [r2, #16]	@ 000400ca 1774
.org 0x400cc
	strb r6, [r2, #17]	@ 000400cc 5674
.org 0x400ce
	ldrb r0, [r4, #10]	@ 000400ce a07a
.org 0x400d0
	lsrs r3, r0, #4	@ 000400d0 0309
.org 0x400d2
	movs r0, #1	@ 000400d2 0120
.org 0x400d4
	ands r3, r0	@ 000400d4 0340
.org 0x400d6
	cmp r3, #0	@ 000400d6 002b
.org 0x400d8
	beq.n 0x400f0	@ 000400d8 0ad0
.org 0x400da
	ldrb r0, [r2, #10]	@ 000400da 907a
.org 0x400dc
	movs r1, #16	@ 000400dc 1021
.org 0x400de
	orrs r0, r1	@ 000400de 0843
.org 0x400e0
	b.n 0x400f6	@ 000400e0 09e0
.org 0x400e2
	.byte 0x00	@ 000400e2 data
.org 0x400e3
	.byte 0x00	@ 000400e3 data
.org 0x400e4
	.byte 0xf8,0x39,0x85,0x08	@ 000400e4 data
.org 0x400e8
	.byte 0xfc,0x36,0x85,0x08	@ 000400e8 data
.org 0x400ec
	.byte 0x04,0x37,0x85,0x08	@ 000400ec data
.org 0x400f0
	ldrb r1, [r2, #10]	@ 000400f0 917a
.org 0x400f2
	movs r0, #239	@ 000400f2 ef20
.org 0x400f4
	ands r0, r1	@ 000400f4 0840
.org 0x400f6
	strb r0, [r2, #10]	@ 000400f6 9072
