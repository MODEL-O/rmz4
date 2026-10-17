@ FUN_08091af8  entry 0x08091af8  size 76
.thumb
.org 0x91af8
FUN_08091af8:
	push {r4, r5, lr}	@ 00091af8 30b5
.org 0x91afa
	adds r4, r0, #0	@ 00091afa 041c
.org 0x91afc
	ldrb r5, [r4, #14]	@ 00091afc a57b
.org 0x91afe
	cmp r5, #0	@ 00091afe 002d
.org 0x91b00
	bne.n 0x91b22	@ 00091b00 0fd1
.org 0x91b02
	ldr r1, [pc, #64]	@ 00091b02 1049
.org 0x91b04
	bl 0x1cf00	@ 00091b04 8bf7fcf9
.org 0x91b08
	adds r0, r4, #0	@ 00091b08 201c
.org 0x91b0a
	adds r0, #116	@ 00091b0a 7430
.org 0x91b0c
	ldr r1, [pc, #56]	@ 00091b0c 0e49
.org 0x91b0e
	bl 0x5784	@ 00091b0e 73f739fe
.org 0x91b12
	movs r0, #32	@ 00091b12 2020
.org 0x91b14
	strb r0, [r4, #18]	@ 00091b14 a074
.org 0x91b16
	adds r0, r4, #0	@ 00091b16 201c
.org 0x91b18
	adds r0, #193	@ 00091b18 c130
.org 0x91b1a
	strb r5, [r0, #0]	@ 00091b1a 0570
.org 0x91b1c
	ldrb r0, [r4, #14]	@ 00091b1c a07b
.org 0x91b1e
	adds r0, #1	@ 00091b1e 0130
.org 0x91b20
	strb r0, [r4, #14]	@ 00091b20 a073
.org 0x91b22
	adds r0, r4, #0	@ 00091b22 201c
.org 0x91b24
	bl 0x1cff0	@ 00091b24 8bf764fa
.org 0x91b28
	ldrb r0, [r4, #18]	@ 00091b28 a07c
.org 0x91b2a
	subs r0, #1	@ 00091b2a 0138
.org 0x91b2c
	strb r0, [r4, #18]	@ 00091b2c a074
.org 0x91b2e
	lsls r0, r0, #24	@ 00091b2e 0006
.org 0x91b30
	lsrs r0, r0, #24	@ 00091b30 000e
.org 0x91b32
	cmp r0, #255	@ 00091b32 ff28
.org 0x91b34
	bne.n 0x91b3e	@ 00091b34 03d1
.org 0x91b36
	movs r0, #3	@ 00091b36 0320
.org 0x91b38
	strb r0, [r4, #13]	@ 00091b38 6073
.org 0x91b3a
	movs r0, #0	@ 00091b3a 0020
.org 0x91b3c
	strb r0, [r4, #14]	@ 00091b3c a073
.org 0x91b3e
	pop {r4, r5}	@ 00091b3e 30bc
.org 0x91b40
	pop {r0}	@ 00091b40 01bc
.org 0x91b42
	bx r0	@ 00091b42 0047
