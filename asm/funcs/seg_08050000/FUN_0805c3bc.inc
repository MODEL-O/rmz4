@ FUN_0805c3bc  entry 0x0805c3bc  size 20
.thumb
.org 0x5c3bc
FUN_0805c3bc:
	push {lr}	@ 0005c3bc 00b5
.org 0x5c3be
	ldr r2, [pc, #16]	@ 0005c3be 044a
.org 0x5c3c0
	ldrb r1, [r0, #16]	@ 0005c3c0 017c
.org 0x5c3c2
	lsls r1, r1, #2	@ 0005c3c2 8900
.org 0x5c3c4
	adds r1, r1, r2	@ 0005c3c4 8918
.org 0x5c3c6
	ldr r1, [r1, #0]	@ 0005c3c6 0968
.org 0x5c3c8
	bl 0x128f80	@ 0005c3c8 ccf0dafd
.org 0x5c3cc
	pop {r0}	@ 0005c3cc 01bc
.org 0x5c3ce
	bx r0	@ 0005c3ce 0047
