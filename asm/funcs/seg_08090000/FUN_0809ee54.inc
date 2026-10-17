@ FUN_0809ee54  entry 0x0809ee54  size 20
.thumb
.org 0x9ee54
FUN_0809ee54:
	push {lr}	@ 0009ee54 00b5
.org 0x9ee56
	ldr r2, [pc, #16]	@ 0009ee56 044a
.org 0x9ee58
	ldrb r1, [r0, #13]	@ 0009ee58 417b
.org 0x9ee5a
	lsls r1, r1, #2	@ 0009ee5a 8900
.org 0x9ee5c
	adds r1, r1, r2	@ 0009ee5c 8918
.org 0x9ee5e
	ldr r1, [r1, #0]	@ 0009ee5e 0968
.org 0x9ee60
	bl 0x128f80	@ 0009ee60 8af08ef8
.org 0x9ee64
	pop {r0}	@ 0009ee64 01bc
.org 0x9ee66
	bx r0	@ 0009ee66 0047
