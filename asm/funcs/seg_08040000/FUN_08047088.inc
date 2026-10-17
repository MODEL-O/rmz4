@ FUN_08047088  entry 0x08047088  size 86
.thumb
.org 0x47088
FUN_08047088:
	push {r4, r5, lr}	@ 00047088 30b5
.org 0x4708a
	adds r4, r0, #0	@ 0004708a 041c
.org 0x4708c
	lsls r1, r1, #24	@ 0004708c 0906
.org 0x4708e
	lsrs r5, r1, #24	@ 0004708e 0d0e
.org 0x47090
	ldr r0, [pc, #76]	@ 00047090 1348
.org 0x47092
	ldr r0, [r0, #0]	@ 00047092 0068
.org 0x47094
	bl 0x5500	@ 00047094 bef734fa
.org 0x47098
	adds r2, r0, #0	@ 00047098 021c
.org 0x4709a
	cmp r2, #0	@ 0004709a 002a
.org 0x4709c
	beq.n 0x470d6	@ 0004709c 1bd0
.org 0x4709e
	ldr r1, [pc, #68]	@ 0004709e 1149
.org 0x470a0
	movs r0, #27	@ 000470a0 1b20
.org 0x470a2
	strb r0, [r2, #9]	@ 000470a2 5072
.org 0x470a4
	ldr r0, [r1, #108]	@ 000470a4 c86e
.org 0x470a6
	ldr r0, [r0, #0]	@ 000470a6 0068
.org 0x470a8
	str r0, [r2, #20]	@ 000470a8 5061
.org 0x470aa
	ldrb r1, [r2, #11]	@ 000470aa d17a
.org 0x470ac
	movs r0, #191	@ 000470ac bf20
.org 0x470ae
	ands r0, r1	@ 000470ae 0840
.org 0x470b0
	strb r0, [r2, #11]	@ 000470b0 d072
.org 0x470b2
	adds r1, r2, #0	@ 000470b2 111c
.org 0x470b4
	adds r1, #37	@ 000470b4 2531
.org 0x470b6
	movs r0, #16	@ 000470b6 1020
.org 0x470b8
	strb r0, [r1, #0]	@ 000470b8 0870
.org 0x470ba
	ldr r0, [pc, #44]	@ 000470ba 0b48
.org 0x470bc
	ldrh r0, [r0, #0]	@ 000470bc 0088
.org 0x470be
	strh r0, [r2, #32]	@ 000470be 1084
.org 0x470c0
	ldr r0, [pc, #40]	@ 000470c0 0a48
.org 0x470c2
	ldrb r0, [r0, #0]	@ 000470c2 0078
.org 0x470c4
	subs r1, #3	@ 000470c4 0339
.org 0x470c6
	strb r0, [r1, #0]	@ 000470c6 0870
.org 0x470c8
	ldr r0, [r4, #0]	@ 000470c8 2068
.org 0x470ca
	ldr r1, [r4, #4]	@ 000470ca 6168
.org 0x470cc
	str r0, [r2, #84]	@ 000470cc 5065
.org 0x470ce
	str r1, [r2, #88]	@ 000470ce 9165
.org 0x470d0
	movs r0, #1	@ 000470d0 0120
.org 0x470d2
	strb r0, [r2, #16]	@ 000470d2 1074
.org 0x470d4
	strb r5, [r2, #17]	@ 000470d4 5574
.org 0x470d6
	adds r0, r2, #0	@ 000470d6 101c
.org 0x470d8
	pop {r4, r5}	@ 000470d8 30bc
.org 0x470da
	pop {r1}	@ 000470da 02bc
.org 0x470dc
	bx r1	@ 000470dc 0847
