@ FUN_080aef00  entry 0x080aef00  size 270
.thumb
.org 0xaef00
FUN_080aef00:
	push {r4, r5, r6, r7, lr}	@ 000aef00 f0b5
.org 0xaef02
	mov r7, r9	@ 000aef02 4f46
.org 0xaef04
	mov r6, r8	@ 000aef04 4646
.org 0xaef06
	push {r6, r7}	@ 000aef06 c0b4
.org 0xaef08
	adds r4, r0, #0	@ 000aef08 041c
.org 0xaef0a
	ldr r5, [r4, #40]	@ 000aef0a a56a
.org 0xaef0c
	ldrb r1, [r4, #14]	@ 000aef0c a17b
.org 0xaef0e
	cmp r1, #0	@ 000aef0e 0029
.org 0xaef10
	bne.n 0xaef1a	@ 000aef10 03d1
.org 0xaef12
	movs r0, #240	@ 000aef12 f020
.org 0xaef14
	strb r0, [r4, #18]	@ 000aef14 a074
.org 0xaef16
	adds r0, r1, #1	@ 000aef16 481c
.org 0xaef18
	strb r0, [r4, #14]	@ 000aef18 a073
.org 0xaef1a
	adds r0, r4, #0	@ 000aef1a 201c
.org 0xaef1c
	bl 0x1cff0	@ 000aef1c 6ef768f8
.org 0xaef20
	ldr r0, [r5, #84]	@ 000aef20 686d
.org 0xaef22
	ldr r1, [pc, #96]	@ 000aef22 1849
.org 0xaef24
	adds r7, r0, r1	@ 000aef24 4718
.org 0xaef26
	str r7, [r4, #84]	@ 000aef26 6765
.org 0xaef28
	ldr r0, [r5, #88]	@ 000aef28 a86d
.org 0xaef2a
	ldr r2, [pc, #92]	@ 000aef2a 174a
.org 0xaef2c
	mov r9, r2	@ 000aef2c 9146
.org 0xaef2e
	add r0, r9	@ 000aef2e 4844
.org 0xaef30
	str r0, [r4, #88]	@ 000aef30 a065
.org 0xaef32
	adds r6, r4, #0	@ 000aef32 261c
.org 0xaef34
	adds r6, #140	@ 000aef34 8c36
.org 0xaef36
	ldr r0, [r6, #0]	@ 000aef36 3068
.org 0xaef38
	movs r1, #128	@ 000aef38 8021
.org 0xaef3a
	lsls r1, r1, #4	@ 000aef3a 0901
.org 0xaef3c
	ands r0, r1	@ 000aef3c 0840
.org 0xaef3e
	adds r2, r6, #0	@ 000aef3e 321c
.org 0xaef40
	cmp r0, #0	@ 000aef40 0028
.org 0xaef42
	beq.n 0xaef62	@ 000aef42 0ed0
.org 0xaef44
	ldr r0, [pc, #68]	@ 000aef44 1148
.org 0xaef46
	ldrh r1, [r0, #8]	@ 000aef46 0189
.org 0xaef48
	movs r0, #8	@ 000aef48 0820
.org 0xaef4a
	ands r0, r1	@ 000aef4a 0840
.org 0xaef4c
	lsls r0, r0, #16	@ 000aef4c 0004
.org 0xaef4e
	lsrs r5, r0, #16	@ 000aef4e 050c
.org 0xaef50
	cmp r5, #0	@ 000aef50 002d
.org 0xaef52
	bne.n 0xaef62	@ 000aef52 06d1
.org 0xaef54
	ldrb r0, [r4, #18]	@ 000aef54 a07c
.org 0xaef56
	subs r0, #1	@ 000aef56 0138
.org 0xaef58
	strb r0, [r4, #18]	@ 000aef58 a074
.org 0xaef5a
	lsls r0, r0, #24	@ 000aef5a 0006
.org 0xaef5c
	lsrs r0, r0, #24	@ 000aef5c 000e
.org 0xaef5e
	cmp r0, #255	@ 000aef5e ff28
.org 0xaef60
	bne.n 0xaef90	@ 000aef60 16d1
.org 0xaef62
	movs r1, #0	@ 000aef62 0021
.org 0xaef64
	str r1, [r2, #0]	@ 000aef64 1160
.org 0xaef66
	adds r0, r4, #0	@ 000aef66 201c
.org 0xaef68
	adds r0, #144	@ 000aef68 9030
.org 0xaef6a
	str r1, [r0, #0]	@ 000aef6a 0160
.org 0xaef6c
	adds r0, #4	@ 000aef6c 0430
.org 0xaef6e
	strb r1, [r0, #0]	@ 000aef6e 0170
.org 0xaef70
	ldrb r2, [r4, #10]	@ 000aef70 a27a
.org 0xaef72
	movs r0, #251	@ 000aef72 fb20
.org 0xaef74
	ands r0, r2	@ 000aef74 1040
.org 0xaef76
	strb r0, [r4, #10]	@ 000aef76 a072
.org 0xaef78
	str r1, [r4, #92]	@ 000aef78 e165
.org 0xaef7a
	str r1, [r4, #96]	@ 000aef7a 2166
.org 0xaef7c
	movs r0, #2	@ 000aef7c 0220
.org 0xaef7e
	strb r0, [r4, #13]	@ 000aef7e 6073
.org 0xaef80
	strb r1, [r4, #14]	@ 000aef80 a173
.org 0xaef82
	b.n 0xaf016	@ 000aef82 48e0
.org 0xaef84
	.byte 0x00,0x98,0xff,0xff	@ 000aef84 data
.org 0xaef88
	.byte 0x00,0xfe,0xff,0xff	@ 000aef88 data
.org 0xaef8c
	.byte 0x10,0xe9,0x02,0x02	@ 000aef8c data
.org 0xaef90
	ldr r0, [pc, #108]	@ 000aef90 1b48
.org 0xaef92
	ldr r3, [r0, #0]	@ 000aef92 0368
.org 0xaef94
	adds r0, r3, #0	@ 000aef94 181c
.org 0xaef96
	adds r0, #140	@ 000aef96 8c30
.org 0xaef98
	ldr r1, [r0, #0]	@ 000aef98 0168
.org 0xaef9a
	movs r0, #1	@ 000aef9a 0120
.org 0xaef9c
	mov r8, r0	@ 000aef9c 8046
.org 0xaef9e
	ands r1, r0	@ 000aef9e 0140
.org 0xaefa0
	cmp r1, #0	@ 000aefa0 0029
.org 0xaefa2
	beq.n 0xaf008	@ 000aefa2 31d0
.org 0xaefa4
	adds r2, r3, #0	@ 000aefa4 1a1c
.org 0xaefa6
	adds r2, #180	@ 000aefa6 b432
.org 0xaefa8
	movs r1, #161	@ 000aefa8 a121
.org 0xaefaa
	lsls r1, r1, #1	@ 000aefaa 4900
.org 0xaefac
	adds r1, r1, r3	@ 000aefac c918
.org 0xaefae
	mov ip, r1	@ 000aefae 8c46
.org 0xaefb0
	ldrb r0, [r1, #0]	@ 000aefb0 0878
.org 0xaefb2
	movs r1, #64	@ 000aefb2 4021
.org 0xaefb4
	orrs r0, r1	@ 000aefb4 0843
.org 0xaefb6
	mov r1, ip	@ 000aefb6 6146
.org 0xaefb8
	strb r0, [r1, #0]	@ 000aefb8 0870
.org 0xaefba
	movs r0, #4	@ 000aefba 0420
.org 0xaefbc
	strb r0, [r3, #13]	@ 000aefbc 5873
.org 0xaefbe
	strb r5, [r3, #14]	@ 000aefbe 9d73
.org 0xaefc0
	mov r0, r9	@ 000aefc0 4846
.org 0xaefc2
	str r0, [r2, #116]	@ 000aefc2 5067
.org 0xaefc4
	ldr r0, [pc, #60]	@ 000aefc4 0f48
.org 0xaefc6
	str r0, [r2, #120]	@ 000aefc6 9067
.org 0xaefc8
	str r5, [r2, #124]	@ 000aefc8 d567
.org 0xaefca
	movs r2, #154	@ 000aefca 9a22
.org 0xaefcc
	lsls r2, r2, #1	@ 000aefcc 5200
.org 0xaefce
	adds r1, r3, r2	@ 000aefce 9918
.org 0xaefd0
	movs r0, #64	@ 000aefd0 4020
.org 0xaefd2
	str r0, [r1, #0]	@ 000aefd2 0860
.org 0xaefd4
	movs r1, #156	@ 000aefd4 9c21
.org 0xaefd6
	lsls r1, r1, #1	@ 000aefd6 4900
.org 0xaefd8
	adds r0, r3, r1	@ 000aefd8 5818
.org 0xaefda
	movs r2, #0	@ 000aefda 0022
.org 0xaefdc
	mov r1, r8	@ 000aefdc 4146
.org 0xaefde
	strh r1, [r0, #0]	@ 000aefde 0180
.org 0xaefe0
	str r5, [r6, #0]	@ 000aefe0 3560
.org 0xaefe2
	adds r0, r4, #0	@ 000aefe2 201c
.org 0xaefe4
	adds r0, #144	@ 000aefe4 9030
.org 0xaefe6
	str r5, [r0, #0]	@ 000aefe6 0560
.org 0xaefe8
	adds r0, #4	@ 000aefe8 0430
.org 0xaefea
	strb r2, [r0, #0]	@ 000aefea 0270
.org 0xaefec
	ldrb r1, [r4, #10]	@ 000aefec a17a
.org 0xaefee
	movs r0, #251	@ 000aefee fb20
.org 0xaeff0
	ands r0, r1	@ 000aeff0 0840
.org 0xaeff2
	strb r0, [r4, #10]	@ 000aeff2 a072
.org 0xaeff4
	str r5, [r4, #92]	@ 000aeff4 e565
.org 0xaeff6
	str r5, [r4, #96]	@ 000aeff6 2566
.org 0xaeff8
	movs r0, #2	@ 000aeff8 0220
.org 0xaeffa
	strb r0, [r4, #13]	@ 000aeffa 6073
.org 0xaeffc
	strb r2, [r4, #14]	@ 000aeffc a273
.org 0xaeffe
	b.n 0xaf016	@ 000aeffe 0ae0
.org 0xaf000
	.byte 0xf0,0xdb,0x02,0x02	@ 000af000 data
.org 0xaf004
	.byte 0x00,0xfc,0xff,0xff	@ 000af004 data
.org 0xaf008
	str r7, [r3, #84]	@ 000af008 5f65
.org 0xaf00a
	ldr r0, [r4, #88]	@ 000af00a a06d
.org 0xaf00c
	movs r2, #152	@ 000af00c 9822
