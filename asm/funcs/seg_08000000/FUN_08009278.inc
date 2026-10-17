@ FUN_08009278  entry 0x08009278  size 30
.thumb
.org 0x9278
FUN_08009278:
	push {lr}	@ 00009278 00b5
.org 0x927a
	adds r2, r0, #0	@ 0000927a 021c
.org 0x927c
	ldr r0, [pc, #16]	@ 0000927c 0448
.org 0x927e
	cmp r2, r0	@ 0000927e 8242
.org 0x9280
	ble.n 0x9298	@ 00009280 0add
.org 0x9282
	ldr r3, [pc, #16]	@ 00009282 044b
.org 0x9284
	adds r0, r2, r3	@ 00009284 d018
.org 0x9286
	lsls r0, r0, #1	@ 00009286 4000
.org 0x9288
	cmp r1, r0	@ 00009288 8142
.org 0x928a
	bge.n 0x9298	@ 0000928a 05da
.org 0x928c
	mvns r0, r1	@ 0000928c c843
.org 0x928e
	b.n 0x929a	@ 0000928e 04e0
.org 0x9290
	.byte 0xff,0x07,0x00,0x00	@ 00009290 data
.org 0x9294
	.byte 0x00,0xf8,0xff,0xff	@ 00009294 data
