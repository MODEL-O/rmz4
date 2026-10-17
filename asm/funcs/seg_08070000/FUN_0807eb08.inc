@ FUN_0807eb08  entry 0x0807eb08  size 14
.thumb
.org 0x7eb08
FUN_0807eb08:
	push {lr}	@ 0007eb08 00b5
.org 0x7eb0a
	movs r2, #0	@ 0007eb0a 0022
.org 0x7eb0c
	movs r3, #0	@ 0007eb0c 0023
.org 0x7eb0e
	bl 0xbbd70	@ 0007eb0e 3df02ff9
.org 0x7eb12
	pop {r0}	@ 0007eb12 01bc
.org 0x7eb14
	bx r0	@ 0007eb14 0047
