@ FUN_080fb9fc  entry 0x080fb9fc  size 192
.thumb
.org 0xfb9fc
FUN_080fb9fc:
	push {r4, r5, r6, lr}	@ 000fb9fc 70b5
.org 0xfb9fe
	adds r4, r0, #0	@ 000fb9fe 041c
.org 0xfba00
	adds r0, #140	@ 000fba00 8c30
.org 0xfba02
	ldr r0, [r0, #0]	@ 000fba02 0068
.org 0xfba04
	movs r6, #1	@ 000fba04 0126
.org 0xfba06
	ands r0, r6	@ 000fba06 3040
.org 0xfba08
	cmp r0, #0	@ 000fba08 0028
.org 0xfba0a
	beq.n 0xfba4c	@ 000fba0a 1fd0
.org 0xfba0c
	ldr r1, [pc, #160]	@ 000fba0c 2849
.org 0xfba0e
	adds r0, r4, #0	@ 000fba0e 201c
.org 0xfba10
	bl 0x1cf00	@ 000fba10 21f776fa
.org 0xfba14
	ldrb r1, [r4, #11]	@ 000fba14 e17a
.org 0xfba16
	movs r0, #8	@ 000fba16 0820
.org 0xfba18
	orrs r0, r1	@ 000fba18 0843
.org 0xfba1a
	strb r0, [r4, #11]	@ 000fba1a e072
.org 0xfba1c
	ldr r0, [pc, #148]	@ 000fba1c 2548
.org 0xfba1e
	str r0, [r4, #48]	@ 000fba1e 2063
.org 0xfba20
	ldr r0, [pc, #148]	@ 000fba20 2548
.org 0xfba22
	strh r0, [r4, #38]	@ 000fba22 e084
.org 0xfba24
	movs r0, #128	@ 000fba24 8020
.org 0xfba26
	strb r0, [r4, #18]	@ 000fba26 a074
.org 0xfba28
	adds r5, r4, #0	@ 000fba28 251c
.org 0xfba2a
	adds r5, #189	@ 000fba2a bd35
.org 0xfba2c
	ldrb r0, [r5, #0]	@ 000fba2c 2878
.org 0xfba2e
	cmp r0, #0	@ 000fba2e 0028
.org 0xfba30
	beq.n 0xfba4a	@ 000fba30 0bd0
.org 0xfba32
	movs r0, #64	@ 000fba32 4020
.org 0xfba34
	bl 0x2b10	@ 000fba34 07f76cf8
.org 0xfba38
	movs r0, #54	@ 000fba38 3620
.org 0xfba3a
	bl 0x2624	@ 000fba3a 06f7f3fd
.org 0xfba3e
	movs r0, #172	@ 000fba3e ac20
.org 0xfba40
	movs r1, #0	@ 000fba40 0021
.org 0xfba42
	bl 0x249c	@ 000fba42 06f72bfd
.org 0xfba46
	movs r0, #0	@ 000fba46 0020
.org 0xfba48
	strb r0, [r5, #0]	@ 000fba48 2870
.org 0xfba4a
	strb r6, [r4, #13]	@ 000fba4a 6673
.org 0xfba4c
	ldrb r0, [r4, #13]	@ 000fba4c 607b
.org 0xfba4e
	adds r5, r4, #0	@ 000fba4e 251c
.org 0xfba50
	adds r5, #189	@ 000fba50 bd35
.org 0xfba52
	cmp r0, #0	@ 000fba52 0028
.org 0xfba54
	beq.n 0xfba9c	@ 000fba54 22d0
.org 0xfba56
	ldrb r0, [r4, #18]	@ 000fba56 a07c
.org 0xfba58
	subs r0, #1	@ 000fba58 0138
.org 0xfba5a
	strb r0, [r4, #18]	@ 000fba5a a074
.org 0xfba5c
	lsls r0, r0, #24	@ 000fba5c 0006
.org 0xfba5e
	lsrs r0, r0, #24	@ 000fba5e 000e
.org 0xfba60
	cmp r0, #255	@ 000fba60 ff28
.org 0xfba62
	bne.n 0xfba9c	@ 000fba62 1bd1
.org 0xfba64
	ldrb r0, [r5, #0]	@ 000fba64 2878
.org 0xfba66
	cmp r0, #0	@ 000fba66 0028
.org 0xfba68
	bne.n 0xfba7c	@ 000fba68 08d1
.org 0xfba6a
	movs r0, #172	@ 000fba6a ac20
.org 0xfba6c
	bl 0x2624	@ 000fba6c 06f7dafd
.org 0xfba70
	movs r0, #54	@ 000fba70 3620
.org 0xfba72
	movs r1, #0	@ 000fba72 0021
.org 0xfba74
	bl 0x249c	@ 000fba74 06f712fd
.org 0xfba78
	movs r0, #1	@ 000fba78 0120
.org 0xfba7a
	strb r0, [r5, #0]	@ 000fba7a 2870
.org 0xfba7c
	movs r1, #196	@ 000fba7c c421
.org 0xfba7e
	lsls r1, r1, #8	@ 000fba7e 0902
.org 0xfba80
	adds r0, r4, #0	@ 000fba80 201c
.org 0xfba82
	bl 0x1cf00	@ 000fba82 21f73dfa
.org 0xfba86
	adds r0, r4, #0	@ 000fba86 201c
.org 0xfba88
	adds r0, #116	@ 000fba88 7430
.org 0xfba8a
	ldr r1, [pc, #48]	@ 000fba8a 0c49
.org 0xfba8c
	bl 0x5784	@ 000fba8c 09f77afe
.org 0xfba90
	ldrb r1, [r4, #11]	@ 000fba90 e17a
.org 0xfba92
	movs r0, #247	@ 000fba92 f720
.org 0xfba94
	ands r0, r1	@ 000fba94 0840
.org 0xfba96
	strb r0, [r4, #11]	@ 000fba96 e072
.org 0xfba98
	movs r0, #0	@ 000fba98 0020
.org 0xfba9a
	strb r0, [r4, #13]	@ 000fba9a 6073
.org 0xfba9c
	adds r0, r4, #0	@ 000fba9c 201c
.org 0xfba9e
	bl 0x1cff0	@ 000fba9e 21f7a7fa
.org 0xfbaa2
	ldrb r0, [r5, #0]	@ 000fbaa2 2878
.org 0xfbaa4
	cmp r0, #0	@ 000fbaa4 0028
.org 0xfbaa6
	beq.n 0xfbac0	@ 000fbaa6 0bd0
.org 0xfbaa8
	movs r0, #54	@ 000fbaa8 3620
.org 0xfbaaa
	bl 0x25d8	@ 000fbaaa 06f795fd
.org 0xfbaae
	b.n 0xfbac6	@ 000fbaae 0ae0
.org 0xfbab0
	.byte 0x01,0xc4,0x00,0x00	@ 000fbab0 data
.org 0xfbab4
	.byte 0xac,0xab,0x86,0x08	@ 000fbab4 data
.org 0xfbab8
	.byte 0x01,0x82,0x00,0x00	@ 000fbab8 data
