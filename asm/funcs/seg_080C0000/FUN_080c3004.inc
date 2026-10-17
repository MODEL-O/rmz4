@ FUN_080c3004  entry 0x080c3004  size 30
.thumb
.org 0xc3004
FUN_080c3004:
	push {lr}	@ 000c3004 00b5
.org 0xc3006
	adds r2, r0, #0	@ 000c3006 021c
.org 0xc3008
	ldr r1, [r2, #40]	@ 000c3008 916a
.org 0xc300a
	ldrb r0, [r1, #12]	@ 000c300a 087b
.org 0xc300c
	cmp r0, #1	@ 000c300c 0128
.org 0xc300e
	bhi.n 0xc3018	@ 000c300e 03d8
.org 0xc3010
	adds r1, #181	@ 000c3010 b531
.org 0xc3012
	ldrb r0, [r1, #0]	@ 000c3012 0878
.org 0xc3014
	subs r0, #1	@ 000c3014 0138
.org 0xc3016
	strb r0, [r1, #0]	@ 000c3016 0870
.org 0xc3018
	adds r0, r2, #0	@ 000c3018 101c
.org 0xc301a
	bl 0xbd3f8	@ 000c301a faf7edf9
.org 0xc301e
	pop {r0}	@ 000c301e 01bc
.org 0xc3020
	bx r0	@ 000c3020 0047
