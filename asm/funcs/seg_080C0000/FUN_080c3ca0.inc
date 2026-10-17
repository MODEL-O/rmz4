@ FUN_080c3ca0  entry 0x080c3ca0  size 134
.thumb
.org 0xc3ca0
FUN_080c3ca0:
	push {r4, r5, r6, lr}	@ 000c3ca0 70b5
.org 0xc3ca2
	mov r6, r8	@ 000c3ca2 4646
.org 0xc3ca4
	push {r6}	@ 000c3ca4 40b4
.org 0xc3ca6
	adds r4, r0, #0	@ 000c3ca6 041c
.org 0xc3ca8
	bl 0x1cc9c	@ 000c3ca8 58f7f8ff
.org 0xc3cac
	ldrb r1, [r4, #10]	@ 000c3cac a17a
.org 0xc3cae
	movs r0, #1	@ 000c3cae 0120
.org 0xc3cb0
	orrs r0, r1	@ 000c3cb0 0843
.org 0xc3cb2
	movs r1, #2	@ 000c3cb2 0221
.org 0xc3cb4
	orrs r0, r1	@ 000c3cb4 0843
.org 0xc3cb6
	strb r0, [r4, #10]	@ 000c3cb6 a072
.org 0xc3cb8
	ldr r1, [pc, #108]	@ 000c3cb8 1b49
.org 0xc3cba
	adds r0, r4, #0	@ 000c3cba 201c
.org 0xc3cbc
	bl 0x1cf00	@ 000c3cbc 59f720f9
.org 0xc3cc0
	adds r0, r4, #0	@ 000c3cc0 201c
.org 0xc3cc2
	bl 0x1cff0	@ 000c3cc2 59f795f9
.org 0xc3cc6
	movs r6, #0	@ 000c3cc6 0026
.org 0xc3cc8
	ldrb r1, [r4, #10]	@ 000c3cc8 a17a
.org 0xc3cca
	movs r0, #239	@ 000c3cca ef20
.org 0xc3ccc
	ands r0, r1	@ 000c3ccc 0840
.org 0xc3cce
	strb r0, [r4, #10]	@ 000c3cce a072
.org 0xc3cd0
	movs r0, #1	@ 000c3cd0 0120
.org 0xc3cd2
	mov r8, r0	@ 000c3cd2 8046
.org 0xc3cd4
	adds r0, r4, #0	@ 000c3cd4 201c
.org 0xc3cd6
	adds r0, #76	@ 000c3cd6 4c30
.org 0xc3cd8
	strb r6, [r0, #0]	@ 000c3cd8 0670
.org 0xc3cda
	adds r2, r4, #0	@ 000c3cda 221c
.org 0xc3cdc
	adds r2, #74	@ 000c3cdc 4a32
.org 0xc3cde
	ldrb r1, [r2, #0]	@ 000c3cde 1178
.org 0xc3ce0
	movs r0, #17	@ 000c3ce0 1120
.org 0xc3ce2
	negs r0, r0	@ 000c3ce2 4042
.org 0xc3ce4
	ands r0, r1	@ 000c3ce4 0840
.org 0xc3ce6
	strb r0, [r2, #0]	@ 000c3ce6 1070
.org 0xc3ce8
	ldrb r1, [r4, #10]	@ 000c3ce8 a17a
.org 0xc3cea
	movs r0, #4	@ 000c3cea 0420
.org 0xc3cec
	orrs r0, r1	@ 000c3cec 0843
.org 0xc3cee
	strb r0, [r4, #10]	@ 000c3cee a072
.org 0xc3cf0
	adds r5, r4, #0	@ 000c3cf0 251c
.org 0xc3cf2
	adds r5, #116	@ 000c3cf2 7435
.org 0xc3cf4
	ldr r1, [pc, #52]	@ 000c3cf4 0d49
.org 0xc3cf6
	adds r2, #10	@ 000c3cf6 0a32
.org 0xc3cf8
	adds r0, r5, #0	@ 000c3cf8 281c
.org 0xc3cfa
	movs r3, #8	@ 000c3cfa 0823
.org 0xc3cfc
	bl 0x5760	@ 000c3cfc 41f730fd
.org 0xc3d00
	str r4, [r5, #44]	@ 000c3d00 ec62
.org 0xc3d02
	str r6, [r5, #36]	@ 000c3d02 6e62
.org 0xc3d04
	ldr r1, [pc, #40]	@ 000c3d04 0a49
.org 0xc3d06
	ldrb r0, [r4, #9]	@ 000c3d06 607a
.org 0xc3d08
	lsls r0, r0, #2	@ 000c3d08 8000
.org 0xc3d0a
	adds r0, r0, r1	@ 000c3d0a 4018
.org 0xc3d0c
	mov r1, r8	@ 000c3d0c 4146
.org 0xc3d0e
	str r1, [r4, #12]	@ 000c3d0e e160
.org 0xc3d10
	ldr r0, [r0, #0]	@ 000c3d10 0068
.org 0xc3d12
	ldr r0, [r0, #4]	@ 000c3d12 4068
.org 0xc3d14
	str r0, [r4, #20]	@ 000c3d14 6061
.org 0xc3d16
	adds r0, r4, #0	@ 000c3d16 201c
.org 0xc3d18
	bl 0xc3d34	@ 000c3d18 00f00cf8
.org 0xc3d1c
	pop {r3}	@ 000c3d1c 08bc
.org 0xc3d1e
	mov r8, r3	@ 000c3d1e 9846
.org 0xc3d20
	pop {r4, r5, r6}	@ 000c3d20 70bc
.org 0xc3d22
	pop {r0}	@ 000c3d22 01bc
.org 0xc3d24
	bx r0	@ 000c3d24 0047
