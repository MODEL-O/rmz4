@ FUN_080bb03c  entry 0x080bb03c  size 122
.thumb
.org 0xbb03c
FUN_080bb03c:
	push {r4, r5, r6, r7, lr}	@ 000bb03c f0b5
.org 0xbb03e
	adds r4, r0, #0	@ 000bb03e 041c
.org 0xbb040
	adds r7, r1, #0	@ 000bb040 0f1c
.org 0xbb042
	lsls r2, r2, #24	@ 000bb042 1206
.org 0xbb044
	lsrs r6, r2, #24	@ 000bb044 160e
.org 0xbb046
	lsls r3, r3, #24	@ 000bb046 1b06
.org 0xbb048
	lsrs r5, r3, #24	@ 000bb048 1d0e
.org 0xbb04a
	ldr r0, [pc, #108]	@ 000bb04a 1b48
.org 0xbb04c
	ldr r0, [r0, #0]	@ 000bb04c 0068
.org 0xbb04e
	bl 0x5500	@ 000bb04e 4af757fa
.org 0xbb052
	adds r3, r0, #0	@ 000bb052 031c
.org 0xbb054
	cmp r3, #0	@ 000bb054 002b
.org 0xbb056
	beq.n 0xbb0ae	@ 000bb056 2ad0
.org 0xbb058
	adds r1, r3, #0	@ 000bb058 191c
.org 0xbb05a
	adds r1, #37	@ 000bb05a 2531
.org 0xbb05c
	movs r2, #0	@ 000bb05c 0022
.org 0xbb05e
	movs r0, #24	@ 000bb05e 1820
.org 0xbb060
	strb r0, [r1, #0]	@ 000bb060 0870
.org 0xbb062
	ldr r0, [pc, #88]	@ 000bb062 1648
.org 0xbb064
	movs r1, #112	@ 000bb064 7021
.org 0xbb066
	strb r1, [r3, #9]	@ 000bb066 5972
.org 0xbb068
	movs r1, #224	@ 000bb068 e021
.org 0xbb06a
	lsls r1, r1, #1	@ 000bb06a 4900
.org 0xbb06c
	adds r0, r0, r1	@ 000bb06c 4018
.org 0xbb06e
	ldr r0, [r0, #0]	@ 000bb06e 0068
.org 0xbb070
	ldr r0, [r0, #0]	@ 000bb070 0068
.org 0xbb072
	str r0, [r3, #20]	@ 000bb072 5861
.org 0xbb074
	movs r0, #0	@ 000bb074 0020
.org 0xbb076
	strh r2, [r3, #32]	@ 000bb076 1a84
.org 0xbb078
	adds r1, r3, #0	@ 000bb078 191c
.org 0xbb07a
	adds r1, #34	@ 000bb07a 2231
.org 0xbb07c
	strb r0, [r1, #0]	@ 000bb07c 0870
.org 0xbb07e
	ldrb r1, [r3, #11]	@ 000bb07e d97a
.org 0xbb080
	movs r0, #16	@ 000bb080 1020
.org 0xbb082
	orrs r0, r1	@ 000bb082 0843
.org 0xbb084
	strb r0, [r3, #11]	@ 000bb084 d872
.org 0xbb086
	ldrb r0, [r3, #28]	@ 000bb086 187f
.org 0xbb088
	strb r0, [r3, #29]	@ 000bb088 5877
.org 0xbb08a
	str r4, [r3, #40]	@ 000bb08a 9c62
.org 0xbb08c
	ldr r0, [r7, #0]	@ 000bb08c 3868
.org 0xbb08e
	ldr r1, [r7, #4]	@ 000bb08e 7968
.org 0xbb090
	str r0, [r3, #84]	@ 000bb090 5865
.org 0xbb092
	str r1, [r3, #88]	@ 000bb092 9965
.org 0xbb094
	strb r6, [r3, #16]	@ 000bb094 1e74
.org 0xbb096
	strb r5, [r3, #17]	@ 000bb096 5d74
.org 0xbb098
	adds r1, r4, #0	@ 000bb098 211c
.org 0xbb09a
	adds r1, #204	@ 000bb09a cc31
.org 0xbb09c
	ldrh r0, [r1, #0]	@ 000bb09c 0888
.org 0xbb09e
	adds r0, #1	@ 000bb09e 0130
.org 0xbb0a0
	strh r0, [r1, #0]	@ 000bb0a0 0880
.org 0xbb0a2
	adds r2, r4, #0	@ 000bb0a2 221c
.org 0xbb0a4
	adds r2, #191	@ 000bb0a4 bf32
.org 0xbb0a6
	ldrb r1, [r2, #0]	@ 000bb0a6 1178
.org 0xbb0a8
	movs r0, #251	@ 000bb0a8 fb20
.org 0xbb0aa
	ands r0, r1	@ 000bb0aa 0840
.org 0xbb0ac
	strb r0, [r2, #0]	@ 000bb0ac 1070
.org 0xbb0ae
	adds r0, r3, #0	@ 000bb0ae 181c
.org 0xbb0b0
	pop {r4, r5, r6, r7}	@ 000bb0b0 f0bc
.org 0xbb0b2
	pop {r1}	@ 000bb0b2 02bc
.org 0xbb0b4
	bx r1	@ 000bb0b4 0847
