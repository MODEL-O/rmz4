@ FUN_0810ac38  entry 0x0810ac38  size 104
.thumb
.org 0x10ac38
FUN_0810ac38:
	push {r4, lr}	@ 0010ac38 10b5
.org 0x10ac3a
	adds r4, r0, #0	@ 0010ac3a 041c
.org 0x10ac3c
	ldr r1, [pc, #96]	@ 0010ac3c 1849
.org 0x10ac3e
	ldrb r0, [r4, #9]	@ 0010ac3e 607a
.org 0x10ac40
	lsls r0, r0, #2	@ 0010ac40 8000
.org 0x10ac42
	adds r0, r0, r1	@ 0010ac42 4018
.org 0x10ac44
	movs r1, #1	@ 0010ac44 0121
.org 0x10ac46
	str r1, [r4, #12]	@ 0010ac46 e160
.org 0x10ac48
	ldr r0, [r0, #0]	@ 0010ac48 0068
.org 0x10ac4a
	ldr r0, [r0, #4]	@ 0010ac4a 4068
.org 0x10ac4c
	str r0, [r4, #20]	@ 0010ac4c 6061
.org 0x10ac4e
	adds r0, r4, #0	@ 0010ac4e 201c
.org 0x10ac50
	bl 0x1cc9c	@ 0010ac50 12f724f8
.org 0x10ac54
	ldrb r1, [r4, #10]	@ 0010ac54 a17a
.org 0x10ac56
	movs r0, #1	@ 0010ac56 0120
.org 0x10ac58
	movs r2, #0	@ 0010ac58 0022
.org 0x10ac5a
	orrs r0, r1	@ 0010ac5a 0843
.org 0x10ac5c
	movs r1, #2	@ 0010ac5c 0221
.org 0x10ac5e
	orrs r0, r1	@ 0010ac5e 0843
.org 0x10ac60
	strb r0, [r4, #10]	@ 0010ac60 a072
.org 0x10ac62
	adds r0, r4, #0	@ 0010ac62 201c
.org 0x10ac64
	adds r0, #76	@ 0010ac64 4c30
.org 0x10ac66
	strb r2, [r0, #0]	@ 0010ac66 0270
.org 0x10ac68
	adds r2, r4, #0	@ 0010ac68 221c
.org 0x10ac6a
	adds r2, #74	@ 0010ac6a 4a32
.org 0x10ac6c
	ldrb r1, [r2, #0]	@ 0010ac6c 1178
.org 0x10ac6e
	movs r0, #17	@ 0010ac6e 1120
.org 0x10ac70
	negs r0, r0	@ 0010ac70 4042
.org 0x10ac72
	ands r0, r1	@ 0010ac72 0840
.org 0x10ac74
	strb r0, [r2, #0]	@ 0010ac74 1070
.org 0x10ac76
	ldrb r1, [r4, #10]	@ 0010ac76 a17a
.org 0x10ac78
	movs r0, #239	@ 0010ac78 ef20
.org 0x10ac7a
	ands r0, r1	@ 0010ac7a 0840
.org 0x10ac7c
	strb r0, [r4, #10]	@ 0010ac7c a072
.org 0x10ac7e
	ldr r1, [pc, #36]	@ 0010ac7e 0949
.org 0x10ac80
	adds r0, r4, #0	@ 0010ac80 201c
.org 0x10ac82
	bl 0x1cf00	@ 0010ac82 12f73df9
.org 0x10ac86
	adds r2, r4, #0	@ 0010ac86 221c
.org 0x10ac88
	adds r2, #73	@ 0010ac88 4932
.org 0x10ac8a
	ldrb r1, [r2, #0]	@ 0010ac8a 1178
.org 0x10ac8c
	movs r0, #13	@ 0010ac8c 0d20
.org 0x10ac8e
	negs r0, r0	@ 0010ac8e 4042
.org 0x10ac90
	ands r0, r1	@ 0010ac90 0840
.org 0x10ac92
	strb r0, [r2, #0]	@ 0010ac92 1070
.org 0x10ac94
	adds r0, r4, #0	@ 0010ac94 201c
.org 0x10ac96
	bl 0x10aca8	@ 0010ac96 00f007f8
.org 0x10ac9a
	pop {r4}	@ 0010ac9a 10bc
.org 0x10ac9c
	pop {r0}	@ 0010ac9c 01bc
.org 0x10ac9e
	bx r0	@ 0010ac9e 0047
