@ FUN_08118a54  entry 0x08118a54  size 118
.thumb
.org 0x118a54
FUN_08118a54:
	push {r4, r5, r6, r7, lr}	@ 00118a54 f0b5
.org 0x118a56
	mov r7, r8	@ 00118a56 4746
.org 0x118a58
	push {r7}	@ 00118a58 80b4
.org 0x118a5a
	adds r6, r0, #0	@ 00118a5a 061c
.org 0x118a5c
	ldr r1, [pc, #56]	@ 00118a5c 0e49
.org 0x118a5e
	adds r0, r6, r1	@ 00118a5e 7018
.org 0x118a60
	ldr r7, [r0, #0]	@ 00118a60 0768
.org 0x118a62
	adds r0, r6, #0	@ 00118a62 301c
.org 0x118a64
	bl 0x118248	@ 00118a64 fff7f0fb
.org 0x118a68
	lsls r0, r0, #24	@ 00118a68 0006
.org 0x118a6a
	lsrs r5, r0, #24	@ 00118a6a 050e
.org 0x118a6c
	cmp r5, #0	@ 00118a6c 002d
.org 0x118a6e
	beq.n 0x118a72	@ 00118a6e 00d0
.org 0x118a70
	b.n 0x118d36	@ 00118a70 61e1
.org 0x118a72
	ldr r2, [pc, #40]	@ 00118a72 0a4a
.org 0x118a74
	ldrh r1, [r2, #4]	@ 00118a74 9188
.org 0x118a76
	movs r0, #1	@ 00118a76 0120
.org 0x118a78
	ands r0, r1	@ 00118a78 0840
.org 0x118a7a
	adds r4, r2, #0	@ 00118a7a 141c
.org 0x118a7c
	cmp r0, #0	@ 00118a7c 0028
.org 0x118a7e
	beq.n 0x118aa8	@ 00118a7e 13d0
.org 0x118a80
	movs r0, #2	@ 00118a80 0220
.org 0x118a82
	bl 0x2b10	@ 00118a82 eaf645f8
.org 0x118a86
	ldr r2, [pc, #24]	@ 00118a86 064a
.org 0x118a88
	adds r0, r6, r2	@ 00118a88 b018
.org 0x118a8a
	ldrb r0, [r0, #0]	@ 00118a8a 0078
.org 0x118a8c
	adds r0, #1	@ 00118a8c 0130
.org 0x118a8e
	strb r0, [r6, #3]	@ 00118a8e f070
.org 0x118a90
	ldr r1, [pc, #16]	@ 00118a90 0449
.org 0x118a92
	adds r0, r6, r1	@ 00118a92 7018
.org 0x118a94
	strb r5, [r0, #0]	@ 00118a94 0570
.org 0x118a96
	b.n 0x118d36	@ 00118a96 4ee1
.org 0x118a98
	.byte 0xa8,0x63,0x00,0x00	@ 00118a98 data
.org 0x118a9c
	.byte 0x60,0x07,0x00,0x02	@ 00118a9c data
.org 0x118aa0
	.byte 0xcc,0x0d,0x00,0x00	@ 00118aa0 data
.org 0x118aa4
	.byte 0xf7,0x0d,0x00,0x00	@ 00118aa4 data
.org 0x118aa8
	ldr r2, [pc, #20]	@ 00118aa8 054a
.org 0x118aaa
	adds r0, r6, r2	@ 00118aaa b018
.org 0x118aac
	ldrb r0, [r0, #0]	@ 00118aac 0078
.org 0x118aae
	mov r8, r0	@ 00118aae 8046
.org 0x118ab0
	cmp r0, #4	@ 00118ab0 0428
.org 0x118ab2
	bls.n 0x118ab6	@ 00118ab2 00d9
.org 0x118ab4
	b.n 0x118d26	@ 00118ab4 37e1
.org 0x118ab6
	lsls r0, r0, #2	@ 00118ab6 8000
.org 0x118ab8
	ldr r1, [pc, #8]	@ 00118ab8 0249
.org 0x118aba
	adds r0, r0, r1	@ 00118aba 4018
.org 0x118abc
	ldr r0, [r0, #0]	@ 00118abc 0068
.org 0x118abe
	mov pc, r0	@ 00118abe 8746
.org 0x118ac0
	.byte 0xcc,0x0d,0x00,0x00	@ 00118ac0 data
.org 0x118ac4
	.byte 0xc8,0x8a,0x11,0x08	@ 00118ac4 data
.org 0x118ac8
	.byte 0xdc,0x8a,0x11,0x08	@ 00118ac8 data
