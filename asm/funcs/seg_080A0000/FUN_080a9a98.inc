@ FUN_080a9a98  entry 0x080a9a98  size 128
.thumb
.org 0xa9a98
FUN_080a9a98:
	push {r4, r5, lr}	@ 000a9a98 30b5
.org 0xa9a9a
	adds r4, r0, #0	@ 000a9a9a 041c
.org 0xa9a9c
	adds r5, r4, #0	@ 000a9a9c 251c
.org 0xa9a9e
	adds r5, #84	@ 000a9a9e 5435
.org 0xa9aa0
	adds r0, r5, #0	@ 000a9aa0 281c
.org 0xa9aa2
	bl 0x14948	@ 000a9aa2 6af751ff
.org 0xa9aa6
	lsls r0, r0, #24	@ 000a9aa6 0006
.org 0xa9aa8
	lsrs r0, r0, #24	@ 000a9aa8 000e
.org 0xa9aaa
	cmp r0, #0	@ 000a9aaa 0028
.org 0xa9aac
	bne.n 0xa9abc	@ 000a9aac 06d1
.org 0xa9aae
	adds r1, r4, #0	@ 000a9aae 211c
.org 0xa9ab0
	adds r1, #181	@ 000a9ab0 b531
.org 0xa9ab2
	strb r0, [r1, #0]	@ 000a9ab2 0870
.org 0xa9ab4
	ldr r0, [pc, #0]	@ 000a9ab4 0048
.org 0xa9ab6
	b.n 0xa9b1a	@ 000a9ab6 30e0
.org 0xa9ab8
	.byte 0x00,0xfd,0xff,0xff	@ 000a9ab8 data
.org 0xa9abc
	ldrb r0, [r4, #16]	@ 000a9abc 207c
.org 0xa9abe
	cmp r0, #1	@ 000a9abe 0128
.org 0xa9ac0
	bne.n 0xa9ae4	@ 000a9ac0 10d1
.org 0xa9ac2
	adds r0, r5, #0	@ 000a9ac2 281c
.org 0xa9ac4
	bl 0x14948	@ 000a9ac4 6af740ff
.org 0xa9ac8
	lsls r0, r0, #24	@ 000a9ac8 0006
.org 0xa9aca
	lsrs r0, r0, #24	@ 000a9aca 000e
.org 0xa9acc
	cmp r0, #3	@ 000a9acc 0328
.org 0xa9ace
	bne.n 0xa9ae4	@ 000a9ace 09d1
.org 0xa9ad0
	adds r1, r4, #0	@ 000a9ad0 211c
.org 0xa9ad2
	adds r1, #181	@ 000a9ad2 b531
.org 0xa9ad4
	movs r0, #2	@ 000a9ad4 0220
.org 0xa9ad6
	strb r0, [r1, #0]	@ 000a9ad6 0870
.org 0xa9ad8
	ldr r0, [pc, #4]	@ 000a9ad8 0148
.org 0xa9ada
	str r0, [r4, #96]	@ 000a9ada 2066
.org 0xa9adc
	movs r0, #20	@ 000a9adc 1420
.org 0xa9ade
	b.n 0xa9b1e	@ 000a9ade 1ee0
.org 0xa9ae0
	.byte 0x00,0xfe,0xff,0xff	@ 000a9ae0 data
.org 0xa9ae4
	ldrb r0, [r4, #16]	@ 000a9ae4 207c
.org 0xa9ae6
	cmp r0, #0	@ 000a9ae6 0028
.org 0xa9ae8
	bne.n 0xa9b10	@ 000a9ae8 12d1
.org 0xa9aea
	adds r0, r4, #0	@ 000a9aea 201c
.org 0xa9aec
	adds r0, #84	@ 000a9aec 5430
.org 0xa9aee
	bl 0x14948	@ 000a9aee 6af72bff
.org 0xa9af2
	lsls r0, r0, #24	@ 000a9af2 0006
.org 0xa9af4
	lsrs r0, r0, #24	@ 000a9af4 000e
.org 0xa9af6
	cmp r0, #4	@ 000a9af6 0428
.org 0xa9af8
	bne.n 0xa9b10	@ 000a9af8 0ad1
.org 0xa9afa
	adds r1, r4, #0	@ 000a9afa 211c
.org 0xa9afc
	adds r1, #181	@ 000a9afc b531
.org 0xa9afe
	movs r0, #2	@ 000a9afe 0220
.org 0xa9b00
	strb r0, [r1, #0]	@ 000a9b00 0870
.org 0xa9b02
	ldr r0, [pc, #8]	@ 000a9b02 0248
.org 0xa9b04
	str r0, [r4, #96]	@ 000a9b04 2066
.org 0xa9b06
	movs r0, #20	@ 000a9b06 1420
.org 0xa9b08
	b.n 0xa9b1e	@ 000a9b08 09e0
.org 0xa9b0a
	.byte 0x00	@ 000a9b0a data
.org 0xa9b0b
	.byte 0x00	@ 000a9b0b data
.org 0xa9b0c
	.byte 0x00,0xfe,0xff,0xff	@ 000a9b0c data
.org 0xa9b10
	adds r1, r4, #0	@ 000a9b10 211c
.org 0xa9b12
	adds r1, #181	@ 000a9b12 b531
.org 0xa9b14
	movs r0, #1	@ 000a9b14 0120
.org 0xa9b16
	strb r0, [r1, #0]	@ 000a9b16 0870
