@ FUN_0801c550  entry 0x0801c550  size 12
.thumb
.org 0x1c550
FUN_0801c550:
	ldr r2, [pc, #8]	@ 0001c550 024a
.org 0x1c552
	ldr r1, [r0, #4]	@ 0001c552 4168
.org 0x1c554
	ldr r0, [r0, #0]	@ 0001c554 0068
.org 0x1c556
	str r0, [r2, #0]	@ 0001c556 1060
.org 0x1c558
	str r1, [r2, #4]	@ 0001c558 5160
.org 0x1c55a
	bx lr	@ 0001c55a 7047
