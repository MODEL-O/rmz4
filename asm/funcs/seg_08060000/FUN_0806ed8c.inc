@ FUN_0806ed8c  entry 0x0806ed8c  size 20
.thumb
.org 0x6ed8c
FUN_0806ed8c:
	push {lr}	@ 0006ed8c 00b5
.org 0x6ed8e
	ldr r2, [pc, #16]	@ 0006ed8e 044a
.org 0x6ed90
	ldrb r1, [r0, #13]	@ 0006ed90 417b
.org 0x6ed92
	lsls r1, r1, #2	@ 0006ed92 8900
.org 0x6ed94
	adds r1, r1, r2	@ 0006ed94 8918
.org 0x6ed96
	ldr r1, [r1, #0]	@ 0006ed96 0968
.org 0x6ed98
	bl 0x128f80	@ 0006ed98 baf0f2f8
.org 0x6ed9c
	pop {r0}	@ 0006ed9c 01bc
.org 0x6ed9e
	bx r0	@ 0006ed9e 0047
