@ FUN_0808c4fc  entry 0x0808c4fc  size 20
.thumb
.org 0x8c4fc
FUN_0808c4fc:
	push {lr}	@ 0008c4fc 00b5
.org 0x8c4fe
	ldr r2, [pc, #16]	@ 0008c4fe 044a
.org 0x8c500
	ldrb r1, [r0, #16]	@ 0008c500 017c
.org 0x8c502
	lsls r1, r1, #2	@ 0008c502 8900
.org 0x8c504
	adds r1, r1, r2	@ 0008c504 8918
.org 0x8c506
	ldr r1, [r1, #0]	@ 0008c506 0968
.org 0x8c508
	bl 0x128f80	@ 0008c508 9cf03afd
.org 0x8c50c
	pop {r0}	@ 0008c50c 01bc
.org 0x8c50e
	bx r0	@ 0008c50e 0047
