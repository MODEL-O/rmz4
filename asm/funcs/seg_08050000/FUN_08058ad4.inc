@ FUN_08058ad4  entry 0x08058ad4  size 152
.thumb
.org 0x58ad4
FUN_08058ad4:
	push {r4, lr}	@ 00058ad4 10b5
.org 0x58ad6
	adds r4, r0, #0	@ 00058ad6 041c
.org 0x58ad8
	ldrb r0, [r4, #15]	@ 00058ad8 e07b
.org 0x58ada
	cmp r0, #0	@ 00058ada 0028
.org 0x58adc
	bne.n 0x58afc	@ 00058adc 0ed1
.org 0x58ade
	ldr r1, [pc, #116]	@ 00058ade 1d49
.org 0x58ae0
	adds r0, r4, #0	@ 00058ae0 201c
.org 0x58ae2
	bl 0x1cf00	@ 00058ae2 c4f70dfa
.org 0x58ae6
	adds r0, r4, #0	@ 00058ae6 201c
.org 0x58ae8
	bl 0x5977c	@ 00058ae8 00f048fe
.org 0x58aec
	adds r1, r0, #0	@ 00058aec 011c
.org 0x58aee
	ldr r0, [pc, #104]	@ 00058aee 1a48
.org 0x58af0
	adds r0, r1, r0	@ 00058af0 0818
.org 0x58af2
	ldrb r1, [r0, #0]	@ 00058af2 0178
.org 0x58af4
	strb r1, [r4, #18]	@ 00058af4 a174
.org 0x58af6
	ldrb r0, [r4, #15]	@ 00058af6 e07b
.org 0x58af8
	adds r0, #1	@ 00058af8 0130
.org 0x58afa
	strb r0, [r4, #15]	@ 00058afa e073
.org 0x58afc
	adds r0, r4, #0	@ 00058afc 201c
.org 0x58afe
	bl 0x1cff0	@ 00058afe c4f777fa
.org 0x58b02
	adds r0, r4, #0	@ 00058b02 201c
.org 0x58b04
	adds r0, #116	@ 00058b04 7430
.org 0x58b06
	ldr r3, [pc, #84]	@ 00058b06 154b
.org 0x58b08
	ldrb r1, [r4, #30]	@ 00058b08 a17f
.org 0x58b0a
	lsls r1, r1, #8	@ 00058b0a 0902
.org 0x58b0c
	adds r2, r4, #0	@ 00058b0c 221c
.org 0x58b0e
	adds r2, #112	@ 00058b0e 7032
.org 0x58b10
	ldrb r2, [r2, #0]	@ 00058b10 1278
.org 0x58b12
	orrs r1, r2	@ 00058b12 1143
.org 0x58b14
	ldr r2, [pc, #72]	@ 00058b14 124a
.org 0x58b16
	adds r1, r1, r2	@ 00058b16 8918
.org 0x58b18
	lsls r1, r1, #2	@ 00058b18 8900
.org 0x58b1a
	adds r1, r1, r3	@ 00058b1a c918
.org 0x58b1c
	adds r2, r4, #0	@ 00058b1c 221c
.org 0x58b1e
	adds r2, #113	@ 00058b1e 7132
.org 0x58b20
	ldrb r2, [r2, #0]	@ 00058b20 1278
.org 0x58b22
	lsls r2, r2, #24	@ 00058b22 1206
.org 0x58b24
	asrs r2, r2, #24	@ 00058b24 1216
.org 0x58b26
	ldr r1, [r1, #0]	@ 00058b26 0968
.org 0x58b28
	lsls r2, r2, #2	@ 00058b28 9200
.org 0x58b2a
	adds r2, r2, r1	@ 00058b2a 5218
.org 0x58b2c
	ldr r1, [r2, #0]	@ 00058b2c 1168
.org 0x58b2e
	ldrb r2, [r1, #0]	@ 00058b2e 0a78
.org 0x58b30
	lsls r1, r2, #1	@ 00058b30 5100
.org 0x58b32
	adds r1, r1, r2	@ 00058b32 8918
.org 0x58b34
	lsls r1, r1, #3	@ 00058b34 c900
.org 0x58b36
	ldr r2, [pc, #44]	@ 00058b36 0b4a
.org 0x58b38
	adds r1, r1, r2	@ 00058b38 8918
.org 0x58b3a
	bl 0x5784	@ 00058b3a acf723fe
.org 0x58b3e
	adds r0, r4, #0	@ 00058b3e 201c
.org 0x58b40
	bl 0x597ac	@ 00058b40 00f034fe
.org 0x58b44
	cmp r0, #0	@ 00058b44 0028
.org 0x58b46
	beq.n 0x58b68	@ 00058b46 0fd0
.org 0x58b48
	movs r1, #0	@ 00058b48 0021
.org 0x58b4a
	movs r0, #4	@ 00058b4a 0420
.org 0x58b4c
	strb r0, [r4, #13]	@ 00058b4c 6073
.org 0x58b4e
	strb r1, [r4, #14]	@ 00058b4e a173
.org 0x58b50
	strb r1, [r4, #15]	@ 00058b50 e173
.org 0x58b52
	b.n 0x58b7a	@ 00058b52 12e0
.org 0x58b54
	.byte 0x06,0xa0,0x00,0x00	@ 00058b54 data
.org 0x58b58
	.byte 0xe0,0x87,0x85,0x08	@ 00058b58 data
.org 0x58b5c
	.byte 0x1c,0x87,0x85,0x08	@ 00058b5c data
.org 0x58b60
	.byte 0x00,0x60,0xff,0xff	@ 00058b60 data
.org 0x58b64
	.byte 0xcc,0x84,0x85,0x08	@ 00058b64 data
.org 0x58b68
	ldrb r0, [r4, #18]	@ 00058b68 a07c
.org 0x58b6a
	subs r0, #1	@ 00058b6a 0138
