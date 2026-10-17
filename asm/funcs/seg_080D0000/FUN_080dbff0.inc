@ FUN_080dbff0  entry 0x080dbff0  size 130
.thumb
.org 0xdbff0
FUN_080dbff0:
	push {r4, r5, r6, r7, lr}	@ 000dbff0 f0b5
.org 0xdbff2
	mov r7, sl	@ 000dbff2 5746
.org 0xdbff4
	mov r6, r9	@ 000dbff4 4e46
.org 0xdbff6
	mov r5, r8	@ 000dbff6 4546
.org 0xdbff8
	push {r5, r6, r7}	@ 000dbff8 e0b4
.org 0xdbffa
	sub sp, #4	@ 000dbffa 81b0
.org 0xdbffc
	mov r9, r0	@ 000dbffc 8146
.org 0xdbffe
	adds r5, r1, #0	@ 000dbffe 0d1c
.org 0xdc000
	mov r8, r2	@ 000dc000 9046
.org 0xdc002
	lsls r3, r3, #24	@ 000dc002 1b06
.org 0xdc004
	lsrs r7, r3, #24	@ 000dc004 1f0e
.org 0xdc006
	movs r4, #0	@ 000dc006 0024
.org 0xdc008
	cmp r4, r7	@ 000dc008 bc42
.org 0xdc00a
	bge.n 0xdc062	@ 000dc00a 2ada
.org 0xdc00c
	movs r2, #0	@ 000dc00c 0022
.org 0xdc00e
	movs r6, #1	@ 000dc00e 0126
.org 0xdc010
	ldr r0, [pc, #96]	@ 000dc010 1848
.org 0xdc012
	mov sl, r0	@ 000dc012 8246
.org 0xdc014
	ldr r0, [pc, #96]	@ 000dc014 1848
.org 0xdc016
	ldr r0, [r0, #0]	@ 000dc016 0068
.org 0xdc018
	str r2, [sp, #0]	@ 000dc018 0092
.org 0xdc01a
	bl 0x5500	@ 000dc01a 29f771fa
.org 0xdc01e
	adds r1, r0, #0	@ 000dc01e 011c
.org 0xdc020
	ldr r2, [sp, #0]	@ 000dc020 009a
.org 0xdc022
	cmp r1, #0	@ 000dc022 0029
.org 0xdc024
	beq.n 0xdc05c	@ 000dc024 1ad0
.org 0xdc026
	adds r0, #37	@ 000dc026 2530
.org 0xdc028
	strb r6, [r0, #0]	@ 000dc028 0670
.org 0xdc02a
	movs r0, #43	@ 000dc02a 2b20
.org 0xdc02c
	strb r0, [r1, #9]	@ 000dc02c 4872
.org 0xdc02e
	mov r3, sl	@ 000dc02e 5346
.org 0xdc030
	ldr r0, [r3, #0]	@ 000dc030 1868
.org 0xdc032
	ldr r0, [r0, #0]	@ 000dc032 0068
.org 0xdc034
	str r0, [r1, #20]	@ 000dc034 4861
.org 0xdc036
	strh r2, [r1, #32]	@ 000dc036 0a84
.org 0xdc038
	adds r0, r1, #0	@ 000dc038 081c
.org 0xdc03a
	adds r0, #34	@ 000dc03a 2230
.org 0xdc03c
	strb r2, [r0, #0]	@ 000dc03c 0270
.org 0xdc03e
	strb r6, [r1, #16]	@ 000dc03e 0e74
.org 0xdc040
	strb r4, [r1, #17]	@ 000dc040 4c74
.org 0xdc042
	mov r0, r9	@ 000dc042 4846
.org 0xdc044
	str r0, [r1, #40]	@ 000dc044 8862
.org 0xdc046
	mov r3, r8	@ 000dc046 4346
.org 0xdc048
	str r3, [r1, #116]	@ 000dc048 4b67
.org 0xdc04a
	ldr r0, [r5, #0]	@ 000dc04a 2868
.org 0xdc04c
	str r0, [r1, #84]	@ 000dc04c 4865
.org 0xdc04e
	ldr r0, [r5, #4]	@ 000dc04e 6868
.org 0xdc050
	str r0, [r1, #88]	@ 000dc050 8865
.org 0xdc052
	adds r0, r1, #0	@ 000dc052 081c
.org 0xdc054
	adds r0, #120	@ 000dc054 7830
.org 0xdc056
	strb r6, [r0, #0]	@ 000dc056 0670
.org 0xdc058
	adds r0, #1	@ 000dc058 0130
.org 0xdc05a
	strb r2, [r0, #0]	@ 000dc05a 0270
.org 0xdc05c
	adds r4, #1	@ 000dc05c 0134
.org 0xdc05e
	cmp r4, r7	@ 000dc05e bc42
.org 0xdc060
	blt.n 0xdc014	@ 000dc060 d8db
.org 0xdc062
	add sp, #4	@ 000dc062 01b0
.org 0xdc064
	pop {r3, r4, r5}	@ 000dc064 38bc
.org 0xdc066
	mov r8, r3	@ 000dc066 9846
.org 0xdc068
	mov r9, r4	@ 000dc068 a146
.org 0xdc06a
	mov sl, r5	@ 000dc06a aa46
.org 0xdc06c
	pop {r4, r5, r6, r7}	@ 000dc06c f0bc
.org 0xdc06e
	pop {r0}	@ 000dc06e 01bc
.org 0xdc070
	bx r0	@ 000dc070 0047
