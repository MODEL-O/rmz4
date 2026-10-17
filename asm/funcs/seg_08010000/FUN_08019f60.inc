@ FUN_08019f60  entry 0x08019f60  size 28
.thumb
.org 0x19f60
FUN_08019f60:
	push {lr}	@ 00019f60 00b5
.org 0x19f62
	adds r1, r0, #0	@ 00019f62 011c
.org 0x19f64
	ldrb r2, [r1, #14]	@ 00019f64 8a7b
.org 0x19f66
	cmp r2, #0	@ 00019f66 002a
.org 0x19f68
	bne.n 0x19f78	@ 00019f68 06d1
.org 0x19f6a
	movs r0, #180	@ 00019f6a b420
.org 0x19f6c
	lsls r0, r0, #1	@ 00019f6c 4000
.org 0x19f6e
	str r0, [r1, #76]	@ 00019f6e c864
.org 0x19f70
	movs r0, #192	@ 00019f70 c020
.org 0x19f72
	str r0, [r1, #68]	@ 00019f72 4864
.org 0x19f74
	adds r0, r2, #1	@ 00019f74 501c
.org 0x19f76
	strb r0, [r1, #14]	@ 00019f76 8873
.org 0x19f78
	pop {r0}	@ 00019f78 01bc
.org 0x19f7a
	bx r0	@ 00019f7a 0047
