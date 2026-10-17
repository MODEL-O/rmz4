@ FUN_08099048  entry 0x08099048  size 156
.thumb
.org 0x99048
FUN_08099048:
	push {r4, r5, r6, r7, lr}	@ 00099048 f0b5
.org 0x9904a
	mov r7, sl	@ 0009904a 5746
.org 0x9904c
	mov r6, r9	@ 0009904c 4e46
.org 0x9904e
	mov r5, r8	@ 0009904e 4546
.org 0x99050
	push {r5, r6, r7}	@ 00099050 e0b4
.org 0x99052
	adds r7, r0, #0	@ 00099052 071c
.org 0x99054
	ldrb r0, [r7, #14]	@ 00099054 b87b
.org 0x99056
	cmp r0, #0	@ 00099056 0028
.org 0x99058
	bne.n 0x9906e	@ 00099058 09d1
.org 0x9905a
	movs r1, #208	@ 0009905a d021
.org 0x9905c
	lsls r1, r1, #7	@ 0009905c c901
.org 0x9905e
	adds r0, r7, #0	@ 0009905e 381c
.org 0x99060
	bl 0x1cf00	@ 00099060 83f74eff
.org 0x99064
	movs r0, #32	@ 00099064 2020
.org 0x99066
	strb r0, [r7, #18]	@ 00099066 b874
.org 0x99068
	ldrb r0, [r7, #14]	@ 00099068 b87b
.org 0x9906a
	adds r0, #1	@ 0009906a 0130
.org 0x9906c
	strb r0, [r7, #14]	@ 0009906c b873
.org 0x9906e
	adds r0, r7, #0	@ 0009906e 381c
.org 0x99070
	bl 0x1cff0	@ 00099070 83f7beff
.org 0x99074
	ldrb r0, [r7, #18]	@ 00099074 b87c
.org 0x99076
	subs r0, #1	@ 00099076 0138
.org 0x99078
	movs r1, #0	@ 00099078 0021
.org 0x9907a
	strb r0, [r7, #18]	@ 0009907a b874
.org 0x9907c
	lsls r0, r0, #24	@ 0009907c 0006
.org 0x9907e
	lsrs r0, r0, #24	@ 0009907e 000e
.org 0x99080
	cmp r0, #255	@ 00099080 ff28
.org 0x99082
	bne.n 0x990d6	@ 00099082 28d1
.org 0x99084
	movs r0, #1	@ 00099084 0120
.org 0x99086
	mov sl, r0	@ 00099086 8246
.org 0x99088
	movs r0, #1	@ 00099088 0120
.org 0x9908a
	strb r0, [r7, #13]	@ 0009908a 7873
.org 0x9908c
	strb r1, [r7, #14]	@ 0009908c b973
.org 0x9908e
	strb r1, [r7, #19]	@ 0009908e f974
.org 0x99090
	ldr r1, [pc, #80]	@ 00099090 1449
.org 0x99092
	mov r9, r1	@ 00099092 8946
.org 0x99094
	ldr r4, [pc, #80]	@ 00099094 144c
.org 0x99096
	ldr r0, [r4, #0]	@ 00099096 2068
.org 0x99098
	ldr r1, [pc, #80]	@ 00099098 1449
.org 0x9909a
	mov r8, r1	@ 0009909a 8846
.org 0x9909c
	mov r1, r8	@ 0009909c 4146
.org 0x9909e
	muls r1, r0	@ 0009909e 4143
.org 0x990a0
	adds r0, r1, #0	@ 000990a0 081c
.org 0x990a2
	ldr r6, [pc, #76]	@ 000990a2 134e
.org 0x990a4
	adds r0, r0, r6	@ 000990a4 8019
.org 0x990a6
	lsls r0, r0, #1	@ 000990a6 4000
.org 0x990a8
	lsrs r5, r0, #1	@ 000990a8 4508
.org 0x990aa
	str r5, [r4, #0]	@ 000990aa 2560
.org 0x990ac
	lsrs r0, r0, #17	@ 000990ac 400c
.org 0x990ae
	movs r1, #6	@ 000990ae 0621
.org 0x990b0
	bl 0x129198	@ 000990b0 90f072f8
.org 0x990b4
	add r0, r9	@ 000990b4 4844
.org 0x990b6
	ldrb r0, [r0, #0]	@ 000990b6 0078
.org 0x990b8
	adds r1, r7, #0	@ 000990b8 391c
.org 0x990ba
	adds r1, #190	@ 000990ba be31
.org 0x990bc
	strb r0, [r1, #0]	@ 000990bc 0870
.org 0x990be
	mov r0, r8	@ 000990be 4046
.org 0x990c0
	muls r0, r5	@ 000990c0 6843
.org 0x990c2
	adds r0, r0, r6	@ 000990c2 8019
.org 0x990c4
	lsls r0, r0, #1	@ 000990c4 4000
.org 0x990c6
	lsrs r1, r0, #1	@ 000990c6 4108
.org 0x990c8
	str r1, [r4, #0]	@ 000990c8 2160
.org 0x990ca
	lsrs r0, r0, #17	@ 000990ca 400c
.org 0x990cc
	mov r1, sl	@ 000990cc 5146
.org 0x990ce
	ands r0, r1	@ 000990ce 0840
.org 0x990d0
	adds r1, r7, #0	@ 000990d0 391c
.org 0x990d2
	adds r1, #191	@ 000990d2 bf31
.org 0x990d4
	strb r0, [r1, #0]	@ 000990d4 0870
.org 0x990d6
	pop {r3, r4, r5}	@ 000990d6 38bc
.org 0x990d8
	mov r8, r3	@ 000990d8 9846
.org 0x990da
	mov r9, r4	@ 000990da a146
.org 0x990dc
	mov sl, r5	@ 000990dc aa46
.org 0x990de
	pop {r4, r5, r6, r7}	@ 000990de f0bc
.org 0x990e0
	pop {r0}	@ 000990e0 01bc
.org 0x990e2
	bx r0	@ 000990e2 0047
