@ FUN_08002a10  entry 0x08002a10  size 10
.thumb
.org 0x2a10
FUN_08002a10:
	push {lr}	@ 00002a10 00b5
.org 0x2a12
	bl 0x1270e4	@ 00002a12 24f167fb
.org 0x2a16
	pop {r0}	@ 00002a16 01bc
.org 0x2a18
	bx r0	@ 00002a18 0047
