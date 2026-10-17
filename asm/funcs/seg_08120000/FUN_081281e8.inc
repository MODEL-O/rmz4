@ FUN_081281e8  entry 0x081281e8  size 60
.thumb
.org 0x1281e8
FUN_081281e8:
	lsls r0, r0, #24	@ 001281e8 0006
.org 0x1281ea
	lsrs r0, r0, #24	@ 001281ea 000e
.org 0x1281ec
	adds r1, r0, #0	@ 001281ec 011c
.org 0x1281ee
	cmp r0, #2	@ 001281ee 0228
.org 0x1281f0
	beq.n 0x128210	@ 001281f0 0ed0
.org 0x1281f2
	cmp r0, #2	@ 001281f2 0228
.org 0x1281f4
	bgt.n 0x1281fc	@ 001281f4 02dc
.org 0x1281f6
	cmp r0, #1	@ 001281f6 0128
.org 0x1281f8
	beq.n 0x128202	@ 001281f8 03d0
.org 0x1281fa
	b.n 0x128224	@ 001281fa 13e0
.org 0x1281fc
	cmp r1, #3	@ 001281fc 0329
.org 0x1281fe
	beq.n 0x128218	@ 001281fe 0bd0
.org 0x128200
	b.n 0x128224	@ 00128200 10e0
.org 0x128202
	ldr r1, [pc, #8]	@ 00128202 0249
.org 0x128204
	movs r0, #8	@ 00128204 0820
.org 0x128206
	strb r0, [r1, #0]	@ 00128206 0870
.org 0x128208
	adds r1, #2	@ 00128208 0231
.org 0x12820a
	b.n 0x12822c	@ 0012820a 0fe0
.org 0x12820c
	.byte 0x63,0x00,0x00,0x04	@ 0012820c data
.org 0x128210
	ldr r1, [pc, #0]	@ 00128210 0049
.org 0x128212
	b.n 0x128226	@ 00128212 08e0
.org 0x128214
	.byte 0x69,0x00,0x00,0x04	@ 00128214 data
.org 0x128218
	ldr r1, [pc, #4]	@ 00128218 0149
.org 0x12821a
	movs r0, #0	@ 0012821a 0020
.org 0x12821c
	b.n 0x12822e	@ 0012821c 07e0
.org 0x12821e
	.byte 0x00	@ 0012821e data
.org 0x12821f
	.byte 0x00	@ 0012821f data
.org 0x128220
	.byte 0x70,0x00,0x00,0x04	@ 00128220 data
