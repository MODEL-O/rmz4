@ FUN_080bf830  entry 0x080bf830  size 20
.thumb
.org 0xbf830
FUN_080bf830:
	push {lr}	@ 000bf830 00b5
.org 0xbf832
	ldr r2, [pc, #16]	@ 000bf832 044a
.org 0xbf834
	ldrb r1, [r0, #16]	@ 000bf834 017c
.org 0xbf836
	lsls r1, r1, #2	@ 000bf836 8900
.org 0xbf838
	adds r1, r1, r2	@ 000bf838 8918
.org 0xbf83a
	ldr r1, [r1, #0]	@ 000bf83a 0968
.org 0xbf83c
	bl 0x128f80	@ 000bf83c 69f0a0fb
.org 0xbf840
	pop {r0}	@ 000bf840 01bc
.org 0xbf842
	bx r0	@ 000bf842 0047
