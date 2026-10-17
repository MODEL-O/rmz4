@ FUN_080a5188  entry 0x080a5188  size 20
.thumb
.org 0xa5188
FUN_080a5188:
	push {lr}	@ 000a5188 00b5
.org 0xa518a
	ldr r2, [pc, #16]	@ 000a518a 044a
.org 0xa518c
	ldrb r1, [r0, #16]	@ 000a518c 017c
.org 0xa518e
	lsls r1, r1, #2	@ 000a518e 8900
.org 0xa5190
	adds r1, r1, r2	@ 000a5190 8918
.org 0xa5192
	ldr r1, [r1, #0]	@ 000a5192 0968
.org 0xa5194
	bl 0x128f80	@ 000a5194 83f0f4fe
.org 0xa5198
	pop {r0}	@ 000a5198 01bc
.org 0xa519a
	bx r0	@ 000a519a 0047
