@ FUN_0810b7b8  entry 0x0810b7b8  size 20
.thumb
.org 0x10b7b8
FUN_0810b7b8:
	push {lr}	@ 0010b7b8 00b5
.org 0x10b7ba
	ldr r2, [pc, #16]	@ 0010b7ba 044a
.org 0x10b7bc
	ldrb r1, [r0, #16]	@ 0010b7bc 017c
.org 0x10b7be
	lsls r1, r1, #2	@ 0010b7be 8900
.org 0x10b7c0
	adds r1, r1, r2	@ 0010b7c0 8918
.org 0x10b7c2
	ldr r1, [r1, #0]	@ 0010b7c2 0968
.org 0x10b7c4
	bl 0x128f80	@ 0010b7c4 1df0dcfb
.org 0x10b7c8
	pop {r0}	@ 0010b7c8 01bc
.org 0x10b7ca
	bx r0	@ 0010b7ca 0047
