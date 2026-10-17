@ FUN_080feb48  entry 0x080feb48  size 460
.thumb
.org 0xfeb48
FUN_080feb48:
	push {r4, r5, r6, r7, lr}	@ 000feb48 f0b5
.org 0xfeb4a
	mov r7, r8	@ 000feb4a 4746
.org 0xfeb4c
	push {r7}	@ 000feb4c 80b4
.org 0xfeb4e
	sub sp, #8	@ 000feb4e 82b0
.org 0xfeb50
	adds r6, r0, #0	@ 000feb50 061c
.org 0xfeb52
	ldrb r0, [r6, #14]	@ 000feb52 b07b
.org 0xfeb54
	mov r8, r0	@ 000feb54 8046
.org 0xfeb56
	cmp r0, #0	@ 000feb56 0028
.org 0xfeb58
	bne.n 0xfec2e	@ 000feb58 69d1
.org 0xfeb5a
	movs r1, #168	@ 000feb5a a821
.org 0xfeb5c
	lsls r1, r1, #8	@ 000feb5c 0902
.org 0xfeb5e
	adds r0, r6, #0	@ 000feb5e 301c
.org 0xfeb60
	bl 0x1cf00	@ 000feb60 1ef7cef9
.org 0xfeb64
	adds r0, r6, #0	@ 000feb64 301c
.org 0xfeb66
	adds r0, #140	@ 000feb66 8c30
.org 0xfeb68
	mov r1, r8	@ 000feb68 4146
.org 0xfeb6a
	str r1, [r0, #0]	@ 000feb6a 0160
.org 0xfeb6c
	adds r0, #4	@ 000feb6c 0430
.org 0xfeb6e
	str r1, [r0, #0]	@ 000feb6e 0160
.org 0xfeb70
	adds r0, #4	@ 000feb70 0430
.org 0xfeb72
	strb r1, [r0, #0]	@ 000feb72 0170
.org 0xfeb74
	ldrb r0, [r6, #10]	@ 000feb74 b07a
.org 0xfeb76
	movs r3, #251	@ 000feb76 fb23
.org 0xfeb78
	ands r3, r0	@ 000feb78 0340
.org 0xfeb7a
	strb r3, [r6, #10]	@ 000feb7a b372
.org 0xfeb7c
	ldrb r1, [r6, #11]	@ 000feb7c f17a
.org 0xfeb7e
	movs r0, #247	@ 000feb7e f720
.org 0xfeb80
	ands r0, r1	@ 000feb80 0840
.org 0xfeb82
	strb r0, [r6, #11]	@ 000feb82 f072
.org 0xfeb84
	adds r5, r6, #0	@ 000feb84 351c
.org 0xfeb86
	adds r5, #84	@ 000feb86 5435
.org 0xfeb88
	ldr r7, [pc, #224]	@ 000feb88 384f
.org 0xfeb8a
	movs r4, #16	@ 000feb8a 1024
.org 0xfeb8c
	ands r3, r4	@ 000feb8c 2340
.org 0xfeb8e
	lsls r3, r3, #24	@ 000feb8e 1b06
.org 0xfeb90
	lsrs r3, r3, #24	@ 000feb90 1b0e
.org 0xfeb92
	adds r0, r5, #0	@ 000feb92 281c
.org 0xfeb94
	adds r1, r7, #0	@ 000feb94 391c
.org 0xfeb96
	movs r2, #0	@ 000feb96 0022
.org 0xfeb98
	bl 0xd4c8c	@ 000feb98 d6f778f8
.org 0xfeb9c
	adds r1, r7, #0	@ 000feb9c 391c
.org 0xfeb9e
	adds r1, #28	@ 000feb9e 1c31
.org 0xfeba0
	ldrb r0, [r6, #10]	@ 000feba0 b07a
.org 0xfeba2
	adds r3, r4, #0	@ 000feba2 231c
.org 0xfeba4
	ands r3, r0	@ 000feba4 0340
.org 0xfeba6
	lsls r3, r3, #24	@ 000feba6 1b06
.org 0xfeba8
	lsrs r3, r3, #24	@ 000feba8 1b0e
.org 0xfebaa
	adds r0, r5, #0	@ 000febaa 281c
.org 0xfebac
	movs r2, #0	@ 000febac 0022
.org 0xfebae
	bl 0xd4c8c	@ 000febae d6f76df8
.org 0xfebb2
	adds r1, r7, #0	@ 000febb2 391c
.org 0xfebb4
	adds r1, #56	@ 000febb4 3831
.org 0xfebb6
	ldrb r0, [r6, #10]	@ 000febb6 b07a
.org 0xfebb8
	adds r3, r4, #0	@ 000febb8 231c
.org 0xfebba
	ands r3, r0	@ 000febba 0340
.org 0xfebbc
	lsls r3, r3, #24	@ 000febbc 1b06
.org 0xfebbe
	lsrs r3, r3, #24	@ 000febbe 1b0e
.org 0xfebc0
	adds r0, r5, #0	@ 000febc0 281c
.org 0xfebc2
	movs r2, #0	@ 000febc2 0022
.org 0xfebc4
	bl 0xd4c8c	@ 000febc4 d6f762f8
.org 0xfebc8
	adds r1, r7, #0	@ 000febc8 391c
.org 0xfebca
	adds r1, #84	@ 000febca 5431
.org 0xfebcc
	ldrb r0, [r6, #10]	@ 000febcc b07a
.org 0xfebce
	adds r3, r4, #0	@ 000febce 231c
.org 0xfebd0
	ands r3, r0	@ 000febd0 0340
.org 0xfebd2
	lsls r3, r3, #24	@ 000febd2 1b06
.org 0xfebd4
	lsrs r3, r3, #24	@ 000febd4 1b0e
.org 0xfebd6
	adds r0, r5, #0	@ 000febd6 281c
.org 0xfebd8
	movs r2, #0	@ 000febd8 0022
.org 0xfebda
	bl 0xd4c8c	@ 000febda d6f757f8
.org 0xfebde
	adds r1, r7, #0	@ 000febde 391c
.org 0xfebe0
	adds r1, #112	@ 000febe0 7031
.org 0xfebe2
	ldrb r0, [r6, #10]	@ 000febe2 b07a
.org 0xfebe4
	adds r3, r4, #0	@ 000febe4 231c
.org 0xfebe6
	ands r3, r0	@ 000febe6 0340
.org 0xfebe8
	lsls r3, r3, #24	@ 000febe8 1b06
.org 0xfebea
	lsrs r3, r3, #24	@ 000febea 1b0e
.org 0xfebec
	adds r0, r5, #0	@ 000febec 281c
.org 0xfebee
	movs r2, #0	@ 000febee 0022
.org 0xfebf0
	bl 0xd4c8c	@ 000febf0 d6f74cf8
.org 0xfebf4
	adds r1, r7, #0	@ 000febf4 391c
.org 0xfebf6
	adds r1, #140	@ 000febf6 8c31
.org 0xfebf8
	ldrb r0, [r6, #10]	@ 000febf8 b07a
.org 0xfebfa
	ands r4, r0	@ 000febfa 0440
.org 0xfebfc
	lsls r4, r4, #24	@ 000febfc 2406
.org 0xfebfe
	lsrs r4, r4, #24	@ 000febfe 240e
.org 0xfec00
	adds r0, r5, #0	@ 000fec00 281c
.org 0xfec02
	movs r2, #0	@ 000fec02 0022
.org 0xfec04
	adds r3, r4, #0	@ 000fec04 231c
.org 0xfec06
	bl 0xd4c8c	@ 000fec06 d6f741f8
.org 0xfec0a
	mov r0, r8	@ 000fec0a 4046
.org 0xfec0c
	strb r0, [r6, #18]	@ 000fec0c b074
.org 0xfec0e
	ldr r0, [r6, #84]	@ 000fec0e 706d
.org 0xfec10
	str r0, [sp, #0]	@ 000fec10 0090
.org 0xfec12
	ldr r0, [r6, #88]	@ 000fec12 b06d
.org 0xfec14
	ldr r1, [pc, #88]	@ 000fec14 1649
.org 0xfec16
	adds r0, r0, r1	@ 000fec16 4018
.org 0xfec18
	str r0, [sp, #4]	@ 000fec18 0190
.org 0xfec1a
	movs r0, #1	@ 000fec1a 0120
.org 0xfec1c
	mov r1, sp	@ 000fec1c 6946
.org 0xfec1e
	bl 0xd0c88	@ 000fec1e d2f733f8
.org 0xfec22
	movs r0, #42	@ 000fec22 2a20
.org 0xfec24
	bl 0x2b10	@ 000fec24 03f774ff
.org 0xfec28
	ldrb r0, [r6, #14]	@ 000fec28 b07b
.org 0xfec2a
	adds r0, #1	@ 000fec2a 0130
.org 0xfec2c
	strb r0, [r6, #14]	@ 000fec2c b073
.org 0xfec2e
	adds r0, r6, #0	@ 000fec2e 301c
.org 0xfec30
	bl 0x1cff0	@ 000fec30 1ef7def9
.org 0xfec34
	ldrb r0, [r6, #18]	@ 000fec34 b07c
.org 0xfec36
	adds r0, #1	@ 000fec36 0130
.org 0xfec38
	strb r0, [r6, #18]	@ 000fec38 b074
.org 0xfec3a
	lsls r0, r0, #24	@ 000fec3a 0006
.org 0xfec3c
	lsrs r3, r0, #24	@ 000fec3c 030e
.org 0xfec3e
	cmp r3, #4	@ 000fec3e 042b
.org 0xfec40
	bne.n 0xfec84	@ 000fec40 20d1
.org 0xfec42
	ldr r2, [pc, #48]	@ 000fec42 0c4a
.org 0xfec44
	ldr r1, [r2, #0]	@ 000fec44 1168
.org 0xfec46
	ldr r0, [pc, #48]	@ 000fec46 0c48
.org 0xfec48
	muls r0, r1	@ 000fec48 4843
.org 0xfec4a
	ldr r1, [pc, #48]	@ 000fec4a 0c49
.org 0xfec4c
	adds r0, r0, r1	@ 000fec4c 4018
.org 0xfec4e
	lsls r0, r0, #1	@ 000fec4e 4000
.org 0xfec50
	lsrs r1, r0, #1	@ 000fec50 4108
.org 0xfec52
	str r1, [r2, #0]	@ 000fec52 1160
.org 0xfec54
	lsrs r0, r0, #17	@ 000fec54 400c
.org 0xfec56
	movs r1, #15	@ 000fec56 0f21
.org 0xfec58
	ands r0, r1	@ 000fec58 0840
.org 0xfec5a
	movs r1, #8	@ 000fec5a 0821
.org 0xfec5c
	subs r1, r1, r0	@ 000fec5c 091a
.org 0xfec5e
	lsls r1, r1, #8	@ 000fec5e 0902
.org 0xfec60
	ldr r0, [r6, #84]	@ 000fec60 706d
.org 0xfec62
	adds r0, r0, r1	@ 000fec62 4018
.org 0xfec64
	str r0, [sp, #0]	@ 000fec64 0090
.org 0xfec66
	ldr r0, [r6, #88]	@ 000fec66 b06d
.org 0xfec68
	ldr r1, [pc, #20]	@ 000fec68 0549
.org 0xfec6a
	b.n 0xfecae	@ 000fec6a 20e0
.org 0xfec6c
	.byte 0x9c,0xb3,0x86,0x08	@ 000fec6c data
.org 0xfec70
	.byte 0x00,0xe0,0xff,0xff	@ 000fec70 data
.org 0xfec74
	.byte 0x38,0xdc,0x02,0x02	@ 000fec74 data
.org 0xfec78
	.byte 0xfd,0x43,0x03,0x00	@ 000fec78 data
.org 0xfec7c
	.byte 0xc3,0x9e,0x26,0x00	@ 000fec7c data
.org 0xfec80
	.byte 0x00,0xe8,0xff,0xff	@ 000fec80 data
.org 0xfec84
	cmp r3, #8	@ 000fec84 082b
.org 0xfec86
	bne.n 0xfecd4	@ 000fec86 25d1
.org 0xfec88
	ldr r2, [pc, #56]	@ 000fec88 0e4a
.org 0xfec8a
	ldr r1, [r2, #0]	@ 000fec8a 1168
.org 0xfec8c
	ldr r0, [pc, #56]	@ 000fec8c 0e48
.org 0xfec8e
	muls r0, r1	@ 000fec8e 4843
.org 0xfec90
	ldr r1, [pc, #56]	@ 000fec90 0e49
.org 0xfec92
	adds r0, r0, r1	@ 000fec92 4018
.org 0xfec94
	lsls r0, r0, #1	@ 000fec94 4000
.org 0xfec96
	lsrs r1, r0, #1	@ 000fec96 4108
.org 0xfec98
	str r1, [r2, #0]	@ 000fec98 1160
.org 0xfec9a
	lsrs r0, r0, #17	@ 000fec9a 400c
.org 0xfec9c
	movs r1, #15	@ 000fec9c 0f21
.org 0xfec9e
	ands r0, r1	@ 000fec9e 0840
.org 0xfeca0
	subs r0, r3, r0	@ 000feca0 181a
.org 0xfeca2
	lsls r0, r0, #8	@ 000feca2 0002
.org 0xfeca4
	ldr r1, [r6, #84]	@ 000feca4 716d
.org 0xfeca6
	adds r1, r1, r0	@ 000feca6 0918
.org 0xfeca8
	str r1, [sp, #0]	@ 000feca8 0091
.org 0xfecaa
	ldr r0, [r6, #88]	@ 000fecaa b06d
.org 0xfecac
	ldr r1, [pc, #32]	@ 000fecac 0849
.org 0xfecae
	adds r0, r0, r1	@ 000fecae 4018
.org 0xfecb0
	str r0, [sp, #4]	@ 000fecb0 0190
.org 0xfecb2
	movs r0, #1	@ 000fecb2 0120
.org 0xfecb4
	mov r1, sp	@ 000fecb4 6946
.org 0xfecb6
	bl 0xd0c88	@ 000fecb6 d1f7e7ff
.org 0xfecba
	movs r0, #42	@ 000fecba 2a20
.org 0xfecbc
	bl 0x2b10	@ 000fecbc 03f728ff
.org 0xfecc0
	b.n 0xfed12	@ 000fecc0 27e0
.org 0xfecc2
	.byte 0x00	@ 000fecc2 data
.org 0xfecc3
	.byte 0x00	@ 000fecc3 data
.org 0xfecc4
	.byte 0x38,0xdc,0x02,0x02	@ 000fecc4 data
.org 0xfecc8
	.byte 0xfd,0x43,0x03,0x00	@ 000fecc8 data
.org 0xfeccc
	.byte 0xc3,0x9e,0x26,0x00	@ 000feccc data
.org 0xfecd0
	.byte 0x00,0xf8,0xff,0xff	@ 000fecd0 data
.org 0xfecd4
	cmp r3, #12	@ 000fecd4 0c2b
.org 0xfecd6
	bne.n 0xfed12	@ 000fecd6 1cd1
.org 0xfecd8
	ldr r2, [pc, #100]	@ 000fecd8 194a
.org 0xfecda
	ldr r1, [r2, #0]	@ 000fecda 1168
.org 0xfecdc
	ldr r0, [pc, #100]	@ 000fecdc 1948
.org 0xfecde
	muls r0, r1	@ 000fecde 4843
.org 0xfece0
	ldr r1, [pc, #100]	@ 000fece0 1949
.org 0xfece2
	adds r0, r0, r1	@ 000fece2 4018
.org 0xfece4
	lsls r0, r0, #1	@ 000fece4 4000
.org 0xfece6
	lsrs r1, r0, #1	@ 000fece6 4108
.org 0xfece8
	str r1, [r2, #0]	@ 000fece8 1160
.org 0xfecea
	lsrs r0, r0, #17	@ 000fecea 400c
.org 0xfecec
	movs r1, #15	@ 000fecec 0f21
.org 0xfecee
	ands r0, r1	@ 000fecee 0840
.org 0xfecf0
	movs r1, #8	@ 000fecf0 0821
.org 0xfecf2
	subs r1, r1, r0	@ 000fecf2 091a
.org 0xfecf4
	lsls r1, r1, #8	@ 000fecf4 0902
.org 0xfecf6
	ldr r0, [r6, #84]	@ 000fecf6 706d
.org 0xfecf8
	adds r0, r0, r1	@ 000fecf8 4018
.org 0xfecfa
	str r0, [sp, #0]	@ 000fecfa 0090
.org 0xfecfc
	ldr r0, [r6, #88]	@ 000fecfc b06d
.org 0xfecfe
	ldr r1, [pc, #76]	@ 000fecfe 1349
.org 0xfed00
	adds r0, r0, r1	@ 000fed00 4018
.org 0xfed02
	str r0, [sp, #4]	@ 000fed02 0190
.org 0xfed04
	movs r0, #1	@ 000fed04 0120
.org 0xfed06
	mov r1, sp	@ 000fed06 6946
.org 0xfed08
	bl 0xd0c88	@ 000fed08 d1f7beff
.org 0xfed0c
	movs r0, #42	@ 000fed0c 2a20
.org 0xfed0e
	bl 0x2b10	@ 000fed0e 03f7fffe
.org 0xfed12
	ldrb r0, [r6, #18]	@ 000fed12 b07c
