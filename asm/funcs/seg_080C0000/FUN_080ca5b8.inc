@ FUN_080ca5b8  entry 0x080ca5b8  size 20
.thumb
.org 0xca5b8
FUN_080ca5b8:
	push {lr}	@ 000ca5b8 00b5
.org 0xca5ba
	ldr r2, [pc, #16]	@ 000ca5ba 044a
.org 0xca5bc
	ldrb r1, [r0, #16]	@ 000ca5bc 017c
.org 0xca5be
	lsls r1, r1, #2	@ 000ca5be 8900
.org 0xca5c0
	adds r1, r1, r2	@ 000ca5c0 8918
.org 0xca5c2
	ldr r1, [r1, #0]	@ 000ca5c2 0968
.org 0xca5c4
	bl 0x128f80	@ 000ca5c4 5ef0dcfc
.org 0xca5c8
	pop {r0}	@ 000ca5c8 01bc
.org 0xca5ca
	bx r0	@ 000ca5ca 0047
