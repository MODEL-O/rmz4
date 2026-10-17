@ FUN_08047198  entry 0x08047198  size 82
.thumb
.org 0x47198
FUN_08047198:
	push {r4, r5, lr}	@ 00047198 30b5
.org 0x4719a
	adds r4, r0, #0	@ 0004719a 041c
.org 0x4719c
	ldr r1, [pc, #76]	@ 0004719c 1349
.org 0x4719e
	ldrb r0, [r4, #9]	@ 0004719e 607a
.org 0x471a0
	lsls r0, r0, #2	@ 000471a0 8000
.org 0x471a2
	adds r0, r0, r1	@ 000471a2 4018
.org 0x471a4
	movs r1, #1	@ 000471a4 0121
.org 0x471a6
	str r1, [r4, #12]	@ 000471a6 e160
.org 0x471a8
	ldr r0, [r0, #0]	@ 000471a8 0068
.org 0x471aa
	ldr r0, [r0, #4]	@ 000471aa 4068
.org 0x471ac
	str r0, [r4, #20]	@ 000471ac 6061
.org 0x471ae
	adds r0, r4, #0	@ 000471ae 201c
.org 0x471b0
	bl 0x1cc9c	@ 000471b0 d5f774fd
.org 0x471b4
	adds r0, r4, #0	@ 000471b4 201c
.org 0x471b6
	bl 0x1ceec	@ 000471b6 d5f799fe
.org 0x471ba
	ldrb r1, [r4, #10]	@ 000471ba a17a
.org 0x471bc
	movs r0, #254	@ 000471bc fe20
.org 0x471be
	ands r0, r1	@ 000471be 0840
.org 0x471c0
	movs r5, #0	@ 000471c0 0025
.org 0x471c2
	movs r1, #2	@ 000471c2 0221
.org 0x471c4
	orrs r0, r1	@ 000471c4 0843
.org 0x471c6
	strb r0, [r4, #10]	@ 000471c6 a072
.org 0x471c8
	ldr r1, [pc, #36]	@ 000471c8 0949
.org 0x471ca
	adds r0, r4, #0	@ 000471ca 201c
.org 0x471cc
	bl 0x1cf00	@ 000471cc d5f798fe
.org 0x471d0
	movs r0, #8	@ 000471d0 0820
.org 0x471d2
	strb r0, [r4, #18]	@ 000471d2 a074
.org 0x471d4
	movs r0, #56	@ 000471d4 3820
.org 0x471d6
	strb r0, [r4, #19]	@ 000471d6 e074
.org 0x471d8
	adds r0, r4, #0	@ 000471d8 201c
.org 0x471da
	adds r0, #189	@ 000471da bd30
.org 0x471dc
	strb r5, [r0, #0]	@ 000471dc 0570
.org 0x471de
	adds r0, r4, #0	@ 000471de 201c
.org 0x471e0
	bl 0x47108	@ 000471e0 fff792ff
.org 0x471e4
	pop {r4, r5}	@ 000471e4 30bc
.org 0x471e6
	pop {r0}	@ 000471e6 01bc
.org 0x471e8
	bx r0	@ 000471e8 0047
