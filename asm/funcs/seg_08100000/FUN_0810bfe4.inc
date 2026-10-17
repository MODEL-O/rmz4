@ FUN_0810bfe4  entry 0x0810bfe4  size 62
.thumb
.org 0x10bfe4
FUN_0810bfe4:
	push {r4, lr}	@ 0010bfe4 10b5
.org 0x10bfe6
	adds r4, r0, #0	@ 0010bfe6 041c
.org 0x10bfe8
	bl 0x1cc9c	@ 0010bfe8 10f758fe
.org 0x10bfec
	ldrb r1, [r4, #10]	@ 0010bfec a17a
.org 0x10bfee
	movs r0, #1	@ 0010bfee 0120
.org 0x10bff0
	orrs r0, r1	@ 0010bff0 0843
.org 0x10bff2
	strb r0, [r4, #10]	@ 0010bff2 a072
.org 0x10bff4
	adds r2, r4, #0	@ 0010bff4 221c
.org 0x10bff6
	adds r2, #73	@ 0010bff6 4932
.org 0x10bff8
	ldrb r1, [r2, #0]	@ 0010bff8 1178
.org 0x10bffa
	movs r0, #13	@ 0010bffa 0d20
.org 0x10bffc
	negs r0, r0	@ 0010bffc 4042
.org 0x10bffe
	ands r0, r1	@ 0010bffe 0840
.org 0x10c000
	strb r0, [r2, #0]	@ 0010c000 1070
.org 0x10c002
	adds r1, r4, #0	@ 0010c002 211c
.org 0x10c004
	adds r1, #37	@ 0010c004 2531
.org 0x10c006
	movs r0, #17	@ 0010c006 1120
.org 0x10c008
	strb r0, [r1, #0]	@ 0010c008 0870
.org 0x10c00a
	ldr r1, [pc, #24]	@ 0010c00a 0649
.org 0x10c00c
	adds r0, r4, #0	@ 0010c00c 201c
.org 0x10c00e
	bl 0x1cf00	@ 0010c00e 10f777ff
.org 0x10c012
	ldr r0, [pc, #20]	@ 0010c012 0548
.org 0x10c014
	ldr r1, [r0, #4]	@ 0010c014 4168
.org 0x10c016
	ldr r0, [r0, #0]	@ 0010c016 0068
.org 0x10c018
	str r0, [r4, #84]	@ 0010c018 6065
.org 0x10c01a
	str r1, [r4, #88]	@ 0010c01a a165
.org 0x10c01c
	pop {r4}	@ 0010c01c 10bc
.org 0x10c01e
	pop {r0}	@ 0010c01e 01bc
.org 0x10c020
	bx r0	@ 0010c020 0047
