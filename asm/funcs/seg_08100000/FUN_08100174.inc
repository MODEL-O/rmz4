@ FUN_08100174  entry 0x08100174  size 36
.thumb
.org 0x100174
FUN_08100174:
	push {r4, r5, r6, r7, lr}	@ 00100174 f0b5
.org 0x100176
	mov r7, r8	@ 00100176 4746
.org 0x100178
	push {r7}	@ 00100178 80b4
.org 0x10017a
	adds r6, r0, #0	@ 0010017a 061c
.org 0x10017c
	ldrb r0, [r6, #14]	@ 0010017c b07b
.org 0x10017e
	cmp r0, #5	@ 0010017e 0528
.org 0x100180
	bls.n 0x100184	@ 00100180 00d9
.org 0x100182
	b.n 0x1003ac	@ 00100182 13e1
.org 0x100184
	lsls r0, r0, #2	@ 00100184 8000
.org 0x100186
	ldr r1, [pc, #8]	@ 00100186 0249
.org 0x100188
	adds r0, r0, r1	@ 00100188 4018
.org 0x10018a
	ldr r0, [r0, #0]	@ 0010018a 0068
.org 0x10018c
	mov pc, r0	@ 0010018c 8746
.org 0x10018e
	.byte 0x00	@ 0010018e data
.org 0x10018f
	.byte 0x00	@ 0010018f data
.org 0x100190
	.byte 0x94,0x01,0x10,0x08	@ 00100190 data
.org 0x100194
	.byte 0xac,0x01,0x10,0x08	@ 00100194 data
