@ FUN_080a0468  entry 0x080a0468  size 20
.thumb
.org 0xa0468
FUN_080a0468:
	push {lr}	@ 000a0468 00b5
.org 0xa046a
	ldr r2, [pc, #16]	@ 000a046a 044a
.org 0xa046c
	ldrb r1, [r0, #13]	@ 000a046c 417b
.org 0xa046e
	lsls r1, r1, #2	@ 000a046e 8900
.org 0xa0470
	adds r1, r1, r2	@ 000a0470 8918
.org 0xa0472
	ldr r1, [r1, #0]	@ 000a0472 0968
.org 0xa0474
	bl 0x128f80	@ 000a0474 88f084fd
.org 0xa0478
	pop {r0}	@ 000a0478 01bc
.org 0xa047a
	bx r0	@ 000a047a 0047
