@ FUN_08053d9c  entry 0x08053d9c  size 70
.thumb
.org 0x53d9c
FUN_08053d9c:
	push {r4, lr}	@ 00053d9c 10b5
.org 0x53d9e
	adds r4, r0, #0	@ 00053d9e 041c
.org 0x53da0
	ldrb r0, [r4, #15]	@ 00053da0 e07b
.org 0x53da2
	cmp r0, #0	@ 00053da2 0028
.org 0x53da4
	bne.n 0x53dc2	@ 00053da4 0dd1
.org 0x53da6
	movs r1, #176	@ 00053da6 b021
.org 0x53da8
	lsls r1, r1, #6	@ 00053da8 8901
.org 0x53daa
	adds r0, r4, #0	@ 00053daa 201c
.org 0x53dac
	bl 0x1cf00	@ 00053dac c9f7a8f8
.org 0x53db0
	adds r0, r4, #0	@ 00053db0 201c
.org 0x53db2
	adds r0, #188	@ 00053db2 bc30
.org 0x53db4
	ldr r0, [r0, #0]	@ 00053db4 0068
.org 0x53db6
	ldr r1, [pc, #44]	@ 00053db6 0b49
.org 0x53db8
	adds r0, r0, r1	@ 00053db8 4018
.org 0x53dba
	str r0, [r4, #88]	@ 00053dba a065
.org 0x53dbc
	ldrb r0, [r4, #15]	@ 00053dbc e07b
.org 0x53dbe
	adds r0, #1	@ 00053dbe 0130
.org 0x53dc0
	strb r0, [r4, #15]	@ 00053dc0 e073
.org 0x53dc2
	adds r0, r4, #0	@ 00053dc2 201c
.org 0x53dc4
	bl 0x1cff0	@ 00053dc4 c9f714f9
.org 0x53dc8
	ldr r0, [r4, #24]	@ 00053dc8 a069
.org 0x53dca
	ldrb r1, [r0, #9]	@ 00053dca 417a
.org 0x53dcc
	movs r2, #1	@ 00053dcc 0122
.org 0x53dce
	adds r0, r2, #0	@ 00053dce 101c
.org 0x53dd0
	ands r0, r1	@ 00053dd0 0840
.org 0x53dd2
	cmp r0, #0	@ 00053dd2 0028
.org 0x53dd4
	beq.n 0x53ddc	@ 00053dd4 02d0
.org 0x53dd6
	movs r0, #0	@ 00053dd6 0020
.org 0x53dd8
	strb r2, [r4, #14]	@ 00053dd8 a273
.org 0x53dda
	strb r0, [r4, #15]	@ 00053dda e073
.org 0x53ddc
	pop {r4}	@ 00053ddc 10bc
.org 0x53dde
	pop {r0}	@ 00053dde 01bc
.org 0x53de0
	bx r0	@ 00053de0 0047
