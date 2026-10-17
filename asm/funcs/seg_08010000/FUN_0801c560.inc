@ FUN_0801c560  entry 0x0801c560  size 10
.thumb
.org 0x1c560
FUN_0801c560:
	ldr r1, [pc, #8]	@ 0001c560 0249
.org 0x1c562
	ldr r2, [pc, #12]	@ 0001c562 034a
.org 0x1c564
	adds r1, r1, r2	@ 0001c564 8918
.org 0x1c566
	strb r0, [r1, #0]	@ 0001c566 0870
.org 0x1c568
	bx lr	@ 0001c568 7047
