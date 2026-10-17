@ FUN_080eca5c  entry 0x080eca5c  size 94
.thumb
.org 0xeca5c
FUN_080eca5c:
	push {r4, r5, lr}	@ 000eca5c 30b5
.org 0xeca5e
	adds r4, r0, #0	@ 000eca5e 041c
.org 0xeca60
	movs r5, #0	@ 000eca60 0025
.org 0xeca62
	ldr r1, [pc, #88]	@ 000eca62 1649
.org 0xeca64
	ldrb r0, [r4, #9]	@ 000eca64 607a
.org 0xeca66
	lsls r0, r0, #2	@ 000eca66 8000
.org 0xeca68
	adds r0, r0, r1	@ 000eca68 4018
.org 0xeca6a
	movs r1, #1	@ 000eca6a 0121
.org 0xeca6c
	str r1, [r4, #12]	@ 000eca6c e160
.org 0xeca6e
	ldr r0, [r0, #0]	@ 000eca6e 0068
.org 0xeca70
	ldr r0, [r0, #4]	@ 000eca70 4068
.org 0xeca72
	str r0, [r4, #20]	@ 000eca72 6061
.org 0xeca74
	strb r5, [r4, #13]	@ 000eca74 6573
.org 0xeca76
	strb r5, [r4, #14]	@ 000eca76 a573
.org 0xeca78
	strb r5, [r4, #15]	@ 000eca78 e573
.org 0xeca7a
	ldrb r0, [r4, #10]	@ 000eca7a a07a
.org 0xeca7c
	orrs r0, r1	@ 000eca7c 0843
.org 0xeca7e
	movs r1, #2	@ 000eca7e 0221
.org 0xeca80
	orrs r0, r1	@ 000eca80 0843
.org 0xeca82
	strb r0, [r4, #10]	@ 000eca82 a072
.org 0xeca84
	adds r0, r4, #0	@ 000eca84 201c
.org 0xeca86
	bl 0x1cc9c	@ 000eca86 30f709f9
.org 0xeca8a
	adds r1, r4, #0	@ 000eca8a 211c
.org 0xeca8c
	adds r1, #37	@ 000eca8c 2531
.org 0xeca8e
	movs r0, #24	@ 000eca8e 1820
.org 0xeca90
	strb r0, [r1, #0]	@ 000eca90 0870
.org 0xeca92
	ldrb r1, [r4, #10]	@ 000eca92 a17a
.org 0xeca94
	movs r0, #239	@ 000eca94 ef20
.org 0xeca96
	ands r0, r1	@ 000eca96 0840
.org 0xeca98
	strb r0, [r4, #10]	@ 000eca98 a072
.org 0xeca9a
	adds r0, r4, #0	@ 000eca9a 201c
.org 0xeca9c
	adds r0, #76	@ 000eca9c 4c30
.org 0xeca9e
	strb r5, [r0, #0]	@ 000eca9e 0570
.org 0xecaa0
	adds r2, r4, #0	@ 000ecaa0 221c
.org 0xecaa2
	adds r2, #74	@ 000ecaa2 4a32
.org 0xecaa4
	ldrb r1, [r2, #0]	@ 000ecaa4 1178
.org 0xecaa6
	movs r0, #17	@ 000ecaa6 1120
.org 0xecaa8
	negs r0, r0	@ 000ecaa8 4042
.org 0xecaaa
	ands r0, r1	@ 000ecaaa 0840
.org 0xecaac
	strb r0, [r2, #0]	@ 000ecaac 1070
.org 0xecaae
	adds r0, r4, #0	@ 000ecaae 201c
.org 0xecab0
	bl 0xecac0	@ 000ecab0 00f006f8
.org 0xecab4
	pop {r4, r5}	@ 000ecab4 30bc
.org 0xecab6
	pop {r0}	@ 000ecab6 01bc
.org 0xecab8
	bx r0	@ 000ecab8 0047
