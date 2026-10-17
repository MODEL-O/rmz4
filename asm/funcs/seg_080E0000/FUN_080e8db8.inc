@ FUN_080e8db8  entry 0x080e8db8  size 28
.thumb
.org 0xe8db8
FUN_080e8db8:
	ldrb r2, [r0, #10]	@ 000e8db8 827a
.org 0xe8dba
	movs r1, #254	@ 000e8dba fe21
.org 0xe8dbc
	ands r1, r2	@ 000e8dbc 1140
.org 0xe8dbe
	strb r1, [r0, #10]	@ 000e8dbe 8172
.org 0xe8dc0
	ldr r2, [pc, #16]	@ 000e8dc0 044a
.org 0xe8dc2
	ldrb r1, [r0, #9]	@ 000e8dc2 417a
.org 0xe8dc4
	lsls r1, r1, #2	@ 000e8dc4 8900
.org 0xe8dc6
	adds r1, r1, r2	@ 000e8dc6 8918
.org 0xe8dc8
	movs r2, #4	@ 000e8dc8 0422
.org 0xe8dca
	str r2, [r0, #12]	@ 000e8dca c260
.org 0xe8dcc
	ldr r1, [r1, #0]	@ 000e8dcc 0968
.org 0xe8dce
	ldr r1, [r1, #16]	@ 000e8dce 0969
.org 0xe8dd0
	str r1, [r0, #20]	@ 000e8dd0 4161
.org 0xe8dd2
	bx lr	@ 000e8dd2 7047
