@ FUN_08126f20  entry 0x08126f20  size 22
.thumb
.org 0x126f20
FUN_08126f20:
	mov ip, lr	@ 00126f20 f446
.org 0x126f22
	movs r1, #36	@ 00126f22 2421
.org 0x126f24
	ldr r2, [pc, #40]	@ 00126f24 0a4a
.org 0x126f26
	ldr r3, [r2, #0]	@ 00126f26 1368
.org 0x126f28
	bl 0x126f3a	@ 00126f28 00f007f8
.org 0x126f2c
	stmia r0!, {r3}	@ 00126f2c 08c0
.org 0x126f2e
	adds r2, #4	@ 00126f2e 0432
.org 0x126f30
	subs r1, #1	@ 00126f30 0139
.org 0x126f32
	bgt.n 0x126f26	@ 00126f32 f8dc
.org 0x126f34
	bx ip	@ 00126f34 6047
