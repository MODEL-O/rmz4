@ FUN_08027584  entry 0x08027584  size 76
.thumb
.org 0x27584
FUN_08027584:
	push {r4, r5, lr}	@ 00027584 30b5
.org 0x27586
	ldr r5, [pc, #72]	@ 00027586 124d
.org 0x27588
	ldr r1, [pc, #72]	@ 00027588 1249
.org 0x2758a
	adds r0, r5, r1	@ 0002758a 6818
.org 0x2758c
	movs r4, #0	@ 0002758c 0024
.org 0x2758e
	movs r1, #32	@ 0002758e 2021
.org 0x27590
	strb r1, [r0, #0]	@ 00027590 0170
.org 0x27592
	ldr r2, [pc, #68]	@ 00027592 114a
.org 0x27594
	adds r0, r5, r2	@ 00027594 a818
.org 0x27596
	strb r1, [r0, #0]	@ 00027596 0170
.org 0x27598
	subs r2, #1	@ 00027598 013a
.org 0x2759a
	adds r0, r5, r2	@ 0002759a a818
.org 0x2759c
	strb r1, [r0, #0]	@ 0002759c 0170
.org 0x2759e
	movs r1, #129	@ 0002759e 8121
.org 0x275a0
	lsls r1, r1, #3	@ 000275a0 c900
.org 0x275a2
	adds r0, r5, r1	@ 000275a2 6818
.org 0x275a4
	str r4, [r0, #0]	@ 000275a4 0460
.org 0x275a6
	bl 0x2348	@ 000275a6 daf7cffe
.org 0x275aa
	ldr r0, [pc, #48]	@ 000275aa 0c48
.org 0x275ac
	strh r4, [r0, #0]	@ 000275ac 0480
.org 0x275ae
	ldr r1, [pc, #48]	@ 000275ae 0c49
.org 0x275b0
	strh r4, [r1, #0]	@ 000275b0 0c80
.org 0x275b2
	movs r0, #255	@ 000275b2 ff20
.org 0x275b4
	strb r0, [r1, #14]	@ 000275b4 8873
.org 0x275b6
	ldr r0, [pc, #44]	@ 000275b6 0b48
.org 0x275b8
	strh r4, [r0, #0]	@ 000275b8 0480
.org 0x275ba
	strh r4, [r5, #0]	@ 000275ba 2c80
.org 0x275bc
	ldr r2, [pc, #40]	@ 000275bc 0a4a
.org 0x275be
	ldrh r1, [r2, #0]	@ 000275be 1188
.org 0x275c0
	ldr r0, [pc, #40]	@ 000275c0 0a48
.org 0x275c2
	ands r0, r1	@ 000275c2 0840
.org 0x275c4
	strh r0, [r2, #0]	@ 000275c4 1080
.org 0x275c6
	bl 0x29c0	@ 000275c6 dbf7fbf9
.org 0x275ca
	pop {r4, r5}	@ 000275ca 30bc
.org 0x275cc
	pop {r0}	@ 000275cc 01bc
.org 0x275ce
	bx r0	@ 000275ce 0047
