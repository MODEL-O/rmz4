@ FUN_080dbcf4  entry 0x080dbcf4  size 102
.thumb
.org 0xdbcf4
FUN_080dbcf4:
	push {r4, lr}	@ 000dbcf4 10b5
.org 0xdbcf6
	adds r4, r0, #0	@ 000dbcf6 041c
.org 0xdbcf8
	ldrb r2, [r4, #17]	@ 000dbcf8 627c
.org 0xdbcfa
	ldr r1, [pc, #96]	@ 000dbcfa 1849
.org 0xdbcfc
	ldrb r0, [r4, #9]	@ 000dbcfc 607a
.org 0xdbcfe
	lsls r0, r0, #2	@ 000dbcfe 8000
.org 0xdbd00
	adds r0, r0, r1	@ 000dbd00 4018
.org 0xdbd02
	movs r1, #1	@ 000dbd02 0121
.org 0xdbd04
	str r1, [r4, #12]	@ 000dbd04 e160
.org 0xdbd06
	ldr r0, [r0, #0]	@ 000dbd06 0068
.org 0xdbd08
	ldr r0, [r0, #4]	@ 000dbd08 4068
.org 0xdbd0a
	str r0, [r4, #20]	@ 000dbd0a 6061
.org 0xdbd0c
	ldrb r1, [r4, #10]	@ 000dbd0c a17a
.org 0xdbd0e
	movs r0, #1	@ 000dbd0e 0120
.org 0xdbd10
	orrs r0, r1	@ 000dbd10 0843
.org 0xdbd12
	movs r1, #2	@ 000dbd12 0221
.org 0xdbd14
	orrs r0, r1	@ 000dbd14 0843
.org 0xdbd16
	strb r0, [r4, #10]	@ 000dbd16 a072
.org 0xdbd18
	adds r0, r4, #0	@ 000dbd18 201c
.org 0xdbd1a
	adds r0, #116	@ 000dbd1a 7430
.org 0xdbd1c
	strb r2, [r0, #0]	@ 000dbd1c 0270
.org 0xdbd1e
	movs r0, #14	@ 000dbd1e 0e20
.org 0xdbd20
	strb r0, [r4, #18]	@ 000dbd20 a074
.org 0xdbd22
	adds r0, r4, #0	@ 000dbd22 201c
.org 0xdbd24
	bl 0x1cc9c	@ 000dbd24 40f7baff
.org 0xdbd28
	movs r2, #0	@ 000dbd28 0022
.org 0xdbd2a
	ldrb r1, [r4, #10]	@ 000dbd2a a17a
.org 0xdbd2c
	movs r0, #239	@ 000dbd2c ef20
.org 0xdbd2e
	ands r0, r1	@ 000dbd2e 0840
.org 0xdbd30
	strb r0, [r4, #10]	@ 000dbd30 a072
.org 0xdbd32
	adds r0, r4, #0	@ 000dbd32 201c
.org 0xdbd34
	adds r0, #76	@ 000dbd34 4c30
.org 0xdbd36
	strb r2, [r0, #0]	@ 000dbd36 0270
.org 0xdbd38
	adds r2, r4, #0	@ 000dbd38 221c
.org 0xdbd3a
	adds r2, #74	@ 000dbd3a 4a32
.org 0xdbd3c
	ldrb r1, [r2, #0]	@ 000dbd3c 1178
.org 0xdbd3e
	movs r0, #17	@ 000dbd3e 1120
.org 0xdbd40
	negs r0, r0	@ 000dbd40 4042
.org 0xdbd42
	ands r0, r1	@ 000dbd42 0840
.org 0xdbd44
	strb r0, [r2, #0]	@ 000dbd44 1070
.org 0xdbd46
	adds r0, r4, #0	@ 000dbd46 201c
.org 0xdbd48
	movs r1, #3	@ 000dbd48 0321
.org 0xdbd4a
	bl 0x1cf00	@ 000dbd4a 41f7d9f8
.org 0xdbd4e
	adds r0, r4, #0	@ 000dbd4e 201c
.org 0xdbd50
	bl 0xdbd60	@ 000dbd50 00f006f8
.org 0xdbd54
	pop {r4}	@ 000dbd54 10bc
.org 0xdbd56
	pop {r0}	@ 000dbd56 01bc
.org 0xdbd58
	bx r0	@ 000dbd58 0047
