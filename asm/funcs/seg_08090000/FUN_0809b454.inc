@ FUN_0809b454  entry 0x0809b454  size 20
.thumb
.org 0x9b454
FUN_0809b454:
	push {lr}	@ 0009b454 00b5
.org 0x9b456
	ldr r2, [pc, #16]	@ 0009b456 044a
.org 0x9b458
	ldrb r1, [r0, #13]	@ 0009b458 417b
.org 0x9b45a
	lsls r1, r1, #2	@ 0009b45a 8900
.org 0x9b45c
	adds r1, r1, r2	@ 0009b45c 8918
.org 0x9b45e
	ldr r1, [r1, #0]	@ 0009b45e 0968
.org 0x9b460
	bl 0x128f80	@ 0009b460 8df08efd
.org 0x9b464
	pop {r0}	@ 0009b464 01bc
.org 0x9b466
	bx r0	@ 0009b466 0047
