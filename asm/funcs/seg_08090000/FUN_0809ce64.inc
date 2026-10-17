@ FUN_0809ce64  entry 0x0809ce64  size 20
.thumb
.org 0x9ce64
FUN_0809ce64:
	push {lr}	@ 0009ce64 00b5
.org 0x9ce66
	ldr r2, [pc, #16]	@ 0009ce66 044a
.org 0x9ce68
	ldrb r1, [r0, #16]	@ 0009ce68 017c
.org 0x9ce6a
	lsls r1, r1, #2	@ 0009ce6a 8900
.org 0x9ce6c
	adds r1, r1, r2	@ 0009ce6c 8918
.org 0x9ce6e
	ldr r1, [r1, #0]	@ 0009ce6e 0968
.org 0x9ce70
	bl 0x128f80	@ 0009ce70 8cf086f8
.org 0x9ce74
	pop {r0}	@ 0009ce74 01bc
.org 0x9ce76
	bx r0	@ 0009ce76 0047
