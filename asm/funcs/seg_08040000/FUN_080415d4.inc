@ FUN_080415d4  entry 0x080415d4  size 48
.thumb
.org 0x415d4
FUN_080415d4:
	adds r2, r0, #0	@ 000415d4 021c
.org 0x415d6
	adds r0, #140	@ 000415d6 8c30
.org 0x415d8
	movs r1, #0	@ 000415d8 0021
.org 0x415da
	str r1, [r0, #0]	@ 000415da 0160
.org 0x415dc
	adds r0, #4	@ 000415dc 0430
.org 0x415de
	str r1, [r0, #0]	@ 000415de 0160
.org 0x415e0
	adds r0, #4	@ 000415e0 0430
.org 0x415e2
	strb r1, [r0, #0]	@ 000415e2 0170
.org 0x415e4
	ldrb r1, [r2, #10]	@ 000415e4 917a
.org 0x415e6
	movs r0, #251	@ 000415e6 fb20
.org 0x415e8
	ands r0, r1	@ 000415e8 0840
.org 0x415ea
	movs r1, #254	@ 000415ea fe21
.org 0x415ec
	ands r0, r1	@ 000415ec 0840
.org 0x415ee
	strb r0, [r2, #10]	@ 000415ee 9072
.org 0x415f0
	ldr r1, [pc, #16]	@ 000415f0 0449
.org 0x415f2
	ldrb r0, [r2, #9]	@ 000415f2 507a
.org 0x415f4
	lsls r0, r0, #2	@ 000415f4 8000
.org 0x415f6
	adds r0, r0, r1	@ 000415f6 4018
.org 0x415f8
	movs r1, #4	@ 000415f8 0421
.org 0x415fa
	str r1, [r2, #12]	@ 000415fa d160
.org 0x415fc
	ldr r0, [r0, #0]	@ 000415fc 0068
.org 0x415fe
	ldr r0, [r0, #16]	@ 000415fe 0069
.org 0x41600
	str r0, [r2, #20]	@ 00041600 5061
.org 0x41602
	bx lr	@ 00041602 7047
