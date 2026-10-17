@ FUN_080e3690  entry 0x080e3690  size 108
.thumb
.org 0xe3690
FUN_080e3690:
	push {r4, lr}	@ 000e3690 10b5
.org 0xe3692
	adds r4, r0, #0	@ 000e3692 041c
.org 0xe3694
	ldr r2, [r4, #40]	@ 000e3694 a26a
.org 0xe3696
	ldr r1, [pc, #100]	@ 000e3696 1949
.org 0xe3698
	ldrb r0, [r4, #9]	@ 000e3698 607a
.org 0xe369a
	lsls r0, r0, #2	@ 000e369a 8000
.org 0xe369c
	adds r0, r0, r1	@ 000e369c 4018
.org 0xe369e
	movs r1, #1	@ 000e369e 0121
.org 0xe36a0
	str r1, [r4, #12]	@ 000e36a0 e160
.org 0xe36a2
	ldr r0, [r0, #0]	@ 000e36a2 0068
.org 0xe36a4
	ldr r0, [r0, #4]	@ 000e36a4 4068
.org 0xe36a6
	str r0, [r4, #20]	@ 000e36a6 6061
.org 0xe36a8
	ldrb r1, [r4, #10]	@ 000e36a8 a17a
.org 0xe36aa
	movs r0, #1	@ 000e36aa 0120
.org 0xe36ac
	orrs r0, r1	@ 000e36ac 0843
.org 0xe36ae
	movs r1, #2	@ 000e36ae 0221
.org 0xe36b0
	orrs r0, r1	@ 000e36b0 0843
.org 0xe36b2
	strb r0, [r4, #10]	@ 000e36b2 a072
.org 0xe36b4
	ldr r0, [r2, #84]	@ 000e36b4 506d
.org 0xe36b6
	str r0, [r4, #84]	@ 000e36b6 6065
.org 0xe36b8
	ldr r0, [r2, #88]	@ 000e36b8 906d
.org 0xe36ba
	ldr r1, [pc, #68]	@ 000e36ba 1149
.org 0xe36bc
	adds r0, r0, r1	@ 000e36bc 4018
.org 0xe36be
	str r0, [r4, #88]	@ 000e36be a065
.org 0xe36c0
	movs r0, #51	@ 000e36c0 3320
.org 0xe36c2
	strb r0, [r4, #18]	@ 000e36c2 a074
.org 0xe36c4
	adds r0, r4, #0	@ 000e36c4 201c
.org 0xe36c6
	bl 0x1cc9c	@ 000e36c6 39f7e9fa
.org 0xe36ca
	movs r2, #0	@ 000e36ca 0022
.org 0xe36cc
	ldrb r1, [r4, #10]	@ 000e36cc a17a
.org 0xe36ce
	movs r0, #239	@ 000e36ce ef20
.org 0xe36d0
	ands r0, r1	@ 000e36d0 0840
.org 0xe36d2
	strb r0, [r4, #10]	@ 000e36d2 a072
.org 0xe36d4
	adds r0, r4, #0	@ 000e36d4 201c
.org 0xe36d6
	adds r0, #76	@ 000e36d6 4c30
.org 0xe36d8
	strb r2, [r0, #0]	@ 000e36d8 0270
.org 0xe36da
	adds r2, r4, #0	@ 000e36da 221c
.org 0xe36dc
	adds r2, #74	@ 000e36dc 4a32
.org 0xe36de
	ldrb r1, [r2, #0]	@ 000e36de 1178
.org 0xe36e0
	movs r0, #17	@ 000e36e0 1120
.org 0xe36e2
	negs r0, r0	@ 000e36e2 4042
.org 0xe36e4
	ands r0, r1	@ 000e36e4 0840
.org 0xe36e6
	strb r0, [r2, #0]	@ 000e36e6 1070
.org 0xe36e8
	ldr r1, [pc, #24]	@ 000e36e8 0649
.org 0xe36ea
	adds r0, r4, #0	@ 000e36ea 201c
.org 0xe36ec
	bl 0x1cf00	@ 000e36ec 39f708fc
.org 0xe36f0
	adds r0, r4, #0	@ 000e36f0 201c
.org 0xe36f2
	bl 0xe3708	@ 000e36f2 00f009f8
.org 0xe36f6
	pop {r4}	@ 000e36f6 10bc
.org 0xe36f8
	pop {r0}	@ 000e36f8 01bc
.org 0xe36fa
	bx r0	@ 000e36fa 0047
