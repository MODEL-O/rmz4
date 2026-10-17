@ FUN_08127b08  entry 0x08127b08  size 14
.thumb
.org 0x127b08
FUN_08127b08:
	push {lr}	@ 00127b08 00b5
.org 0x127b0a
	ldr r1, [pc, #12]	@ 00127b0a 0349
.org 0x127b0c
	ldr r1, [r1, #0]	@ 00127b0c 0968
.org 0x127b0e
	bl 0x128f80	@ 00127b0e 01f037fa
.org 0x127b12
	pop {r0}	@ 00127b12 01bc
.org 0x127b14
	bx r0	@ 00127b14 0047
