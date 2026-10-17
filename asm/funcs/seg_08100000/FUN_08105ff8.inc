@ FUN_08105ff8  entry 0x08105ff8  size 28
.thumb
.org 0x105ff8
FUN_08105ff8:
	push {r4, lr}	@ 00105ff8 10b5
.org 0x105ffa
	adds r4, r0, #0	@ 00105ffa 041c
.org 0x105ffc
	ldrb r0, [r4, #13]	@ 00105ffc 607b
.org 0x105ffe
	cmp r0, #16	@ 00105ffe 1028
.org 0x106000
	bls.n 0x106004	@ 00106000 00d9
.org 0x106002
	b.n 0x1062f6	@ 00106002 78e1
.org 0x106004
	lsls r0, r0, #2	@ 00106004 8000
.org 0x106006
	ldr r1, [pc, #8]	@ 00106006 0249
.org 0x106008
	adds r0, r0, r1	@ 00106008 4018
.org 0x10600a
	ldr r0, [r0, #0]	@ 0010600a 0068
.org 0x10600c
	mov pc, r0	@ 0010600c 8746
.org 0x10600e
	.byte 0x00	@ 0010600e data
.org 0x10600f
	.byte 0x00	@ 0010600f data
.org 0x106010
	.byte 0x14,0x60,0x10,0x08	@ 00106010 data
