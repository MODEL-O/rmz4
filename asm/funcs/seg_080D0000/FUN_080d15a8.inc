@ FUN_080d15a8  entry 0x080d15a8  size 72
.thumb
.org 0xd15a8
FUN_080d15a8:
	push {r4, lr}	@ 000d15a8 10b5
.org 0xd15aa
	adds r4, r0, #0	@ 000d15aa 041c
.org 0xd15ac
	bl 0x1cc9c	@ 000d15ac 4bf776fb
.org 0xd15b0
	ldrb r1, [r4, #10]	@ 000d15b0 a17a
.org 0xd15b2
	movs r0, #2	@ 000d15b2 0220
.org 0xd15b4
	orrs r0, r1	@ 000d15b4 0843
.org 0xd15b6
	movs r2, #0	@ 000d15b6 0022
.org 0xd15b8
	movs r1, #239	@ 000d15b8 ef21
.org 0xd15ba
	ands r0, r1	@ 000d15ba 0840
.org 0xd15bc
	strb r0, [r4, #10]	@ 000d15bc a072
.org 0xd15be
	movs r3, #1	@ 000d15be 0123
.org 0xd15c0
	adds r0, r4, #0	@ 000d15c0 201c
.org 0xd15c2
	adds r0, #76	@ 000d15c2 4c30
.org 0xd15c4
	strb r2, [r0, #0]	@ 000d15c4 0270
.org 0xd15c6
	adds r2, r4, #0	@ 000d15c6 221c
.org 0xd15c8
	adds r2, #74	@ 000d15c8 4a32
.org 0xd15ca
	ldrb r1, [r2, #0]	@ 000d15ca 1178
.org 0xd15cc
	movs r0, #17	@ 000d15cc 1120
.org 0xd15ce
	negs r0, r0	@ 000d15ce 4042
.org 0xd15d0
	ands r0, r1	@ 000d15d0 0840
.org 0xd15d2
	strb r0, [r2, #0]	@ 000d15d2 1070
.org 0xd15d4
	ldr r1, [pc, #24]	@ 000d15d4 0649
.org 0xd15d6
	ldrb r0, [r4, #9]	@ 000d15d6 607a
.org 0xd15d8
	lsls r0, r0, #2	@ 000d15d8 8000
.org 0xd15da
	adds r0, r0, r1	@ 000d15da 4018
.org 0xd15dc
	str r3, [r4, #12]	@ 000d15dc e360
.org 0xd15de
	ldr r0, [r0, #0]	@ 000d15de 0068
.org 0xd15e0
	ldr r0, [r0, #4]	@ 000d15e0 4068
.org 0xd15e2
	str r0, [r4, #20]	@ 000d15e2 6061
.org 0xd15e4
	adds r0, r4, #0	@ 000d15e4 201c
.org 0xd15e6
	bl 0xd15f4	@ 000d15e6 00f005f8
.org 0xd15ea
	pop {r4}	@ 000d15ea 10bc
.org 0xd15ec
	pop {r0}	@ 000d15ec 01bc
.org 0xd15ee
	bx r0	@ 000d15ee 0047
