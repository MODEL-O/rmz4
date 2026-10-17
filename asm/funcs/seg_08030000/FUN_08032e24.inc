@ FUN_08032e24  entry 0x08032e24  size 30
.thumb
.org 0x32e24
FUN_08032e24:
	push {lr}	@ 00032e24 00b5
.org 0x32e26
	movs r1, #186	@ 00032e26 ba21
.org 0x32e28
	lsls r1, r1, #1	@ 00032e28 4900
.org 0x32e2a
	adds r2, r0, r1	@ 00032e2a 4218
.org 0x32e2c
	movs r1, #4	@ 00032e2c 0421
.org 0x32e2e
	strb r1, [r2, #0]	@ 00032e2e 1170
.org 0x32e30
	ldr r2, [pc, #16]	@ 00032e30 044a
.org 0x32e32
	ldrb r1, [r0, #14]	@ 00032e32 817b
.org 0x32e34
	lsls r1, r1, #2	@ 00032e34 8900
.org 0x32e36
	adds r1, r1, r2	@ 00032e36 8918
.org 0x32e38
	ldr r1, [r1, #0]	@ 00032e38 0968
.org 0x32e3a
	bl 0x128f80	@ 00032e3a f6f0a1f8
.org 0x32e3e
	pop {r0}	@ 00032e3e 01bc
.org 0x32e40
	bx r0	@ 00032e40 0047
