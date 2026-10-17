@ FUN_080c2bd0  entry 0x080c2bd0  size 20
.thumb
.org 0xc2bd0
FUN_080c2bd0:
	push {lr}	@ 000c2bd0 00b5
.org 0xc2bd2
	ldr r2, [pc, #16]	@ 000c2bd2 044a
.org 0xc2bd4
	ldrb r1, [r0, #13]	@ 000c2bd4 417b
.org 0xc2bd6
	lsls r1, r1, #2	@ 000c2bd6 8900
.org 0xc2bd8
	adds r1, r1, r2	@ 000c2bd8 8918
.org 0xc2bda
	ldr r1, [r1, #0]	@ 000c2bda 0968
.org 0xc2bdc
	bl 0x128f80	@ 000c2bdc 66f0d0f9
.org 0xc2be0
	pop {r0}	@ 000c2be0 01bc
.org 0xc2be2
	bx r0	@ 000c2be2 0047
