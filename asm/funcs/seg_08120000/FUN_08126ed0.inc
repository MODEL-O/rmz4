@ FUN_08126ed0  entry 0x08126ed0  size 32
.thumb
.org 0x126ed0
FUN_08126ed0:
	ldr r3, [r0, #44]	@ 00126ed0 c36a
.org 0x126ed2
	cmp r3, #0	@ 00126ed2 002b
.org 0x126ed4
	beq.n 0x126eee	@ 00126ed4 0bd0
.org 0x126ed6
	ldr r1, [r0, #52]	@ 00126ed6 416b
.org 0x126ed8
	ldr r2, [r0, #48]	@ 00126ed8 026b
.org 0x126eda
	cmp r2, #0	@ 00126eda 002a
.org 0x126edc
	beq.n 0x126ee2	@ 00126edc 01d0
.org 0x126ede
	str r1, [r2, #52]	@ 00126ede 5163
.org 0x126ee0
	b.n 0x126ee4	@ 00126ee0 00e0
.org 0x126ee2
	str r1, [r3, #32]	@ 00126ee2 1962
.org 0x126ee4
	cmp r1, #0	@ 00126ee4 0029
.org 0x126ee6
	beq.n 0x126eea	@ 00126ee6 00d0
.org 0x126ee8
	str r2, [r1, #48]	@ 00126ee8 0a63
.org 0x126eea
	movs r1, #0	@ 00126eea 0021
.org 0x126eec
	str r1, [r0, #44]	@ 00126eec c162
.org 0x126eee
	bx lr	@ 00126eee 7047
