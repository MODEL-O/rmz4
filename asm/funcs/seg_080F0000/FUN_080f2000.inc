@ FUN_080f2000  entry 0x080f2000  size 26
.thumb
.org 0xf2000
FUN_080f2000:
	push {r4, r5, lr}	@ 000f2000 30b5
.org 0xf2002
	adds r5, r0, #0	@ 000f2002 051c
.org 0xf2004
	ldrb r0, [r5, #17]	@ 000f2004 687c
.org 0xf2006
	cmp r0, #4	@ 000f2006 0428
.org 0xf2008
	bhi.n 0xf20bc	@ 000f2008 58d8
.org 0xf200a
	lsls r0, r0, #2	@ 000f200a 8000
.org 0xf200c
	ldr r1, [pc, #4]	@ 000f200c 0149
.org 0xf200e
	adds r0, r0, r1	@ 000f200e 4018
.org 0xf2010
	ldr r0, [r0, #0]	@ 000f2010 0068
.org 0xf2012
	mov pc, r0	@ 000f2012 8746
.org 0xf2014
	.byte 0x18,0x20,0x0f,0x08	@ 000f2014 data
.org 0xf2018
	.byte 0x2c,0x20,0x0f,0x08	@ 000f2018 data
