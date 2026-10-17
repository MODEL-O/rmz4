@ FUN_0807ead8  entry 0x0807ead8  size 14
.thumb
.org 0x7ead8
FUN_0807ead8:
	push {lr}	@ 0007ead8 00b5
.org 0x7eada
	movs r2, #0	@ 0007eada 0022
.org 0x7eadc
	movs r3, #0	@ 0007eadc 0023
.org 0x7eade
	bl 0xb9ea0	@ 0007eade 3bf0dff9
.org 0x7eae2
	pop {r0}	@ 0007eae2 01bc
.org 0x7eae4
	bx r0	@ 0007eae4 0047
