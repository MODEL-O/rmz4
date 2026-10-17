@ FUN_080ed06c  entry 0x080ed06c  size 138
.thumb
.org 0xed06c
FUN_080ed06c:
	push {r4, r5, lr}	@ 000ed06c 30b5
.org 0xed06e
	adds r4, r0, #0	@ 000ed06e 041c
.org 0xed070
	ldr r0, [pc, #132]	@ 000ed070 2148
.org 0xed072
	ldr r1, [pc, #136]	@ 000ed072 2249
.org 0xed074
	movs r5, #218	@ 000ed074 da25
.org 0xed076
	lsls r5, r5, #1	@ 000ed076 6d00
.org 0xed078
	adds r1, r1, r5	@ 000ed078 4919
.org 0xed07a
	ldrh r1, [r1, #0]	@ 000ed07a 0988
.org 0xed07c
	ldrh r2, [r0, #6]	@ 000ed07c c288
.org 0xed07e
	lsrs r2, r2, #6	@ 000ed07e 9209
.org 0xed080
	subs r1, r1, r2	@ 000ed080 891a
.org 0xed082
	lsls r1, r1, #5	@ 000ed082 4901
.org 0xed084
	movs r2, #128	@ 000ed084 8022
.org 0xed086
	lsls r2, r2, #9	@ 000ed086 5202
.org 0xed088
	adds r1, r1, r2	@ 000ed088 8918
.org 0xed08a
	bl 0x1d30	@ 000ed08a 14f751fe
.org 0xed08e
	ldr r0, [pc, #112]	@ 000ed08e 1c48
.org 0xed090
	ldr r1, [pc, #112]	@ 000ed090 1c49
.org 0xed092
	adds r1, r1, r5	@ 000ed092 4919
.org 0xed094
	ldrh r1, [r1, #0]	@ 000ed094 0988
.org 0xed096
	ldrb r2, [r0, #7]	@ 000ed096 c279
.org 0xed098
	subs r1, r1, r2	@ 000ed098 891a
.org 0xed09a
	lsls r1, r1, #5	@ 000ed09a 4901
.org 0xed09c
	movs r2, #128	@ 000ed09c 8022
.org 0xed09e
	lsls r2, r2, #2	@ 000ed09e 9200
.org 0xed0a0
	adds r1, r1, r2	@ 000ed0a0 8918
.org 0xed0a2
	bl 0x2208	@ 000ed0a2 15f7b1f8
.org 0xed0a6
	adds r0, r4, #0	@ 000ed0a6 201c
.org 0xed0a8
	bl 0x1cc9c	@ 000ed0a8 2ff7f8fd
.org 0xed0ac
	ldrb r1, [r4, #10]	@ 000ed0ac a17a
.org 0xed0ae
	movs r0, #1	@ 000ed0ae 0120
.org 0xed0b0
	orrs r0, r1	@ 000ed0b0 0843
.org 0xed0b2
	strb r0, [r4, #10]	@ 000ed0b2 a072
.org 0xed0b4
	movs r1, #218	@ 000ed0b4 da21
.org 0xed0b6
	lsls r1, r1, #8	@ 000ed0b6 0902
.org 0xed0b8
	adds r0, r4, #0	@ 000ed0b8 201c
.org 0xed0ba
	bl 0x1cf00	@ 000ed0ba 2ff721ff
.org 0xed0be
	adds r2, r4, #0	@ 000ed0be 221c
.org 0xed0c0
	adds r2, #73	@ 000ed0c0 4932
.org 0xed0c2
	ldrb r1, [r2, #0]	@ 000ed0c2 1178
.org 0xed0c4
	movs r0, #13	@ 000ed0c4 0d20
.org 0xed0c6
	negs r0, r0	@ 000ed0c6 4042
.org 0xed0c8
	ands r0, r1	@ 000ed0c8 0840
.org 0xed0ca
	movs r1, #8	@ 000ed0ca 0821
.org 0xed0cc
	orrs r0, r1	@ 000ed0cc 0843
.org 0xed0ce
	strb r0, [r2, #0]	@ 000ed0ce 1070
.org 0xed0d0
	adds r1, r4, #0	@ 000ed0d0 211c
.org 0xed0d2
	adds r1, #37	@ 000ed0d2 2531
.org 0xed0d4
	movs r0, #31	@ 000ed0d4 1f20
.org 0xed0d6
	strb r0, [r1, #0]	@ 000ed0d6 0870
.org 0xed0d8
	ldr r1, [pc, #44]	@ 000ed0d8 0b49
.org 0xed0da
	ldrb r0, [r4, #9]	@ 000ed0da 607a
.org 0xed0dc
	lsls r0, r0, #2	@ 000ed0dc 8000
.org 0xed0de
	adds r0, r0, r1	@ 000ed0de 4018
.org 0xed0e0
	movs r1, #1	@ 000ed0e0 0121
.org 0xed0e2
	str r1, [r4, #12]	@ 000ed0e2 e160
.org 0xed0e4
	ldr r0, [r0, #0]	@ 000ed0e4 0068
.org 0xed0e6
	ldr r0, [r0, #4]	@ 000ed0e6 4068
.org 0xed0e8
	str r0, [r4, #20]	@ 000ed0e8 6061
.org 0xed0ea
	adds r0, r4, #0	@ 000ed0ea 201c
.org 0xed0ec
	bl 0xecefc	@ 000ed0ec fff706ff
.org 0xed0f0
	pop {r4, r5}	@ 000ed0f0 30bc
.org 0xed0f2
	pop {r0}	@ 000ed0f2 01bc
.org 0xed0f4
	bx r0	@ 000ed0f4 0047
