@ FUN_080cfab8  entry 0x080cfab8  size 106
.thumb
.org 0xcfab8
FUN_080cfab8:
	push {r4, lr}	@ 000cfab8 10b5
.org 0xcfaba
	adds r4, r0, #0	@ 000cfaba 041c
.org 0xcfabc
	ldr r1, [pc, #100]	@ 000cfabc 1949
.org 0xcfabe
	ldrb r0, [r4, #9]	@ 000cfabe 607a
.org 0xcfac0
	lsls r0, r0, #2	@ 000cfac0 8000
.org 0xcfac2
	adds r0, r0, r1	@ 000cfac2 4018
.org 0xcfac4
	movs r1, #1	@ 000cfac4 0121
.org 0xcfac6
	str r1, [r4, #12]	@ 000cfac6 e160
.org 0xcfac8
	ldr r0, [r0, #0]	@ 000cfac8 0068
.org 0xcfaca
	movs r2, #4	@ 000cfaca 0422
.org 0xcfacc
	ldr r0, [r0, #4]	@ 000cfacc 4068
.org 0xcface
	str r0, [r4, #20]	@ 000cface 6061
.org 0xcfad0
	ldrb r1, [r4, #10]	@ 000cfad0 a17a
.org 0xcfad2
	movs r0, #1	@ 000cfad2 0120
.org 0xcfad4
	orrs r0, r1	@ 000cfad4 0843
.org 0xcfad6
	movs r1, #2	@ 000cfad6 0221
.org 0xcfad8
	orrs r0, r1	@ 000cfad8 0843
.org 0xcfada
	strb r0, [r4, #10]	@ 000cfada a072
.org 0xcfadc
	strb r2, [r4, #18]	@ 000cfadc a274
.org 0xcfade
	adds r0, r4, #0	@ 000cfade 201c
.org 0xcfae0
	bl 0x1cc9c	@ 000cfae0 4df7dcf8
.org 0xcfae4
	movs r2, #0	@ 000cfae4 0022
.org 0xcfae6
	ldrb r1, [r4, #10]	@ 000cfae6 a17a
.org 0xcfae8
	movs r0, #239	@ 000cfae8 ef20
.org 0xcfaea
	ands r0, r1	@ 000cfaea 0840
.org 0xcfaec
	strb r0, [r4, #10]	@ 000cfaec a072
.org 0xcfaee
	adds r0, r4, #0	@ 000cfaee 201c
.org 0xcfaf0
	adds r0, #76	@ 000cfaf0 4c30
.org 0xcfaf2
	strb r2, [r0, #0]	@ 000cfaf2 0270
.org 0xcfaf4
	adds r2, r4, #0	@ 000cfaf4 221c
.org 0xcfaf6
	adds r2, #74	@ 000cfaf6 4a32
.org 0xcfaf8
	ldrb r1, [r2, #0]	@ 000cfaf8 1178
.org 0xcfafa
	movs r0, #17	@ 000cfafa 1120
.org 0xcfafc
	negs r0, r0	@ 000cfafc 4042
.org 0xcfafe
	ands r0, r1	@ 000cfafe 0840
.org 0xcfb00
	strb r0, [r2, #0]	@ 000cfb00 1070
.org 0xcfb02
	movs r1, #184	@ 000cfb02 b821
.org 0xcfb04
	lsls r1, r1, #8	@ 000cfb04 0902
.org 0xcfb06
	adds r0, r4, #0	@ 000cfb06 201c
.org 0xcfb08
	bl 0x1cf00	@ 000cfb08 4df7faf9
.org 0xcfb0c
	movs r1, #176	@ 000cfb0c b021
.org 0xcfb0e
	lsls r1, r1, #2	@ 000cfb0e 8900
.org 0xcfb10
	movs r0, #197	@ 000cfb10 c520
.org 0xcfb12
	bl 0x249c	@ 000cfb12 32f7c3fc
.org 0xcfb16
	adds r0, r4, #0	@ 000cfb16 201c
.org 0xcfb18
	bl 0xcfb28	@ 000cfb18 00f006f8
.org 0xcfb1c
	pop {r4}	@ 000cfb1c 10bc
.org 0xcfb1e
	pop {r0}	@ 000cfb1e 01bc
.org 0xcfb20
	bx r0	@ 000cfb20 0047
