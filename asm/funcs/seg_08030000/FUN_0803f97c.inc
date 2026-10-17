@ FUN_0803f97c  entry 0x0803f97c  size 48
.thumb
.org 0x3f97c
FUN_0803f97c:
	adds r2, r0, #0	@ 0003f97c 021c
.org 0x3f97e
	adds r0, #140	@ 0003f97e 8c30
.org 0x3f980
	movs r1, #0	@ 0003f980 0021
.org 0x3f982
	str r1, [r0, #0]	@ 0003f982 0160
.org 0x3f984
	adds r0, #4	@ 0003f984 0430
.org 0x3f986
	str r1, [r0, #0]	@ 0003f986 0160
.org 0x3f988
	adds r0, #4	@ 0003f988 0430
.org 0x3f98a
	strb r1, [r0, #0]	@ 0003f98a 0170
.org 0x3f98c
	ldrb r1, [r2, #10]	@ 0003f98c 917a
.org 0x3f98e
	movs r0, #251	@ 0003f98e fb20
.org 0x3f990
	ands r0, r1	@ 0003f990 0840
.org 0x3f992
	movs r1, #254	@ 0003f992 fe21
.org 0x3f994
	ands r0, r1	@ 0003f994 0840
.org 0x3f996
	strb r0, [r2, #10]	@ 0003f996 9072
.org 0x3f998
	ldr r1, [pc, #16]	@ 0003f998 0449
.org 0x3f99a
	ldrb r0, [r2, #9]	@ 0003f99a 507a
.org 0x3f99c
	lsls r0, r0, #2	@ 0003f99c 8000
.org 0x3f99e
	adds r0, r0, r1	@ 0003f99e 4018
.org 0x3f9a0
	movs r1, #4	@ 0003f9a0 0421
.org 0x3f9a2
	str r1, [r2, #12]	@ 0003f9a2 d160
.org 0x3f9a4
	ldr r0, [r0, #0]	@ 0003f9a4 0068
.org 0x3f9a6
	ldr r0, [r0, #16]	@ 0003f9a6 0069
.org 0x3f9a8
	str r0, [r2, #20]	@ 0003f9a8 5061
.org 0x3f9aa
	bx lr	@ 0003f9aa 7047
