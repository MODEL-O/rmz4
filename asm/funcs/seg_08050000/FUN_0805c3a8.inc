@ FUN_0805c3a8  entry 0x0805c3a8  size 10
.thumb
.org 0x5c3a8
FUN_0805c3a8:
	ldr r0, [pc, #8]	@ 0005c3a8 0248
.org 0x5c3aa
	ldr r0, [r0, #56]	@ 0005c3aa 806b
.org 0x5c3ac
	ldr r1, [pc, #8]	@ 0005c3ac 0249
.org 0x5c3ae
	adds r0, r0, r1	@ 0005c3ae 4018
.org 0x5c3b0
	bx lr	@ 0005c3b0 7047
