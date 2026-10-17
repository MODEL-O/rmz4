@ FUN_080aeaf0  entry 0x080aeaf0  size 96
.thumb
.org 0xaeaf0
FUN_080aeaf0:
	push {r4, lr}	@ 000aeaf0 10b5
.org 0xaeaf2
	adds r4, r0, #0	@ 000aeaf2 041c
.org 0xaeaf4
	bl 0x1cc9c	@ 000aeaf4 6ef7d2f8
.org 0xaeaf8
	ldrb r1, [r4, #10]	@ 000aeaf8 a17a
.org 0xaeafa
	movs r0, #1	@ 000aeafa 0120
.org 0xaeafc
	orrs r0, r1	@ 000aeafc 0843
.org 0xaeafe
	movs r1, #2	@ 000aeafe 0221
.org 0xaeb00
	orrs r0, r1	@ 000aeb00 0843
.org 0xaeb02
	strb r0, [r4, #10]	@ 000aeb02 a072
.org 0xaeb04
	movs r1, #214	@ 000aeb04 d621
.org 0xaeb06
	lsls r1, r1, #8	@ 000aeb06 0902
.org 0xaeb08
	adds r0, r4, #0	@ 000aeb08 201c
.org 0xaeb0a
	bl 0x1cf00	@ 000aeb0a 6ef7f9f9
.org 0xaeb0e
	adds r0, r4, #0	@ 000aeb0e 201c
.org 0xaeb10
	bl 0x1cff0	@ 000aeb10 6ef76efa
.org 0xaeb14
	movs r2, #0	@ 000aeb14 0022
.org 0xaeb16
	ldrb r1, [r4, #10]	@ 000aeb16 a17a
.org 0xaeb18
	movs r0, #239	@ 000aeb18 ef20
.org 0xaeb1a
	ands r0, r1	@ 000aeb1a 0840
.org 0xaeb1c
	strb r0, [r4, #10]	@ 000aeb1c a072
.org 0xaeb1e
	movs r3, #1	@ 000aeb1e 0123
.org 0xaeb20
	adds r0, r4, #0	@ 000aeb20 201c
.org 0xaeb22
	adds r0, #76	@ 000aeb22 4c30
.org 0xaeb24
	strb r2, [r0, #0]	@ 000aeb24 0270
.org 0xaeb26
	adds r2, r4, #0	@ 000aeb26 221c
.org 0xaeb28
	adds r2, #74	@ 000aeb28 4a32
.org 0xaeb2a
	ldrb r1, [r2, #0]	@ 000aeb2a 1178
.org 0xaeb2c
	movs r0, #17	@ 000aeb2c 1120
.org 0xaeb2e
	negs r0, r0	@ 000aeb2e 4042
.org 0xaeb30
	ands r0, r1	@ 000aeb30 0840
.org 0xaeb32
	strb r0, [r2, #0]	@ 000aeb32 1070
.org 0xaeb34
	ldr r1, [pc, #24]	@ 000aeb34 0649
.org 0xaeb36
	ldrb r0, [r4, #9]	@ 000aeb36 607a
.org 0xaeb38
	lsls r0, r0, #2	@ 000aeb38 8000
.org 0xaeb3a
	adds r0, r0, r1	@ 000aeb3a 4018
.org 0xaeb3c
	str r3, [r4, #12]	@ 000aeb3c e360
.org 0xaeb3e
	ldr r0, [r0, #0]	@ 000aeb3e 0068
.org 0xaeb40
	ldr r0, [r0, #4]	@ 000aeb40 4068
.org 0xaeb42
	str r0, [r4, #20]	@ 000aeb42 6061
.org 0xaeb44
	adds r0, r4, #0	@ 000aeb44 201c
.org 0xaeb46
	bl 0xaeb54	@ 000aeb46 00f005f8
.org 0xaeb4a
	pop {r4}	@ 000aeb4a 10bc
.org 0xaeb4c
	pop {r0}	@ 000aeb4c 01bc
.org 0xaeb4e
	bx r0	@ 000aeb4e 0047
