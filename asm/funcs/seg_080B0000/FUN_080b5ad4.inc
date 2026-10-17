@ FUN_080b5ad4  entry 0x080b5ad4  size 20
.thumb
.org 0xb5ad4
FUN_080b5ad4:
	push {lr}	@ 000b5ad4 00b5
.org 0xb5ad6
	ldr r2, [pc, #16]	@ 000b5ad6 044a
.org 0xb5ad8
	ldrb r1, [r0, #13]	@ 000b5ad8 417b
.org 0xb5ada
	lsls r1, r1, #2	@ 000b5ada 8900
.org 0xb5adc
	adds r1, r1, r2	@ 000b5adc 8918
.org 0xb5ade
	ldr r1, [r1, #0]	@ 000b5ade 0968
.org 0xb5ae0
	bl 0x128f80	@ 000b5ae0 73f04efa
.org 0xb5ae4
	pop {r0}	@ 000b5ae4 01bc
.org 0xb5ae6
	bx r0	@ 000b5ae6 0047
