@ FUN_080ef0dc  entry 0x080ef0dc  size 100
.thumb
.org 0xef0dc
FUN_080ef0dc:
	push {r4, r5, r6, lr}	@ 000ef0dc 70b5
.org 0xef0de
	adds r4, r0, #0	@ 000ef0de 041c
.org 0xef0e0
	ldrb r1, [r4, #10]	@ 000ef0e0 a17a
.org 0xef0e2
	movs r0, #1	@ 000ef0e2 0120
.org 0xef0e4
	movs r6, #0	@ 000ef0e4 0026
.org 0xef0e6
	orrs r0, r1	@ 000ef0e6 0843
.org 0xef0e8
	movs r1, #2	@ 000ef0e8 0221
.org 0xef0ea
	orrs r0, r1	@ 000ef0ea 0843
.org 0xef0ec
	strb r0, [r4, #10]	@ 000ef0ec a072
.org 0xef0ee
	adds r0, r4, #0	@ 000ef0ee 201c
.org 0xef0f0
	bl 0x1cc9c	@ 000ef0f0 2df7d4fd
.org 0xef0f4
	adds r0, r4, #0	@ 000ef0f4 201c
.org 0xef0f6
	bl 0x1ceec	@ 000ef0f6 2df7f9fe
.org 0xef0fa
	movs r1, #168	@ 000ef0fa a821
.org 0xef0fc
	lsls r1, r1, #7	@ 000ef0fc c901
.org 0xef0fe
	adds r0, r4, #0	@ 000ef0fe 201c
.org 0xef100
	bl 0x1cf00	@ 000ef100 2df7fefe
.org 0xef104
	ldrb r1, [r4, #10]	@ 000ef104 a17a
.org 0xef106
	movs r0, #4	@ 000ef106 0420
.org 0xef108
	orrs r0, r1	@ 000ef108 0843
.org 0xef10a
	strb r0, [r4, #10]	@ 000ef10a a072
.org 0xef10c
	adds r5, r4, #0	@ 000ef10c 251c
.org 0xef10e
	adds r5, #116	@ 000ef10e 7435
.org 0xef110
	ldr r1, [pc, #44]	@ 000ef110 0b49
.org 0xef112
	adds r2, r4, #0	@ 000ef112 221c
.org 0xef114
	adds r2, #84	@ 000ef114 5432
.org 0xef116
	adds r0, r5, #0	@ 000ef116 281c
.org 0xef118
	movs r3, #10	@ 000ef118 0a23
.org 0xef11a
	bl 0x5760	@ 000ef11a 16f721fb
.org 0xef11e
	str r4, [r5, #44]	@ 000ef11e ec62
.org 0xef120
	str r6, [r5, #36]	@ 000ef120 6e62
.org 0xef122
	ldr r1, [pc, #32]	@ 000ef122 0849
.org 0xef124
	ldrb r0, [r4, #9]	@ 000ef124 607a
.org 0xef126
	lsls r0, r0, #2	@ 000ef126 8000
.org 0xef128
	adds r0, r0, r1	@ 000ef128 4018
.org 0xef12a
	movs r1, #1	@ 000ef12a 0121
.org 0xef12c
	str r1, [r4, #12]	@ 000ef12c e160
.org 0xef12e
	ldr r0, [r0, #0]	@ 000ef12e 0068
.org 0xef130
	ldr r0, [r0, #4]	@ 000ef130 4068
.org 0xef132
	str r0, [r4, #20]	@ 000ef132 6061
.org 0xef134
	adds r0, r4, #0	@ 000ef134 201c
.org 0xef136
	bl 0xed7c8	@ 000ef136 fef747fb
.org 0xef13a
	pop {r4, r5, r6}	@ 000ef13a 70bc
.org 0xef13c
	pop {r0}	@ 000ef13c 01bc
.org 0xef13e
	bx r0	@ 000ef13e 0047
