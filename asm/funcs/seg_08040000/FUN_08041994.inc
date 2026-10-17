@ FUN_08041994  entry 0x08041994  size 12
.thumb
.org 0x41994
FUN_08041994:
	push {lr}	@ 00041994 00b5
.org 0x41996
	ldr r1, [pc, #8]	@ 00041996 0249
.org 0x41998
	bl 0x1cf00	@ 00041998 dbf7b2fa
.org 0x4199c
	pop {r0}	@ 0004199c 01bc
.org 0x4199e
	bx r0	@ 0004199e 0047
