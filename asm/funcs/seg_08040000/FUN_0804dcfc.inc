@ FUN_0804dcfc  entry 0x0804dcfc  size 106
.thumb
.org 0x4dcfc
FUN_0804dcfc:
	push {r4, r5, r6, lr}	@ 0004dcfc 70b5
.org 0x4dcfe
	adds r4, r0, #0	@ 0004dcfe 041c
.org 0x4dd00
	bl 0x1cd28	@ 0004dd00 cff712f8
.org 0x4dd04
	adds r0, r4, #0	@ 0004dd04 201c
.org 0x4dd06
	bl 0x1ceec	@ 0004dd06 cff7f1f8
.org 0x4dd0a
	ldrb r1, [r4, #10]	@ 0004dd0a a17a
.org 0x4dd0c
	movs r0, #1	@ 0004dd0c 0120
.org 0x4dd0e
	movs r6, #0	@ 0004dd0e 0026
.org 0x4dd10
	orrs r0, r1	@ 0004dd10 0843
.org 0x4dd12
	movs r1, #2	@ 0004dd12 0221
.org 0x4dd14
	orrs r0, r1	@ 0004dd14 0843
.org 0x4dd16
	strb r0, [r4, #10]	@ 0004dd16 a072
.org 0x4dd18
	ldr r1, [pc, #76]	@ 0004dd18 1349
.org 0x4dd1a
	adds r0, r4, #0	@ 0004dd1a 201c
.org 0x4dd1c
	bl 0x1cf00	@ 0004dd1c cff7f0f8
.org 0x4dd20
	ldrb r1, [r4, #10]	@ 0004dd20 a17a
.org 0x4dd22
	movs r0, #4	@ 0004dd22 0420
.org 0x4dd24
	orrs r0, r1	@ 0004dd24 0843
.org 0x4dd26
	strb r0, [r4, #10]	@ 0004dd26 a072
.org 0x4dd28
	adds r5, r4, #0	@ 0004dd28 251c
.org 0x4dd2a
	adds r5, #116	@ 0004dd2a 7435
.org 0x4dd2c
	ldr r1, [pc, #60]	@ 0004dd2c 0f49
.org 0x4dd2e
	adds r2, r4, #0	@ 0004dd2e 221c
.org 0x4dd30
	adds r2, #84	@ 0004dd30 5432
.org 0x4dd32
	adds r0, r5, #0	@ 0004dd32 281c
.org 0x4dd34
	movs r3, #8	@ 0004dd34 0823
.org 0x4dd36
	bl 0x5760	@ 0004dd36 b7f713fd
.org 0x4dd3a
	str r4, [r5, #44]	@ 0004dd3a ec62
.org 0x4dd3c
	ldr r0, [pc, #48]	@ 0004dd3c 0c48
.org 0x4dd3e
	str r0, [r5, #36]	@ 0004dd3e 6862
.org 0x4dd40
	strb r6, [r4, #18]	@ 0004dd40 a674
.org 0x4dd42
	movs r0, #69	@ 0004dd42 4520
.org 0x4dd44
	bl 0x2b10	@ 0004dd44 b4f7e4fe
.org 0x4dd48
	ldr r1, [pc, #40]	@ 0004dd48 0a49
.org 0x4dd4a
	ldrb r0, [r4, #9]	@ 0004dd4a 607a
.org 0x4dd4c
	lsls r0, r0, #2	@ 0004dd4c 8000
.org 0x4dd4e
	adds r0, r0, r1	@ 0004dd4e 4018
.org 0x4dd50
	movs r1, #1	@ 0004dd50 0121
.org 0x4dd52
	str r1, [r4, #12]	@ 0004dd52 e160
.org 0x4dd54
	ldr r0, [r0, #0]	@ 0004dd54 0068
.org 0x4dd56
	ldr r0, [r0, #4]	@ 0004dd56 4068
.org 0x4dd58
	str r0, [r4, #20]	@ 0004dd58 6061
.org 0x4dd5a
	adds r0, r4, #0	@ 0004dd5a 201c
.org 0x4dd5c
	bl 0x4dd78	@ 0004dd5c 00f00cf8
.org 0x4dd60
	pop {r4, r5, r6}	@ 0004dd60 70bc
.org 0x4dd62
	pop {r0}	@ 0004dd62 01bc
.org 0x4dd64
	bx r0	@ 0004dd64 0047
