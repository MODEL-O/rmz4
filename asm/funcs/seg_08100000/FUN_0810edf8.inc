@ FUN_0810edf8  entry 0x0810edf8  size 28
.thumb
.org 0x10edf8
FUN_0810edf8:
	push {r4, r5, r6, lr}	@ 0010edf8 70b5
.org 0x10edfa
	adds r5, r0, #0	@ 0010edfa 051c
.org 0x10edfc
	ldrb r0, [r5, #13]	@ 0010edfc 687b
.org 0x10edfe
	cmp r0, #8	@ 0010edfe 0828
.org 0x10ee00
	bls.n 0x10ee04	@ 0010ee00 00d9
.org 0x10ee02
	b.n 0x10f272	@ 0010ee02 36e2
.org 0x10ee04
	lsls r0, r0, #2	@ 0010ee04 8000
.org 0x10ee06
	ldr r1, [pc, #8]	@ 0010ee06 0249
.org 0x10ee08
	adds r0, r0, r1	@ 0010ee08 4018
.org 0x10ee0a
	ldr r0, [r0, #0]	@ 0010ee0a 0068
.org 0x10ee0c
	mov pc, r0	@ 0010ee0c 8746
.org 0x10ee0e
	.byte 0x00	@ 0010ee0e data
.org 0x10ee0f
	.byte 0x00	@ 0010ee0f data
.org 0x10ee10
	.byte 0x14,0xee,0x10,0x08	@ 0010ee10 data
