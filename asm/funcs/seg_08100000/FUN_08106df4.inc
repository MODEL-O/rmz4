@ FUN_08106df4  entry 0x08106df4  size 28
.thumb
.org 0x106df4
FUN_08106df4:
	push {r4, lr}	@ 00106df4 10b5
.org 0x106df6
	adds r4, r0, #0	@ 00106df6 041c
.org 0x106df8
	ldrb r0, [r4, #13]	@ 00106df8 607b
.org 0x106dfa
	cmp r0, #7	@ 00106dfa 0728
.org 0x106dfc
	bls.n 0x106e00	@ 00106dfc 00d9
.org 0x106dfe
	b.n 0x106f20	@ 00106dfe 8fe0
.org 0x106e00
	lsls r0, r0, #2	@ 00106e00 8000
.org 0x106e02
	ldr r1, [pc, #8]	@ 00106e02 0249
.org 0x106e04
	adds r0, r0, r1	@ 00106e04 4018
.org 0x106e06
	ldr r0, [r0, #0]	@ 00106e06 0068
.org 0x106e08
	mov pc, r0	@ 00106e08 8746
.org 0x106e0a
	.byte 0x00	@ 00106e0a data
.org 0x106e0b
	.byte 0x00	@ 00106e0b data
.org 0x106e0c
	.byte 0x10,0x6e,0x10,0x08	@ 00106e0c data
