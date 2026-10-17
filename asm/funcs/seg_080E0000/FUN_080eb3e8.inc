@ FUN_080eb3e8  entry 0x080eb3e8  size 36
.thumb
.org 0xeb3e8
FUN_080eb3e8:
	push {r4, r5, r6, r7, lr}	@ 000eb3e8 f0b5
.org 0xeb3ea
	mov r7, r8	@ 000eb3ea 4746
.org 0xeb3ec
	push {r7}	@ 000eb3ec 80b4
.org 0xeb3ee
	adds r6, r0, #0	@ 000eb3ee 061c
.org 0xeb3f0
	ldrb r0, [r6, #14]	@ 000eb3f0 b07b
.org 0xeb3f2
	cmp r0, #5	@ 000eb3f2 0528
.org 0xeb3f4
	bls.n 0xeb3f8	@ 000eb3f4 00d9
.org 0xeb3f6
	b.n 0xeb7be	@ 000eb3f6 e2e1
.org 0xeb3f8
	lsls r0, r0, #2	@ 000eb3f8 8000
.org 0xeb3fa
	ldr r1, [pc, #8]	@ 000eb3fa 0249
.org 0xeb3fc
	adds r0, r0, r1	@ 000eb3fc 4018
.org 0xeb3fe
	ldr r0, [r0, #0]	@ 000eb3fe 0068
.org 0xeb400
	mov pc, r0	@ 000eb400 8746
.org 0xeb402
	.byte 0x00	@ 000eb402 data
.org 0xeb403
	.byte 0x00	@ 000eb403 data
.org 0xeb404
	.byte 0x08,0xb4,0x0e,0x08	@ 000eb404 data
.org 0xeb408
	.byte 0x20,0xb4,0x0e,0x08	@ 000eb408 data
