@ FUN_080cd0f0  entry 0x080cd0f0  size 100
.thumb
.org 0xcd0f0
FUN_080cd0f0:
	push {r4, r5, r6, r7, lr}	@ 000cd0f0 f0b5
.org 0xcd0f2
	mov r7, r8	@ 000cd0f2 4746
.org 0xcd0f4
	push {r7}	@ 000cd0f4 80b4
.org 0xcd0f6
	adds r7, r0, #0	@ 000cd0f6 071c
.org 0xcd0f8
	mov r8, r1	@ 000cd0f8 8846
.org 0xcd0fa
	lsls r2, r2, #24	@ 000cd0fa 1206
.org 0xcd0fc
	lsrs r6, r2, #24	@ 000cd0fc 160e
.org 0xcd0fe
	lsls r3, r3, #24	@ 000cd0fe 1b06
.org 0xcd100
	lsrs r5, r3, #24	@ 000cd100 1d0e
.org 0xcd102
	ldr r0, [pc, #80]	@ 000cd102 1448
.org 0xcd104
	ldr r0, [r0, #0]	@ 000cd104 0068
.org 0xcd106
	bl 0x5500	@ 000cd106 38f7fbf9
.org 0xcd10a
	adds r4, r0, #0	@ 000cd10a 041c
.org 0xcd10c
	cmp r4, #0	@ 000cd10c 002c
.org 0xcd10e
	beq.n 0xcd148	@ 000cd10e 1bd0
.org 0xcd110
	adds r1, r4, #0	@ 000cd110 211c
.org 0xcd112
	adds r1, #37	@ 000cd112 2531
.org 0xcd114
	movs r3, #0	@ 000cd114 0023
.org 0xcd116
	movs r0, #8	@ 000cd116 0820
.org 0xcd118
	strb r0, [r1, #0]	@ 000cd118 0870
.org 0xcd11a
	ldr r0, [pc, #60]	@ 000cd11a 0f48
.org 0xcd11c
	movs r1, #46	@ 000cd11c 2e21
.org 0xcd11e
	strb r1, [r4, #9]	@ 000cd11e 6172
.org 0xcd120
	adds r0, #184	@ 000cd120 b830
.org 0xcd122
	ldr r0, [r0, #0]	@ 000cd122 0068
.org 0xcd124
	ldr r0, [r0, #0]	@ 000cd124 0068
.org 0xcd126
	str r0, [r4, #20]	@ 000cd126 6061
.org 0xcd128
	movs r2, #0	@ 000cd128 0022
.org 0xcd12a
	strh r3, [r4, #32]	@ 000cd12a 2384
.org 0xcd12c
	adds r0, r4, #0	@ 000cd12c 201c
.org 0xcd12e
	adds r0, #34	@ 000cd12e 2230
.org 0xcd130
	strb r2, [r0, #0]	@ 000cd130 0270
.org 0xcd132
	str r7, [r4, #40]	@ 000cd132 a762
.org 0xcd134
	mov r3, r8	@ 000cd134 4346
.org 0xcd136
	ldr r0, [r3, #0]	@ 000cd136 1868
.org 0xcd138
	ldr r1, [r3, #4]	@ 000cd138 5968
.org 0xcd13a
	str r0, [r4, #84]	@ 000cd13a 6065
.org 0xcd13c
	str r1, [r4, #88]	@ 000cd13c a165
.org 0xcd13e
	strb r6, [r4, #16]	@ 000cd13e 2674
.org 0xcd140
	strb r5, [r4, #17]	@ 000cd140 6574
.org 0xcd142
	adds r0, r4, #0	@ 000cd142 201c
.org 0xcd144
	adds r0, #180	@ 000cd144 b430
.org 0xcd146
	strb r2, [r0, #0]	@ 000cd146 0270
.org 0xcd148
	adds r0, r4, #0	@ 000cd148 201c
.org 0xcd14a
	pop {r3}	@ 000cd14a 08bc
.org 0xcd14c
	mov r8, r3	@ 000cd14c 9846
.org 0xcd14e
	pop {r4, r5, r6, r7}	@ 000cd14e f0bc
.org 0xcd150
	pop {r1}	@ 000cd150 02bc
.org 0xcd152
	bx r1	@ 000cd152 0847
