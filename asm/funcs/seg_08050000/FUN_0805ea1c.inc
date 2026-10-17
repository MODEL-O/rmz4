@ FUN_0805ea1c  entry 0x0805ea1c  size 20
.thumb
.org 0x5ea1c
FUN_0805ea1c:
	push {lr}	@ 0005ea1c 00b5
.org 0x5ea1e
	ldr r2, [pc, #16]	@ 0005ea1e 044a
.org 0x5ea20
	ldrb r1, [r0, #13]	@ 0005ea20 417b
.org 0x5ea22
	lsls r1, r1, #2	@ 0005ea22 8900
.org 0x5ea24
	adds r1, r1, r2	@ 0005ea24 8918
.org 0x5ea26
	ldr r1, [r1, #0]	@ 0005ea26 0968
.org 0x5ea28
	bl 0x128f80	@ 0005ea28 caf0aafa
.org 0x5ea2c
	pop {r0}	@ 0005ea2c 01bc
.org 0x5ea2e
	bx r0	@ 0005ea2e 0047
