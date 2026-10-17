@ FUN_080cc030  entry 0x080cc030  size 82
.thumb
.org 0xcc030
FUN_080cc030:
	push {r4, r5, r6, lr}	@ 000cc030 70b5
.org 0xcc032
	adds r4, r0, #0	@ 000cc032 041c
.org 0xcc034
	adds r6, r2, #0	@ 000cc034 161c
.org 0xcc036
	lsls r1, r1, #24	@ 000cc036 0906
.org 0xcc038
	lsrs r5, r1, #24	@ 000cc038 0d0e
.org 0xcc03a
	ldr r0, [pc, #72]	@ 000cc03a 1248
.org 0xcc03c
	ldr r0, [r0, #0]	@ 000cc03c 0068
.org 0xcc03e
	bl 0x5500	@ 000cc03e 39f75ffa
.org 0xcc042
	adds r3, r0, #0	@ 000cc042 031c
.org 0xcc044
	cmp r3, #0	@ 000cc044 002b
.org 0xcc046
	beq.n 0xcc07c	@ 000cc046 19d0
.org 0xcc048
	adds r1, r3, #0	@ 000cc048 191c
.org 0xcc04a
	adds r1, #37	@ 000cc04a 2531
.org 0xcc04c
	movs r2, #0	@ 000cc04c 0022
.org 0xcc04e
	movs r0, #8	@ 000cc04e 0820
.org 0xcc050
	strb r0, [r1, #0]	@ 000cc050 0870
.org 0xcc052
	ldr r0, [pc, #52]	@ 000cc052 0d48
.org 0xcc054
	movs r1, #42	@ 000cc054 2a21
.org 0xcc056
	strb r1, [r3, #9]	@ 000cc056 5972
.org 0xcc058
	adds r0, #168	@ 000cc058 a830
.org 0xcc05a
	ldr r0, [r0, #0]	@ 000cc05a 0068
.org 0xcc05c
	ldr r0, [r0, #0]	@ 000cc05c 0068
.org 0xcc05e
	str r0, [r3, #20]	@ 000cc05e 5861
.org 0xcc060
	movs r0, #0	@ 000cc060 0020
.org 0xcc062
	strh r2, [r3, #32]	@ 000cc062 1a84
.org 0xcc064
	adds r1, r3, #0	@ 000cc064 191c
.org 0xcc066
	adds r1, #34	@ 000cc066 2231
.org 0xcc068
	strb r0, [r1, #0]	@ 000cc068 0870
.org 0xcc06a
	str r4, [r3, #40]	@ 000cc06a 9c62
.org 0xcc06c
	ldr r0, [r4, #84]	@ 000cc06c 606d
.org 0xcc06e
	ldr r1, [r4, #88]	@ 000cc06e a16d
.org 0xcc070
	str r0, [r3, #84]	@ 000cc070 5865
.org 0xcc072
	str r1, [r3, #88]	@ 000cc072 9965
.org 0xcc074
	movs r0, #4	@ 000cc074 0420
.org 0xcc076
	strb r0, [r3, #16]	@ 000cc076 1874
.org 0xcc078
	strb r5, [r3, #17]	@ 000cc078 5d74
.org 0xcc07a
	str r6, [r3, #100]	@ 000cc07a 5e66
.org 0xcc07c
	pop {r4, r5, r6}	@ 000cc07c 70bc
.org 0xcc07e
	pop {r0}	@ 000cc07e 01bc
.org 0xcc080
	bx r0	@ 000cc080 0047
