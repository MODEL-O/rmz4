@ FUN_08106f28  entry 0x08106f28  size 28
.thumb
.org 0x106f28
FUN_08106f28:
	push {r4, r5, lr}	@ 00106f28 30b5
.org 0x106f2a
	adds r5, r0, #0	@ 00106f2a 051c
.org 0x106f2c
	ldrb r0, [r5, #13]	@ 00106f2c 687b
.org 0x106f2e
	cmp r0, #16	@ 00106f2e 1028
.org 0x106f30
	bls.n 0x106f34	@ 00106f30 00d9
.org 0x106f32
	b.n 0x10718e	@ 00106f32 2ce1
.org 0x106f34
	lsls r0, r0, #2	@ 00106f34 8000
.org 0x106f36
	ldr r1, [pc, #8]	@ 00106f36 0249
.org 0x106f38
	adds r0, r0, r1	@ 00106f38 4018
.org 0x106f3a
	ldr r0, [r0, #0]	@ 00106f3a 0068
.org 0x106f3c
	mov pc, r0	@ 00106f3c 8746
.org 0x106f3e
	.byte 0x00	@ 00106f3e data
.org 0x106f3f
	.byte 0x00	@ 00106f3f data
.org 0x106f40
	.byte 0x44,0x6f,0x10,0x08	@ 00106f40 data
