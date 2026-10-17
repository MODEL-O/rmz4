@ FUN_080fde10  entry 0x080fde10  size 224
.thumb
.org 0xfde10
FUN_080fde10:
	push {r4, r5, r6, lr}	@ 000fde10 70b5
.org 0xfde12
	adds r4, r0, #0	@ 000fde12 041c
.org 0xfde14
	ldrb r0, [r4, #13]	@ 000fde14 607b
.org 0xfde16
	cmp r0, #0	@ 000fde16 0028
.org 0xfde18
	beq.n 0xfde1c	@ 000fde18 00d0
.org 0xfde1a
	b.n 0xfdf10	@ 000fde1a 79e0
.org 0xfde1c
	adds r6, r4, #0	@ 000fde1c 261c
.org 0xfde1e
	adds r6, #182	@ 000fde1e b636
.org 0xfde20
	ldr r1, [pc, #68]	@ 000fde20 1149
.org 0xfde22
	strh r1, [r6, #0]	@ 000fde22 3180
.org 0xfde24
	adds r0, r4, #0	@ 000fde24 201c
.org 0xfde26
	bl 0x1cf00	@ 000fde26 1ff76bf8
.org 0xfde2a
	ldr r0, [pc, #64]	@ 000fde2a 1048
.org 0xfde2c
	ldrb r0, [r0, #1]	@ 000fde2c 4078
.org 0xfde2e
	adds r1, r4, #0	@ 000fde2e 211c
.org 0xfde30
	adds r1, #180	@ 000fde30 b431
.org 0xfde32
	strb r0, [r1, #0]	@ 000fde32 0870
.org 0xfde34
	ldrb r2, [r4, #10]	@ 000fde34 a27a
.org 0xfde36
	movs r0, #1	@ 000fde36 0120
.org 0xfde38
	orrs r0, r2	@ 000fde38 1043
.org 0xfde3a
	strb r0, [r4, #10]	@ 000fde3a a072
.org 0xfde3c
	movs r0, #0	@ 000fde3c 0020
.org 0xfde3e
	ldrsb r0, [r1, r0]	@ 000fde3e 0856
.org 0xfde40
	adds r5, r1, #0	@ 000fde40 0d1c
.org 0xfde42
	cmp r0, #0	@ 000fde42 0028
.org 0xfde44
	blt.n 0xfde78	@ 000fde44 18db
.org 0xfde46
	ldrh r1, [r6, #0]	@ 000fde46 3188
.org 0xfde48
	ldr r0, [pc, #36]	@ 000fde48 0948
.org 0xfde4a
	cmp r1, r0	@ 000fde4a 8142
.org 0xfde4c
	beq.n 0xfde78	@ 000fde4c 14d0
.org 0xfde4e
	adds r0, r4, #0	@ 000fde4e 201c
.org 0xfde50
	adds r0, #116	@ 000fde50 7430
.org 0xfde52
	movs r2, #0	@ 000fde52 0022
.org 0xfde54
	ldrsb r2, [r5, r2]	@ 000fde54 aa56
.org 0xfde56
	lsls r1, r2, #1	@ 000fde56 5100
.org 0xfde58
	adds r1, r1, r2	@ 000fde58 8918
.org 0xfde5a
	lsls r1, r1, #3	@ 000fde5a c900
.org 0xfde5c
	ldr r2, [pc, #20]	@ 000fde5c 054a
.org 0xfde5e
	adds r1, r1, r2	@ 000fde5e 8918
.org 0xfde60
	bl 0x5784	@ 000fde60 07f790fc
.org 0xfde64
	b.n 0xfde82	@ 000fde64 0de0
.org 0xfde66
	.byte 0x00	@ 000fde66 data
.org 0xfde67
	.byte 0x00	@ 000fde67 data
.org 0xfde68
	.byte 0x01,0x9f,0x00,0x00	@ 000fde68 data
.org 0xfde6c
	.byte 0xcc,0xaf,0x86,0x08	@ 000fde6c data
.org 0xfde70
	.byte 0x07,0x9f,0x00,0x00	@ 000fde70 data
.org 0xfde74
	.byte 0x3c,0xaf,0x86,0x08	@ 000fde74 data
.org 0xfde78
	adds r0, r4, #0	@ 000fde78 201c
.org 0xfde7a
	adds r0, #116	@ 000fde7a 7430
.org 0xfde7c
	ldr r1, [pc, #32]	@ 000fde7c 0849
.org 0xfde7e
	bl 0x5784	@ 000fde7e 07f781fc
.org 0xfde82
	movs r0, #0	@ 000fde82 0020
.org 0xfde84
	ldrsb r0, [r5, r0]	@ 000fde84 2856
.org 0xfde86
	cmp r0, #0	@ 000fde86 0028
.org 0xfde88
	ble.n 0xfdea8	@ 000fde88 0edd
.org 0xfde8a
	ldrb r1, [r4, #11]	@ 000fde8a e17a
.org 0xfde8c
	movs r0, #8	@ 000fde8c 0820
.org 0xfde8e
	orrs r0, r1	@ 000fde8e 0843
.org 0xfde90
	strb r0, [r4, #11]	@ 000fde90 e072
.org 0xfde92
	movs r0, #0	@ 000fde92 0020
.org 0xfde94
	ldrsb r0, [r5, r0]	@ 000fde94 2856
.org 0xfde96
	lsls r0, r0, #3	@ 000fde96 c000
.org 0xfde98
	ldr r1, [pc, #8]	@ 000fde98 0249
.org 0xfde9a
	adds r0, r0, r1	@ 000fde9a 4018
.org 0xfde9c
	b.n 0xfdeca	@ 000fde9c 15e0
.org 0xfde9e
	.byte 0x00	@ 000fde9e data
.org 0xfde9f
	.byte 0x00	@ 000fde9f data
.org 0xfdea0
	.byte 0xb4,0xaf,0x86,0x08	@ 000fdea0 data
.org 0xfdea4
	.byte 0xdc,0xaf,0x86,0x08	@ 000fdea4 data
.org 0xfdea8
	cmp r0, #0	@ 000fdea8 0028
.org 0xfdeaa
	bne.n 0xfdedc	@ 000fdeaa 17d1
.org 0xfdeac
	ldrb r0, [r4, #30]	@ 000fdeac a07f
.org 0xfdeae
	lsls r0, r0, #8	@ 000fdeae 0002
.org 0xfdeb0
	adds r1, r4, #0	@ 000fdeb0 211c
.org 0xfdeb2
	adds r1, #112	@ 000fdeb2 7031
.org 0xfdeb4
	ldrb r1, [r1, #0]	@ 000fdeb4 0978
.org 0xfdeb6
	orrs r0, r1	@ 000fdeb6 0843
.org 0xfdeb8
	movs r1, #159	@ 000fdeb8 9f21
.org 0xfdeba
	lsls r1, r1, #8	@ 000fdeba 0902
.org 0xfdebc
	cmp r0, r1	@ 000fdebc 8842
.org 0xfdebe
	beq.n 0xfdedc	@ 000fdebe 0dd0
.org 0xfdec0
	ldrb r1, [r4, #11]	@ 000fdec0 e17a
.org 0xfdec2
	movs r0, #8	@ 000fdec2 0820
.org 0xfdec4
	orrs r0, r1	@ 000fdec4 0843
.org 0xfdec6
	strb r0, [r4, #11]	@ 000fdec6 e072
.org 0xfdec8
	ldr r0, [pc, #8]	@ 000fdec8 0248
.org 0xfdeca
	str r0, [r4, #48]	@ 000fdeca 2063
.org 0xfdecc
	ldr r0, [pc, #8]	@ 000fdecc 0248
.org 0xfdece
	strh r0, [r4, #38]	@ 000fdece e084
.org 0xfded0
	b.n 0xfdee4	@ 000fded0 08e0
.org 0xfded2
	.byte 0x00	@ 000fded2 data
.org 0xfded3
	.byte 0x00	@ 000fded3 data
.org 0xfded4
	.byte 0xdc,0xaf,0x86,0x08	@ 000fded4 data
.org 0xfded8
	.byte 0x01,0x02,0x00,0x00	@ 000fded8 data
.org 0xfdedc
	ldrb r1, [r4, #11]	@ 000fdedc e17a
.org 0xfdede
	movs r0, #247	@ 000fdede f720
.org 0xfdee0
	ands r0, r1	@ 000fdee0 0840
.org 0xfdee2
	strb r0, [r4, #11]	@ 000fdee2 e072
.org 0xfdee4
	ldr r0, [pc, #48]	@ 000fdee4 0c48
.org 0xfdee6
	ldrb r1, [r4, #17]	@ 000fdee6 617c
.org 0xfdee8
	lsrs r2, r1, #5	@ 000fdee8 4a09
.org 0xfdeea
	adds r2, #1	@ 000fdeea 0132
.org 0xfdeec
	lsls r2, r2, #2	@ 000fdeec 9200
.org 0xfdeee
	ldr r3, [pc, #44]	@ 000fdeee 0b4b
