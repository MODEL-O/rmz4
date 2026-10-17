@ FUN_08034a94  entry 0x08034a94  size 150
.thumb
.org 0x34a94
FUN_08034a94:
	push {r4, r5, r6, lr}	@ 00034a94 70b5
.org 0x34a96
	adds r4, r0, #0	@ 00034a96 041c
.org 0x34a98
	movs r0, #162	@ 00034a98 a220
.org 0x34a9a
	lsls r0, r0, #1	@ 00034a9a 4000
.org 0x34a9c
	adds r1, r4, r0	@ 00034a9c 2118
.org 0x34a9e
	adds r0, r4, #0	@ 00034a9e 201c
.org 0x34aa0
	bl 0x39fd8	@ 00034aa0 05f09afa
.org 0x34aa4
	lsls r0, r0, #24	@ 00034aa4 0006
.org 0x34aa6
	lsrs r3, r0, #24	@ 00034aa6 030e
.org 0x34aa8
	cmp r3, #0	@ 00034aa8 002b
.org 0x34aaa
	beq.n 0x34ad0	@ 00034aaa 11d0
.org 0x34aac
	ldr r0, [pc, #24]	@ 00034aac 0648
.org 0x34aae
	adds r1, r4, r0	@ 00034aae 2118
.org 0x34ab0
	movs r0, #255	@ 00034ab0 ff20
.org 0x34ab2
	strb r0, [r1, #0]	@ 00034ab2 0870
.org 0x34ab4
	adds r0, #1	@ 00034ab4 0130
.org 0x34ab6
	adds r1, r4, r0	@ 00034ab6 2118
.org 0x34ab8
	movs r2, #0	@ 00034ab8 0022
.org 0x34aba
	movs r0, #3	@ 00034aba 0320
.org 0x34abc
	strb r0, [r1, #0]	@ 00034abc 0870
.org 0x34abe
	ldr r1, [pc, #12]	@ 00034abe 0349
.org 0x34ac0
	adds r0, r4, r1	@ 00034ac0 6018
.org 0x34ac2
	strb r2, [r0, #0]	@ 00034ac2 0270
.org 0x34ac4
	b.n 0x34b26	@ 00034ac4 2fe0
.org 0x34ac6
	.byte 0x00	@ 00034ac6 data
.org 0x34ac7
	.byte 0x00	@ 00034ac7 data
.org 0x34ac8
	.byte 0x47,0x01,0x00,0x00	@ 00034ac8 data
.org 0x34acc
	.byte 0x01,0x01,0x00,0x00	@ 00034acc data
.org 0x34ad0
	adds r5, r4, #0	@ 00034ad0 251c
.org 0x34ad2
	adds r5, #180	@ 00034ad2 b435
.org 0x34ad4
	ldr r1, [pc, #28]	@ 00034ad4 0749
.org 0x34ad6
	adds r0, r4, r1	@ 00034ad6 6018
.org 0x34ad8
	ldrb r2, [r0, #0]	@ 00034ad8 0278
.org 0x34ada
	adds r1, r2, #0	@ 00034ada 111c
.org 0x34adc
	adds r6, r0, #0	@ 00034adc 061c
.org 0x34ade
	cmp r1, #255	@ 00034ade ff29
.org 0x34ae0
	beq.n 0x34af8	@ 00034ae0 0ad0
.org 0x34ae2
	movs r1, #162	@ 00034ae2 a221
.org 0x34ae4
	lsls r1, r1, #1	@ 00034ae4 4900
.org 0x34ae6
	adds r0, r4, r1	@ 00034ae6 6018
.org 0x34ae8
	strb r2, [r0, #0]	@ 00034ae8 0270
.org 0x34aea
	movs r0, #255	@ 00034aea ff20
.org 0x34aec
	strb r0, [r6, #0]	@ 00034aec 3070
.org 0x34aee
	adds r0, #1	@ 00034aee 0130
.org 0x34af0
	b.n 0x34b1a	@ 00034af0 13e0
.org 0x34af2
	.byte 0x00	@ 00034af2 data
.org 0x34af3
	.byte 0x00	@ 00034af3 data
.org 0x34af4
	.byte 0x47,0x01,0x00,0x00	@ 00034af4 data
.org 0x34af8
	ldr r0, [pc, #52]	@ 00034af8 0d48
.org 0x34afa
	adds r1, r4, r0	@ 00034afa 2118
.org 0x34afc
	ldrb r0, [r1, #0]	@ 00034afc 0878
.org 0x34afe
	cmp r0, #0	@ 00034afe 0028
.org 0x34b00
	beq.n 0x34b3a	@ 00034b00 1bd0
.org 0x34b02
	ldrb r0, [r5, #12]	@ 00034b02 287b
.org 0x34b04
	cmp r0, #4	@ 00034b04 0428
.org 0x34b06
	beq.n 0x34b0e	@ 00034b06 02d0
.org 0x34b08
	ldrb r0, [r5, #13]	@ 00034b08 687b
.org 0x34b0a
	cmp r0, #4	@ 00034b0a 0428
.org 0x34b0c
	bne.n 0x34b38	@ 00034b0c 14d1
.org 0x34b0e
	movs r0, #162	@ 00034b0e a220
.org 0x34b10
	lsls r0, r0, #1	@ 00034b10 4000
.org 0x34b12
	adds r1, r4, r0	@ 00034b12 2118
.org 0x34b14
	movs r0, #4	@ 00034b14 0420
.org 0x34b16
	strb r0, [r1, #0]	@ 00034b16 0870
.org 0x34b18
	adds r0, #252	@ 00034b18 fc30
.org 0x34b1a
	adds r1, r4, r0	@ 00034b1a 2118
.org 0x34b1c
	movs r0, #3	@ 00034b1c 0320
.org 0x34b1e
	strb r0, [r1, #0]	@ 00034b1e 0870
.org 0x34b20
	ldr r1, [pc, #16]	@ 00034b20 0449
.org 0x34b22
	adds r0, r4, r1	@ 00034b22 6018
.org 0x34b24
	strb r3, [r0, #0]	@ 00034b24 0370
.org 0x34b26
	adds r0, r4, #0	@ 00034b26 201c
.org 0x34b28
	bl 0x34b48	@ 00034b28 00f00ef8
