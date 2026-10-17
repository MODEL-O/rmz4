@ FUN_081017a0  entry 0x081017a0  size 20
.thumb
.org 0x1017a0
FUN_081017a0:
	push {lr}	@ 001017a0 00b5
.org 0x1017a2
	ldr r2, [pc, #16]	@ 001017a2 044a
.org 0x1017a4
	ldrb r1, [r0, #16]	@ 001017a4 017c
.org 0x1017a6
	lsls r1, r1, #2	@ 001017a6 8900
.org 0x1017a8
	adds r1, r1, r2	@ 001017a8 8918
.org 0x1017aa
	ldr r1, [r1, #0]	@ 001017aa 0968
.org 0x1017ac
	bl 0x128f80	@ 001017ac 27f0e8fb
.org 0x1017b0
	pop {r0}	@ 001017b0 01bc
.org 0x1017b2
	bx r0	@ 001017b2 0047
