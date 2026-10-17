@ FUN_0808ff80  entry 0x0808ff80  size 20
.thumb
.org 0x8ff80
FUN_0808ff80:
	push {lr}	@ 0008ff80 00b5
.org 0x8ff82
	ldr r2, [pc, #16]	@ 0008ff82 044a
.org 0x8ff84
	ldrb r1, [r0, #16]	@ 0008ff84 017c
.org 0x8ff86
	lsls r1, r1, #2	@ 0008ff86 8900
.org 0x8ff88
	adds r1, r1, r2	@ 0008ff88 8918
.org 0x8ff8a
	ldr r1, [r1, #0]	@ 0008ff8a 0968
.org 0x8ff8c
	bl 0x128f80	@ 0008ff8c 98f0f8ff
.org 0x8ff90
	pop {r0}	@ 0008ff90 01bc
.org 0x8ff92
	bx r0	@ 0008ff92 0047
