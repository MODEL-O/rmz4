@ FUN_08065598  entry 0x08065598  size 20
.thumb
.org 0x65598
FUN_08065598:
	push {lr}	@ 00065598 00b5
.org 0x6559a
	ldr r2, [pc, #16]	@ 0006559a 044a
.org 0x6559c
	ldrb r1, [r0, #13]	@ 0006559c 417b
.org 0x6559e
	lsls r1, r1, #2	@ 0006559e 8900
.org 0x655a0
	adds r1, r1, r2	@ 000655a0 8918
.org 0x655a2
	ldr r1, [r1, #0]	@ 000655a2 0968
.org 0x655a4
	bl 0x128f80	@ 000655a4 c3f0ecfc
.org 0x655a8
	pop {r0}	@ 000655a8 01bc
.org 0x655aa
	bx r0	@ 000655aa 0047
