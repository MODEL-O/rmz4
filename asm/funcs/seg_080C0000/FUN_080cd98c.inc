@ FUN_080cd98c  entry 0x080cd98c  size 102
.thumb
.org 0xcd98c
FUN_080cd98c:
	push {r4, lr}	@ 000cd98c 10b5
.org 0xcd98e
	adds r4, r0, #0	@ 000cd98e 041c
.org 0xcd990
	bl 0x1cc9c	@ 000cd990 4ff784f9
.org 0xcd994
	ldrb r1, [r4, #10]	@ 000cd994 a17a
.org 0xcd996
	movs r0, #1	@ 000cd996 0120
.org 0xcd998
	orrs r0, r1	@ 000cd998 0843
.org 0xcd99a
	movs r1, #2	@ 000cd99a 0221
.org 0xcd99c
	orrs r0, r1	@ 000cd99c 0843
.org 0xcd99e
	strb r0, [r4, #10]	@ 000cd99e a072
.org 0xcd9a0
	adds r0, r4, #0	@ 000cd9a0 201c
.org 0xcd9a2
	bl 0x1ceec	@ 000cd9a2 4ff7a3fa
.org 0xcd9a6
	ldr r1, [pc, #76]	@ 000cd9a6 1349
.org 0xcd9a8
	adds r0, r4, #0	@ 000cd9a8 201c
.org 0xcd9aa
	bl 0x1cf00	@ 000cd9aa 4ff7a9fa
.org 0xcd9ae
	movs r2, #0	@ 000cd9ae 0022
.org 0xcd9b0
	ldrb r1, [r4, #10]	@ 000cd9b0 a17a
.org 0xcd9b2
	movs r0, #239	@ 000cd9b2 ef20
.org 0xcd9b4
	ands r0, r1	@ 000cd9b4 0840
.org 0xcd9b6
	strb r0, [r4, #10]	@ 000cd9b6 a072
.org 0xcd9b8
	movs r3, #1	@ 000cd9b8 0123
.org 0xcd9ba
	adds r0, r4, #0	@ 000cd9ba 201c
.org 0xcd9bc
	adds r0, #76	@ 000cd9bc 4c30
.org 0xcd9be
	strb r2, [r0, #0]	@ 000cd9be 0270
.org 0xcd9c0
	movs r0, #74	@ 000cd9c0 4a20
.org 0xcd9c2
	adds r0, r0, r4	@ 000cd9c2 0019
.org 0xcd9c4
	mov ip, r0	@ 000cd9c4 8446
.org 0xcd9c6
	ldrb r1, [r0, #0]	@ 000cd9c6 0178
.org 0xcd9c8
	movs r0, #17	@ 000cd9c8 1120
.org 0xcd9ca
	negs r0, r0	@ 000cd9ca 4042
.org 0xcd9cc
	ands r0, r1	@ 000cd9cc 0840
.org 0xcd9ce
	mov r1, ip	@ 000cd9ce 6146
.org 0xcd9d0
	strb r0, [r1, #0]	@ 000cd9d0 0870
.org 0xcd9d2
	str r2, [r4, #100]	@ 000cd9d2 6266
.org 0xcd9d4
	str r2, [r4, #104]	@ 000cd9d4 a266
.org 0xcd9d6
	ldr r1, [pc, #32]	@ 000cd9d6 0849
.org 0xcd9d8
	ldrb r0, [r4, #9]	@ 000cd9d8 607a
.org 0xcd9da
	lsls r0, r0, #2	@ 000cd9da 8000
.org 0xcd9dc
	adds r0, r0, r1	@ 000cd9dc 4018
.org 0xcd9de
	str r3, [r4, #12]	@ 000cd9de e360
.org 0xcd9e0
	ldr r0, [r0, #0]	@ 000cd9e0 0068
.org 0xcd9e2
	ldr r0, [r0, #4]	@ 000cd9e2 4068
.org 0xcd9e4
	str r0, [r4, #20]	@ 000cd9e4 6061
.org 0xcd9e6
	adds r0, r4, #0	@ 000cd9e6 201c
.org 0xcd9e8
	bl 0xcd9fc	@ 000cd9e8 00f008f8
.org 0xcd9ec
	pop {r4}	@ 000cd9ec 10bc
.org 0xcd9ee
	pop {r0}	@ 000cd9ee 01bc
.org 0xcd9f0
	bx r0	@ 000cd9f0 0047
