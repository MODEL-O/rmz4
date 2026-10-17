@ FUN_0810c7c8  entry 0x0810c7c8  size 20
.thumb
.org 0x10c7c8
FUN_0810c7c8:
	push {lr}	@ 0010c7c8 00b5
.org 0x10c7ca
	ldr r2, [pc, #16]	@ 0010c7ca 044a
.org 0x10c7cc
	ldrb r1, [r0, #16]	@ 0010c7cc 017c
.org 0x10c7ce
	lsls r1, r1, #2	@ 0010c7ce 8900
.org 0x10c7d0
	adds r1, r1, r2	@ 0010c7d0 8918
.org 0x10c7d2
	ldr r1, [r1, #0]	@ 0010c7d2 0968
.org 0x10c7d4
	bl 0x128f80	@ 0010c7d4 1cf0d4fb
.org 0x10c7d8
	pop {r0}	@ 0010c7d8 01bc
.org 0x10c7da
	bx r0	@ 0010c7da 0047
