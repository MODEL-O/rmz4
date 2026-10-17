@ FUN_080f08e0  entry 0x080f08e0  size 32
.thumb
.org 0xf08e0
FUN_080f08e0:
	push {r4, r5, r6, r7, lr}	@ 000f08e0 f0b5
.org 0xf08e2
	sub sp, #16	@ 000f08e2 84b0
.org 0xf08e4
	adds r5, r0, #0	@ 000f08e4 051c
.org 0xf08e6
	ldrb r0, [r5, #13]	@ 000f08e6 687b
.org 0xf08e8
	cmp r0, #5	@ 000f08e8 0528
.org 0xf08ea
	bls.n 0xf08ee	@ 000f08ea 00d9
.org 0xf08ec
	b.n 0xf0b42	@ 000f08ec 29e1
.org 0xf08ee
	lsls r0, r0, #2	@ 000f08ee 8000
.org 0xf08f0
	ldr r1, [pc, #4]	@ 000f08f0 0149
.org 0xf08f2
	adds r0, r0, r1	@ 000f08f2 4018
.org 0xf08f4
	ldr r0, [r0, #0]	@ 000f08f4 0068
.org 0xf08f6
	mov pc, r0	@ 000f08f6 8746
.org 0xf08f8
	.byte 0xfc,0x08,0x0f,0x08	@ 000f08f8 data
.org 0xf08fc
	.byte 0x14,0x09,0x0f,0x08	@ 000f08fc data
