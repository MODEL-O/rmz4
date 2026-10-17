@ FUN_08118a44  entry 0x08118a44  size 10
.thumb
.org 0x118a44
FUN_08118a44:
	ldr r1, [pc, #8]	@ 00118a44 0249
.org 0x118a46
	adds r0, r0, r1	@ 00118a46 4018
.org 0x118a48
	movs r1, #1	@ 00118a48 0121
.org 0x118a4a
	strb r1, [r0, #2]	@ 00118a4a 8170
.org 0x118a4c
	bx lr	@ 00118a4c 7047
