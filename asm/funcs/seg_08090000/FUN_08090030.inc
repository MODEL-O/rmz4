@ FUN_08090030  entry 0x08090030  size 120
.thumb
.org 0x90030
FUN_08090030:
	push {r4, r5, r6, lr}	@ 00090030 70b5
.org 0x90032
	mov r6, r8	@ 00090032 4646
.org 0x90034
	push {r6}	@ 00090034 40b4
.org 0x90036
	adds r4, r0, #0	@ 00090036 041c
.org 0x90038
	ldr r0, [r4, #40]	@ 00090038 a06a
.org 0x9003a
	ldr r0, [r0, #40]	@ 0009003a 806a
.org 0x9003c
	mov r8, r0	@ 0009003c 8046
.org 0x9003e
	ldr r1, [pc, #104]	@ 0009003e 1a49
.org 0x90040
	ldrb r0, [r4, #9]	@ 00090040 607a
.org 0x90042
	lsls r0, r0, #2	@ 00090042 8000
.org 0x90044
	adds r0, r0, r1	@ 00090044 4018
.org 0x90046
	movs r1, #1	@ 00090046 0121
.org 0x90048
	str r1, [r4, #12]	@ 00090048 e160
.org 0x9004a
	ldr r0, [r0, #0]	@ 0009004a 0068
.org 0x9004c
	ldr r0, [r0, #4]	@ 0009004c 4068
.org 0x9004e
	str r0, [r4, #20]	@ 0009004e 6061
.org 0x90050
	ldrb r1, [r4, #10]	@ 00090050 a17a
.org 0x90052
	movs r0, #254	@ 00090052 fe20
.org 0x90054
	ands r0, r1	@ 00090054 0840
.org 0x90056
	movs r6, #0	@ 00090056 0026
.org 0x90058
	movs r1, #2	@ 00090058 0221
.org 0x9005a
	orrs r0, r1	@ 0009005a 0843
.org 0x9005c
	strb r0, [r4, #10]	@ 0009005c a072
.org 0x9005e
	adds r0, r4, #0	@ 0009005e 201c
.org 0x90060
	bl 0x1cc9c	@ 00090060 8cf71cfe
.org 0x90064
	ldr r1, [pc, #68]	@ 00090064 1149
.org 0x90066
	adds r0, r4, #0	@ 00090066 201c
.org 0x90068
	bl 0x1cf00	@ 00090068 8cf74aff
.org 0x9006c
	ldrb r0, [r4, #10]	@ 0009006c a07a
.org 0x9006e
	movs r1, #4	@ 0009006e 0421
.org 0x90070
	orrs r0, r1	@ 00090070 0843
.org 0x90072
	strb r0, [r4, #10]	@ 00090072 a072
.org 0x90074
	adds r5, r4, #0	@ 00090074 251c
.org 0x90076
	adds r5, #116	@ 00090076 7435
.org 0x90078
	ldr r1, [pc, #52]	@ 00090078 0d49
.org 0x9007a
	adds r2, r4, #0	@ 0009007a 221c
.org 0x9007c
	adds r2, #84	@ 0009007c 5432
.org 0x9007e
	adds r0, r5, #0	@ 0009007e 281c
.org 0x90080
	movs r3, #64	@ 00090080 4023
.org 0x90082
	bl 0x5760	@ 00090082 75f76dfb
.org 0x90086
	str r4, [r5, #44]	@ 00090086 ec62
.org 0x90088
	str r6, [r5, #36]	@ 00090088 6e62
.org 0x9008a
	ldrb r1, [r4, #11]	@ 0009008a e17a
.org 0x9008c
	movs r0, #16	@ 0009008c 1020
.org 0x9008e
	orrs r0, r1	@ 0009008e 0843
.org 0x90090
	strb r0, [r4, #11]	@ 00090090 e072
.org 0x90092
	mov r1, r8	@ 00090092 4146
.org 0x90094
	ldrb r0, [r1, #28]	@ 00090094 087f
.org 0x90096
	strb r0, [r4, #29]	@ 00090096 6077
.org 0x90098
	adds r0, r4, #0	@ 00090098 201c
.org 0x9009a
	bl 0x900b4	@ 0009009a 00f00bf8
.org 0x9009e
	pop {r3}	@ 0009009e 08bc
.org 0x900a0
	mov r8, r3	@ 000900a0 9846
.org 0x900a2
	pop {r4, r5, r6}	@ 000900a2 70bc
.org 0x900a4
	pop {r0}	@ 000900a4 01bc
.org 0x900a6
	bx r0	@ 000900a6 0047
