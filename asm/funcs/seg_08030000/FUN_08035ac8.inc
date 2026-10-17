@ FUN_08035ac8  entry 0x08035ac8  size 150
.thumb
.org 0x35ac8
FUN_08035ac8:
	push {r4, r5, r6, lr}	@ 00035ac8 70b5
.org 0x35aca
	adds r4, r0, #0	@ 00035aca 041c
.org 0x35acc
	movs r0, #162	@ 00035acc a220
.org 0x35ace
	lsls r0, r0, #1	@ 00035ace 4000
.org 0x35ad0
	adds r1, r4, r0	@ 00035ad0 2118
.org 0x35ad2
	adds r0, r4, #0	@ 00035ad2 201c
.org 0x35ad4
	bl 0x39fd8	@ 00035ad4 04f080fa
.org 0x35ad8
	lsls r0, r0, #24	@ 00035ad8 0006
.org 0x35ada
	lsrs r3, r0, #24	@ 00035ada 030e
.org 0x35adc
	cmp r3, #0	@ 00035adc 002b
.org 0x35ade
	beq.n 0x35b04	@ 00035ade 11d0
.org 0x35ae0
	ldr r0, [pc, #24]	@ 00035ae0 0648
.org 0x35ae2
	adds r1, r4, r0	@ 00035ae2 2118
.org 0x35ae4
	movs r0, #255	@ 00035ae4 ff20
.org 0x35ae6
	strb r0, [r1, #0]	@ 00035ae6 0870
.org 0x35ae8
	adds r0, #1	@ 00035ae8 0130
.org 0x35aea
	adds r1, r4, r0	@ 00035aea 2118
.org 0x35aec
	movs r2, #0	@ 00035aec 0022
.org 0x35aee
	movs r0, #3	@ 00035aee 0320
.org 0x35af0
	strb r0, [r1, #0]	@ 00035af0 0870
.org 0x35af2
	ldr r1, [pc, #12]	@ 00035af2 0349
.org 0x35af4
	adds r0, r4, r1	@ 00035af4 6018
.org 0x35af6
	strb r2, [r0, #0]	@ 00035af6 0270
.org 0x35af8
	b.n 0x35b5a	@ 00035af8 2fe0
.org 0x35afa
	.byte 0x00	@ 00035afa data
.org 0x35afb
	.byte 0x00	@ 00035afb data
.org 0x35afc
	.byte 0x47,0x01,0x00,0x00	@ 00035afc data
.org 0x35b00
	.byte 0x01,0x01,0x00,0x00	@ 00035b00 data
.org 0x35b04
	adds r5, r4, #0	@ 00035b04 251c
.org 0x35b06
	adds r5, #180	@ 00035b06 b435
.org 0x35b08
	ldr r1, [pc, #28]	@ 00035b08 0749
.org 0x35b0a
	adds r0, r4, r1	@ 00035b0a 6018
.org 0x35b0c
	ldrb r2, [r0, #0]	@ 00035b0c 0278
.org 0x35b0e
	adds r1, r2, #0	@ 00035b0e 111c
.org 0x35b10
	adds r6, r0, #0	@ 00035b10 061c
.org 0x35b12
	cmp r1, #255	@ 00035b12 ff29
.org 0x35b14
	beq.n 0x35b2c	@ 00035b14 0ad0
.org 0x35b16
	movs r1, #162	@ 00035b16 a221
.org 0x35b18
	lsls r1, r1, #1	@ 00035b18 4900
.org 0x35b1a
	adds r0, r4, r1	@ 00035b1a 6018
.org 0x35b1c
	strb r2, [r0, #0]	@ 00035b1c 0270
.org 0x35b1e
	movs r0, #255	@ 00035b1e ff20
.org 0x35b20
	strb r0, [r6, #0]	@ 00035b20 3070
.org 0x35b22
	adds r0, #1	@ 00035b22 0130
.org 0x35b24
	b.n 0x35b4e	@ 00035b24 13e0
.org 0x35b26
	.byte 0x00	@ 00035b26 data
.org 0x35b27
	.byte 0x00	@ 00035b27 data
.org 0x35b28
	.byte 0x47,0x01,0x00,0x00	@ 00035b28 data
.org 0x35b2c
	ldr r0, [pc, #52]	@ 00035b2c 0d48
.org 0x35b2e
	adds r1, r4, r0	@ 00035b2e 2118
.org 0x35b30
	ldrb r0, [r1, #0]	@ 00035b30 0878
.org 0x35b32
	cmp r0, #0	@ 00035b32 0028
.org 0x35b34
	beq.n 0x35b6e	@ 00035b34 1bd0
.org 0x35b36
	ldrb r0, [r5, #12]	@ 00035b36 287b
.org 0x35b38
	cmp r0, #4	@ 00035b38 0428
.org 0x35b3a
	beq.n 0x35b42	@ 00035b3a 02d0
.org 0x35b3c
	ldrb r0, [r5, #13]	@ 00035b3c 687b
.org 0x35b3e
	cmp r0, #4	@ 00035b3e 0428
.org 0x35b40
	bne.n 0x35b6c	@ 00035b40 14d1
.org 0x35b42
	movs r0, #162	@ 00035b42 a220
.org 0x35b44
	lsls r0, r0, #1	@ 00035b44 4000
.org 0x35b46
	adds r1, r4, r0	@ 00035b46 2118
.org 0x35b48
	movs r0, #4	@ 00035b48 0420
.org 0x35b4a
	strb r0, [r1, #0]	@ 00035b4a 0870
.org 0x35b4c
	adds r0, #252	@ 00035b4c fc30
.org 0x35b4e
	adds r1, r4, r0	@ 00035b4e 2118
.org 0x35b50
	movs r0, #3	@ 00035b50 0320
.org 0x35b52
	strb r0, [r1, #0]	@ 00035b52 0870
.org 0x35b54
	ldr r1, [pc, #16]	@ 00035b54 0449
.org 0x35b56
	adds r0, r4, r1	@ 00035b56 6018
.org 0x35b58
	strb r3, [r0, #0]	@ 00035b58 0370
.org 0x35b5a
	adds r0, r4, #0	@ 00035b5a 201c
.org 0x35b5c
	bl 0x35b7c	@ 00035b5c 00f00ef8
