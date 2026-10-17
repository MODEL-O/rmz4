@ FUN_08086db8  entry 0x08086db8  size 44
.thumb
.org 0x86db8
FUN_08086db8:
	adds r2, r0, #0	@ 00086db8 021c
.org 0x86dba
	adds r0, #140	@ 00086dba 8c30
.org 0x86dbc
	movs r1, #0	@ 00086dbc 0021
.org 0x86dbe
	str r1, [r0, #0]	@ 00086dbe 0160
.org 0x86dc0
	adds r0, #4	@ 00086dc0 0430
.org 0x86dc2
	str r1, [r0, #0]	@ 00086dc2 0160
.org 0x86dc4
	adds r0, #4	@ 00086dc4 0430
.org 0x86dc6
	strb r1, [r0, #0]	@ 00086dc6 0170
.org 0x86dc8
	ldrb r1, [r2, #10]	@ 00086dc8 917a
.org 0x86dca
	movs r0, #251	@ 00086dca fb20
.org 0x86dcc
	ands r0, r1	@ 00086dcc 0840
.org 0x86dce
	strb r0, [r2, #10]	@ 00086dce 9072
.org 0x86dd0
	ldr r1, [pc, #16]	@ 00086dd0 0449
.org 0x86dd2
	ldrb r0, [r2, #9]	@ 00086dd2 507a
.org 0x86dd4
	lsls r0, r0, #2	@ 00086dd4 8000
.org 0x86dd6
	adds r0, r0, r1	@ 00086dd6 4018
.org 0x86dd8
	movs r1, #4	@ 00086dd8 0421
.org 0x86dda
	str r1, [r2, #12]	@ 00086dda d160
.org 0x86ddc
	ldr r0, [r0, #0]	@ 00086ddc 0068
.org 0x86dde
	ldr r0, [r0, #16]	@ 00086dde 0069
.org 0x86de0
	str r0, [r2, #20]	@ 00086de0 5061
.org 0x86de2
	bx lr	@ 00086de2 7047
