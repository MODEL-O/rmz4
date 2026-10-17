@ FUN_080dbba4  entry 0x080dbba4  size 144
.thumb
.org 0xdbba4
FUN_080dbba4:
	push {r4, r5, r6, lr}	@ 000dbba4 70b5
.org 0xdbba6
	mov r6, r8	@ 000dbba6 4646
.org 0xdbba8
	push {r6}	@ 000dbba8 40b4
.org 0xdbbaa
	sub sp, #8	@ 000dbbaa 82b0
.org 0xdbbac
	adds r4, r0, #0	@ 000dbbac 041c
.org 0xdbbae
	ldrb r2, [r4, #10]	@ 000dbbae a27a
.org 0xdbbb0
	lsrs r1, r2, #4	@ 000dbbb0 1109
.org 0xdbbb2
	movs r0, #1	@ 000dbbb2 0120
.org 0xdbbb4
	ands r1, r0	@ 000dbbb4 0140
.org 0xdbbb6
	movs r0, #254	@ 000dbbb6 fe20
.org 0xdbbb8
	ands r0, r2	@ 000dbbb8 1040
.org 0xdbbba
	strb r0, [r4, #10]	@ 000dbbba a072
.org 0xdbbbc
	lsls r1, r1, #1	@ 000dbbbc 4900
.org 0xdbbbe
	subs r1, #1	@ 000dbbbe 0139
.org 0xdbbc0
	lsls r0, r1, #1	@ 000dbbc0 4800
.org 0xdbbc2
	adds r0, r0, r1	@ 000dbbc2 4018
.org 0xdbbc4
	lsls r0, r0, #10	@ 000dbbc4 8002
.org 0xdbbc6
	ldr r1, [r4, #84]	@ 000dbbc6 616d
.org 0xdbbc8
	subs r1, r1, r0	@ 000dbbc8 091a
.org 0xdbbca
	ldr r0, [pc, #104]	@ 000dbbca 1a48
.org 0xdbbcc
	mov r8, r0	@ 000dbbcc 8046
.org 0xdbbce
	ldr r0, [r0, #0]	@ 000dbbce 0068
.org 0xdbbd0
	ldr r6, [pc, #100]	@ 000dbbd0 194e
.org 0xdbbd2
	muls r0, r6	@ 000dbbd2 7043
.org 0xdbbd4
	ldr r2, [pc, #100]	@ 000dbbd4 194a
.org 0xdbbd6
	adds r0, r0, r2	@ 000dbbd6 8018
.org 0xdbbd8
	lsls r0, r0, #1	@ 000dbbd8 4000
.org 0xdbbda
	lsrs r3, r0, #1	@ 000dbbda 4308
.org 0xdbbdc
	lsrs r0, r0, #17	@ 000dbbdc 400c
.org 0xdbbde
	movs r5, #7	@ 000dbbde 0725
.org 0xdbbe0
	ands r0, r5	@ 000dbbe0 2840
.org 0xdbbe2
	subs r0, #3	@ 000dbbe2 0338
.org 0xdbbe4
	lsls r0, r0, #8	@ 000dbbe4 0002
.org 0xdbbe6
	adds r1, r1, r0	@ 000dbbe6 0918
.org 0xdbbe8
	str r1, [sp, #0]	@ 000dbbe8 0091
.org 0xdbbea
	adds r0, r3, #0	@ 000dbbea 181c
.org 0xdbbec
	muls r0, r6	@ 000dbbec 7043
.org 0xdbbee
	adds r0, r0, r2	@ 000dbbee 8018
.org 0xdbbf0
	lsls r0, r0, #1	@ 000dbbf0 4000
.org 0xdbbf2
	lsrs r1, r0, #1	@ 000dbbf2 4108
.org 0xdbbf4
	mov r2, r8	@ 000dbbf4 4246
.org 0xdbbf6
	str r1, [r2, #0]	@ 000dbbf6 1160
.org 0xdbbf8
	lsrs r0, r0, #17	@ 000dbbf8 400c
.org 0xdbbfa
	ands r0, r5	@ 000dbbfa 2840
.org 0xdbbfc
	lsls r0, r0, #8	@ 000dbbfc 0002
.org 0xdbbfe
	ldr r1, [pc, #64]	@ 000dbbfe 1049
.org 0xdbc00
	adds r0, r0, r1	@ 000dbc00 4018
.org 0xdbc02
	ldr r1, [r4, #88]	@ 000dbc02 a16d
.org 0xdbc04
	adds r1, r1, r0	@ 000dbc04 0918
.org 0xdbc06
	str r1, [sp, #4]	@ 000dbc06 0191
.org 0xdbc08
	movs r0, #2	@ 000dbc08 0220
.org 0xdbc0a
	mov r1, sp	@ 000dbc0a 6946
.org 0xdbc0c
	bl 0xd0c88	@ 000dbc0c f5f73cf8
.org 0xdbc10
	adds r0, r4, #0	@ 000dbc10 201c
.org 0xdbc12
	bl 0xdbc48	@ 000dbc12 00f019f8
.org 0xdbc16
	ldr r1, [pc, #44]	@ 000dbc16 0b49
.org 0xdbc18
	ldrb r0, [r4, #9]	@ 000dbc18 607a
.org 0xdbc1a
	lsls r0, r0, #2	@ 000dbc1a 8000
.org 0xdbc1c
	adds r0, r0, r1	@ 000dbc1c 4018
.org 0xdbc1e
	movs r1, #4	@ 000dbc1e 0421
.org 0xdbc20
	str r1, [r4, #12]	@ 000dbc20 e160
.org 0xdbc22
	ldr r0, [r0, #0]	@ 000dbc22 0068
.org 0xdbc24
	ldr r0, [r0, #16]	@ 000dbc24 0069
.org 0xdbc26
	str r0, [r4, #20]	@ 000dbc26 6061
.org 0xdbc28
	add sp, #8	@ 000dbc28 02b0
.org 0xdbc2a
	pop {r3}	@ 000dbc2a 08bc
.org 0xdbc2c
	mov r8, r3	@ 000dbc2c 9846
.org 0xdbc2e
	pop {r4, r5, r6}	@ 000dbc2e 70bc
.org 0xdbc30
	pop {r0}	@ 000dbc30 01bc
.org 0xdbc32
	bx r0	@ 000dbc32 0047
