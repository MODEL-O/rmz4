@ FUN_080ad678  entry 0x080ad678  size 20
.thumb
.org 0xad678
FUN_080ad678:
	push {lr}	@ 000ad678 00b5
.org 0xad67a
	ldr r2, [pc, #16]	@ 000ad67a 044a
.org 0xad67c
	ldrb r1, [r0, #16]	@ 000ad67c 017c
.org 0xad67e
	lsls r1, r1, #2	@ 000ad67e 8900
.org 0xad680
	adds r1, r1, r2	@ 000ad680 8918
.org 0xad682
	ldr r1, [r1, #0]	@ 000ad682 0968
.org 0xad684
	bl 0x128f80	@ 000ad684 7bf07cfc
.org 0xad688
	pop {r0}	@ 000ad688 01bc
.org 0xad68a
	bx r0	@ 000ad68a 0047
