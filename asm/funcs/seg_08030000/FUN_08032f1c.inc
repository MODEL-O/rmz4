@ FUN_08032f1c  entry 0x08032f1c  size 30
.thumb
.org 0x32f1c
FUN_08032f1c:
	push {lr}	@ 00032f1c 00b5
.org 0x32f1e
	movs r1, #186	@ 00032f1e ba21
.org 0x32f20
	lsls r1, r1, #1	@ 00032f20 4900
.org 0x32f22
	adds r2, r0, r1	@ 00032f22 4218
.org 0x32f24
	movs r1, #5	@ 00032f24 0521
.org 0x32f26
	strb r1, [r2, #0]	@ 00032f26 1170
.org 0x32f28
	ldr r2, [pc, #16]	@ 00032f28 044a
.org 0x32f2a
	ldrb r1, [r0, #14]	@ 00032f2a 817b
.org 0x32f2c
	lsls r1, r1, #2	@ 00032f2c 8900
.org 0x32f2e
	adds r1, r1, r2	@ 00032f2e 8918
.org 0x32f30
	ldr r1, [r1, #0]	@ 00032f30 0968
.org 0x32f32
	bl 0x128f80	@ 00032f32 f6f025f8
.org 0x32f36
	pop {r0}	@ 00032f36 01bc
.org 0x32f38
	bx r0	@ 00032f38 0047
