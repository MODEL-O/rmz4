@ FUN_0810c068  entry 0x0810c068  size 62
.thumb
.org 0x10c068
FUN_0810c068:
	push {r4, lr}	@ 0010c068 10b5
.org 0x10c06a
	adds r4, r0, #0	@ 0010c06a 041c
.org 0x10c06c
	bl 0x1cc9c	@ 0010c06c 10f716fe
.org 0x10c070
	ldrb r1, [r4, #10]	@ 0010c070 a17a
.org 0x10c072
	movs r0, #1	@ 0010c072 0120
.org 0x10c074
	orrs r0, r1	@ 0010c074 0843
.org 0x10c076
	strb r0, [r4, #10]	@ 0010c076 a072
.org 0x10c078
	adds r2, r4, #0	@ 0010c078 221c
.org 0x10c07a
	adds r2, #73	@ 0010c07a 4932
.org 0x10c07c
	ldrb r1, [r2, #0]	@ 0010c07c 1178
.org 0x10c07e
	movs r0, #13	@ 0010c07e 0d20
.org 0x10c080
	negs r0, r0	@ 0010c080 4042
.org 0x10c082
	ands r0, r1	@ 0010c082 0840
.org 0x10c084
	strb r0, [r2, #0]	@ 0010c084 1070
.org 0x10c086
	adds r1, r4, #0	@ 0010c086 211c
.org 0x10c088
	adds r1, #37	@ 0010c088 2531
.org 0x10c08a
	movs r0, #17	@ 0010c08a 1120
.org 0x10c08c
	strb r0, [r1, #0]	@ 0010c08c 0870
.org 0x10c08e
	ldr r1, [pc, #24]	@ 0010c08e 0649
.org 0x10c090
	adds r0, r4, #0	@ 0010c090 201c
.org 0x10c092
	bl 0x1cf00	@ 0010c092 10f735ff
.org 0x10c096
	ldr r0, [pc, #20]	@ 0010c096 0548
.org 0x10c098
	ldr r1, [r0, #84]	@ 0010c098 416d
.org 0x10c09a
	ldr r0, [r0, #80]	@ 0010c09a 006d
.org 0x10c09c
	str r0, [r4, #84]	@ 0010c09c 6065
.org 0x10c09e
	str r1, [r4, #88]	@ 0010c09e a165
.org 0x10c0a0
	pop {r4}	@ 0010c0a0 10bc
.org 0x10c0a2
	pop {r0}	@ 0010c0a2 01bc
.org 0x10c0a4
	bx r0	@ 0010c0a4 0047
