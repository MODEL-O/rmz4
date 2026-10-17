@ FUN_0801c53c  entry 0x0801c53c  size 10
.thumb
.org 0x1c53c
FUN_0801c53c:
	ldr r1, [pc, #8]	@ 0001c53c 0249
.org 0x1c53e
	ldr r2, [pc, #12]	@ 0001c53e 034a
.org 0x1c540
	adds r1, r1, r2	@ 0001c540 8918
.org 0x1c542
	str r0, [r1, #0]	@ 0001c542 0860
.org 0x1c544
	bx lr	@ 0001c544 7047
