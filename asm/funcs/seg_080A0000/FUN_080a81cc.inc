@ FUN_080a81cc  entry 0x080a81cc  size 48
.thumb
.org 0xa81cc
FUN_080a81cc:
	push {r4, r5, r6, r7, lr}	@ 000a81cc f0b5
.org 0xa81ce
	mov r7, r9	@ 000a81ce 4f46
.org 0xa81d0
	mov r6, r8	@ 000a81d0 4646
.org 0xa81d2
	push {r6, r7}	@ 000a81d2 c0b4
.org 0xa81d4
	adds r7, r0, #0	@ 000a81d4 071c
.org 0xa81d6
	ldr r4, [r7, #40]	@ 000a81d6 bc6a
.org 0xa81d8
	ldrb r0, [r7, #14]	@ 000a81d8 b87b
.org 0xa81da
	cmp r0, #6	@ 000a81da 0628
.org 0xa81dc
	bls.n 0xa81e0	@ 000a81dc 00d9
.org 0xa81de
	b.n 0xa8504	@ 000a81de 91e1
.org 0xa81e0
	lsls r0, r0, #2	@ 000a81e0 8000
.org 0xa81e2
	ldr r1, [pc, #8]	@ 000a81e2 0249
.org 0xa81e4
	adds r0, r0, r1	@ 000a81e4 4018
.org 0xa81e6
	ldr r0, [r0, #0]	@ 000a81e6 0068
.org 0xa81e8
	mov pc, r0	@ 000a81e8 8746
.org 0xa81ea
	.byte 0x00	@ 000a81ea data
.org 0xa81eb
	.byte 0x00	@ 000a81eb data
.org 0xa81ec
	.byte 0xf0,0x81,0x0a,0x08	@ 000a81ec data
.org 0xa81f0
	.byte 0x0c,0x82,0x0a,0x08	@ 000a81f0 data
.org 0xa81f4
	.byte 0x3c,0x82,0x0a,0x08	@ 000a81f4 data
.org 0xa81f8
	.byte 0xb0,0x82,0x0a,0x08	@ 000a81f8 data
