@ FUN_080eb368  entry 0x080eb368  size 20
.thumb
.org 0xeb368
FUN_080eb368:
	push {lr}	@ 000eb368 00b5
.org 0xeb36a
	ldr r2, [pc, #16]	@ 000eb36a 044a
.org 0xeb36c
	ldrb r1, [r0, #13]	@ 000eb36c 417b
.org 0xeb36e
	lsls r1, r1, #2	@ 000eb36e 8900
.org 0xeb370
	adds r1, r1, r2	@ 000eb370 8918
.org 0xeb372
	ldr r1, [r1, #0]	@ 000eb372 0968
.org 0xeb374
	bl 0x128f80	@ 000eb374 3df004fe
.org 0xeb378
	pop {r0}	@ 000eb378 01bc
.org 0xeb37a
	bx r0	@ 000eb37a 0047
