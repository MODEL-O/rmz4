@ FUN_080fbd5c  entry 0x080fbd5c  size 250
.thumb
.org 0xfbd5c
FUN_080fbd5c:
	push {r4, r5, r6, r7, lr}	@ 000fbd5c f0b5
.org 0xfbd5e
	adds r5, r0, #0	@ 000fbd5e 051c
.org 0xfbd60
	ldr r2, [pc, #88]	@ 000fbd60 164a
.org 0xfbd62
	ldr r1, [pc, #92]	@ 000fbd62 1749
.org 0xfbd64
	ldrb r0, [r5, #16]	@ 000fbd64 287c
.org 0xfbd66
	lsls r0, r0, #2	@ 000fbd66 8000
.org 0xfbd68
	adds r0, r0, r1	@ 000fbd68 4018
.org 0xfbd6a
	ldr r1, [r0, #0]	@ 000fbd6a 0168
.org 0xfbd6c
	lsrs r0, r1, #3	@ 000fbd6c c808
.org 0xfbd6e
	adds r2, #4	@ 000fbd6e 0432
.org 0xfbd70
	adds r0, r0, r2	@ 000fbd70 8018
.org 0xfbd72
	ldrb r6, [r0, #0]	@ 000fbd72 0678
.org 0xfbd74
	movs r0, #7	@ 000fbd74 0720
.org 0xfbd76
	ands r1, r0	@ 000fbd76 0140
.org 0xfbd78
	asrs r6, r1	@ 000fbd78 0e41
.org 0xfbd7a
	movs r7, #1	@ 000fbd7a 0127
.org 0xfbd7c
	ands r6, r7	@ 000fbd7c 3e40
.org 0xfbd7e
	cmp r6, #0	@ 000fbd7e 002e
.org 0xfbd80
	beq.n 0xfbdc8	@ 000fbd80 22d0
.org 0xfbd82
	ldrb r1, [r5, #10]	@ 000fbd82 a97a
.org 0xfbd84
	movs r0, #254	@ 000fbd84 fe20
.org 0xfbd86
	ands r0, r1	@ 000fbd86 0840
.org 0xfbd88
	movs r2, #0	@ 000fbd88 0022
.org 0xfbd8a
	movs r1, #253	@ 000fbd8a fd21
.org 0xfbd8c
	ands r0, r1	@ 000fbd8c 0840
.org 0xfbd8e
	strb r0, [r5, #10]	@ 000fbd8e a872
.org 0xfbd90
	adds r0, r5, #0	@ 000fbd90 281c
.org 0xfbd92
	adds r0, #140	@ 000fbd92 8c30
.org 0xfbd94
	str r2, [r0, #0]	@ 000fbd94 0260
.org 0xfbd96
	adds r0, #4	@ 000fbd96 0430
.org 0xfbd98
	str r2, [r0, #0]	@ 000fbd98 0260
.org 0xfbd9a
	adds r0, #4	@ 000fbd9a 0430
.org 0xfbd9c
	strb r2, [r0, #0]	@ 000fbd9c 0270
.org 0xfbd9e
	ldrb r1, [r5, #10]	@ 000fbd9e a97a
.org 0xfbda0
	movs r0, #251	@ 000fbda0 fb20
.org 0xfbda2
	ands r0, r1	@ 000fbda2 0840
.org 0xfbda4
	strb r0, [r5, #10]	@ 000fbda4 a872
.org 0xfbda6
	ldr r1, [pc, #28]	@ 000fbda6 0749
.org 0xfbda8
	ldrb r0, [r5, #9]	@ 000fbda8 687a
.org 0xfbdaa
	lsls r0, r0, #2	@ 000fbdaa 8000
.org 0xfbdac
	adds r0, r0, r1	@ 000fbdac 4018
.org 0xfbdae
	movs r1, #3	@ 000fbdae 0321
.org 0xfbdb0
	str r1, [r5, #12]	@ 000fbdb0 e960
.org 0xfbdb2
	ldr r0, [r0, #0]	@ 000fbdb2 0068
.org 0xfbdb4
	ldr r0, [r0, #12]	@ 000fbdb4 c068
.org 0xfbdb6
	str r0, [r5, #20]	@ 000fbdb6 6861
.org 0xfbdb8
	b.n 0xfbe5e	@ 000fbdb8 51e0
.org 0xfbdba
	.byte 0x00	@ 000fbdba data
.org 0xfbdbb
	.byte 0x00	@ 000fbdbb data
.org 0xfbdbc
	.byte 0xb0,0xe8,0x02,0x02	@ 000fbdbc data
.org 0xfbdc0
	.byte 0xdc,0xac,0x86,0x08	@ 000fbdc0 data
.org 0xfbdc4
	.byte 0xfc,0x92,0x86,0x08	@ 000fbdc4 data
.org 0xfbdc8
	adds r0, r5, #0	@ 000fbdc8 281c
.org 0xfbdca
	bl 0x1cc9c	@ 000fbdca 20f767ff
.org 0xfbdce
	ldrb r1, [r5, #10]	@ 000fbdce a97a
.org 0xfbdd0
	movs r0, #1	@ 000fbdd0 0120
.org 0xfbdd2
	orrs r0, r1	@ 000fbdd2 0843
.org 0xfbdd4
	movs r1, #2	@ 000fbdd4 0221
.org 0xfbdd6
	orrs r0, r1	@ 000fbdd6 0843
.org 0xfbdd8
	strb r0, [r5, #10]	@ 000fbdd8 a872
.org 0xfbdda
	movs r1, #226	@ 000fbdda e221
.org 0xfbddc
	lsls r1, r1, #7	@ 000fbddc c901
.org 0xfbdde
	adds r0, r5, #0	@ 000fbdde 281c
.org 0xfbde0
	bl 0x1cf00	@ 000fbde0 21f78ef8
.org 0xfbde4
	adds r0, r5, #0	@ 000fbde4 281c
.org 0xfbde6
	bl 0x1cff0	@ 000fbde6 21f703f9
.org 0xfbdea
	ldrb r1, [r5, #10]	@ 000fbdea a97a
.org 0xfbdec
	movs r0, #239	@ 000fbdec ef20
.org 0xfbdee
	ands r0, r1	@ 000fbdee 0840
.org 0xfbdf0
	strb r0, [r5, #10]	@ 000fbdf0 a872
.org 0xfbdf2
	adds r0, r5, #0	@ 000fbdf2 281c
.org 0xfbdf4
	adds r0, #76	@ 000fbdf4 4c30
.org 0xfbdf6
	strb r6, [r0, #0]	@ 000fbdf6 0670
.org 0xfbdf8
	adds r2, r5, #0	@ 000fbdf8 2a1c
.org 0xfbdfa
	adds r2, #74	@ 000fbdfa 4a32
.org 0xfbdfc
	ldrb r1, [r2, #0]	@ 000fbdfc 1178
.org 0xfbdfe
	movs r0, #17	@ 000fbdfe 1120
.org 0xfbe00
	negs r0, r0	@ 000fbe00 4042
.org 0xfbe02
	ands r0, r1	@ 000fbe02 0840
.org 0xfbe04
	strb r0, [r2, #0]	@ 000fbe04 1070
.org 0xfbe06
	ldrb r0, [r5, #10]	@ 000fbe06 a87a
.org 0xfbe08
	movs r1, #4	@ 000fbe08 0421
.org 0xfbe0a
	orrs r0, r1	@ 000fbe0a 0843
.org 0xfbe0c
	strb r0, [r5, #10]	@ 000fbe0c a872
.org 0xfbe0e
	adds r4, r5, #0	@ 000fbe0e 2c1c
.org 0xfbe10
	adds r4, #116	@ 000fbe10 7434
.org 0xfbe12
	ldr r1, [pc, #80]	@ 000fbe12 1449
.org 0xfbe14
	adds r2, #10	@ 000fbe14 0a32
.org 0xfbe16
	adds r0, r4, #0	@ 000fbe16 201c
.org 0xfbe18
	movs r3, #8	@ 000fbe18 0823
.org 0xfbe1a
	bl 0x5760	@ 000fbe1a 09f7a1fc
.org 0xfbe1e
	str r5, [r4, #44]	@ 000fbe1e e562
.org 0xfbe20
	str r6, [r4, #36]	@ 000fbe20 6662
.org 0xfbe22
	ldrb r1, [r5, #11]	@ 000fbe22 e97a
.org 0xfbe24
	movs r0, #8	@ 000fbe24 0820
.org 0xfbe26
	orrs r0, r1	@ 000fbe26 0843
.org 0xfbe28
	strb r0, [r5, #11]	@ 000fbe28 e872
.org 0xfbe2a
	ldr r0, [pc, #60]	@ 000fbe2a 0f48
.org 0xfbe2c
	str r0, [r5, #48]	@ 000fbe2c 2863
.org 0xfbe2e
	strh r7, [r5, #38]	@ 000fbe2e ef84
.org 0xfbe30
	ldr r0, [r5, #84]	@ 000fbe30 686d
.org 0xfbe32
	ldr r1, [r5, #88]	@ 000fbe32 a96d
.org 0xfbe34
	bl 0x8534	@ 000fbe34 0cf77efb
.org 0xfbe38
	str r0, [r5, #88]	@ 000fbe38 a865
.org 0xfbe3a
	adds r1, r5, #0	@ 000fbe3a 291c
.org 0xfbe3c
	adds r1, #180	@ 000fbe3c b431
.org 0xfbe3e
	ldr r0, [r5, #84]	@ 000fbe3e 686d
.org 0xfbe40
	str r0, [r1, #0]	@ 000fbe40 0860
.org 0xfbe42
	adds r1, #4	@ 000fbe42 0431
.org 0xfbe44
	ldr r0, [r5, #88]	@ 000fbe44 a86d
.org 0xfbe46
	str r0, [r1, #0]	@ 000fbe46 0860
.org 0xfbe48
	ldr r1, [pc, #32]	@ 000fbe48 0849
.org 0xfbe4a
	ldrb r0, [r5, #9]	@ 000fbe4a 687a
.org 0xfbe4c
	lsls r0, r0, #2	@ 000fbe4c 8000
.org 0xfbe4e
	adds r0, r0, r1	@ 000fbe4e 4018
.org 0xfbe50
	str r7, [r5, #12]	@ 000fbe50 ef60
.org 0xfbe52
	ldr r0, [r0, #0]	@ 000fbe52 0068
.org 0xfbe54
	ldr r0, [r0, #4]	@ 000fbe54 4068
