@ FUN_080fa038  entry 0x080fa038  size 108
.thumb
.org 0xfa038
FUN_080fa038:
	push {r4, lr}	@ 000fa038 10b5
.org 0xfa03a
	adds r4, r0, #0	@ 000fa03a 041c
.org 0xfa03c
	ldr r1, [pc, #100]	@ 000fa03c 1949
.org 0xfa03e
	ldrb r0, [r4, #9]	@ 000fa03e 607a
.org 0xfa040
	lsls r0, r0, #2	@ 000fa040 8000
.org 0xfa042
	adds r0, r0, r1	@ 000fa042 4018
.org 0xfa044
	movs r1, #1	@ 000fa044 0121
.org 0xfa046
	str r1, [r4, #12]	@ 000fa046 e160
.org 0xfa048
	ldr r0, [r0, #0]	@ 000fa048 0068
.org 0xfa04a
	ldr r0, [r0, #4]	@ 000fa04a 4068
.org 0xfa04c
	str r0, [r4, #20]	@ 000fa04c 6061
.org 0xfa04e
	ldrb r1, [r4, #10]	@ 000fa04e a17a
.org 0xfa050
	movs r0, #1	@ 000fa050 0120
.org 0xfa052
	orrs r0, r1	@ 000fa052 0843
.org 0xfa054
	movs r1, #2	@ 000fa054 0221
.org 0xfa056
	orrs r0, r1	@ 000fa056 0843
.org 0xfa058
	strb r0, [r4, #10]	@ 000fa058 a072
.org 0xfa05a
	adds r0, r4, #0	@ 000fa05a 201c
.org 0xfa05c
	bl 0x1cc9c	@ 000fa05c 22f71efe
.org 0xfa060
	movs r2, #0	@ 000fa060 0022
.org 0xfa062
	ldrb r1, [r4, #10]	@ 000fa062 a17a
.org 0xfa064
	movs r0, #239	@ 000fa064 ef20
.org 0xfa066
	ands r0, r1	@ 000fa066 0840
.org 0xfa068
	strb r0, [r4, #10]	@ 000fa068 a072
.org 0xfa06a
	adds r0, r4, #0	@ 000fa06a 201c
.org 0xfa06c
	adds r0, #76	@ 000fa06c 4c30
.org 0xfa06e
	strb r2, [r0, #0]	@ 000fa06e 0270
.org 0xfa070
	adds r2, r4, #0	@ 000fa070 221c
.org 0xfa072
	adds r2, #74	@ 000fa072 4a32
.org 0xfa074
	ldrb r1, [r2, #0]	@ 000fa074 1178
.org 0xfa076
	movs r0, #17	@ 000fa076 1120
.org 0xfa078
	negs r0, r0	@ 000fa078 4042
.org 0xfa07a
	ands r0, r1	@ 000fa07a 0840
.org 0xfa07c
	strb r0, [r2, #0]	@ 000fa07c 1070
.org 0xfa07e
	movs r1, #164	@ 000fa07e a421
.org 0xfa080
	lsls r1, r1, #8	@ 000fa080 0902
.org 0xfa082
	adds r0, r4, #0	@ 000fa082 201c
.org 0xfa084
	bl 0x1cf00	@ 000fa084 22f73cff
.org 0xfa088
	ldrb r1, [r4, #11]	@ 000fa088 e17a
.org 0xfa08a
	movs r0, #8	@ 000fa08a 0820
.org 0xfa08c
	orrs r0, r1	@ 000fa08c 0843
.org 0xfa08e
	strb r0, [r4, #11]	@ 000fa08e e072
.org 0xfa090
	ldr r0, [pc, #20]	@ 000fa090 0548
.org 0xfa092
	str r0, [r4, #48]	@ 000fa092 2063
.org 0xfa094
	ldr r0, [pc, #20]	@ 000fa094 0548
.org 0xfa096
	strh r0, [r4, #38]	@ 000fa096 e084
.org 0xfa098
	adds r0, r4, #0	@ 000fa098 201c
.org 0xfa09a
	bl 0xfa140	@ 000fa09a 00f051f8
.org 0xfa09e
	pop {r4}	@ 000fa09e 10bc
.org 0xfa0a0
	pop {r0}	@ 000fa0a0 01bc
.org 0xfa0a2
	bx r0	@ 000fa0a2 0047
