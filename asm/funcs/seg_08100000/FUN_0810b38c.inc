@ FUN_0810b38c  entry 0x0810b38c  size 108
.thumb
.org 0x10b38c
FUN_0810b38c:
	push {r4, r5, lr}	@ 0010b38c 30b5
.org 0x10b38e
	adds r4, r0, #0	@ 0010b38e 041c
.org 0x10b390
	bl 0x1cc9c	@ 0010b390 11f784fc
.org 0x10b394
	ldrb r1, [r4, #10]	@ 0010b394 a17a
.org 0x10b396
	movs r0, #1	@ 0010b396 0120
.org 0x10b398
	movs r5, #0	@ 0010b398 0025
.org 0x10b39a
	orrs r0, r1	@ 0010b39a 0843
.org 0x10b39c
	movs r1, #2	@ 0010b39c 0221
.org 0x10b39e
	orrs r0, r1	@ 0010b39e 0843
.org 0x10b3a0
	strb r0, [r4, #10]	@ 0010b3a0 a072
.org 0x10b3a2
	movs r1, #134	@ 0010b3a2 8621
.org 0x10b3a4
	lsls r1, r1, #7	@ 0010b3a4 c901
.org 0x10b3a6
	adds r0, r4, #0	@ 0010b3a6 201c
.org 0x10b3a8
	bl 0x1cf00	@ 0010b3a8 11f7aafd
.org 0x10b3ac
	adds r0, r4, #0	@ 0010b3ac 201c
.org 0x10b3ae
	adds r0, #76	@ 0010b3ae 4c30
.org 0x10b3b0
	strb r5, [r0, #0]	@ 0010b3b0 0570
.org 0x10b3b2
	adds r2, r4, #0	@ 0010b3b2 221c
.org 0x10b3b4
	adds r2, #74	@ 0010b3b4 4a32
.org 0x10b3b6
	ldrb r1, [r2, #0]	@ 0010b3b6 1178
.org 0x10b3b8
	movs r0, #17	@ 0010b3b8 1120
.org 0x10b3ba
	negs r0, r0	@ 0010b3ba 4042
.org 0x10b3bc
	ands r0, r1	@ 0010b3bc 0840
.org 0x10b3be
	strb r0, [r2, #0]	@ 0010b3be 1070
.org 0x10b3c0
	ldrb r1, [r4, #10]	@ 0010b3c0 a17a
.org 0x10b3c2
	movs r0, #239	@ 0010b3c2 ef20
.org 0x10b3c4
	ands r0, r1	@ 0010b3c4 0840
.org 0x10b3c6
	strb r0, [r4, #10]	@ 0010b3c6 a072
.org 0x10b3c8
	movs r0, #188	@ 0010b3c8 bc20
.org 0x10b3ca
	lsls r0, r0, #9	@ 0010b3ca 4002
.org 0x10b3cc
	str r0, [r4, #84]	@ 0010b3cc 6065
.org 0x10b3ce
	ldrb r0, [r4, #17]	@ 0010b3ce 607c
.org 0x10b3d0
	lsls r0, r0, #12	@ 0010b3d0 0003
.org 0x10b3d2
	movs r1, #128	@ 0010b3d2 8021
.org 0x10b3d4
	lsls r1, r1, #5	@ 0010b3d4 4901
.org 0x10b3d6
	adds r0, r0, r1	@ 0010b3d6 4018
.org 0x10b3d8
	str r0, [r4, #88]	@ 0010b3d8 a065
.org 0x10b3da
	ldr r1, [pc, #28]	@ 0010b3da 0749
.org 0x10b3dc
	ldrb r0, [r4, #9]	@ 0010b3dc 607a
.org 0x10b3de
	lsls r0, r0, #2	@ 0010b3de 8000
.org 0x10b3e0
	adds r0, r0, r1	@ 0010b3e0 4018
.org 0x10b3e2
	movs r1, #1	@ 0010b3e2 0121
.org 0x10b3e4
	str r1, [r4, #12]	@ 0010b3e4 e160
.org 0x10b3e6
	ldr r0, [r0, #0]	@ 0010b3e6 0068
.org 0x10b3e8
	ldr r0, [r0, #4]	@ 0010b3e8 4068
.org 0x10b3ea
	str r0, [r4, #20]	@ 0010b3ea 6061
.org 0x10b3ec
	adds r0, r4, #0	@ 0010b3ec 201c
.org 0x10b3ee
	bl 0x10b148	@ 0010b3ee fff7abfe
.org 0x10b3f2
	pop {r4, r5}	@ 0010b3f2 30bc
.org 0x10b3f4
	pop {r0}	@ 0010b3f4 01bc
.org 0x10b3f6
	bx r0	@ 0010b3f6 0047
