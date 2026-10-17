@ FUN_080054b4  entry 0x080054b4  size 12
.thumb
.org 0x54b4
FUN_080054b4:
	ldr r1, [pc, #8]	@ 000054b4 0249
.org 0x54b6
	str r0, [r1, #0]	@ 000054b6 0860
.org 0x54b8
	adds r1, r0, #0	@ 000054b8 011c
.org 0x54ba
	adds r1, #20	@ 000054ba 1431
.org 0x54bc
	str r1, [r0, #12]	@ 000054bc c160
.org 0x54be
	bx lr	@ 000054be 7047
