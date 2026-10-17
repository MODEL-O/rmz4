@ FUN_080a4938  entry 0x080a4938  size 202
.thumb
.org 0xa4938
FUN_080a4938:
	push {r4, r5, r6, r7, lr}	@ 000a4938 f0b5
.org 0xa493a
	mov r7, r8	@ 000a493a 4746
.org 0xa493c
	push {r7}	@ 000a493c 80b4
.org 0xa493e
	sub sp, #8	@ 000a493e 82b0
.org 0xa4940
	adds r7, r0, #0	@ 000a4940 071c
.org 0xa4942
	ldr r1, [pc, #192]	@ 000a4942 3049
.org 0xa4944
	mov r0, sp	@ 000a4944 6846
.org 0xa4946
	movs r2, #4	@ 000a4946 0422
.org 0xa4948
	bl 0x129258	@ 000a4948 84f086fc
.org 0xa494c
	add r6, sp, #4	@ 000a494c 01ae
.org 0xa494e
	ldr r1, [pc, #184]	@ 000a494e 2e49
.org 0xa4950
	adds r0, r6, #0	@ 000a4950 301c
.org 0xa4952
	movs r2, #4	@ 000a4952 0422
.org 0xa4954
	bl 0x129258	@ 000a4954 84f080fc
.org 0xa4958
	ldrb r0, [r7, #17]	@ 000a4958 787c
.org 0xa495a
	mov r8, r0	@ 000a495a 8046
.org 0xa495c
	movs r5, #0	@ 000a495c 0025
.org 0xa495e
	ldr r1, [pc, #172]	@ 000a495e 2b49
.org 0xa4960
	ldrb r0, [r7, #9]	@ 000a4960 787a
.org 0xa4962
	lsls r0, r0, #2	@ 000a4962 8000
.org 0xa4964
	adds r0, r0, r1	@ 000a4964 4018
.org 0xa4966
	movs r1, #1	@ 000a4966 0121
.org 0xa4968
	str r1, [r7, #12]	@ 000a4968 f960
.org 0xa496a
	ldr r0, [r0, #0]	@ 000a496a 0068
.org 0xa496c
	ldr r0, [r0, #4]	@ 000a496c 4068
.org 0xa496e
	str r0, [r7, #20]	@ 000a496e 7861
.org 0xa4970
	strb r5, [r7, #13]	@ 000a4970 7d73
.org 0xa4972
	strb r5, [r7, #14]	@ 000a4972 bd73
.org 0xa4974
	strb r5, [r7, #15]	@ 000a4974 fd73
.org 0xa4976
	ldrb r0, [r7, #10]	@ 000a4976 b87a
.org 0xa4978
	orrs r0, r1	@ 000a4978 0843
.org 0xa497a
	movs r1, #2	@ 000a497a 0221
.org 0xa497c
	orrs r0, r1	@ 000a497c 0843
.org 0xa497e
	strb r0, [r7, #10]	@ 000a497e b872
.org 0xa4980
	adds r0, r7, #0	@ 000a4980 381c
.org 0xa4982
	bl 0x1cdbc	@ 000a4982 78f71bfa
.org 0xa4986
	ldrb r1, [r7, #10]	@ 000a4986 b97a
.org 0xa4988
	movs r0, #239	@ 000a4988 ef20
.org 0xa498a
	ands r0, r1	@ 000a498a 0840
.org 0xa498c
	strb r0, [r7, #10]	@ 000a498c b872
.org 0xa498e
	adds r0, r7, #0	@ 000a498e 381c
.org 0xa4990
	adds r0, #76	@ 000a4990 4c30
.org 0xa4992
	strb r5, [r0, #0]	@ 000a4992 0570
.org 0xa4994
	adds r2, r7, #0	@ 000a4994 3a1c
.org 0xa4996
	adds r2, #74	@ 000a4996 4a32
.org 0xa4998
	ldrb r1, [r2, #0]	@ 000a4998 1178
.org 0xa499a
	movs r0, #17	@ 000a499a 1120
.org 0xa499c
	negs r0, r0	@ 000a499c 4042
.org 0xa499e
	ands r0, r1	@ 000a499e 0840
.org 0xa49a0
	strb r0, [r2, #0]	@ 000a49a0 1070
.org 0xa49a2
	mov r0, sp	@ 000a49a2 6846
.org 0xa49a4
	add r0, r8	@ 000a49a4 4044
.org 0xa49a6
	ldrb r1, [r0, #0]	@ 000a49a6 0178
.org 0xa49a8
	adds r0, r7, #0	@ 000a49a8 381c
.org 0xa49aa
	adds r0, #36	@ 000a49aa 2430
.org 0xa49ac
	strb r1, [r0, #0]	@ 000a49ac 0170
.org 0xa49ae
	adds r1, r7, #0	@ 000a49ae 391c
.org 0xa49b0
	adds r1, #80	@ 000a49b0 5031
.org 0xa49b2
	movs r0, #128	@ 000a49b2 8020
.org 0xa49b4
	lsls r0, r0, #1	@ 000a49b4 4000
.org 0xa49b6
	strh r0, [r1, #0]	@ 000a49b6 0880
.org 0xa49b8
	adds r1, #2	@ 000a49b8 0231
.org 0xa49ba
	movs r0, #128	@ 000a49ba 8020
.org 0xa49bc
	strh r0, [r1, #0]	@ 000a49bc 0880
.org 0xa49be
	ldr r1, [pc, #80]	@ 000a49be 1449
.org 0xa49c0
	adds r0, r7, #0	@ 000a49c0 381c
.org 0xa49c2
	bl 0x1cf00	@ 000a49c2 78f79dfa
.org 0xa49c6
	ldrb r1, [r7, #10]	@ 000a49c6 b97a
.org 0xa49c8
	movs r0, #4	@ 000a49c8 0420
.org 0xa49ca
	orrs r0, r1	@ 000a49ca 0843
.org 0xa49cc
	strb r0, [r7, #10]	@ 000a49cc b872
.org 0xa49ce
	adds r4, r7, #0	@ 000a49ce 3c1c
.org 0xa49d0
	adds r4, #116	@ 000a49d0 7434
.org 0xa49d2
	add r6, r8	@ 000a49d2 4644
.org 0xa49d4
	ldrb r0, [r6, #0]	@ 000a49d4 3078
.org 0xa49d6
	lsls r1, r0, #1	@ 000a49d6 4100
.org 0xa49d8
	adds r1, r1, r0	@ 000a49d8 0918
.org 0xa49da
	lsls r1, r1, #3	@ 000a49da c900
.org 0xa49dc
	ldr r0, [pc, #52]	@ 000a49dc 0d48
.org 0xa49de
	adds r1, r1, r0	@ 000a49de 0918
.org 0xa49e0
	adds r2, r7, #0	@ 000a49e0 3a1c
.org 0xa49e2
	adds r2, #84	@ 000a49e2 5432
.org 0xa49e4
	adds r0, r4, #0	@ 000a49e4 201c
.org 0xa49e6
	movs r3, #6	@ 000a49e6 0623
.org 0xa49e8
	bl 0x5760	@ 000a49e8 60f7bafe
.org 0xa49ec
	str r7, [r4, #44]	@ 000a49ec e762
.org 0xa49ee
	str r5, [r4, #36]	@ 000a49ee 6562
.org 0xa49f0
	adds r0, r7, #0	@ 000a49f0 381c
.org 0xa49f2
	bl 0xa4a18	@ 000a49f2 00f011f8
.org 0xa49f6
	add sp, #8	@ 000a49f6 02b0
.org 0xa49f8
	pop {r3}	@ 000a49f8 08bc
.org 0xa49fa
	mov r8, r3	@ 000a49fa 9846
.org 0xa49fc
	pop {r4, r5, r6, r7}	@ 000a49fc f0bc
.org 0xa49fe
	pop {r0}	@ 000a49fe 01bc
.org 0xa4a00
	bx r0	@ 000a4a00 0047
