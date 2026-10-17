@ FUN_0804c770  entry 0x0804c770  size 20
.thumb
.org 0x4c770
FUN_0804c770:
	push {lr}	@ 0004c770 00b5
.org 0x4c772
	ldr r2, [pc, #16]	@ 0004c772 044a
.org 0x4c774
	ldrb r1, [r0, #16]	@ 0004c774 017c
.org 0x4c776
	lsls r1, r1, #2	@ 0004c776 8900
.org 0x4c778
	adds r1, r1, r2	@ 0004c778 8918
.org 0x4c77a
	ldr r1, [r1, #0]	@ 0004c77a 0968
.org 0x4c77c
	bl 0x128f80	@ 0004c77c dcf000fc
.org 0x4c780
	pop {r0}	@ 0004c780 01bc
.org 0x4c782
	bx r0	@ 0004c782 0047
