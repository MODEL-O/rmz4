@ FUN_0808ed64  entry 0x0808ed64  size 324
.thumb
.org 0x8ed64
FUN_0808ed64:
	push {r4, r5, r6, r7, lr}	@ 0008ed64 f0b5
.org 0x8ed66
	adds r4, r0, #0	@ 0008ed66 041c
.org 0x8ed68
	ldrb r0, [r4, #10]	@ 0008ed68 a07a
.org 0x8ed6a
	lsrs r7, r0, #4	@ 0008ed6a 0709
.org 0x8ed6c
	movs r1, #1	@ 0008ed6c 0121
.org 0x8ed6e
	ands r7, r1	@ 0008ed6e 0f40
.org 0x8ed70
	ldrb r0, [r4, #15]	@ 0008ed70 e07b
.org 0x8ed72
	cmp r0, #0	@ 0008ed72 0028
.org 0x8ed74
	bne.n 0x8ed82	@ 0008ed74 05d1
.org 0x8ed76
	adds r0, r4, #0	@ 0008ed76 201c
.org 0x8ed78
	adds r0, #184	@ 0008ed78 b830
.org 0x8ed7a
	strb r1, [r0, #0]	@ 0008ed7a 0170
.org 0x8ed7c
	ldrb r0, [r4, #15]	@ 0008ed7c e07b
.org 0x8ed7e
	adds r0, #1	@ 0008ed7e 0130
.org 0x8ed80
	strb r0, [r4, #15]	@ 0008ed80 e073
.org 0x8ed82
	adds r0, r4, #0	@ 0008ed82 201c
.org 0x8ed84
	bl 0x1cff0	@ 0008ed84 8ef734f9
.org 0x8ed88
	adds r0, r4, #0	@ 0008ed88 201c
.org 0x8ed8a
	adds r0, #116	@ 0008ed8a 7430
.org 0x8ed8c
	ldr r3, [pc, #136]	@ 0008ed8c 224b
.org 0x8ed8e
	ldrb r1, [r4, #30]	@ 0008ed8e a17f
.org 0x8ed90
	lsls r1, r1, #8	@ 0008ed90 0902
.org 0x8ed92
	adds r2, r4, #0	@ 0008ed92 221c
.org 0x8ed94
	adds r2, #112	@ 0008ed94 7032
.org 0x8ed96
	ldrb r2, [r2, #0]	@ 0008ed96 1278
.org 0x8ed98
	orrs r1, r2	@ 0008ed98 1143
.org 0x8ed9a
	ldr r2, [pc, #128]	@ 0008ed9a 204a
.org 0x8ed9c
	adds r1, r1, r2	@ 0008ed9c 8918
.org 0x8ed9e
	lsls r1, r1, #2	@ 0008ed9e 8900
.org 0x8eda0
	adds r1, r1, r3	@ 0008eda0 c918
.org 0x8eda2
	adds r2, r4, #0	@ 0008eda2 221c
.org 0x8eda4
	adds r2, #113	@ 0008eda4 7132
.org 0x8eda6
	ldrb r2, [r2, #0]	@ 0008eda6 1278
.org 0x8eda8
	lsls r2, r2, #24	@ 0008eda8 1206
.org 0x8edaa
	asrs r2, r2, #24	@ 0008edaa 1216
.org 0x8edac
	ldr r1, [r1, #0]	@ 0008edac 0968
.org 0x8edae
	lsls r2, r2, #2	@ 0008edae 9200
.org 0x8edb0
	adds r2, r2, r1	@ 0008edb0 5218
.org 0x8edb2
	ldr r1, [r2, #0]	@ 0008edb2 1168
.org 0x8edb4
	ldrb r2, [r1, #0]	@ 0008edb4 0a78
.org 0x8edb6
	lsls r1, r2, #1	@ 0008edb6 5100
.org 0x8edb8
	adds r1, r1, r2	@ 0008edb8 8918
.org 0x8edba
	lsls r1, r1, #3	@ 0008edba c900
.org 0x8edbc
	ldr r2, [pc, #96]	@ 0008edbc 184a
.org 0x8edbe
	adds r1, r1, r2	@ 0008edbe 8918
.org 0x8edc0
	bl 0x5784	@ 0008edc0 76f7e0fc
.org 0x8edc4
	adds r5, r4, #0	@ 0008edc4 251c
.org 0x8edc6
	adds r5, #187	@ 0008edc6 bb35
.org 0x8edc8
	ldrb r0, [r5, #0]	@ 0008edc8 2878
.org 0x8edca
	cmp r0, #0	@ 0008edca 0028
.org 0x8edcc
	beq.n 0x8ede2	@ 0008edcc 09d0
.org 0x8edce
	adds r0, r4, #0	@ 0008edce 201c
.org 0x8edd0
	adds r0, #115	@ 0008edd0 7330
.org 0x8edd2
	ldrb r0, [r0, #0]	@ 0008edd2 0078
.org 0x8edd4
	cmp r0, #3	@ 0008edd4 0328
.org 0x8edd6
	bne.n 0x8ede2	@ 0008edd6 04d1
.org 0x8edd8
	adds r0, r4, #0	@ 0008edd8 201c
.org 0x8edda
	bl 0x8fc18	@ 0008edda 00f01dff
.org 0x8edde
	movs r0, #0	@ 0008edde 0020
.org 0x8ede0
	strb r0, [r5, #0]	@ 0008ede0 2870
.org 0x8ede2
	adds r0, r4, #0	@ 0008ede2 201c
.org 0x8ede4
	bl 0x8faf4	@ 0008ede4 00f086fe
.org 0x8ede8
	adds r5, r0, #0	@ 0008ede8 051c
.org 0x8edea
	ldr r0, [pc, #56]	@ 0008edea 0e48
.org 0x8edec
	adds r1, r4, #0	@ 0008edec 211c
.org 0x8edee
	adds r1, #84	@ 0008edee 5431
.org 0x8edf0
	bl 0x1fb14	@ 0008edf0 90f790fe
.org 0x8edf4
	adds r2, r0, #0	@ 0008edf4 021c
.org 0x8edf6
	cmp r2, #0	@ 0008edf6 002a
.org 0x8edf8
	bne.n 0x8ee2c	@ 0008edf8 18d1
.org 0x8edfa
	movs r3, #0	@ 0008edfa 0023
.org 0x8edfc
	ldr r0, [pc, #40]	@ 0008edfc 0a48
.org 0x8edfe
	ldr r0, [r0, #0]	@ 0008edfe 0068
.org 0x8ee00
	ldr r1, [r4, #84]	@ 0008ee00 616d
.org 0x8ee02
	ldr r0, [r0, #84]	@ 0008ee02 406d
.org 0x8ee04
	cmp r1, r0	@ 0008ee04 8142
.org 0x8ee06
	bge.n 0x8ee0a	@ 0008ee06 00da
.org 0x8ee08
	movs r3, #1	@ 0008ee08 0123
.org 0x8ee0a
	cmp r7, r3	@ 0008ee0a 9f42
.org 0x8ee0c
	beq.n 0x8ee2c	@ 0008ee0c 0ed0
.org 0x8ee0e
	movs r0, #2	@ 0008ee0e 0220
.org 0x8ee10
	strb r0, [r4, #14]	@ 0008ee10 a073
.org 0x8ee12
	strb r2, [r4, #15]	@ 0008ee12 e273
.org 0x8ee14
	b.n 0x8eec6	@ 0008ee14 57e0
.org 0x8ee16
	.byte 0x00	@ 0008ee16 data
.org 0x8ee17
	.byte 0x00	@ 0008ee17 data
.org 0x8ee18
	.byte 0xac,0xff,0x85,0x08	@ 0008ee18 data
.org 0x8ee1c
	.byte 0x00,0xc7,0xff,0xff	@ 0008ee1c data
.org 0x8ee20
	.byte 0xd8,0xfb,0x85,0x08	@ 0008ee20 data
.org 0x8ee24
	.byte 0xf8,0xe9,0x02,0x02	@ 0008ee24 data
.org 0x8ee28
	.byte 0xf0,0xdb,0x02,0x02	@ 0008ee28 data
.org 0x8ee2c
	cmp r5, #0	@ 0008ee2c 002d
.org 0x8ee2e
	bne.n 0x8eec6	@ 0008ee2e 4ad1
.org 0x8ee30
	adds r0, r4, #0	@ 0008ee30 201c
.org 0x8ee32
	adds r0, #115	@ 0008ee32 7330
.org 0x8ee34
	ldrb r0, [r0, #0]	@ 0008ee34 0078
.org 0x8ee36
	cmp r0, #3	@ 0008ee36 0328
.org 0x8ee38
	bne.n 0x8eec6	@ 0008ee38 45d1
.org 0x8ee3a
	ldr r6, [r4, #84]	@ 0008ee3a 666d
.org 0x8ee3c
	lsls r0, r7, #1	@ 0008ee3c 7800
.org 0x8ee3e
	subs r0, #1	@ 0008ee3e 0138
.org 0x8ee40
	lsls r3, r0, #13	@ 0008ee40 4303
.org 0x8ee42
	ldr r2, [pc, #40]	@ 0008ee42 0a4a
.org 0x8ee44
	ldr r0, [r2, #0]	@ 0008ee44 1068
.org 0x8ee46
	ldr r5, [r0, #84]	@ 0008ee46 456d
.org 0x8ee48
	ldrb r1, [r4, #10]	@ 0008ee48 a17a
.org 0x8ee4a
	movs r0, #16	@ 0008ee4a 1020
.org 0x8ee4c
	ands r0, r1	@ 0008ee4c 0840
.org 0x8ee4e
	cmp r0, #0	@ 0008ee4e 0028
.org 0x8ee50
	beq.n 0x8ee70	@ 0008ee50 0ed0
.org 0x8ee52
	movs r0, #128	@ 0008ee52 8020
.org 0x8ee54
	lsls r0, r0, #3	@ 0008ee54 c000
.org 0x8ee56
	adds r0, r3, r0	@ 0008ee56 1818
.org 0x8ee58
	adds r0, r6, r0	@ 0008ee58 3018
.org 0x8ee5a
	subs r0, r5, r0	@ 0008ee5a 281a
.org 0x8ee5c
	movs r1, #128	@ 0008ee5c 8021
.org 0x8ee5e
	lsls r1, r1, #6	@ 0008ee5e 8901
.org 0x8ee60
	adds r0, r0, r1	@ 0008ee60 4018
.org 0x8ee62
	movs r1, #128	@ 0008ee62 8021
.org 0x8ee64
	lsls r1, r1, #7	@ 0008ee64 c901
.org 0x8ee66
	cmp r0, r1	@ 0008ee66 8842
.org 0x8ee68
	bls.n 0x8ee86	@ 0008ee68 0dd9
.org 0x8ee6a
	b.n 0x8eec0	@ 0008ee6a 29e0
.org 0x8ee6c
	.byte 0xf0,0xdb,0x02,0x02	@ 0008ee6c data
.org 0x8ee70
	ldr r1, [pc, #56]	@ 0008ee70 0e49
.org 0x8ee72
	adds r0, r3, r1	@ 0008ee72 5818
.org 0x8ee74
	adds r0, r6, r0	@ 0008ee74 3018
.org 0x8ee76
	subs r0, r5, r0	@ 0008ee76 281a
.org 0x8ee78
	movs r1, #128	@ 0008ee78 8021
.org 0x8ee7a
	lsls r1, r1, #6	@ 0008ee7a 8901
.org 0x8ee7c
	adds r0, r0, r1	@ 0008ee7c 4018
.org 0x8ee7e
	movs r1, #128	@ 0008ee7e 8021
.org 0x8ee80
	lsls r1, r1, #7	@ 0008ee80 c901
.org 0x8ee82
	cmp r0, r1	@ 0008ee82 8842
.org 0x8ee84
	bhi.n 0x8eec0	@ 0008ee84 1cd8
.org 0x8ee86
	ldr r0, [r2, #0]	@ 0008ee86 1068
.org 0x8ee88
	ldr r3, [r4, #88]	@ 0008ee88 a36d
.org 0x8ee8a
	ldr r2, [r0, #88]	@ 0008ee8a 826d
.org 0x8ee8c
	subs r0, r2, r3	@ 0008ee8c d01a
.org 0x8ee8e
	movs r1, #200	@ 0008ee8e c821
.org 0x8ee90
	lsls r1, r1, #6	@ 0008ee90 8901
.org 0x8ee92
	adds r0, r0, r1	@ 0008ee92 4018
.org 0x8ee94
	movs r1, #128	@ 0008ee94 8021
.org 0x8ee96
	lsls r1, r1, #8	@ 0008ee96 0902
.org 0x8ee98
	cmp r0, r1	@ 0008ee98 8842
.org 0x8ee9a
	bhi.n 0x8eec0	@ 0008ee9a 11d8
.org 0x8ee9c
	ldr r1, [pc, #16]	@ 0008ee9c 0449
.org 0x8ee9e
	adds r0, r2, r1	@ 0008ee9e 5018
.org 0x8eea0
	cmp r0, r3	@ 0008eea0 9842
.org 0x8eea2
	bge.n 0x8eeb4	@ 0008eea2 07da
.org 0x8eea4
	movs r1, #0	@ 0008eea4 0021
.org 0x8eea6
	movs r0, #2	@ 0008eea6 0220
