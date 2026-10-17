@ FUN_0808ea98  entry 0x0808ea98  size 344
.thumb
.org 0x8ea98
FUN_0808ea98:
	push {r4, r5, r6, lr}	@ 0008ea98 70b5
.org 0x8ea9a
	adds r4, r0, #0	@ 0008ea9a 041c
.org 0x8ea9c
	adds r5, r4, #0	@ 0008ea9c 251c
.org 0x8ea9e
	adds r5, #140	@ 0008ea9e 8c35
.org 0x8eaa0
	ldr r0, [r5, #0]	@ 0008eaa0 2868
.org 0x8eaa2
	movs r6, #1	@ 0008eaa2 0126
.org 0x8eaa4
	ands r0, r6	@ 0008eaa4 3040
.org 0x8eaa6
	cmp r0, #0	@ 0008eaa6 0028
.org 0x8eaa8
	beq.n 0x8eab0	@ 0008eaa8 02d0
.org 0x8eaaa
	movs r0, #17	@ 0008eaaa 1120
.org 0x8eaac
	bl 0x6984	@ 0008eaac 77f76aff
.org 0x8eab0
	ldr r1, [r5, #0]	@ 0008eab0 2968
.org 0x8eab2
	movs r0, #128	@ 0008eab2 8020
.org 0x8eab4
	lsls r0, r0, #2	@ 0008eab4 8000
.org 0x8eab6
	ands r0, r1	@ 0008eab6 0840
.org 0x8eab8
	cmp r0, #0	@ 0008eab8 0028
.org 0x8eaba
	beq.n 0x8eb0a	@ 0008eaba 26d0
.org 0x8eabc
	ldr r1, [pc, #36]	@ 0008eabc 0949
.org 0x8eabe
	ldrb r0, [r4, #9]	@ 0008eabe 607a
.org 0x8eac0
	lsls r0, r0, #2	@ 0008eac0 8000
.org 0x8eac2
	adds r0, r0, r1	@ 0008eac2 4018
.org 0x8eac4
	movs r1, #2	@ 0008eac4 0221
.org 0x8eac6
	str r1, [r4, #12]	@ 0008eac6 e160
.org 0x8eac8
	ldr r0, [r0, #0]	@ 0008eac8 0068
.org 0x8eaca
	ldr r0, [r0, #8]	@ 0008eaca 8068
.org 0x8eacc
	str r0, [r4, #20]	@ 0008eacc 6061
.org 0x8eace
	adds r0, r4, #0	@ 0008eace 201c
.org 0x8ead0
	adds r0, #185	@ 0008ead0 b930
.org 0x8ead2
	ldrb r2, [r0, #0]	@ 0008ead2 0278
.org 0x8ead4
	cmp r2, #0	@ 0008ead4 002a
.org 0x8ead6
	beq.n 0x8eae8	@ 0008ead6 07d0
.org 0x8ead8
	movs r0, #0	@ 0008ead8 0020
.org 0x8eada
	strb r1, [r4, #13]	@ 0008eada 6173
.org 0x8eadc
	strb r0, [r4, #14]	@ 0008eadc a073
.org 0x8eade
	strb r0, [r4, #15]	@ 0008eade e073
.org 0x8eae0
	b.n 0x8eb02	@ 0008eae0 0fe0
.org 0x8eae2
	.byte 0x00	@ 0008eae2 data
.org 0x8eae3
	.byte 0x00	@ 0008eae3 data
.org 0x8eae4
	.byte 0x40,0xdb,0x85,0x08	@ 0008eae4 data
.org 0x8eae8
	ldr r1, [r5, #0]	@ 0008eae8 2968
.org 0x8eaea
	movs r0, #128	@ 0008eaea 8020
.org 0x8eaec
	lsls r0, r0, #9	@ 0008eaec 4002
.org 0x8eaee
	ands r1, r0	@ 0008eaee 0140
.org 0x8eaf0
	cmp r1, #0	@ 0008eaf0 0029
.org 0x8eaf2
	beq.n 0x8eafc	@ 0008eaf2 03d0
.org 0x8eaf4
	strb r6, [r4, #13]	@ 0008eaf4 6673
.org 0x8eaf6
	strb r2, [r4, #14]	@ 0008eaf6 a273
.org 0x8eaf8
	strb r2, [r4, #15]	@ 0008eaf8 e273
.org 0x8eafa
	b.n 0x8eb02	@ 0008eafa 02e0
.org 0x8eafc
	strb r1, [r4, #13]	@ 0008eafc 6173
.org 0x8eafe
	strb r1, [r4, #14]	@ 0008eafe a173
.org 0x8eb00
	strb r1, [r4, #15]	@ 0008eb00 e173
.org 0x8eb02
	adds r0, r4, #0	@ 0008eb02 201c
.org 0x8eb04
	bl 0x8f750	@ 0008eb04 00f024fe
.org 0x8eb08
	b.n 0x8ec04	@ 0008eb08 7ce0
.org 0x8eb0a
	ands r1, r6	@ 0008eb0a 3140
.org 0x8eb0c
	cmp r1, #0	@ 0008eb0c 0029
.org 0x8eb0e
	beq.n 0x8eb38	@ 0008eb0e 13d0
.org 0x8eb10
	ldr r0, [r4, #44]	@ 0008eb10 e06a
.org 0x8eb12
	cmp r0, #0	@ 0008eb12 0028
.org 0x8eb14
	bne.n 0x8eb3e	@ 0008eb14 13d1
.org 0x8eb16
	adds r0, r4, #0	@ 0008eb16 201c
.org 0x8eb18
	adds r0, #151	@ 0008eb18 9730
.org 0x8eb1a
	ldrb r1, [r0, #0]	@ 0008eb1a 0178
.org 0x8eb1c
	movs r0, #240	@ 0008eb1c f020
.org 0x8eb1e
	ands r0, r1	@ 0008eb1e 0840
.org 0x8eb20
	cmp r0, #32	@ 0008eb20 2028
.org 0x8eb22
	bne.n 0x8eb2c	@ 0008eb22 03d1
.org 0x8eb24
	adds r0, r4, #0	@ 0008eb24 201c
.org 0x8eb26
	bl 0x8fe78	@ 0008eb26 01f0a7f9
.org 0x8eb2a
	b.n 0x8eb38	@ 0008eb2a 05e0
.org 0x8eb2c
	ldr r2, [pc, #176]	@ 0008eb2c 2c4a
.org 0x8eb2e
	movs r0, #0	@ 0008eb2e 0020
.org 0x8eb30
	adds r1, r4, #0	@ 0008eb30 211c
.org 0x8eb32
	bl 0x2adac	@ 0008eb32 9cf73bf9
.org 0x8eb36
	str r0, [r4, #44]	@ 0008eb36 e062
.org 0x8eb38
	ldr r0, [r4, #44]	@ 0008eb38 e06a
.org 0x8eb3a
	cmp r0, #0	@ 0008eb3a 0028
.org 0x8eb3c
	beq.n 0x8ebf4	@ 0008eb3c 5ad0
.org 0x8eb3e
	adds r5, r4, #0	@ 0008eb3e 251c
.org 0x8eb40
	adds r5, #192	@ 0008eb40 c035
.org 0x8eb42
	ldr r3, [r5, #0]	@ 0008eb42 2b68
.org 0x8eb44
	cmp r3, #0	@ 0008eb44 002b
.org 0x8eb46
	beq.n 0x8eb88	@ 0008eb46 1fd0
.org 0x8eb48
	ldrb r1, [r3, #10]	@ 0008eb48 997a
.org 0x8eb4a
	movs r0, #254	@ 0008eb4a fe20
.org 0x8eb4c
	ands r0, r1	@ 0008eb4c 0840
.org 0x8eb4e
	movs r2, #0	@ 0008eb4e 0022
.org 0x8eb50
	movs r1, #253	@ 0008eb50 fd21
.org 0x8eb52
	ands r0, r1	@ 0008eb52 0840
.org 0x8eb54
	strb r0, [r3, #10]	@ 0008eb54 9872
.org 0x8eb56
	adds r0, r3, #0	@ 0008eb56 181c
.org 0x8eb58
	adds r0, #140	@ 0008eb58 8c30
.org 0x8eb5a
	str r2, [r0, #0]	@ 0008eb5a 0260
.org 0x8eb5c
	adds r0, #4	@ 0008eb5c 0430
.org 0x8eb5e
	str r2, [r0, #0]	@ 0008eb5e 0260
.org 0x8eb60
	adds r0, #4	@ 0008eb60 0430
.org 0x8eb62
	strb r2, [r0, #0]	@ 0008eb62 0270
.org 0x8eb64
	ldrb r1, [r3, #10]	@ 0008eb64 997a
.org 0x8eb66
	movs r0, #251	@ 0008eb66 fb20
.org 0x8eb68
	ands r0, r1	@ 0008eb68 0840
.org 0x8eb6a
	strb r0, [r3, #10]	@ 0008eb6a 9872
.org 0x8eb6c
	ldr r1, [pc, #116]	@ 0008eb6c 1d49
.org 0x8eb6e
	ldrb r0, [r3, #9]	@ 0008eb6e 587a
.org 0x8eb70
	lsls r0, r0, #2	@ 0008eb70 8000
.org 0x8eb72
	adds r0, r0, r1	@ 0008eb72 4018
.org 0x8eb74
	movs r1, #3	@ 0008eb74 0321
.org 0x8eb76
	str r1, [r3, #12]	@ 0008eb76 d960
.org 0x8eb78
	ldr r0, [r0, #0]	@ 0008eb78 0068
.org 0x8eb7a
	ldr r0, [r0, #12]	@ 0008eb7a c068
.org 0x8eb7c
	str r0, [r3, #20]	@ 0008eb7c 5861
.org 0x8eb7e
	str r2, [r5, #0]	@ 0008eb7e 2a60
.org 0x8eb80
	movs r0, #4	@ 0008eb80 0420
.org 0x8eb82
	strb r0, [r4, #13]	@ 0008eb82 6073
.org 0x8eb84
	strb r2, [r4, #14]	@ 0008eb84 a273
.org 0x8eb86
	strb r2, [r4, #15]	@ 0008eb86 e273
.org 0x8eb88
	ldr r0, [r4, #44]	@ 0008eb88 e06a
.org 0x8eb8a
	bl 0x2b3e4	@ 0008eb8a 9cf72bfc
.org 0x8eb8e
	cmp r0, #0	@ 0008eb8e 0028
.org 0x8eb90
	beq.n 0x8eb96	@ 0008eb90 01d0
.org 0x8eb92
	movs r0, #0	@ 0008eb92 0020
.org 0x8eb94
	str r0, [r4, #44]	@ 0008eb94 e062
.org 0x8eb96
	ldr r0, [r4, #44]	@ 0008eb96 e06a
.org 0x8eb98
	cmp r0, #0	@ 0008eb98 0028
.org 0x8eb9a
	beq.n 0x8ebf4	@ 0008eb9a 2bd0
.org 0x8eb9c
	adds r0, r4, #0	@ 0008eb9c 201c
.org 0x8eb9e
	bl 0x1d1f4	@ 0008eb9e 8ef729fb
.org 0x8eba2
	adds r0, r4, #0	@ 0008eba2 201c
.org 0x8eba4
	adds r0, #116	@ 0008eba4 7430
.org 0x8eba6
	ldr r3, [pc, #64]	@ 0008eba6 104b
.org 0x8eba8
	ldrb r1, [r4, #30]	@ 0008eba8 a17f
.org 0x8ebaa
	lsls r1, r1, #8	@ 0008ebaa 0902
.org 0x8ebac
	adds r2, r4, #0	@ 0008ebac 221c
.org 0x8ebae
	adds r2, #112	@ 0008ebae 7032
.org 0x8ebb0
	ldrb r2, [r2, #0]	@ 0008ebb0 1278
.org 0x8ebb2
	orrs r1, r2	@ 0008ebb2 1143
.org 0x8ebb4
	ldr r2, [pc, #52]	@ 0008ebb4 0d4a
.org 0x8ebb6
	adds r1, r1, r2	@ 0008ebb6 8918
.org 0x8ebb8
	lsls r1, r1, #2	@ 0008ebb8 8900
.org 0x8ebba
	adds r1, r1, r3	@ 0008ebba c918
.org 0x8ebbc
	adds r2, r4, #0	@ 0008ebbc 221c
.org 0x8ebbe
	adds r2, #113	@ 0008ebbe 7132
.org 0x8ebc0
	ldrb r2, [r2, #0]	@ 0008ebc0 1278
.org 0x8ebc2
	lsls r2, r2, #24	@ 0008ebc2 1206
.org 0x8ebc4
	asrs r2, r2, #24	@ 0008ebc4 1216
.org 0x8ebc6
	ldr r1, [r1, #0]	@ 0008ebc6 0968
.org 0x8ebc8
	lsls r2, r2, #2	@ 0008ebc8 9200
.org 0x8ebca
	adds r2, r2, r1	@ 0008ebca 5218
.org 0x8ebcc
	ldr r1, [r2, #0]	@ 0008ebcc 1168
.org 0x8ebce
	ldrb r2, [r1, #1]	@ 0008ebce 4a78
.org 0x8ebd0
	lsls r1, r2, #1	@ 0008ebd0 5100
.org 0x8ebd2
	adds r1, r1, r2	@ 0008ebd2 8918
.org 0x8ebd4
	lsls r1, r1, #3	@ 0008ebd4 c900
.org 0x8ebd6
	ldr r2, [pc, #24]	@ 0008ebd6 064a
.org 0x8ebd8
	adds r1, r1, r2	@ 0008ebd8 8918
.org 0x8ebda
	bl 0x5784	@ 0008ebda 76f7d3fd
.org 0x8ebde
	b.n 0x8ec04	@ 0008ebde 11e0
.org 0x8ebe0
	.byte 0x70,0xfb,0x85,0x08	@ 0008ebe0 data
.org 0x8ebe4
	.byte 0x40,0xdb,0x85,0x08	@ 0008ebe4 data
.org 0x8ebe8
	.byte 0xac,0xff,0x85,0x08	@ 0008ebe8 data
.org 0x8ebec
	.byte 0x00,0xc7,0xff,0xff	@ 0008ebec data
