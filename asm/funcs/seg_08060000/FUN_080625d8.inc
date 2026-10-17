@ FUN_080625d8  entry 0x080625d8  size 42
.thumb
.org 0x625d8
FUN_080625d8:
	push {r4, r5, r6, lr}	@ 000625d8 70b5
.org 0x625da
	sub sp, #8	@ 000625da 82b0
.org 0x625dc
	adds r6, r0, #0	@ 000625dc 061c
.org 0x625de
	ldr r0, [pc, #28]	@ 000625de 0748
.org 0x625e0
	ldr r1, [r0, #4]	@ 000625e0 4168
.org 0x625e2
	ldr r0, [r0, #0]	@ 000625e2 0068
.org 0x625e4
	str r0, [sp, #0]	@ 000625e4 0090
.org 0x625e6
	str r1, [sp, #4]	@ 000625e6 0191
.org 0x625e8
	ldrb r0, [r6, #15]	@ 000625e8 f07b
.org 0x625ea
	cmp r0, #7	@ 000625ea 0728
.org 0x625ec
	bls.n 0x625f0	@ 000625ec 00d9
.org 0x625ee
	b.n 0x627a2	@ 000625ee d8e0
.org 0x625f0
	lsls r0, r0, #2	@ 000625f0 8000
.org 0x625f2
	ldr r1, [pc, #12]	@ 000625f2 0349
.org 0x625f4
	adds r0, r0, r1	@ 000625f4 4018
.org 0x625f6
	ldr r0, [r0, #0]	@ 000625f6 0068
.org 0x625f8
	mov pc, r0	@ 000625f8 8746
.org 0x625fa
	.byte 0x00	@ 000625fa data
.org 0x625fb
	.byte 0x00	@ 000625fb data
.org 0x625fc
	.byte 0xf8,0x97,0x12,0x08	@ 000625fc data
.org 0x62600
	.byte 0x04,0x26,0x06,0x08	@ 00062600 data
