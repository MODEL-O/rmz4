@ FUN_08126ef0  entry 0x08126ef0  size 46
.thumb
.org 0x126ef0
FUN_08126ef0:
	push {r4, r5, lr}	@ 00126ef0 30b5
.org 0x126ef2
	adds r5, r1, #0	@ 00126ef2 0d1c
.org 0x126ef4
	ldr r4, [r5, #32]	@ 00126ef4 2c6a
.org 0x126ef6
	cmp r4, #0	@ 00126ef6 002c
.org 0x126ef8
	beq.n 0x126f14	@ 00126ef8 0cd0
.org 0x126efa
	ldrb r1, [r4, #0]	@ 00126efa 2178
.org 0x126efc
	movs r0, #199	@ 00126efc c720
.org 0x126efe
	tst r0, r1	@ 00126efe 0842
.org 0x126f00
	beq.n 0x126f08	@ 00126f00 02d0
.org 0x126f02
	movs r0, #64	@ 00126f02 4020
.org 0x126f04
	orrs r1, r0	@ 00126f04 0143
.org 0x126f06
	strb r1, [r4, #0]	@ 00126f06 2170
.org 0x126f08
	adds r0, r4, #0	@ 00126f08 201c
.org 0x126f0a
	bl 0x126ed0	@ 00126f0a fff7e1ff
.org 0x126f0e
	ldr r4, [r4, #52]	@ 00126f0e 646b
.org 0x126f10
	cmp r4, #0	@ 00126f10 002c
.org 0x126f12
	bne.n 0x126efa	@ 00126f12 f2d1
.org 0x126f14
	movs r0, #0	@ 00126f14 0020
.org 0x126f16
	strb r0, [r5, #0]	@ 00126f16 2870
.org 0x126f18
	pop {r4, r5}	@ 00126f18 30bc
.org 0x126f1a
	pop {r0}	@ 00126f1a 01bc
.org 0x126f1c
	bx r0	@ 00126f1c 0047
