@ FUN_08060db4  entry 0x08060db4  size 52
.thumb
.org 0x60db4
FUN_08060db4:
	push {r4, lr}	@ 00060db4 10b5
.org 0x60db6
	adds r4, r0, #0	@ 00060db6 041c
.org 0x60db8
	ldrb r0, [r4, #14]	@ 00060db8 a07b
.org 0x60dba
	cmp r0, #0	@ 00060dba 0028
.org 0x60dbc
	bne.n 0x60dcc	@ 00060dbc 06d1
.org 0x60dbe
	ldr r1, [pc, #40]	@ 00060dbe 0a49
.org 0x60dc0
	adds r0, r4, #0	@ 00060dc0 201c
.org 0x60dc2
	bl 0x1cf00	@ 00060dc2 bcf79df8
.org 0x60dc6
	ldrb r0, [r4, #14]	@ 00060dc6 a07b
.org 0x60dc8
	adds r0, #1	@ 00060dc8 0130
.org 0x60dca
	strb r0, [r4, #14]	@ 00060dca a073
.org 0x60dcc
	adds r0, r4, #0	@ 00060dcc 201c
.org 0x60dce
	bl 0x1cff0	@ 00060dce bcf70ff9
.org 0x60dd2
	adds r0, r4, #0	@ 00060dd2 201c
.org 0x60dd4
	adds r0, #115	@ 00060dd4 7330
.org 0x60dd6
	ldrb r1, [r0, #0]	@ 00060dd6 0178
.org 0x60dd8
	cmp r1, #3	@ 00060dd8 0329
.org 0x60dda
	bne.n 0x60de2	@ 00060dda 02d1
.org 0x60ddc
	movs r0, #0	@ 00060ddc 0020
.org 0x60dde
	strb r1, [r4, #13]	@ 00060dde 6173
.org 0x60de0
	strb r0, [r4, #14]	@ 00060de0 a073
.org 0x60de2
	pop {r4}	@ 00060de2 10bc
.org 0x60de4
	pop {r0}	@ 00060de4 01bc
.org 0x60de6
	bx r0	@ 00060de6 0047
