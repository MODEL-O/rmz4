@ FUN_080dce70  entry 0x080dce70  size 94
.thumb
.org 0xdce70
FUN_080dce70:
	push {r4, lr}	@ 000dce70 10b5
.org 0xdce72
	adds r4, r0, #0	@ 000dce72 041c
.org 0xdce74
	bl 0x1cc9c	@ 000dce74 3ff712ff
.org 0xdce78
	ldrb r1, [r4, #10]	@ 000dce78 a17a
.org 0xdce7a
	movs r0, #1	@ 000dce7a 0120
.org 0xdce7c
	orrs r0, r1	@ 000dce7c 0843
.org 0xdce7e
	movs r1, #2	@ 000dce7e 0221
.org 0xdce80
	orrs r0, r1	@ 000dce80 0843
.org 0xdce82
	strb r0, [r4, #10]	@ 000dce82 a072
.org 0xdce84
	ldr r1, [pc, #72]	@ 000dce84 1249
.org 0xdce86
	adds r0, r4, #0	@ 000dce86 201c
.org 0xdce88
	bl 0x1cf00	@ 000dce88 40f73af8
.org 0xdce8c
	adds r0, r4, #0	@ 000dce8c 201c
.org 0xdce8e
	bl 0x1cff0	@ 000dce8e 40f7aff8
.org 0xdce92
	movs r2, #0	@ 000dce92 0022
.org 0xdce94
	ldrb r1, [r4, #10]	@ 000dce94 a17a
.org 0xdce96
	movs r0, #239	@ 000dce96 ef20
.org 0xdce98
	ands r0, r1	@ 000dce98 0840
.org 0xdce9a
	strb r0, [r4, #10]	@ 000dce9a a072
.org 0xdce9c
	movs r3, #1	@ 000dce9c 0123
.org 0xdce9e
	adds r0, r4, #0	@ 000dce9e 201c
.org 0xdcea0
	adds r0, #76	@ 000dcea0 4c30
.org 0xdcea2
	strb r2, [r0, #0]	@ 000dcea2 0270
.org 0xdcea4
	adds r2, r4, #0	@ 000dcea4 221c
.org 0xdcea6
	adds r2, #74	@ 000dcea6 4a32
.org 0xdcea8
	ldrb r1, [r2, #0]	@ 000dcea8 1178
.org 0xdceaa
	movs r0, #17	@ 000dceaa 1120
.org 0xdceac
	negs r0, r0	@ 000dceac 4042
.org 0xdceae
	ands r0, r1	@ 000dceae 0840
.org 0xdceb0
	strb r0, [r2, #0]	@ 000dceb0 1070
.org 0xdceb2
	ldr r1, [pc, #32]	@ 000dceb2 0849
.org 0xdceb4
	ldrb r0, [r4, #9]	@ 000dceb4 607a
.org 0xdceb6
	lsls r0, r0, #2	@ 000dceb6 8000
.org 0xdceb8
	adds r0, r0, r1	@ 000dceb8 4018
.org 0xdceba
	str r3, [r4, #12]	@ 000dceba e360
.org 0xdcebc
	ldr r0, [r0, #0]	@ 000dcebc 0068
.org 0xdcebe
	ldr r0, [r0, #4]	@ 000dcebe 4068
.org 0xdcec0
	str r0, [r4, #20]	@ 000dcec0 6061
.org 0xdcec2
	adds r0, r4, #0	@ 000dcec2 201c
.org 0xdcec4
	bl 0xdcdd8	@ 000dcec4 fff788ff
.org 0xdcec8
	pop {r4}	@ 000dcec8 10bc
.org 0xdceca
	pop {r0}	@ 000dceca 01bc
.org 0xdcecc
	bx r0	@ 000dcecc 0047
