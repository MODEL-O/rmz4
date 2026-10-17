@ FUN_080d8034  entry 0x080d8034  size 236
.thumb
.org 0xd8034
FUN_080d8034:
	push {r4, r5, r6, lr}	@ 000d8034 70b5
.org 0xd8036
	adds r4, r0, #0	@ 000d8036 041c
.org 0xd8038
	ldr r0, [r4, #40]	@ 000d8038 a06a
.org 0xd803a
	ldrb r0, [r0, #10]	@ 000d803a 807a
.org 0xd803c
	lsls r0, r0, #24	@ 000d803c 0006
.org 0xd803e
	lsrs r3, r0, #28	@ 000d803e 030f
.org 0xd8040
	movs r1, #1	@ 000d8040 0121
.org 0xd8042
	ands r3, r1	@ 000d8042 0b40
.org 0xd8044
	lsrs r5, r0, #29	@ 000d8044 450f
.org 0xd8046
	ands r5, r1	@ 000d8046 0d40
.org 0xd8048
	ldrb r0, [r4, #14]	@ 000d8048 a07b
.org 0xd804a
	cmp r0, #0	@ 000d804a 0028
.org 0xd804c
	beq.n 0xd8054	@ 000d804c 02d0
.org 0xd804e
	cmp r0, #1	@ 000d804e 0128
.org 0xd8050
	beq.n 0xd80c8	@ 000d8050 3ad0
.org 0xd8052
	b.n 0xd811a	@ 000d8052 62e0
.org 0xd8054
	ldrb r1, [r4, #10]	@ 000d8054 a17a
.org 0xd8056
	movs r0, #1	@ 000d8056 0120
.org 0xd8058
	movs r6, #0	@ 000d8058 0026
.org 0xd805a
	adds r2, r0, #0	@ 000d805a 021c
.org 0xd805c
	orrs r2, r1	@ 000d805c 0a43
.org 0xd805e
	strb r2, [r4, #10]	@ 000d805e a272
.org 0xd8060
	adds r1, r3, #0	@ 000d8060 191c
.org 0xd8062
	cmp r1, #0	@ 000d8062 0029
.org 0xd8064
	beq.n 0xd806c	@ 000d8064 02d0
.org 0xd8066
	movs r0, #16	@ 000d8066 1020
.org 0xd8068
	orrs r2, r0	@ 000d8068 0243
.org 0xd806a
	b.n 0xd8070	@ 000d806a 01e0
.org 0xd806c
	movs r0, #239	@ 000d806c ef20
.org 0xd806e
	ands r2, r0	@ 000d806e 0240
.org 0xd8070
	strb r2, [r4, #10]	@ 000d8070 a272
.org 0xd8072
	adds r0, r4, #0	@ 000d8072 201c
.org 0xd8074
	adds r0, #76	@ 000d8074 4c30
.org 0xd8076
	strb r1, [r0, #0]	@ 000d8076 0170
.org 0xd8078
	adds r2, r4, #0	@ 000d8078 221c
.org 0xd807a
	adds r2, #74	@ 000d807a 4a32
.org 0xd807c
	lsls r1, r1, #4	@ 000d807c 0901
.org 0xd807e
	ldrb r3, [r2, #0]	@ 000d807e 1378
.org 0xd8080
	movs r0, #17	@ 000d8080 1120
.org 0xd8082
	negs r0, r0	@ 000d8082 4042
.org 0xd8084
	ands r0, r3	@ 000d8084 1840
.org 0xd8086
	orrs r0, r1	@ 000d8086 0843
.org 0xd8088
	strb r0, [r2, #0]	@ 000d8088 1070
.org 0xd808a
	adds r3, r5, #0	@ 000d808a 2b1c
.org 0xd808c
	adds r5, r2, #0	@ 000d808c 151c
.org 0xd808e
	cmp r3, #0	@ 000d808e 002b
.org 0xd8090
	beq.n 0xd809a	@ 000d8090 03d0
.org 0xd8092
	ldrb r0, [r4, #10]	@ 000d8092 a07a
.org 0xd8094
	movs r1, #32	@ 000d8094 2021
.org 0xd8096
	orrs r0, r1	@ 000d8096 0843
.org 0xd8098
	b.n 0xd80a0	@ 000d8098 02e0
.org 0xd809a
	ldrb r1, [r4, #10]	@ 000d809a a17a
.org 0xd809c
	movs r0, #223	@ 000d809c df20
.org 0xd809e
	ands r0, r1	@ 000d809e 0840
.org 0xd80a0
	strb r0, [r4, #10]	@ 000d80a0 a072
.org 0xd80a2
	adds r1, r3, #0	@ 000d80a2 191c
.org 0xd80a4
	adds r2, r4, #0	@ 000d80a4 221c
.org 0xd80a6
	adds r2, #77	@ 000d80a6 4d32
.org 0xd80a8
	strb r1, [r2, #0]	@ 000d80a8 1170
.org 0xd80aa
	lsls r1, r1, #5	@ 000d80aa 4901
.org 0xd80ac
	ldrb r2, [r5, #0]	@ 000d80ac 2a78
.org 0xd80ae
	movs r0, #33	@ 000d80ae 2120
.org 0xd80b0
	negs r0, r0	@ 000d80b0 4042
.org 0xd80b2
	ands r0, r2	@ 000d80b2 1040
.org 0xd80b4
	orrs r0, r1	@ 000d80b4 0843
.org 0xd80b6
	strb r0, [r5, #0]	@ 000d80b6 2870
.org 0xd80b8
	ldr r0, [r4, #116]	@ 000d80b8 606f
.org 0xd80ba
	ldrh r1, [r0, #0]	@ 000d80ba 0188
.org 0xd80bc
	adds r0, r4, #0	@ 000d80bc 201c
.org 0xd80be
	bl 0x1cf00	@ 000d80be 44f71fff
.org 0xd80c2
	ldrb r0, [r4, #14]	@ 000d80c2 a07b
.org 0xd80c4
	adds r0, #1	@ 000d80c4 0130
.org 0xd80c6
	strb r0, [r4, #14]	@ 000d80c6 a073
.org 0xd80c8
	ldr r1, [r4, #84]	@ 000d80c8 616d
.org 0xd80ca
	ldr r0, [r4, #92]	@ 000d80ca e06d
.org 0xd80cc
	adds r3, r1, r0	@ 000d80cc 0b18
.org 0xd80ce
	str r3, [r4, #84]	@ 000d80ce 6365
.org 0xd80d0
	ldr r1, [r4, #88]	@ 000d80d0 a16d
.org 0xd80d2
	ldr r0, [r4, #96]	@ 000d80d2 206e
.org 0xd80d4
	adds r2, r1, r0	@ 000d80d4 0a18
.org 0xd80d6
	str r2, [r4, #88]	@ 000d80d6 a265
.org 0xd80d8
	ldr r1, [r4, #104]	@ 000d80d8 a16e
.org 0xd80da
	adds r0, r0, r1	@ 000d80da 4018
.org 0xd80dc
	str r0, [r4, #96]	@ 000d80dc 2066
.org 0xd80de
	ldrb r0, [r4, #18]	@ 000d80de a07c
.org 0xd80e0
	subs r0, #1	@ 000d80e0 0138
.org 0xd80e2
	strb r0, [r4, #18]	@ 000d80e2 a074
.org 0xd80e4
	lsls r0, r0, #24	@ 000d80e4 0006
.org 0xd80e6
	cmp r0, #0	@ 000d80e6 0028
.org 0xd80e8
	beq.n 0xd80f8	@ 000d80e8 06d0
.org 0xd80ea
	adds r0, r3, #0	@ 000d80ea 181c
.org 0xd80ec
	adds r1, r2, #0	@ 000d80ec 111c
.org 0xd80ee
	bl 0x7c7c	@ 000d80ee 2ff7c5fd
.org 0xd80f2
	lsls r0, r0, #16	@ 000d80f2 0004
.org 0xd80f4
	cmp r0, #0	@ 000d80f4 0028
.org 0xd80f6
	beq.n 0xd8114	@ 000d80f6 0dd0
.org 0xd80f8
	adds r1, r4, #0	@ 000d80f8 211c
.org 0xd80fa
	adds r1, #84	@ 000d80fa 5431
.org 0xd80fc
	movs r0, #1	@ 000d80fc 0120
.org 0xd80fe
	bl 0xd0c88	@ 000d80fe f8f7c3fd
.org 0xd8102
	ldr r1, [pc, #28]	@ 000d8102 0749
.org 0xd8104
	ldrb r0, [r4, #9]	@ 000d8104 607a
.org 0xd8106
	lsls r0, r0, #2	@ 000d8106 8000
.org 0xd8108
	adds r0, r0, r1	@ 000d8108 4018
.org 0xd810a
	movs r1, #2	@ 000d810a 0221
.org 0xd810c
	str r1, [r4, #12]	@ 000d810c e160
.org 0xd810e
	ldr r0, [r0, #0]	@ 000d810e 0068
.org 0xd8110
	ldr r0, [r0, #8]	@ 000d8110 8068
.org 0xd8112
	str r0, [r4, #20]	@ 000d8112 6061
.org 0xd8114
	adds r0, r4, #0	@ 000d8114 201c
.org 0xd8116
	bl 0x1cff0	@ 000d8116 44f76bff
.org 0xd811a
	pop {r4, r5, r6}	@ 000d811a 70bc
.org 0xd811c
	pop {r0}	@ 000d811c 01bc
.org 0xd811e
	bx r0	@ 000d811e 0047
