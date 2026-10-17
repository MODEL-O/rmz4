@ FUN_0809b848  entry 0x0809b848  size 20
.thumb
.org 0x9b848
FUN_0809b848:
	push {lr}	@ 0009b848 00b5
.org 0x9b84a
	ldr r2, [pc, #16]	@ 0009b84a 044a
.org 0x9b84c
	ldrb r1, [r0, #13]	@ 0009b84c 417b
.org 0x9b84e
	lsls r1, r1, #2	@ 0009b84e 8900
.org 0x9b850
	adds r1, r1, r2	@ 0009b850 8918
.org 0x9b852
	ldr r1, [r1, #0]	@ 0009b852 0968
.org 0x9b854
	bl 0x128f80	@ 0009b854 8df094fb
.org 0x9b858
	pop {r0}	@ 0009b858 01bc
.org 0x9b85a
	bx r0	@ 0009b85a 0047
