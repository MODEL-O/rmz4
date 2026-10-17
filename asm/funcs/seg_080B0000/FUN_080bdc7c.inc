@ FUN_080bdc7c  entry 0x080bdc7c  size 198
.thumb
.org 0xbdc7c
FUN_080bdc7c:
	push {r4, r5, r6, lr}	@ 000bdc7c 70b5
.org 0xbdc7e
	adds r6, r0, #0	@ 000bdc7e 061c
.org 0xbdc80
	ldrb r0, [r6, #17]	@ 000bdc80 707c
.org 0xbdc82
	adds r2, r0, #0	@ 000bdc82 021c
.org 0xbdc84
	ldr r1, [pc, #188]	@ 000bdc84 2f49
.org 0xbdc86
	ldrb r0, [r6, #9]	@ 000bdc86 707a
.org 0xbdc88
	lsls r0, r0, #2	@ 000bdc88 8000
.org 0xbdc8a
	adds r0, r0, r1	@ 000bdc8a 4018
.org 0xbdc8c
	movs r1, #1	@ 000bdc8c 0121
.org 0xbdc8e
	str r1, [r6, #12]	@ 000bdc8e f160
.org 0xbdc90
	ldr r0, [r0, #0]	@ 000bdc90 0068
.org 0xbdc92
	ldr r0, [r0, #4]	@ 000bdc92 4068
.org 0xbdc94
	str r0, [r6, #20]	@ 000bdc94 7061
.org 0xbdc96
	ldrb r1, [r6, #10]	@ 000bdc96 b17a
.org 0xbdc98
	movs r0, #1	@ 000bdc98 0120
.org 0xbdc9a
	movs r4, #0	@ 000bdc9a 0024
.org 0xbdc9c
	orrs r0, r1	@ 000bdc9c 0843
.org 0xbdc9e
	movs r1, #2	@ 000bdc9e 0221
.org 0xbdca0
	orrs r0, r1	@ 000bdca0 0843
.org 0xbdca2
	strb r0, [r6, #10]	@ 000bdca2 b072
.org 0xbdca4
	ldr r3, [pc, #160]	@ 000bdca4 284b
.org 0xbdca6
	adds r0, r2, #0	@ 000bdca6 101c
.org 0xbdca8
	adds r0, #64	@ 000bdca8 4030
.org 0xbdcaa
	lsls r0, r0, #24	@ 000bdcaa 0006
.org 0xbdcac
	lsrs r0, r0, #23	@ 000bdcac c00d
.org 0xbdcae
	adds r0, r0, r3	@ 000bdcae c018
.org 0xbdcb0
	movs r5, #0	@ 000bdcb0 0025
.org 0xbdcb2
	ldrsh r1, [r0, r5]	@ 000bdcb2 415f
.org 0xbdcb4
	lsls r0, r1, #1	@ 000bdcb4 4800
.org 0xbdcb6
	adds r0, r0, r1	@ 000bdcb6 4018
.org 0xbdcb8
	lsls r0, r0, #2	@ 000bdcb8 8000
.org 0xbdcba
	subs r0, r0, r1	@ 000bdcba 401a
.org 0xbdcbc
	lsls r0, r0, #6	@ 000bdcbc 8001
.org 0xbdcbe
	cmp r0, #0	@ 000bdcbe 0028
.org 0xbdcc0
	bge.n 0xbdcc4	@ 000bdcc0 00da
.org 0xbdcc2
	adds r0, #255	@ 000bdcc2 ff30
.org 0xbdcc4
	asrs r0, r0, #8	@ 000bdcc4 0012
.org 0xbdcc6
	str r0, [r6, #92]	@ 000bdcc6 f065
.org 0xbdcc8
	lsls r0, r2, #1	@ 000bdcc8 5000
.org 0xbdcca
	adds r0, r0, r3	@ 000bdcca c018
.org 0xbdccc
	movs r2, #0	@ 000bdccc 0022
.org 0xbdcce
	ldrsh r1, [r0, r2]	@ 000bdcce 815e
.org 0xbdcd0
	lsls r0, r1, #1	@ 000bdcd0 4800
.org 0xbdcd2
	adds r0, r0, r1	@ 000bdcd2 4018
.org 0xbdcd4
	lsls r0, r0, #2	@ 000bdcd4 8000
.org 0xbdcd6
	subs r0, r0, r1	@ 000bdcd6 401a
.org 0xbdcd8
	lsls r0, r0, #6	@ 000bdcd8 8001
.org 0xbdcda
	cmp r0, #0	@ 000bdcda 0028
.org 0xbdcdc
	bge.n 0xbdce0	@ 000bdcdc 00da
.org 0xbdcde
	adds r0, #255	@ 000bdcde ff30
.org 0xbdce0
	asrs r0, r0, #8	@ 000bdce0 0012
.org 0xbdce2
	str r0, [r6, #96]	@ 000bdce2 3066
.org 0xbdce4
	adds r1, r6, #0	@ 000bdce4 311c
.org 0xbdce6
	adds r1, #180	@ 000bdce6 b431
.org 0xbdce8
	movs r0, #48	@ 000bdce8 3020
.org 0xbdcea
	str r0, [r1, #0]	@ 000bdcea 0860
.org 0xbdcec
	adds r0, r6, #0	@ 000bdcec 301c
.org 0xbdcee
	bl 0x1cc9c	@ 000bdcee 5ef7d5ff
.org 0xbdcf2
	movs r5, #0	@ 000bdcf2 0025
.org 0xbdcf4
	ldrb r1, [r6, #10]	@ 000bdcf4 b17a
.org 0xbdcf6
	movs r0, #239	@ 000bdcf6 ef20
.org 0xbdcf8
	ands r0, r1	@ 000bdcf8 0840
.org 0xbdcfa
	strb r0, [r6, #10]	@ 000bdcfa b072
.org 0xbdcfc
	adds r0, r6, #0	@ 000bdcfc 301c
.org 0xbdcfe
	adds r0, #76	@ 000bdcfe 4c30
.org 0xbdd00
	strb r5, [r0, #0]	@ 000bdd00 0570
.org 0xbdd02
	adds r2, r6, #0	@ 000bdd02 321c
.org 0xbdd04
	adds r2, #74	@ 000bdd04 4a32
.org 0xbdd06
	ldrb r1, [r2, #0]	@ 000bdd06 1178
.org 0xbdd08
	movs r0, #17	@ 000bdd08 1120
.org 0xbdd0a
	negs r0, r0	@ 000bdd0a 4042
.org 0xbdd0c
	ands r0, r1	@ 000bdd0c 0840
.org 0xbdd0e
	strb r0, [r2, #0]	@ 000bdd0e 1070
.org 0xbdd10
	ldr r1, [pc, #56]	@ 000bdd10 0e49
.org 0xbdd12
	adds r0, r6, #0	@ 000bdd12 301c
.org 0xbdd14
	bl 0x1cf00	@ 000bdd14 5ff7f4f8
.org 0xbdd18
	ldrb r0, [r6, #10]	@ 000bdd18 b07a
.org 0xbdd1a
	movs r1, #4	@ 000bdd1a 0421
.org 0xbdd1c
	orrs r0, r1	@ 000bdd1c 0843
.org 0xbdd1e
	strb r0, [r6, #10]	@ 000bdd1e b072
.org 0xbdd20
	adds r4, r6, #0	@ 000bdd20 341c
.org 0xbdd22
	adds r4, #116	@ 000bdd22 7434
.org 0xbdd24
	ldr r1, [pc, #40]	@ 000bdd24 0a49
.org 0xbdd26
	adds r2, r6, #0	@ 000bdd26 321c
.org 0xbdd28
	adds r2, #84	@ 000bdd28 5432
.org 0xbdd2a
	adds r0, r4, #0	@ 000bdd2a 201c
.org 0xbdd2c
	movs r3, #64	@ 000bdd2c 4023
.org 0xbdd2e
	bl 0x5760	@ 000bdd2e 47f717fd
.org 0xbdd32
	str r6, [r4, #44]	@ 000bdd32 e662
.org 0xbdd34
	str r5, [r4, #36]	@ 000bdd34 6562
.org 0xbdd36
	adds r0, r6, #0	@ 000bdd36 301c
.org 0xbdd38
	bl 0xbde3c	@ 000bdd38 00f080f8
.org 0xbdd3c
	pop {r4, r5, r6}	@ 000bdd3c 70bc
.org 0xbdd3e
	pop {r0}	@ 000bdd3e 01bc
.org 0xbdd40
	bx r0	@ 000bdd40 0047
