@ FUN_080ad598  entry 0x080ad598  size 20
.thumb
.org 0xad598
FUN_080ad598:
	push {lr}	@ 000ad598 00b5
.org 0xad59a
	ldr r2, [pc, #16]	@ 000ad59a 044a
.org 0xad59c
	ldrb r1, [r0, #16]	@ 000ad59c 017c
.org 0xad59e
	lsls r1, r1, #2	@ 000ad59e 8900
.org 0xad5a0
	adds r1, r1, r2	@ 000ad5a0 8918
.org 0xad5a2
	ldr r1, [r1, #0]	@ 000ad5a2 0968
.org 0xad5a4
	bl 0x128f80	@ 000ad5a4 7bf0ecfc
.org 0xad5a8
	pop {r0}	@ 000ad5a8 01bc
.org 0xad5aa
	bx r0	@ 000ad5aa 0047
