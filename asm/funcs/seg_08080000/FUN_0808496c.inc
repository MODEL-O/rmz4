@ FUN_0808496c  entry 0x0808496c  size 122
.thumb
.org 0x8496c
FUN_0808496c:
	push {r4, r5, r6, r7, lr}	@ 0008496c f0b5
.org 0x8496e
	mov r7, r8	@ 0008496e 4746
.org 0x84970
	push {r7}	@ 00084970 80b4
.org 0x84972
	sub sp, #4	@ 00084972 81b0
.org 0x84974
	adds r7, r0, #0	@ 00084974 071c
.org 0x84976
	adds r6, r1, #0	@ 00084976 0e1c
.org 0x84978
	movs r5, #0	@ 00084978 0025
.org 0x8497a
	movs r3, #0	@ 0008497a 0023
.org 0x8497c
	ldr r4, [pc, #104]	@ 0008497c 1a4c
.org 0x8497e
	ldr r0, [pc, #108]	@ 0008497e 1b48
.org 0x84980
	ldr r0, [r0, #0]	@ 00084980 0068
.org 0x84982
	str r3, [sp, #0]	@ 00084982 0093
.org 0x84984
	bl 0x54cc	@ 00084984 80f7a2fd
.org 0x84988
	adds r2, r0, #0	@ 00084988 021c
.org 0x8498a
	ldr r3, [sp, #0]	@ 0008498a 009b
.org 0x8498c
	cmp r2, #0	@ 0008498c 002a
.org 0x8498e
	beq.n 0x849d2	@ 0008498e 20d0
.org 0x84990
	adds r1, r2, #0	@ 00084990 111c
.org 0x84992
	adds r1, #37	@ 00084992 2531
.org 0x84994
	movs r0, #24	@ 00084994 1820
.org 0x84996
	strb r0, [r1, #0]	@ 00084996 0870
.org 0x84998
	ldr r1, [pc, #84]	@ 00084998 1549
.org 0x8499a
	movs r0, #5	@ 0008499a 0520
.org 0x8499c
	strb r0, [r2, #9]	@ 0008499c 5072
.org 0x8499e
	ldr r0, [r1, #20]	@ 0008499e 4869
.org 0x849a0
	ldr r0, [r0, #0]	@ 000849a0 0068
.org 0x849a2
	str r0, [r2, #20]	@ 000849a2 5061
.org 0x849a4
	strh r3, [r2, #32]	@ 000849a4 1384
.org 0x849a6
	adds r0, r2, #0	@ 000849a6 101c
.org 0x849a8
	adds r0, #34	@ 000849a8 2230
.org 0x849aa
	strb r3, [r0, #0]	@ 000849aa 0370
.org 0x849ac
	ldrb r0, [r2, #11]	@ 000849ac d07a
.org 0x849ae
	movs r1, #16	@ 000849ae 1021
.org 0x849b0
	orrs r0, r1	@ 000849b0 0843
.org 0x849b2
	strb r0, [r2, #11]	@ 000849b2 d072
.org 0x849b4
	ldrb r0, [r2, #28]	@ 000849b4 107f
.org 0x849b6
	strb r0, [r2, #29]	@ 000849b6 5077
.org 0x849b8
	movs r0, #2	@ 000849b8 0220
.org 0x849ba
	strb r0, [r2, #16]	@ 000849ba 1074
.org 0x849bc
	strb r5, [r2, #17]	@ 000849bc 5574
.org 0x849be
	str r7, [r2, #84]	@ 000849be 5765
.org 0x849c0
	movs r1, #0	@ 000849c0 0021
.org 0x849c2
	ldrsh r0, [r4, r1]	@ 000849c2 605e
.org 0x849c4
	adds r0, r7, r0	@ 000849c4 3818
.org 0x849c6
	str r0, [r2, #84]	@ 000849c6 5065
.org 0x849c8
	str r6, [r2, #88]	@ 000849c8 9665
.org 0x849ca
	movs r1, #2	@ 000849ca 0221
.org 0x849cc
	ldrsh r0, [r4, r1]	@ 000849cc 605e
.org 0x849ce
	adds r0, r6, r0	@ 000849ce 3018
.org 0x849d0
	str r0, [r2, #88]	@ 000849d0 9065
.org 0x849d2
	adds r4, #4	@ 000849d2 0434
.org 0x849d4
	adds r5, #1	@ 000849d4 0135
.org 0x849d6
	cmp r5, #3	@ 000849d6 032d
.org 0x849d8
	ble.n 0x8497e	@ 000849d8 d1dd
.org 0x849da
	add sp, #4	@ 000849da 01b0
.org 0x849dc
	pop {r3}	@ 000849dc 08bc
.org 0x849de
	mov r8, r3	@ 000849de 9846
.org 0x849e0
	pop {r4, r5, r6, r7}	@ 000849e0 f0bc
.org 0x849e2
	pop {r0}	@ 000849e2 01bc
.org 0x849e4
	bx r0	@ 000849e4 0047
