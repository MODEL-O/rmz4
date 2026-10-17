@ FUN_08094db4  entry 0x08094db4  size 46
.thumb
.org 0x94db4
FUN_08094db4:
	push {lr}	@ 00094db4 00b5
.org 0x94db6
	ldr r2, [r0, #88]	@ 00094db6 826d
.org 0x94db8
	ldr r0, [pc, #20]	@ 00094db8 0548
.org 0x94dba
	ldr r0, [r0, #0]	@ 00094dba 0068
.org 0x94dbc
	ldr r0, [r0, #88]	@ 00094dbc 806d
.org 0x94dbe
	ldr r3, [pc, #20]	@ 00094dbe 054b
.org 0x94dc0
	adds r1, r0, r3	@ 00094dc0 c118
.org 0x94dc2
	ldr r3, [pc, #20]	@ 00094dc2 054b
.org 0x94dc4
	adds r0, r2, r3	@ 00094dc4 d018
.org 0x94dc6
	cmp r1, r0	@ 00094dc6 8142
.org 0x94dc8
	bge.n 0x94ddc	@ 00094dc8 08da
.org 0x94dca
	movs r0, #0	@ 00094dca 0020
.org 0x94dcc
	b.n 0x94dec	@ 00094dcc 0ee0
.org 0x94dce
	.byte 0x00	@ 00094dce data
.org 0x94dcf
	.byte 0x00	@ 00094dcf data
.org 0x94dd0
	.byte 0xf0,0xdb,0x02,0x02	@ 00094dd0 data
.org 0x94dd4
	.byte 0x00,0xf0,0xff,0xff	@ 00094dd4 data
.org 0x94dd8
	.byte 0x00,0xc8,0xff,0xff	@ 00094dd8 data
.org 0x94ddc
	movs r3, #128	@ 00094ddc 8023
.org 0x94dde
	lsls r3, r3, #4	@ 00094dde 1b01
.org 0x94de0
	adds r0, r2, r3	@ 00094de0 d018
