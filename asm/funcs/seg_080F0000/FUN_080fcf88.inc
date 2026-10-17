@ FUN_080fcf88  entry 0x080fcf88  size 226
.thumb
.org 0xfcf88
FUN_080fcf88:
	push {r4, r5, r6, lr}	@ 000fcf88 70b5
.org 0xfcf8a
	adds r4, r0, #0	@ 000fcf8a 041c
.org 0xfcf8c
	ldrb r0, [r4, #13]	@ 000fcf8c 607b
.org 0xfcf8e
	cmp r0, #0	@ 000fcf8e 0028
.org 0xfcf90
	beq.n 0xfcf94	@ 000fcf90 00d0
.org 0xfcf92
	b.n 0xfd084	@ 000fcf92 77e0
.org 0xfcf94
	adds r6, r4, #0	@ 000fcf94 261c
.org 0xfcf96
	adds r6, #182	@ 000fcf96 b636
.org 0xfcf98
	movs r1, #159	@ 000fcf98 9f21
.org 0xfcf9a
	lsls r1, r1, #8	@ 000fcf9a 0902
.org 0xfcf9c
	strh r1, [r6, #0]	@ 000fcf9c 3180
.org 0xfcf9e
	adds r0, r4, #0	@ 000fcf9e 201c
.org 0xfcfa0
	bl 0x1cf00	@ 000fcfa0 1ff7aeff
.org 0xfcfa4
	ldr r0, [pc, #56]	@ 000fcfa4 0e48
.org 0xfcfa6
	ldrb r0, [r0, #0]	@ 000fcfa6 0078
.org 0xfcfa8
	adds r1, r4, #0	@ 000fcfa8 211c
.org 0xfcfaa
	adds r1, #180	@ 000fcfaa b431
.org 0xfcfac
	strb r0, [r1, #0]	@ 000fcfac 0870
.org 0xfcfae
	ldrb r2, [r4, #10]	@ 000fcfae a27a
.org 0xfcfb0
	movs r0, #254	@ 000fcfb0 fe20
.org 0xfcfb2
	ands r0, r2	@ 000fcfb2 1040
.org 0xfcfb4
	strb r0, [r4, #10]	@ 000fcfb4 a072
.org 0xfcfb6
	movs r0, #0	@ 000fcfb6 0020
.org 0xfcfb8
	ldrsb r0, [r1, r0]	@ 000fcfb8 0856
.org 0xfcfba
	adds r5, r1, #0	@ 000fcfba 0d1c
.org 0xfcfbc
	cmp r0, #0	@ 000fcfbc 0028
.org 0xfcfbe
	blt.n 0xfcfec	@ 000fcfbe 15db
.org 0xfcfc0
	ldrh r1, [r6, #0]	@ 000fcfc0 3188
.org 0xfcfc2
	ldr r0, [pc, #32]	@ 000fcfc2 0848
.org 0xfcfc4
	cmp r1, r0	@ 000fcfc4 8142
.org 0xfcfc6
	beq.n 0xfcfec	@ 000fcfc6 11d0
.org 0xfcfc8
	adds r0, r4, #0	@ 000fcfc8 201c
.org 0xfcfca
	adds r0, #116	@ 000fcfca 7430
.org 0xfcfcc
	movs r2, #0	@ 000fcfcc 0022
.org 0xfcfce
	ldrsb r2, [r5, r2]	@ 000fcfce aa56
.org 0xfcfd0
	lsls r1, r2, #1	@ 000fcfd0 5100
.org 0xfcfd2
	adds r1, r1, r2	@ 000fcfd2 8918
.org 0xfcfd4
	lsls r1, r1, #3	@ 000fcfd4 c900
.org 0xfcfd6
	ldr r2, [pc, #16]	@ 000fcfd6 044a
.org 0xfcfd8
	adds r1, r1, r2	@ 000fcfd8 8918
.org 0xfcfda
	bl 0x5784	@ 000fcfda 08f7d3fb
.org 0xfcfde
	b.n 0xfcff6	@ 000fcfde 0ae0
.org 0xfcfe0
	.byte 0xcc,0xaf,0x86,0x08	@ 000fcfe0 data
.org 0xfcfe4
	.byte 0x07,0x9f,0x00,0x00	@ 000fcfe4 data
.org 0xfcfe8
	.byte 0x3c,0xaf,0x86,0x08	@ 000fcfe8 data
.org 0xfcfec
	adds r0, r4, #0	@ 000fcfec 201c
.org 0xfcfee
	adds r0, #116	@ 000fcfee 7430
.org 0xfcff0
	ldr r1, [pc, #32]	@ 000fcff0 0849
.org 0xfcff2
	bl 0x5784	@ 000fcff2 08f7c7fb
.org 0xfcff6
	movs r0, #0	@ 000fcff6 0020
.org 0xfcff8
	ldrsb r0, [r5, r0]	@ 000fcff8 2856
.org 0xfcffa
	cmp r0, #0	@ 000fcffa 0028
.org 0xfcffc
	ble.n 0xfd01c	@ 000fcffc 0edd
.org 0xfcffe
	ldrb r1, [r4, #11]	@ 000fcffe e17a
.org 0xfd000
	movs r0, #8	@ 000fd000 0820
.org 0xfd002
	orrs r0, r1	@ 000fd002 0843
.org 0xfd004
	strb r0, [r4, #11]	@ 000fd004 e072
.org 0xfd006
	movs r0, #0	@ 000fd006 0020
.org 0xfd008
	ldrsb r0, [r5, r0]	@ 000fd008 2856
.org 0xfd00a
	lsls r0, r0, #3	@ 000fd00a c000
.org 0xfd00c
	ldr r1, [pc, #8]	@ 000fd00c 0249
.org 0xfd00e
	adds r0, r0, r1	@ 000fd00e 4018
.org 0xfd010
	b.n 0xfd03e	@ 000fd010 15e0
.org 0xfd012
	.byte 0x00	@ 000fd012 data
.org 0xfd013
	.byte 0x00	@ 000fd013 data
.org 0xfd014
	.byte 0xb4,0xaf,0x86,0x08	@ 000fd014 data
.org 0xfd018
	.byte 0xdc,0xaf,0x86,0x08	@ 000fd018 data
.org 0xfd01c
	cmp r0, #0	@ 000fd01c 0028
.org 0xfd01e
	bne.n 0xfd050	@ 000fd01e 17d1
.org 0xfd020
	ldrb r0, [r4, #30]	@ 000fd020 a07f
.org 0xfd022
	lsls r0, r0, #8	@ 000fd022 0002
.org 0xfd024
	adds r1, r4, #0	@ 000fd024 211c
.org 0xfd026
	adds r1, #112	@ 000fd026 7031
.org 0xfd028
	ldrb r1, [r1, #0]	@ 000fd028 0978
.org 0xfd02a
	orrs r0, r1	@ 000fd02a 0843
.org 0xfd02c
	movs r1, #159	@ 000fd02c 9f21
.org 0xfd02e
	lsls r1, r1, #8	@ 000fd02e 0902
.org 0xfd030
	cmp r0, r1	@ 000fd030 8842
.org 0xfd032
	beq.n 0xfd050	@ 000fd032 0dd0
.org 0xfd034
	ldrb r1, [r4, #11]	@ 000fd034 e17a
.org 0xfd036
	movs r0, #8	@ 000fd036 0820
.org 0xfd038
	orrs r0, r1	@ 000fd038 0843
.org 0xfd03a
	strb r0, [r4, #11]	@ 000fd03a e072
.org 0xfd03c
	ldr r0, [pc, #8]	@ 000fd03c 0248
.org 0xfd03e
	str r0, [r4, #48]	@ 000fd03e 2063
.org 0xfd040
	ldr r0, [pc, #8]	@ 000fd040 0248
.org 0xfd042
	strh r0, [r4, #38]	@ 000fd042 e084
.org 0xfd044
	b.n 0xfd058	@ 000fd044 08e0
.org 0xfd046
	.byte 0x00	@ 000fd046 data
.org 0xfd047
	.byte 0x00	@ 000fd047 data
.org 0xfd048
	.byte 0xdc,0xaf,0x86,0x08	@ 000fd048 data
.org 0xfd04c
	.byte 0x01,0x02,0x00,0x00	@ 000fd04c data
.org 0xfd050
	ldrb r1, [r4, #11]	@ 000fd050 e17a
.org 0xfd052
	movs r0, #247	@ 000fd052 f720
.org 0xfd054
	ands r0, r1	@ 000fd054 0840
.org 0xfd056
	strb r0, [r4, #11]	@ 000fd056 e072
.org 0xfd058
	adds r1, r4, #0	@ 000fd058 211c
.org 0xfd05a
	adds r1, #164	@ 000fd05a a431
.org 0xfd05c
	movs r0, #255	@ 000fd05c ff20
.org 0xfd05e
	strh r0, [r1, #0]	@ 000fd05e 0880
.org 0xfd060
	ldr r0, [pc, #40]	@ 000fd060 0a48
.org 0xfd062
	ldrb r1, [r4, #17]	@ 000fd062 617c
.org 0xfd064
	lsrs r2, r1, #5	@ 000fd064 4a09
.org 0xfd066
	adds r2, #1	@ 000fd066 0132
.org 0xfd068
	lsls r2, r2, #2	@ 000fd068 9200
