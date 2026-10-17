@ FUN_0807eac8  entry 0x0807eac8  size 14
.thumb
.org 0x7eac8
FUN_0807eac8:
	push {lr}	@ 0007eac8 00b5
.org 0x7eaca
	movs r2, #0	@ 0007eaca 0022
.org 0x7eacc
	movs r3, #0	@ 0007eacc 0023
.org 0x7eace
	bl 0xb8778	@ 0007eace 39f053fe
.org 0x7ead2
	pop {r0}	@ 0007ead2 01bc
.org 0x7ead4
	bx r0	@ 0007ead4 0047
