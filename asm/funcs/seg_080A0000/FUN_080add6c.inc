@ FUN_080add6c  entry 0x080add6c  size 152
.thumb
.org 0xadd6c
FUN_080add6c:
	push {r4, lr}	@ 000add6c 10b5
.org 0xadd6e
	adds r4, r0, #0	@ 000add6e 041c
.org 0xadd70
	bl 0x1ce54	@ 000add70 6ff770f8
.org 0xadd74
	ldrb r1, [r4, #10]	@ 000add74 a17a
.org 0xadd76
	movs r0, #1	@ 000add76 0120
.org 0xadd78
	orrs r0, r1	@ 000add78 0843
.org 0xadd7a
	movs r1, #2	@ 000add7a 0221
.org 0xadd7c
	orrs r0, r1	@ 000add7c 0843
.org 0xadd7e
	strb r0, [r4, #10]	@ 000add7e a072
.org 0xadd80
	ldr r1, [pc, #128]	@ 000add80 2049
.org 0xadd82
	adds r0, r4, #0	@ 000add82 201c
.org 0xadd84
	bl 0x1cf00	@ 000add84 6ff7bcf8
.org 0xadd88
	adds r0, r4, #0	@ 000add88 201c
.org 0xadd8a
	bl 0x1cff0	@ 000add8a 6ff731f9
.org 0xadd8e
	movs r2, #0	@ 000add8e 0022
.org 0xadd90
	ldrb r1, [r4, #10]	@ 000add90 a17a
.org 0xadd92
	movs r0, #239	@ 000add92 ef20
.org 0xadd94
	ands r0, r1	@ 000add94 0840
.org 0xadd96
	strb r0, [r4, #10]	@ 000add96 a072
.org 0xadd98
	movs r3, #1	@ 000add98 0123
.org 0xadd9a
	adds r0, r4, #0	@ 000add9a 201c
.org 0xadd9c
	adds r0, #76	@ 000add9c 4c30
.org 0xadd9e
	strb r2, [r0, #0]	@ 000add9e 0270
.org 0xadda0
	adds r2, r4, #0	@ 000adda0 221c
.org 0xadda2
	adds r2, #74	@ 000adda2 4a32
.org 0xadda4
	ldrb r1, [r2, #0]	@ 000adda4 1178
.org 0xadda6
	movs r0, #17	@ 000adda6 1120
.org 0xadda8
	negs r0, r0	@ 000adda8 4042
.org 0xaddaa
	ands r0, r1	@ 000addaa 0840
.org 0xaddac
	strb r0, [r2, #0]	@ 000addac 1070
.org 0xaddae
	ldr r1, [pc, #88]	@ 000addae 1649
.org 0xaddb0
	adds r0, r4, #0	@ 000addb0 201c
.org 0xaddb2
	adds r0, #116	@ 000addb2 7430
.org 0xaddb4
	str r1, [r0, #36]	@ 000addb4 4162
.org 0xaddb6
	movs r0, #32	@ 000addb6 2020
.org 0xaddb8
	negs r0, r0	@ 000addb8 4042
.org 0xaddba
	str r0, [r4, #92]	@ 000addba e065
.org 0xaddbc
	adds r0, #16	@ 000addbc 1030
.org 0xaddbe
	str r0, [r4, #100]	@ 000addbe 6066
.org 0xaddc0
	movs r0, #160	@ 000addc0 a020
.org 0xaddc2
	lsls r0, r0, #2	@ 000addc2 8000
.org 0xaddc4
	str r0, [r4, #96]	@ 000addc4 2066
.org 0xaddc6
	movs r0, #64	@ 000addc6 4020
.org 0xaddc8
	negs r0, r0	@ 000addc8 4042
.org 0xaddca
	str r0, [r4, #104]	@ 000addca a066
.org 0xaddcc
	adds r0, r4, #0	@ 000addcc 201c
.org 0xaddce
	adds r0, #80	@ 000addce 5030
.org 0xaddd0
	movs r1, #128	@ 000addd0 8021
.org 0xaddd2
	strh r1, [r0, #0]	@ 000addd2 0180
.org 0xaddd4
	adds r0, #2	@ 000addd4 0230
.org 0xaddd6
	strh r1, [r0, #0]	@ 000addd6 0180
.org 0xaddd8
	strb r1, [r4, #18]	@ 000addd8 a174
.org 0xaddda
	adds r2, #114	@ 000addda 7232
.org 0xadddc
	movs r0, #150	@ 000adddc 9620
.org 0xaddde
	lsls r0, r0, #2	@ 000addde 8000
.org 0xadde0
	strh r0, [r2, #0]	@ 000adde0 1080
.org 0xadde2
	adds r0, r4, #0	@ 000adde2 201c
.org 0xadde4
	adds r0, #190	@ 000adde4 be30
.org 0xadde6
	strh r1, [r0, #0]	@ 000adde6 0180
.org 0xadde8
	ldr r1, [pc, #32]	@ 000adde8 0849
.org 0xaddea
	ldrb r0, [r4, #9]	@ 000addea 607a
.org 0xaddec
	lsls r0, r0, #2	@ 000addec 8000
.org 0xaddee
	adds r0, r0, r1	@ 000addee 4018
.org 0xaddf0
	str r3, [r4, #12]	@ 000addf0 e360
.org 0xaddf2
	ldr r0, [r0, #0]	@ 000addf2 0068
.org 0xaddf4
	ldr r0, [r0, #4]	@ 000addf4 4068
.org 0xaddf6
	str r0, [r4, #20]	@ 000addf6 6061
.org 0xaddf8
	adds r0, r4, #0	@ 000addf8 201c
.org 0xaddfa
	bl 0xade10	@ 000addfa 00f009f8
.org 0xaddfe
	pop {r4}	@ 000addfe 10bc
.org 0xade00
	pop {r0}	@ 000ade00 01bc
.org 0xade02
	bx r0	@ 000ade02 0047
