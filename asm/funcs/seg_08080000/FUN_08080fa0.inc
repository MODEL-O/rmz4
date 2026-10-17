@ FUN_08080fa0  entry 0x08080fa0  size 20
.thumb
.org 0x80fa0
FUN_08080fa0:
	push {lr}	@ 00080fa0 00b5
.org 0x80fa2
	ldr r2, [pc, #16]	@ 00080fa2 044a
.org 0x80fa4
	ldrb r1, [r0, #13]	@ 00080fa4 417b
.org 0x80fa6
	lsls r1, r1, #2	@ 00080fa6 8900
.org 0x80fa8
	adds r1, r1, r2	@ 00080fa8 8918
.org 0x80faa
	ldr r1, [r1, #0]	@ 00080faa 0968
.org 0x80fac
	bl 0x128f80	@ 00080fac a7f0e8ff
.org 0x80fb0
	pop {r0}	@ 00080fb0 01bc
.org 0x80fb2
	bx r0	@ 00080fb2 0047
