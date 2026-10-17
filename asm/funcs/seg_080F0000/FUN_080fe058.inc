@ FUN_080fe058  entry 0x080fe058  size 78
.thumb
.org 0xfe058
FUN_080fe058:
	push {r4, r5, lr}	@ 000fe058 30b5
.org 0xfe05a
	adds r4, r0, #0	@ 000fe05a 041c
.org 0xfe05c
	ldrb r1, [r4, #10]	@ 000fe05c a17a
.org 0xfe05e
	movs r0, #4	@ 000fe05e 0420
.org 0xfe060
	orrs r0, r1	@ 000fe060 0843
.org 0xfe062
	strb r0, [r4, #10]	@ 000fe062 a072
.org 0xfe064
	adds r5, r4, #0	@ 000fe064 251c
.org 0xfe066
	adds r5, #116	@ 000fe066 7435
.org 0xfe068
	ldr r1, [pc, #60]	@ 000fe068 0f49
.org 0xfe06a
	adds r2, r4, #0	@ 000fe06a 221c
.org 0xfe06c
	adds r2, #84	@ 000fe06c 5432
.org 0xfe06e
	adds r0, r5, #0	@ 000fe06e 281c
.org 0xfe070
	movs r3, #1	@ 000fe070 0123
.org 0xfe072
	bl 0x5760	@ 000fe072 07f775fb
.org 0xfe076
	str r4, [r5, #44]	@ 000fe076 ec62
.org 0xfe078
	ldr r0, [pc, #48]	@ 000fe078 0c48
.org 0xfe07a
	str r0, [r5, #36]	@ 000fe07a 6862
.org 0xfe07c
	ldrb r1, [r4, #11]	@ 000fe07c e17a
.org 0xfe07e
	movs r0, #239	@ 000fe07e ef20
.org 0xfe080
	ands r0, r1	@ 000fe080 0840
.org 0xfe082
	strb r0, [r4, #11]	@ 000fe082 e072
.org 0xfe084
	ldrb r0, [r4, #28]	@ 000fe084 207f
.org 0xfe086
	strb r0, [r4, #29]	@ 000fe086 6077
.org 0xfe088
	ldr r1, [pc, #36]	@ 000fe088 0949
.org 0xfe08a
	ldrb r0, [r4, #9]	@ 000fe08a 607a
.org 0xfe08c
	lsls r0, r0, #2	@ 000fe08c 8000
.org 0xfe08e
	adds r0, r0, r1	@ 000fe08e 4018
.org 0xfe090
	movs r1, #1	@ 000fe090 0121
.org 0xfe092
	str r1, [r4, #12]	@ 000fe092 e160
.org 0xfe094
	ldr r0, [r0, #0]	@ 000fe094 0068
.org 0xfe096
	ldr r0, [r0, #4]	@ 000fe096 4068
.org 0xfe098
	str r0, [r4, #20]	@ 000fe098 6061
.org 0xfe09a
	adds r0, r4, #0	@ 000fe09a 201c
.org 0xfe09c
	bl 0xfe040	@ 000fe09c fff7d0ff
.org 0xfe0a0
	pop {r4, r5}	@ 000fe0a0 30bc
.org 0xfe0a2
	pop {r0}	@ 000fe0a2 01bc
.org 0xfe0a4
	bx r0	@ 000fe0a4 0047
