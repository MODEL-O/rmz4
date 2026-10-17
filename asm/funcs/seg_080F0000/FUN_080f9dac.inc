@ FUN_080f9dac  entry 0x080f9dac  size 64
.thumb
.org 0xf9dac
FUN_080f9dac:
	push {lr}	@ 000f9dac 00b5
.org 0xf9dae
	ldr r2, [r0, #44]	@ 000f9dae c26a
.org 0xf9db0
	ldr r1, [r0, #12]	@ 000f9db0 c168
.org 0xf9db2
	ldr r1, [r1, #44]	@ 000f9db2 c96a
.org 0xf9db4
	ldr r0, [r0, #20]	@ 000f9db4 4069
.org 0xf9db6
	movs r3, #1	@ 000f9db6 0123
.org 0xf9db8
	ands r0, r3	@ 000f9db8 1840
.org 0xf9dba
	cmp r0, #0	@ 000f9dba 0028
.org 0xf9dbc
	beq.n 0xf9de8	@ 000f9dbc 14d0
.org 0xf9dbe
	ldr r0, [r1, #84]	@ 000f9dbe 486d
.org 0xf9dc0
	ldr r1, [r2, #84]	@ 000f9dc0 516d
.org 0xf9dc2
	cmp r0, r1	@ 000f9dc2 8842
.org 0xf9dc4
	bge.n 0xf9dd0	@ 000f9dc4 04da
.org 0xf9dc6
	adds r1, r2, #0	@ 000f9dc6 111c
.org 0xf9dc8
	adds r1, #182	@ 000f9dc8 b631
.org 0xf9dca
	movs r0, #0	@ 000f9dca 0020
.org 0xf9dcc
	strb r0, [r1, #0]	@ 000f9dcc 0870
.org 0xf9dce
	b.n 0xf9de8	@ 000f9dce 0be0
.org 0xf9dd0
	cmp r1, r0	@ 000f9dd0 8142
.org 0xf9dd2
	blt.n 0xf9de2	@ 000f9dd2 06db
.org 0xf9dd4
	movs r3, #0	@ 000f9dd4 0023
.org 0xf9dd6
	ldr r0, [pc, #20]	@ 000f9dd6 0548
.org 0xf9dd8
	ldr r0, [r0, #0]	@ 000f9dd8 0068
.org 0xf9dda
	ldr r0, [r0, #84]	@ 000f9dda 406d
.org 0xf9ddc
	cmp r1, r0	@ 000f9ddc 8142
.org 0xf9dde
	bge.n 0xf9de2	@ 000f9dde 00da
.org 0xf9de0
	movs r3, #1	@ 000f9de0 0123
.org 0xf9de2
	adds r0, r2, #0	@ 000f9de2 101c
.org 0xf9de4
	adds r0, #182	@ 000f9de4 b630
.org 0xf9de6
	strb r3, [r0, #0]	@ 000f9de6 0370
.org 0xf9de8
	pop {r0}	@ 000f9de8 01bc
.org 0xf9dea
	bx r0	@ 000f9dea 0047
