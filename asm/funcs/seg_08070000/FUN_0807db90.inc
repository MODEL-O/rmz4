@ FUN_0807db90  entry 0x0807db90  size 30
.thumb
.org 0x7db90
FUN_0807db90:
	push {lr}	@ 0007db90 00b5
.org 0x7db92
	ldrb r1, [r0, #14]	@ 0007db92 817b
.org 0x7db94
	adds r1, #1	@ 0007db94 0131
.org 0x7db96
	movs r2, #0	@ 0007db96 0022
.org 0x7db98
	strb r1, [r0, #14]	@ 0007db98 8173
.org 0x7db9a
	strb r2, [r0, #15]	@ 0007db9a c273
.org 0x7db9c
	ldr r2, [pc, #16]	@ 0007db9c 044a
.org 0x7db9e
	ldrb r1, [r0, #13]	@ 0007db9e 417b
.org 0x7dba0
	lsls r1, r1, #2	@ 0007dba0 8900
.org 0x7dba2
	adds r1, r1, r2	@ 0007dba2 8918
.org 0x7dba4
	ldr r1, [r1, #0]	@ 0007dba4 0968
.org 0x7dba6
	bl 0x128f80	@ 0007dba6 abf0ebf9
.org 0x7dbaa
	pop {r0}	@ 0007dbaa 01bc
.org 0x7dbac
	bx r0	@ 0007dbac 0047
