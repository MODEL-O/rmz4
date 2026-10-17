@ FUN_08105f00  entry 0x08105f00  size 26
.thumb
.org 0x105f00
FUN_08105f00:
	push {r4, lr}	@ 00105f00 10b5
.org 0x105f02
	adds r4, r0, #0	@ 00105f02 041c
.org 0x105f04
	ldrb r0, [r4, #13]	@ 00105f04 607b
.org 0x105f06
	cmp r0, #4	@ 00105f06 0428
.org 0x105f08
	bhi.n 0x105ff0	@ 00105f08 72d8
.org 0x105f0a
	lsls r0, r0, #2	@ 00105f0a 8000
.org 0x105f0c
	ldr r1, [pc, #4]	@ 00105f0c 0149
.org 0x105f0e
	adds r0, r0, r1	@ 00105f0e 4018
.org 0x105f10
	ldr r0, [r0, #0]	@ 00105f10 0068
.org 0x105f12
	mov pc, r0	@ 00105f12 8746
.org 0x105f14
	.byte 0x18,0x5f,0x10,0x08	@ 00105f14 data
.org 0x105f18
	.byte 0x2c,0x5f,0x10,0x08	@ 00105f18 data
