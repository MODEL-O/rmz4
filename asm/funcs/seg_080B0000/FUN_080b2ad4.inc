@ FUN_080b2ad4  entry 0x080b2ad4  size 68
.thumb
.org 0xb2ad4
FUN_080b2ad4:
	push {r4, r5, lr}	@ 000b2ad4 30b5
.org 0xb2ad6
	adds r4, r0, #0	@ 000b2ad6 041c
.org 0xb2ad8
	bl 0xb2b94	@ 000b2ad8 00f05cf8
.org 0xb2adc
	adds r5, r4, #0	@ 000b2adc 251c
.org 0xb2ade
	adds r5, #192	@ 000b2ade c035
.org 0xb2ae0
	ldr r0, [r5, #0]	@ 000b2ae0 2868
.org 0xb2ae2
	bl 0x2b3e4	@ 000b2ae2 78f77ffc
.org 0xb2ae6
	cmp r0, #0	@ 000b2ae6 0028
.org 0xb2ae8
	beq.n 0xb2b18	@ 000b2ae8 16d0
.org 0xb2aea
	adds r0, r4, #0	@ 000b2aea 201c
.org 0xb2aec
	adds r0, #116	@ 000b2aec 7430
.org 0xb2aee
	ldr r1, [pc, #24]	@ 000b2aee 0649
.org 0xb2af0
	bl 0x5784	@ 000b2af0 52f748fe
.org 0xb2af4
	movs r1, #0	@ 000b2af4 0021
.org 0xb2af6
	str r1, [r5, #0]	@ 000b2af6 2960
.org 0xb2af8
	ldrb r0, [r4, #17]	@ 000b2af8 607c
.org 0xb2afa
	cmp r0, #1	@ 000b2afa 0128
.org 0xb2afc
	bhi.n 0xb2b0c	@ 000b2afc 06d8
.org 0xb2afe
	movs r0, #3	@ 000b2afe 0320
.org 0xb2b00
	strb r0, [r4, #13]	@ 000b2b00 6073
.org 0xb2b02
	strb r1, [r4, #14]	@ 000b2b02 a173
.org 0xb2b04
	b.n 0xb2b18	@ 000b2b04 08e0
.org 0xb2b06
	.byte 0x00	@ 000b2b06 data
.org 0xb2b07
	.byte 0x00	@ 000b2b07 data
.org 0xb2b08
	.byte 0x64,0x36,0x86,0x08	@ 000b2b08 data
.org 0xb2b0c
	strb r1, [r4, #13]	@ 000b2b0c 6173
.org 0xb2b0e
	movs r0, #1	@ 000b2b0e 0120
.org 0xb2b10
	strb r0, [r4, #15]	@ 000b2b10 e073
.org 0xb2b12
	strb r1, [r4, #14]	@ 000b2b12 a173
.org 0xb2b14
	movs r0, #24	@ 000b2b14 1820
.org 0xb2b16
	strb r0, [r4, #18]	@ 000b2b16 a074
