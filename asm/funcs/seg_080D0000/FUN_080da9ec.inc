@ FUN_080da9ec  entry 0x080da9ec  size 92
.thumb
.org 0xda9ec
FUN_080da9ec:
	push {r4, lr}	@ 000da9ec 10b5
.org 0xda9ee
	adds r4, r0, #0	@ 000da9ee 041c
.org 0xda9f0
	ldr r1, [pc, #84]	@ 000da9f0 1549
.org 0xda9f2
	ldrb r0, [r4, #9]	@ 000da9f2 607a
.org 0xda9f4
	lsls r0, r0, #2	@ 000da9f4 8000
.org 0xda9f6
	adds r0, r0, r1	@ 000da9f6 4018
.org 0xda9f8
	movs r1, #1	@ 000da9f8 0121
.org 0xda9fa
	str r1, [r4, #12]	@ 000da9fa e160
.org 0xda9fc
	ldr r0, [r0, #0]	@ 000da9fc 0068
.org 0xda9fe
	ldr r0, [r0, #4]	@ 000da9fe 4068
.org 0xdaa00
	str r0, [r4, #20]	@ 000daa00 6061
.org 0xdaa02
	ldrb r1, [r4, #10]	@ 000daa02 a17a
.org 0xdaa04
	movs r0, #1	@ 000daa04 0120
.org 0xdaa06
	orrs r0, r1	@ 000daa06 0843
.org 0xdaa08
	movs r1, #2	@ 000daa08 0221
.org 0xdaa0a
	orrs r0, r1	@ 000daa0a 0843
.org 0xdaa0c
	strb r0, [r4, #10]	@ 000daa0c a072
.org 0xdaa0e
	adds r0, r4, #0	@ 000daa0e 201c
.org 0xdaa10
	bl 0x1cc9c	@ 000daa10 42f744f9
.org 0xdaa14
	movs r2, #0	@ 000daa14 0022
.org 0xdaa16
	ldrb r1, [r4, #10]	@ 000daa16 a17a
.org 0xdaa18
	movs r0, #239	@ 000daa18 ef20
.org 0xdaa1a
	ands r0, r1	@ 000daa1a 0840
.org 0xdaa1c
	strb r0, [r4, #10]	@ 000daa1c a072
.org 0xdaa1e
	adds r0, r4, #0	@ 000daa1e 201c
.org 0xdaa20
	adds r0, #76	@ 000daa20 4c30
.org 0xdaa22
	strb r2, [r0, #0]	@ 000daa22 0270
.org 0xdaa24
	adds r2, r4, #0	@ 000daa24 221c
.org 0xdaa26
	adds r2, #74	@ 000daa26 4a32
.org 0xdaa28
	ldrb r1, [r2, #0]	@ 000daa28 1178
.org 0xdaa2a
	movs r0, #17	@ 000daa2a 1120
.org 0xdaa2c
	negs r0, r0	@ 000daa2c 4042
.org 0xdaa2e
	ands r0, r1	@ 000daa2e 0840
.org 0xdaa30
	strb r0, [r2, #0]	@ 000daa30 1070
.org 0xdaa32
	movs r1, #162	@ 000daa32 a221
.org 0xdaa34
	lsls r1, r1, #7	@ 000daa34 c901
.org 0xdaa36
	adds r0, r4, #0	@ 000daa36 201c
.org 0xdaa38
	bl 0x1cf00	@ 000daa38 42f762fa
.org 0xdaa3c
	adds r0, r4, #0	@ 000daa3c 201c
.org 0xdaa3e
	bl 0xdaa4c	@ 000daa3e 00f005f8
.org 0xdaa42
	pop {r4}	@ 000daa42 10bc
.org 0xdaa44
	pop {r0}	@ 000daa44 01bc
.org 0xdaa46
	bx r0	@ 000daa46 0047
