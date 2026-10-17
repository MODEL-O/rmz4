@ FUN_0810b9a8  entry 0x0810b9a8  size 88
.thumb
.org 0x10b9a8
FUN_0810b9a8:
	push {r4, r5, lr}	@ 0010b9a8 30b5
.org 0x10b9aa
	adds r4, r0, #0	@ 0010b9aa 041c
.org 0x10b9ac
	bl 0x1cc9c	@ 0010b9ac 11f776f9
.org 0x10b9b0
	ldrb r1, [r4, #10]	@ 0010b9b0 a17a
.org 0x10b9b2
	movs r0, #1	@ 0010b9b2 0120
.org 0x10b9b4
	movs r5, #0	@ 0010b9b4 0025
.org 0x10b9b6
	orrs r0, r1	@ 0010b9b6 0843
.org 0x10b9b8
	movs r1, #2	@ 0010b9b8 0221
.org 0x10b9ba
	orrs r0, r1	@ 0010b9ba 0843
.org 0x10b9bc
	strb r0, [r4, #10]	@ 0010b9bc a072
.org 0x10b9be
	ldr r1, [pc, #64]	@ 0010b9be 1049
.org 0x10b9c0
	adds r0, r4, #0	@ 0010b9c0 201c
.org 0x10b9c2
	bl 0x1cf00	@ 0010b9c2 11f79dfa
.org 0x10b9c6
	adds r0, r4, #0	@ 0010b9c6 201c
.org 0x10b9c8
	adds r0, #76	@ 0010b9c8 4c30
.org 0x10b9ca
	strb r5, [r0, #0]	@ 0010b9ca 0570
.org 0x10b9cc
	adds r2, r4, #0	@ 0010b9cc 221c
.org 0x10b9ce
	adds r2, #74	@ 0010b9ce 4a32
.org 0x10b9d0
	ldrb r1, [r2, #0]	@ 0010b9d0 1178
.org 0x10b9d2
	movs r0, #17	@ 0010b9d2 1120
.org 0x10b9d4
	negs r0, r0	@ 0010b9d4 4042
.org 0x10b9d6
	ands r0, r1	@ 0010b9d6 0840
.org 0x10b9d8
	strb r0, [r2, #0]	@ 0010b9d8 1070
.org 0x10b9da
	ldrb r1, [r4, #10]	@ 0010b9da a17a
.org 0x10b9dc
	movs r0, #239	@ 0010b9dc ef20
.org 0x10b9de
	ands r0, r1	@ 0010b9de 0840
.org 0x10b9e0
	strb r0, [r4, #10]	@ 0010b9e0 a072
.org 0x10b9e2
	ldr r1, [pc, #32]	@ 0010b9e2 0849
.org 0x10b9e4
	ldrb r0, [r4, #9]	@ 0010b9e4 607a
.org 0x10b9e6
	lsls r0, r0, #2	@ 0010b9e6 8000
.org 0x10b9e8
	adds r0, r0, r1	@ 0010b9e8 4018
.org 0x10b9ea
	movs r1, #1	@ 0010b9ea 0121
.org 0x10b9ec
	str r1, [r4, #12]	@ 0010b9ec e160
.org 0x10b9ee
	ldr r0, [r0, #0]	@ 0010b9ee 0068
.org 0x10b9f0
	ldr r0, [r0, #4]	@ 0010b9f0 4068
.org 0x10b9f2
	str r0, [r4, #20]	@ 0010b9f2 6061
.org 0x10b9f4
	adds r0, r4, #0	@ 0010b9f4 201c
.org 0x10b9f6
	bl 0x10b774	@ 0010b9f6 fff7bdfe
.org 0x10b9fa
	pop {r4, r5}	@ 0010b9fa 30bc
.org 0x10b9fc
	pop {r0}	@ 0010b9fc 01bc
.org 0x10b9fe
	bx r0	@ 0010b9fe 0047
