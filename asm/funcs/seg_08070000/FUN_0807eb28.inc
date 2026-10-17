@ FUN_0807eb28  entry 0x0807eb28  size 14
.thumb
.org 0x7eb28
FUN_0807eb28:
	push {lr}	@ 0007eb28 00b5
.org 0x7eb2a
	movs r2, #1	@ 0007eb2a 0122
.org 0x7eb2c
	movs r3, #0	@ 0007eb2c 0023
.org 0x7eb2e
	bl 0xbbd70	@ 0007eb2e 3df01ff9
.org 0x7eb32
	pop {r0}	@ 0007eb32 01bc
.org 0x7eb34
	bx r0	@ 0007eb34 0047
