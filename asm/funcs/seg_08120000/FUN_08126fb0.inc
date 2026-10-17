@ FUN_08126fb0  entry 0x08126fb0  size 46
.thumb
.org 0x126fb0
FUN_08126fb0:
	push {lr}	@ 00126fb0 00b5
.org 0x126fb2
	ldr r2, [r1, #64]	@ 00126fb2 0a6c
.org 0x126fb4
	ldrb r3, [r2, #0]	@ 00126fb4 1378
.org 0x126fb6
	cmp r3, #0	@ 00126fb6 002b
.org 0x126fb8
	bne.n 0x126fc0	@ 00126fb8 02d1
.org 0x126fba
	adds r2, #1	@ 00126fba 0132
.org 0x126fbc
	str r2, [r1, #64]	@ 00126fbc 0a64
.org 0x126fbe
	b.n 0x126f62	@ 00126fbe d0e7
.org 0x126fc0
	ldrb r3, [r1, #3]	@ 00126fc0 cb78
.org 0x126fc2
	adds r3, #1	@ 00126fc2 0133
.org 0x126fc4
	strb r3, [r1, #3]	@ 00126fc4 cb70
.org 0x126fc6
	mov ip, r3	@ 00126fc6 9c46
.org 0x126fc8
	bl 0x126f54	@ 00126fc8 fff7c4ff
.org 0x126fcc
	cmp ip, r3	@ 00126fcc 9c45
.org 0x126fce
	bcs.n 0x126fd2	@ 00126fce 00d2
.org 0x126fd0
	b.n 0x126f62	@ 00126fd0 c7e7
.org 0x126fd2
	movs r3, #0	@ 00126fd2 0023
.org 0x126fd4
	strb r3, [r1, #3]	@ 00126fd4 cb70
.org 0x126fd6
	adds r2, #5	@ 00126fd6 0532
.org 0x126fd8
	str r2, [r1, #64]	@ 00126fd8 0a64
.org 0x126fda
	pop {r0}	@ 00126fda 01bc
.org 0x126fdc
	bx r0	@ 00126fdc 0047
