@ FUN_080e4db4  entry 0x080e4db4  size 42
.thumb
.org 0xe4db4
FUN_080e4db4:
	push {r4, r5, lr}	@ 000e4db4 30b5
.org 0xe4db6
	adds r4, r0, #0	@ 000e4db6 041c
.org 0xe4db8
	movs r5, #1	@ 000e4db8 0125
.org 0xe4dba
	strb r5, [r4, #17]	@ 000e4dba 6574
.org 0xe4dbc
	movs r0, #42	@ 000e4dbc 2a20
.org 0xe4dbe
	bl 0x2b10	@ 000e4dbe 1df7a7fe
.org 0xe4dc2
	adds r0, r4, #0	@ 000e4dc2 201c
.org 0xe4dc4
	adds r0, #84	@ 000e4dc4 5430
.org 0xe4dc6
	ldr r1, [pc, #24]	@ 000e4dc6 0649
.org 0xe4dc8
	ldrb r2, [r4, #10]	@ 000e4dc8 a27a
.org 0xe4dca
	lsrs r2, r2, #4	@ 000e4dca 1209
.org 0xe4dcc
	ands r2, r5	@ 000e4dcc 2a40
.org 0xe4dce
	bl 0xe4a54	@ 000e4dce fff741fe
.org 0xe4dd2
	adds r0, r4, #0	@ 000e4dd2 201c
.org 0xe4dd4
	bl 0xe4c48	@ 000e4dd4 fff738ff
.org 0xe4dd8
	pop {r4, r5}	@ 000e4dd8 30bc
.org 0xe4dda
	pop {r0}	@ 000e4dda 01bc
.org 0xe4ddc
	bx r0	@ 000e4ddc 0047
