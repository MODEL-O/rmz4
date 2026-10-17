@ FUN_0805002c  entry 0x0805002c  size 106
.thumb
.org 0x5002c
FUN_0805002c:
	push {r4, r5, r6, lr}	@ 0005002c 70b5
.org 0x5002e
	adds r4, r0, #0	@ 0005002e 041c
.org 0x50030
	bl 0x1cc9c	@ 00050030 ccf734fe
.org 0x50034
	adds r0, r4, #0	@ 00050034 201c
.org 0x50036
	bl 0x1ceec	@ 00050036 ccf759ff
.org 0x5003a
	ldrb r1, [r4, #10]	@ 0005003a a17a
.org 0x5003c
	movs r0, #1	@ 0005003c 0120
.org 0x5003e
	movs r6, #0	@ 0005003e 0026
.org 0x50040
	orrs r0, r1	@ 00050040 0843
.org 0x50042
	movs r1, #2	@ 00050042 0221
.org 0x50044
	orrs r0, r1	@ 00050044 0843
.org 0x50046
	strb r0, [r4, #10]	@ 00050046 a072
.org 0x50048
	ldr r1, [pc, #76]	@ 00050048 1349
.org 0x5004a
	adds r0, r4, #0	@ 0005004a 201c
.org 0x5004c
	bl 0x1cf00	@ 0005004c ccf758ff
.org 0x50050
	ldrb r1, [r4, #10]	@ 00050050 a17a
.org 0x50052
	movs r0, #4	@ 00050052 0420
.org 0x50054
	orrs r0, r1	@ 00050054 0843
.org 0x50056
	strb r0, [r4, #10]	@ 00050056 a072
.org 0x50058
	adds r5, r4, #0	@ 00050058 251c
.org 0x5005a
	adds r5, #116	@ 0005005a 7435
.org 0x5005c
	ldr r1, [pc, #60]	@ 0005005c 0f49
.org 0x5005e
	adds r2, r4, #0	@ 0005005e 221c
.org 0x50060
	adds r2, #84	@ 00050060 5432
.org 0x50062
	adds r0, r5, #0	@ 00050062 281c
.org 0x50064
	movs r3, #8	@ 00050064 0823
.org 0x50066
	bl 0x5760	@ 00050066 b5f77bfb
.org 0x5006a
	str r4, [r5, #44]	@ 0005006a ec62
.org 0x5006c
	ldr r0, [pc, #48]	@ 0005006c 0c48
.org 0x5006e
	str r0, [r5, #36]	@ 0005006e 6862
.org 0x50070
	strb r6, [r4, #18]	@ 00050070 a674
.org 0x50072
	movs r0, #69	@ 00050072 4520
.org 0x50074
	bl 0x2b10	@ 00050074 b2f74cfd
.org 0x50078
	ldr r1, [pc, #40]	@ 00050078 0a49
.org 0x5007a
	ldrb r0, [r4, #9]	@ 0005007a 607a
.org 0x5007c
	lsls r0, r0, #2	@ 0005007c 8000
.org 0x5007e
	adds r0, r0, r1	@ 0005007e 4018
.org 0x50080
	movs r1, #1	@ 00050080 0121
.org 0x50082
	str r1, [r4, #12]	@ 00050082 e160
.org 0x50084
	ldr r0, [r0, #0]	@ 00050084 0068
.org 0x50086
	ldr r0, [r0, #4]	@ 00050086 4068
.org 0x50088
	str r0, [r4, #20]	@ 00050088 6061
.org 0x5008a
	adds r0, r4, #0	@ 0005008a 201c
.org 0x5008c
	bl 0x500a8	@ 0005008c 00f00cf8
.org 0x50090
	pop {r4, r5, r6}	@ 00050090 70bc
.org 0x50092
	pop {r0}	@ 00050092 01bc
.org 0x50094
	bx r0	@ 00050094 0047
