@ FUN_080e1050  entry 0x080e1050  size 94
.thumb
.org 0xe1050
FUN_080e1050:
	push {r4, r5, r6, lr}	@ 000e1050 70b5
.org 0xe1052
	adds r6, r0, #0	@ 000e1052 061c
.org 0xe1054
	lsls r1, r1, #24	@ 000e1054 0906
.org 0xe1056
	lsrs r4, r1, #24	@ 000e1056 0c0e
.org 0xe1058
	lsls r2, r2, #24	@ 000e1058 1206
.org 0xe105a
	lsrs r5, r2, #24	@ 000e105a 150e
.org 0xe105c
	ldr r0, [pc, #80]	@ 000e105c 1448
.org 0xe105e
	ldr r0, [r0, #0]	@ 000e105e 0068
.org 0xe1060
	bl 0x5500	@ 000e1060 24f74efa
.org 0xe1064
	adds r3, r0, #0	@ 000e1064 031c
.org 0xe1066
	cmp r3, #0	@ 000e1066 002b
.org 0xe1068
	beq.n 0xe10a6	@ 000e1068 1dd0
.org 0xe106a
	adds r1, r3, #0	@ 000e106a 191c
.org 0xe106c
	adds r1, #37	@ 000e106c 2531
.org 0xe106e
	movs r2, #0	@ 000e106e 0022
.org 0xe1070
	movs r0, #1	@ 000e1070 0120
.org 0xe1072
	strb r0, [r1, #0]	@ 000e1072 0870
.org 0xe1074
	ldr r0, [pc, #60]	@ 000e1074 0f48
.org 0xe1076
	movs r1, #59	@ 000e1076 3b21
.org 0xe1078
	strb r1, [r3, #9]	@ 000e1078 5972
.org 0xe107a
	adds r0, #236	@ 000e107a ec30
.org 0xe107c
	ldr r0, [r0, #0]	@ 000e107c 0068
.org 0xe107e
	ldr r0, [r0, #0]	@ 000e107e 0068
.org 0xe1080
	str r0, [r3, #20]	@ 000e1080 5861
.org 0xe1082
	movs r0, #0	@ 000e1082 0020
.org 0xe1084
	strh r2, [r3, #32]	@ 000e1084 1a84
.org 0xe1086
	adds r1, r3, #0	@ 000e1086 191c
.org 0xe1088
	adds r1, #34	@ 000e1088 2231
.org 0xe108a
	strb r0, [r1, #0]	@ 000e108a 0870
.org 0xe108c
	ldr r0, [r6, #0]	@ 000e108c 3068
.org 0xe108e
	ldr r1, [r6, #4]	@ 000e108e 7168
.org 0xe1090
	str r0, [r3, #84]	@ 000e1090 5865
.org 0xe1092
	str r1, [r3, #88]	@ 000e1092 9965
.org 0xe1094
	strb r4, [r3, #16]	@ 000e1094 1c74
.org 0xe1096
	strb r5, [r3, #17]	@ 000e1096 5d74
.org 0xe1098
	cmp r4, #1	@ 000e1098 012c
.org 0xe109a
	bne.n 0xe10a6	@ 000e109a 04d1
.org 0xe109c
	ldr r1, [pc, #24]	@ 000e109c 0649
.org 0xe109e
	adds r1, #38	@ 000e109e 2631
.org 0xe10a0
	ldrb r0, [r1, #0]	@ 000e10a0 0878
.org 0xe10a2
	adds r0, #1	@ 000e10a2 0130
.org 0xe10a4
	strb r0, [r1, #0]	@ 000e10a4 0870
.org 0xe10a6
	adds r0, r3, #0	@ 000e10a6 181c
.org 0xe10a8
	pop {r4, r5, r6}	@ 000e10a8 70bc
.org 0xe10aa
	pop {r1}	@ 000e10aa 02bc
.org 0xe10ac
	bx r1	@ 000e10ac 0847
