@ FUN_080c002c  entry 0x080c002c  size 182
.thumb
.org 0xc002c
FUN_080c002c:
	push {r4, r5, r6, lr}	@ 000c002c 70b5
.org 0xc002e
	adds r6, r0, #0	@ 000c002e 061c
.org 0xc0030
	ldrb r0, [r6, #17]	@ 000c0030 707c
.org 0xc0032
	adds r3, r0, #0	@ 000c0032 031c
.org 0xc0034
	ldr r1, [pc, #172]	@ 000c0034 2b49
.org 0xc0036
	ldrb r0, [r6, #9]	@ 000c0036 707a
.org 0xc0038
	lsls r0, r0, #2	@ 000c0038 8000
.org 0xc003a
	adds r0, r0, r1	@ 000c003a 4018
.org 0xc003c
	movs r1, #1	@ 000c003c 0121
.org 0xc003e
	str r1, [r6, #12]	@ 000c003e f160
.org 0xc0040
	ldr r0, [r0, #0]	@ 000c0040 0068
.org 0xc0042
	ldr r0, [r0, #4]	@ 000c0042 4068
.org 0xc0044
	str r0, [r6, #20]	@ 000c0044 7061
.org 0xc0046
	ldrb r1, [r6, #10]	@ 000c0046 b17a
.org 0xc0048
	movs r0, #1	@ 000c0048 0120
.org 0xc004a
	movs r4, #0	@ 000c004a 0024
.org 0xc004c
	orrs r0, r1	@ 000c004c 0843
.org 0xc004e
	movs r1, #2	@ 000c004e 0221
.org 0xc0050
	orrs r0, r1	@ 000c0050 0843
.org 0xc0052
	strb r0, [r6, #10]	@ 000c0052 b072
.org 0xc0054
	ldr r2, [pc, #144]	@ 000c0054 244a
.org 0xc0056
	adds r0, r3, #0	@ 000c0056 181c
.org 0xc0058
	adds r0, #64	@ 000c0058 4030
.org 0xc005a
	lsls r0, r0, #24	@ 000c005a 0006
.org 0xc005c
	lsrs r0, r0, #23	@ 000c005c c00d
.org 0xc005e
	adds r0, r0, r2	@ 000c005e 8018
.org 0xc0060
	movs r5, #0	@ 000c0060 0025
.org 0xc0062
	ldrsh r1, [r0, r5]	@ 000c0062 415f
.org 0xc0064
	lsls r0, r1, #1	@ 000c0064 4800
.org 0xc0066
	adds r0, r0, r1	@ 000c0066 4018
.org 0xc0068
	lsls r0, r0, #7	@ 000c0068 c001
.org 0xc006a
	cmp r0, #0	@ 000c006a 0028
.org 0xc006c
	bge.n 0xc0070	@ 000c006c 00da
.org 0xc006e
	adds r0, #255	@ 000c006e ff30
.org 0xc0070
	asrs r0, r0, #8	@ 000c0070 0012
.org 0xc0072
	str r0, [r6, #92]	@ 000c0072 f065
.org 0xc0074
	lsls r0, r3, #1	@ 000c0074 5800
.org 0xc0076
	adds r0, r0, r2	@ 000c0076 8018
.org 0xc0078
	movs r2, #0	@ 000c0078 0022
.org 0xc007a
	ldrsh r1, [r0, r2]	@ 000c007a 815e
.org 0xc007c
	lsls r0, r1, #1	@ 000c007c 4800
.org 0xc007e
	adds r0, r0, r1	@ 000c007e 4018
.org 0xc0080
	lsls r0, r0, #7	@ 000c0080 c001
.org 0xc0082
	cmp r0, #0	@ 000c0082 0028
.org 0xc0084
	bge.n 0xc0088	@ 000c0084 00da
.org 0xc0086
	adds r0, #255	@ 000c0086 ff30
.org 0xc0088
	asrs r0, r0, #8	@ 000c0088 0012
.org 0xc008a
	str r0, [r6, #96]	@ 000c008a 3066
.org 0xc008c
	adds r0, r6, #0	@ 000c008c 301c
.org 0xc008e
	bl 0x1cc9c	@ 000c008e 5cf705fe
.org 0xc0092
	movs r5, #0	@ 000c0092 0025
.org 0xc0094
	ldrb r1, [r6, #10]	@ 000c0094 b17a
.org 0xc0096
	movs r0, #239	@ 000c0096 ef20
.org 0xc0098
	ands r0, r1	@ 000c0098 0840
.org 0xc009a
	strb r0, [r6, #10]	@ 000c009a b072
.org 0xc009c
	adds r0, r6, #0	@ 000c009c 301c
.org 0xc009e
	adds r0, #76	@ 000c009e 4c30
.org 0xc00a0
	strb r5, [r0, #0]	@ 000c00a0 0570
.org 0xc00a2
	adds r2, r6, #0	@ 000c00a2 321c
.org 0xc00a4
	adds r2, #74	@ 000c00a4 4a32
.org 0xc00a6
	ldrb r1, [r2, #0]	@ 000c00a6 1178
.org 0xc00a8
	movs r0, #17	@ 000c00a8 1120
.org 0xc00aa
	negs r0, r0	@ 000c00aa 4042
.org 0xc00ac
	ands r0, r1	@ 000c00ac 0840
.org 0xc00ae
	strb r0, [r2, #0]	@ 000c00ae 1070
.org 0xc00b0
	ldr r1, [pc, #56]	@ 000c00b0 0e49
.org 0xc00b2
	adds r0, r6, #0	@ 000c00b2 301c
.org 0xc00b4
	bl 0x1cf00	@ 000c00b4 5cf724ff
.org 0xc00b8
	ldrb r0, [r6, #10]	@ 000c00b8 b07a
.org 0xc00ba
	movs r1, #4	@ 000c00ba 0421
.org 0xc00bc
	orrs r0, r1	@ 000c00bc 0843
.org 0xc00be
	strb r0, [r6, #10]	@ 000c00be b072
.org 0xc00c0
	adds r4, r6, #0	@ 000c00c0 341c
.org 0xc00c2
	adds r4, #116	@ 000c00c2 7434
.org 0xc00c4
	ldr r1, [pc, #40]	@ 000c00c4 0a49
.org 0xc00c6
	adds r2, r6, #0	@ 000c00c6 321c
.org 0xc00c8
	adds r2, #84	@ 000c00c8 5432
.org 0xc00ca
	adds r0, r4, #0	@ 000c00ca 201c
.org 0xc00cc
	movs r3, #64	@ 000c00cc 4023
.org 0xc00ce
	bl 0x5760	@ 000c00ce 45f747fb
.org 0xc00d2
	str r6, [r4, #44]	@ 000c00d2 e662
.org 0xc00d4
	str r5, [r4, #36]	@ 000c00d4 6562
.org 0xc00d6
	adds r0, r6, #0	@ 000c00d6 301c
.org 0xc00d8
	bl 0xc00f4	@ 000c00d8 00f00cf8
.org 0xc00dc
	pop {r4, r5, r6}	@ 000c00dc 70bc
.org 0xc00de
	pop {r0}	@ 000c00de 01bc
.org 0xc00e0
	bx r0	@ 000c00e0 0047
