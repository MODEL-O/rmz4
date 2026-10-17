@ FUN_0802b7bc  entry 0x0802b7bc  size 10
.thumb
.org 0x2b7bc
FUN_0802b7bc:
	ldr r1, [pc, #8]	@ 0002b7bc 0249
.org 0x2b7be
	adds r0, r0, r1	@ 0002b7be 4018
.org 0x2b7c0
	movs r1, #2	@ 0002b7c0 0221
.org 0x2b7c2
	strb r1, [r0, #0]	@ 0002b7c2 0170
.org 0x2b7c4
	bx lr	@ 0002b7c4 7047
