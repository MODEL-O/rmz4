@ FUN_0809a00c  entry 0x0809a00c  size 152
.thumb
.org 0x9a00c
FUN_0809a00c:
	push {r4, r5, r6, lr}	@ 0009a00c 70b5
.org 0x9a00e
	adds r6, r0, #0	@ 0009a00e 061c
.org 0x9a010
	bl 0x1ce54	@ 0009a010 82f720ff
.org 0x9a014
	ldrb r1, [r6, #10]	@ 0009a014 b17a
.org 0x9a016
	movs r0, #1	@ 0009a016 0120
.org 0x9a018
	movs r5, #0	@ 0009a018 0025
.org 0x9a01a
	orrs r0, r1	@ 0009a01a 0843
.org 0x9a01c
	movs r1, #2	@ 0009a01c 0221
.org 0x9a01e
	orrs r0, r1	@ 0009a01e 0843
.org 0x9a020
	strb r0, [r6, #10]	@ 0009a020 b072
.org 0x9a022
	ldr r1, [pc, #64]	@ 0009a022 1049
.org 0x9a024
	adds r0, r6, #0	@ 0009a024 301c
.org 0x9a026
	bl 0x1cf00	@ 0009a026 82f76bff
.org 0x9a02a
	adds r0, r6, #0	@ 0009a02a 301c
.org 0x9a02c
	bl 0x1cff0	@ 0009a02c 82f7e0ff
.org 0x9a030
	ldrb r1, [r6, #10]	@ 0009a030 b17a
.org 0x9a032
	movs r0, #4	@ 0009a032 0420
.org 0x9a034
	orrs r0, r1	@ 0009a034 0843
.org 0x9a036
	strb r0, [r6, #10]	@ 0009a036 b072
.org 0x9a038
	adds r4, r6, #0	@ 0009a038 341c
.org 0x9a03a
	adds r4, #116	@ 0009a03a 7434
.org 0x9a03c
	ldr r1, [pc, #40]	@ 0009a03c 0a49
.org 0x9a03e
	adds r2, r6, #0	@ 0009a03e 321c
.org 0x9a040
	adds r2, #84	@ 0009a040 5432
.org 0x9a042
	adds r0, r4, #0	@ 0009a042 201c
.org 0x9a044
	movs r3, #6	@ 0009a044 0623
.org 0x9a046
	bl 0x5760	@ 0009a046 6bf78bfb
.org 0x9a04a
	str r6, [r4, #44]	@ 0009a04a e662
.org 0x9a04c
	str r5, [r4, #36]	@ 0009a04c 6562
.org 0x9a04e
	ldrb r1, [r6, #10]	@ 0009a04e b17a
.org 0x9a050
	movs r0, #16	@ 0009a050 1020
.org 0x9a052
	ands r0, r1	@ 0009a052 0840
.org 0x9a054
	cmp r0, #0	@ 0009a054 0028
.org 0x9a056
	beq.n 0x9a070	@ 0009a056 0bd0
.org 0x9a058
	ldr r0, [pc, #16]	@ 0009a058 0448
.org 0x9a05a
	ldrb r1, [r6, #17]	@ 0009a05a 717c
.org 0x9a05c
	lsls r1, r1, #2	@ 0009a05c 8900
.org 0x9a05e
	adds r1, r1, r0	@ 0009a05e 0918
.org 0x9a060
	ldr r0, [r1, #0]	@ 0009a060 0868
.org 0x9a062
	b.n 0x9a07c	@ 0009a062 0be0
.org 0x9a064
	.byte 0x02,0x61,0x00,0x00	@ 0009a064 data
.org 0x9a068
	.byte 0x98,0x0e,0x86,0x08	@ 0009a068 data
.org 0x9a06c
	.byte 0xb8,0x0f,0x86,0x08	@ 0009a06c data
.org 0x9a070
	ldr r0, [pc, #60]	@ 0009a070 0f48
.org 0x9a072
	ldrb r1, [r6, #17]	@ 0009a072 717c
.org 0x9a074
	lsls r1, r1, #2	@ 0009a074 8900
.org 0x9a076
	adds r1, r1, r0	@ 0009a076 0918
.org 0x9a078
	ldr r0, [r1, #0]	@ 0009a078 0868
.org 0x9a07a
	negs r0, r0	@ 0009a07a 4042
.org 0x9a07c
	str r0, [r6, #92]	@ 0009a07c f065
.org 0x9a07e
	ldrb r0, [r6, #17]	@ 0009a07e 707c
.org 0x9a080
	ldr r1, [pc, #48]	@ 0009a080 0c49
.org 0x9a082
	lsls r0, r0, #2	@ 0009a082 8000
.org 0x9a084
	adds r0, r0, r1	@ 0009a084 4018
.org 0x9a086
	ldr r0, [r0, #0]	@ 0009a086 0068
.org 0x9a088
	str r0, [r6, #96]	@ 0009a088 3066
.org 0x9a08a
	movs r2, #0	@ 0009a08a 0022
.org 0x9a08c
	strb r2, [r6, #18]	@ 0009a08c b274
.org 0x9a08e
	ldrb r1, [r6, #10]	@ 0009a08e b17a
.org 0x9a090
	movs r0, #239	@ 0009a090 ef20
.org 0x9a092
	ands r0, r1	@ 0009a092 0840
.org 0x9a094
	strb r0, [r6, #10]	@ 0009a094 b072
.org 0x9a096
	adds r0, r6, #0	@ 0009a096 301c
.org 0x9a098
	adds r0, #76	@ 0009a098 4c30
.org 0x9a09a
	strb r2, [r0, #0]	@ 0009a09a 0270
.org 0x9a09c
	adds r2, r6, #0	@ 0009a09c 321c
.org 0x9a09e
	adds r2, #74	@ 0009a09e 4a32
.org 0x9a0a0
	ldrb r1, [r2, #0]	@ 0009a0a0 1178
.org 0x9a0a2
	movs r0, #17	@ 0009a0a2 1120
