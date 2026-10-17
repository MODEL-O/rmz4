@ FUN_0800d7e4  entry 0x0800d7e4  size 12
.thumb
.org 0xd7e4
FUN_0800d7e4:
	ldr r2, [pc, #8]	@ 0000d7e4 024a
.org 0xd7e6
	ldr r1, [r0, #4]	@ 0000d7e6 4168
.org 0xd7e8
	ldr r0, [r0, #0]	@ 0000d7e8 0068
.org 0xd7ea
	str r0, [r2, #0]	@ 0000d7ea 1060
.org 0xd7ec
	str r1, [r2, #4]	@ 0000d7ec 5160
.org 0xd7ee
	bx lr	@ 0000d7ee 7047
