@ FUN_08000a04  entry 0x08000a04  size 10
.thumb
.org 0xa04
FUN_08000a04:
	push {lr}	@ 00000a04 00b5
.org 0xa06
	bl 0x2a10	@ 00000a06 02f003f8
.org 0xa0a
	pop {r0}	@ 00000a0a 01bc
.org 0xa0c
	bx r0	@ 00000a0c 0047
