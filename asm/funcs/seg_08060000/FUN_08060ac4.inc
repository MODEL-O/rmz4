@ FUN_08060ac4  entry 0x08060ac4  size 68
.thumb
.org 0x60ac4
FUN_08060ac4:
	push {r4, lr}	@ 00060ac4 10b5
.org 0x60ac6
	adds r4, r0, #0	@ 00060ac6 041c
.org 0x60ac8
	ldrb r0, [r4, #14]	@ 00060ac8 a07b
.org 0x60aca
	cmp r0, #0	@ 00060aca 0028
.org 0x60acc
	bne.n 0x60ae6	@ 00060acc 0bd1
.org 0x60ace
	ldr r1, [pc, #56]	@ 00060ace 0e49
.org 0x60ad0
	adds r0, r4, #0	@ 00060ad0 201c
.org 0x60ad2
	bl 0x1cf00	@ 00060ad2 bcf715fa
.org 0x60ad6
	movs r0, #32	@ 00060ad6 2020
.org 0x60ad8
	strb r0, [r4, #18]	@ 00060ad8 a074
.org 0x60ada
	movs r0, #45	@ 00060ada 2d20
.org 0x60adc
	bl 0x2b10	@ 00060adc a2f718f8
.org 0x60ae0
	ldrb r0, [r4, #14]	@ 00060ae0 a07b
.org 0x60ae2
	adds r0, #1	@ 00060ae2 0130
.org 0x60ae4
	strb r0, [r4, #14]	@ 00060ae4 a073
.org 0x60ae6
	adds r0, r4, #0	@ 00060ae6 201c
.org 0x60ae8
	bl 0x1cff0	@ 00060ae8 bcf782fa
.org 0x60aec
	ldrb r0, [r4, #18]	@ 00060aec a07c
.org 0x60aee
	subs r0, #1	@ 00060aee 0138
.org 0x60af0
	strb r0, [r4, #18]	@ 00060af0 a074
.org 0x60af2
	lsls r0, r0, #24	@ 00060af2 0006
.org 0x60af4
	lsrs r0, r0, #24	@ 00060af4 000e
.org 0x60af6
	cmp r0, #255	@ 00060af6 ff28
.org 0x60af8
	bne.n 0x60b02	@ 00060af8 03d1
.org 0x60afa
	movs r0, #18	@ 00060afa 1220
.org 0x60afc
	strb r0, [r4, #13]	@ 00060afc 6073
.org 0x60afe
	movs r0, #0	@ 00060afe 0020
.org 0x60b00
	strb r0, [r4, #14]	@ 00060b00 a073
.org 0x60b02
	pop {r4}	@ 00060b02 10bc
.org 0x60b04
	pop {r0}	@ 00060b04 01bc
.org 0x60b06
	bx r0	@ 00060b06 0047
