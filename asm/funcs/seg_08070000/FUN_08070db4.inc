@ FUN_08070db4  entry 0x08070db4  size 30
.thumb
.org 0x70db4
FUN_08070db4:
	push {r4, lr}	@ 00070db4 10b5
.org 0x70db6
	adds r4, r0, #0	@ 00070db6 041c
.org 0x70db8
	bl 0x73bcc	@ 00070db8 02f008ff
.org 0x70dbc
	ldr r1, [pc, #20]	@ 00070dbc 0549
.org 0x70dbe
	ldrb r0, [r4, #13]	@ 00070dbe 607b
.org 0x70dc0
	lsls r0, r0, #2	@ 00070dc0 8000
.org 0x70dc2
	adds r0, r0, r1	@ 00070dc2 4018
.org 0x70dc4
	ldr r1, [r0, #0]	@ 00070dc4 0168
.org 0x70dc6
	adds r0, r4, #0	@ 00070dc6 201c
.org 0x70dc8
	bl 0x128f80	@ 00070dc8 b8f0daf8
.org 0x70dcc
	pop {r4}	@ 00070dcc 10bc
.org 0x70dce
	pop {r0}	@ 00070dce 01bc
.org 0x70dd0
	bx r0	@ 00070dd0 0047
