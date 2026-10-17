@ FUN_08127b1c  entry 0x08127b1c  size 14
.thumb
.org 0x127b1c
FUN_08127b1c:
	push {lr}	@ 00127b1c 00b5
.org 0x127b1e
	ldr r1, [pc, #12]	@ 00127b1e 0349
.org 0x127b20
	ldr r1, [r1, #0]	@ 00127b20 0968
.org 0x127b22
	bl 0x128f80	@ 00127b22 01f02dfa
.org 0x127b26
	pop {r0}	@ 00127b26 01bc
.org 0x127b28
	bx r0	@ 00127b28 0047
