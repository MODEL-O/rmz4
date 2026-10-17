@ FUN_0807eb18  entry 0x0807eb18  size 14
.thumb
.org 0x7eb18
FUN_0807eb18:
	push {lr}	@ 0007eb18 00b5
.org 0x7eb1a
	movs r2, #0	@ 0007eb1a 0022
.org 0x7eb1c
	movs r3, #0	@ 0007eb1c 0023
.org 0x7eb1e
	bl 0xbb6f8	@ 0007eb1e 3cf0ebfd
.org 0x7eb22
	pop {r0}	@ 0007eb22 01bc
.org 0x7eb24
	bx r0	@ 0007eb24 0047
