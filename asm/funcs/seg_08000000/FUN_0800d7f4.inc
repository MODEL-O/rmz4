@ FUN_0800d7f4  entry 0x0800d7f4  size 10
.thumb
.org 0xd7f4
FUN_0800d7f4:
	ldr r1, [pc, #8]	@ 0000d7f4 0249
.org 0xd7f6
	ldr r2, [pc, #12]	@ 0000d7f6 034a
.org 0xd7f8
	adds r1, r1, r2	@ 0000d7f8 8918
.org 0xd7fa
	strb r0, [r1, #0]	@ 0000d7fa 0870
.org 0xd7fc
	bx lr	@ 0000d7fc 7047
