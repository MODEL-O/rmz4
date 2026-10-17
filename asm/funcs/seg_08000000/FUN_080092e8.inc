@ FUN_080092e8  entry 0x080092e8  size 36
.thumb
.org 0x92e8
FUN_080092e8:
	push {lr}	@ 000092e8 00b5
.org 0x92ea
	adds r2, r0, #0	@ 000092ea 021c
.org 0x92ec
	ldr r0, [pc, #24]	@ 000092ec 0648
.org 0x92ee
	cmp r2, r0	@ 000092ee 8242
.org 0x92f0
	ble.n 0x9314	@ 000092f0 10dd
.org 0x92f2
	ldr r0, [pc, #24]	@ 000092f2 0648
.org 0x92f4
	cmp r2, r0	@ 000092f4 8242
.org 0x92f6
	bgt.n 0x9302	@ 000092f6 04dc
.org 0x92f8
	ldr r3, [pc, #20]	@ 000092f8 054b
.org 0x92fa
	adds r0, r2, r3	@ 000092fa d018
.org 0x92fc
	lsls r0, r0, #2	@ 000092fc 8000
.org 0x92fe
	cmp r1, r0	@ 000092fe 8142
.org 0x9300
	bge.n 0x9314	@ 00009300 08da
.org 0x9302
	mvns r0, r1	@ 00009302 c843
.org 0x9304
	b.n 0x9316	@ 00009304 07e0
.org 0x9306
	.byte 0x00	@ 00009306 data
.org 0x9307
	.byte 0x00	@ 00009307 data
.org 0x9308
	.byte 0xff,0x07,0x00,0x00	@ 00009308 data
