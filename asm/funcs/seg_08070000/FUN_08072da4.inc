@ FUN_08072da4  entry 0x08072da4  size 70
.thumb
.org 0x72da4
FUN_08072da4:
	push {r4, r5, r6, r7, lr}	@ 00072da4 f0b5
.org 0x72da6
	mov r7, sl	@ 00072da6 5746
.org 0x72da8
	mov r6, r9	@ 00072da8 4e46
.org 0x72daa
	mov r5, r8	@ 00072daa 4546
.org 0x72dac
	push {r5, r6, r7}	@ 00072dac e0b4
.org 0x72dae
	sub sp, #40	@ 00072dae 8ab0
.org 0x72db0
	adds r6, r0, #0	@ 00072db0 061c
.org 0x72db2
	ldrb r0, [r6, #15]	@ 00072db2 f07b
.org 0x72db4
	cmp r0, #5	@ 00072db4 0528
.org 0x72db6
	bls.n 0x72dba	@ 00072db6 00d9
.org 0x72db8
	b.n 0x73092	@ 00072db8 6be1
.org 0x72dba
	lsls r0, r0, #2	@ 00072dba 8000
.org 0x72dbc
	ldr r1, [pc, #28]	@ 00072dbc 0749
.org 0x72dbe
	adds r0, r0, r1	@ 00072dbe 4018
.org 0x72dc0
	ldr r0, [r0, #0]	@ 00072dc0 0068
.org 0x72dc2
	movs r1, #116	@ 00072dc2 7421
.org 0x72dc4
	adds r1, r1, r6	@ 00072dc4 8919
.org 0x72dc6
	mov sl, r1	@ 00072dc6 8a46
.org 0x72dc8
	adds r5, r6, #0	@ 00072dc8 351c
.org 0x72dca
	adds r5, #184	@ 00072dca b835
.org 0x72dcc
	movs r2, #113	@ 00072dcc 7122
.org 0x72dce
	adds r2, r2, r6	@ 00072dce 9219
.org 0x72dd0
	mov r8, r2	@ 00072dd0 9046
.org 0x72dd2
	movs r4, #185	@ 00072dd2 b924
.org 0x72dd4
	adds r4, r4, r6	@ 00072dd4 a419
.org 0x72dd6
	mov r9, r4	@ 00072dd6 a146
.org 0x72dd8
	mov pc, r0	@ 00072dd8 8746
.org 0x72dda
	.byte 0x00	@ 00072dda data
.org 0x72ddb
	.byte 0x00	@ 00072ddb data
.org 0x72ddc
	.byte 0xe0,0x2d,0x07,0x08	@ 00072ddc data
.org 0x72de0
	.byte 0xf8,0x2d,0x07,0x08	@ 00072de0 data
.org 0x72de4
	.byte 0x1a,0x2e,0x07,0x08	@ 00072de4 data
.org 0x72de8
	.byte 0x7c,0x2e,0x07,0x08	@ 00072de8 data
