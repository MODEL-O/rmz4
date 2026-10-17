@ FUN_080dce08  entry 0x080dce08  size 94
.thumb
.org 0xdce08
FUN_080dce08:
	push {r4, lr}	@ 000dce08 10b5
.org 0xdce0a
	adds r4, r0, #0	@ 000dce0a 041c
.org 0xdce0c
	bl 0x1cc9c	@ 000dce0c 3ff746ff
.org 0xdce10
	ldrb r1, [r4, #10]	@ 000dce10 a17a
.org 0xdce12
	movs r0, #1	@ 000dce12 0120
.org 0xdce14
	orrs r0, r1	@ 000dce14 0843
.org 0xdce16
	movs r1, #2	@ 000dce16 0221
.org 0xdce18
	orrs r0, r1	@ 000dce18 0843
.org 0xdce1a
	strb r0, [r4, #10]	@ 000dce1a a072
.org 0xdce1c
	ldr r1, [pc, #72]	@ 000dce1c 1249
.org 0xdce1e
	adds r0, r4, #0	@ 000dce1e 201c
.org 0xdce20
	bl 0x1cf00	@ 000dce20 40f76ef8
.org 0xdce24
	adds r0, r4, #0	@ 000dce24 201c
.org 0xdce26
	bl 0x1cff0	@ 000dce26 40f7e3f8
.org 0xdce2a
	movs r2, #0	@ 000dce2a 0022
.org 0xdce2c
	ldrb r1, [r4, #10]	@ 000dce2c a17a
.org 0xdce2e
	movs r0, #239	@ 000dce2e ef20
.org 0xdce30
	ands r0, r1	@ 000dce30 0840
.org 0xdce32
	strb r0, [r4, #10]	@ 000dce32 a072
.org 0xdce34
	movs r3, #1	@ 000dce34 0123
.org 0xdce36
	adds r0, r4, #0	@ 000dce36 201c
.org 0xdce38
	adds r0, #76	@ 000dce38 4c30
.org 0xdce3a
	strb r2, [r0, #0]	@ 000dce3a 0270
.org 0xdce3c
	adds r2, r4, #0	@ 000dce3c 221c
.org 0xdce3e
	adds r2, #74	@ 000dce3e 4a32
.org 0xdce40
	ldrb r1, [r2, #0]	@ 000dce40 1178
.org 0xdce42
	movs r0, #17	@ 000dce42 1120
.org 0xdce44
	negs r0, r0	@ 000dce44 4042
.org 0xdce46
	ands r0, r1	@ 000dce46 0840
.org 0xdce48
	strb r0, [r2, #0]	@ 000dce48 1070
.org 0xdce4a
	ldr r1, [pc, #32]	@ 000dce4a 0849
.org 0xdce4c
	ldrb r0, [r4, #9]	@ 000dce4c 607a
.org 0xdce4e
	lsls r0, r0, #2	@ 000dce4e 8000
.org 0xdce50
	adds r0, r0, r1	@ 000dce50 4018
.org 0xdce52
	str r3, [r4, #12]	@ 000dce52 e360
.org 0xdce54
	ldr r0, [r0, #0]	@ 000dce54 0068
.org 0xdce56
	ldr r0, [r0, #4]	@ 000dce56 4068
.org 0xdce58
	str r0, [r4, #20]	@ 000dce58 6061
.org 0xdce5a
	adds r0, r4, #0	@ 000dce5a 201c
.org 0xdce5c
	bl 0xdcdd8	@ 000dce5c fff7bcff
.org 0xdce60
	pop {r4}	@ 000dce60 10bc
.org 0xdce62
	pop {r0}	@ 000dce62 01bc
.org 0xdce64
	bx r0	@ 000dce64 0047
