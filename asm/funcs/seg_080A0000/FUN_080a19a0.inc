@ FUN_080a19a0  entry 0x080a19a0  size 20
.thumb
.org 0xa19a0
FUN_080a19a0:
	push {lr}	@ 000a19a0 00b5
.org 0xa19a2
	ldr r2, [pc, #16]	@ 000a19a2 044a
.org 0xa19a4
	ldrb r1, [r0, #16]	@ 000a19a4 017c
.org 0xa19a6
	lsls r1, r1, #2	@ 000a19a6 8900
.org 0xa19a8
	adds r1, r1, r2	@ 000a19a8 8918
.org 0xa19aa
	ldr r1, [r1, #0]	@ 000a19aa 0968
.org 0xa19ac
	bl 0x128f80	@ 000a19ac 87f0e8fa
.org 0xa19b0
	pop {r0}	@ 000a19b0 01bc
.org 0xa19b2
	bx r0	@ 000a19b2 0047
