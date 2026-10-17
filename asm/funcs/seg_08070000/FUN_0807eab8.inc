@ FUN_0807eab8  entry 0x0807eab8  size 14
.thumb
.org 0x7eab8
FUN_0807eab8:
	push {lr}	@ 0007eab8 00b5
.org 0x7eaba
	movs r2, #0	@ 0007eaba 0022
.org 0x7eabc
	movs r3, #0	@ 0007eabc 0023
.org 0x7eabe
	bl 0xb8da4	@ 0007eabe 3af071f9
.org 0x7eac2
	pop {r0}	@ 0007eac2 01bc
.org 0x7eac4
	bx r0	@ 0007eac4 0047
