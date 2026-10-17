@ FUN_0807bc94  entry 0x0807bc94  size 170
.thumb
.org 0x7bc94
FUN_0807bc94:
	push {r4, r5, lr}	@ 0007bc94 30b5
.org 0x7bc96
	adds r4, r0, #0	@ 0007bc96 041c
.org 0x7bc98
	ldrb r0, [r4, #10]	@ 0007bc98 a07a
.org 0x7bc9a
	lsrs r5, r0, #4	@ 0007bc9a 0509
.org 0x7bc9c
	movs r0, #1	@ 0007bc9c 0120
.org 0x7bc9e
	ands r5, r0	@ 0007bc9e 0540
.org 0x7bca0
	ldrb r0, [r4, #15]	@ 0007bca0 e07b
.org 0x7bca2
	cmp r0, #0	@ 0007bca2 0028
.org 0x7bca4
	bne.n 0x7bcda	@ 0007bca4 19d1
.org 0x7bca6
	adds r0, r4, #0	@ 0007bca6 201c
.org 0x7bca8
	movs r1, #8	@ 0007bca8 0821
.org 0x7bcaa
	bl 0x7e8c8	@ 0007bcaa 02f00dfe
.org 0x7bcae
	adds r1, r5, #1	@ 0007bcae 691c
.org 0x7bcb0
	movs r0, #1	@ 0007bcb0 0120
.org 0x7bcb2
	ands r1, r0	@ 0007bcb2 0140
.org 0x7bcb4
	lsls r1, r1, #1	@ 0007bcb4 4900
.org 0x7bcb6
	subs r1, #1	@ 0007bcb6 0139
.org 0x7bcb8
	adds r0, r4, #0	@ 0007bcb8 201c
.org 0x7bcba
	adds r0, #184	@ 0007bcba b830
.org 0x7bcbc
	ldr r0, [r0, #0]	@ 0007bcbc 0068
.org 0x7bcbe
	movs r2, #224	@ 0007bcbe e022
.org 0x7bcc0
	lsls r2, r2, #6	@ 0007bcc0 9201
.org 0x7bcc2
	adds r0, r0, r2	@ 0007bcc2 8018
.org 0x7bcc4
	str r0, [r4, #88]	@ 0007bcc4 a065
.org 0x7bcc6
	lsls r0, r1, #9	@ 0007bcc6 4802
.org 0x7bcc8
	str r0, [r4, #92]	@ 0007bcc8 e065
.org 0x7bcca
	lsls r1, r1, #5	@ 0007bcca 4901
.org 0x7bccc
	negs r1, r1	@ 0007bccc 4942
.org 0x7bcce
	str r1, [r4, #100]	@ 0007bcce 6166
.org 0x7bcd0
	movs r0, #16	@ 0007bcd0 1020
.org 0x7bcd2
	strb r0, [r4, #18]	@ 0007bcd2 a074
.org 0x7bcd4
	ldrb r0, [r4, #15]	@ 0007bcd4 e07b
.org 0x7bcd6
	adds r0, #1	@ 0007bcd6 0130
.org 0x7bcd8
	strb r0, [r4, #15]	@ 0007bcd8 e073
.org 0x7bcda
	adds r5, r4, #0	@ 0007bcda 251c
.org 0x7bcdc
	adds r5, #188	@ 0007bcdc bc35
.org 0x7bcde
	ldrb r0, [r5, #0]	@ 0007bcde 2878
.org 0x7bce0
	cmp r0, #0	@ 0007bce0 0028
.org 0x7bce2
	beq.n 0x7bcea	@ 0007bce2 02d0
.org 0x7bce4
	adds r0, r4, #0	@ 0007bce4 201c
.org 0x7bce6
	bl 0x1cff0	@ 0007bce6 a1f783f9
.org 0x7bcea
	adds r0, r4, #0	@ 0007bcea 201c
.org 0x7bcec
	adds r0, #116	@ 0007bcec 7430
.org 0x7bcee
	ldr r3, [pc, #80]	@ 0007bcee 144b
.org 0x7bcf0
	ldr r2, [pc, #80]	@ 0007bcf0 144a
.org 0x7bcf2
	ldrb r1, [r5, #0]	@ 0007bcf2 2978
.org 0x7bcf4
	lsls r1, r1, #1	@ 0007bcf4 4900
.org 0x7bcf6
	adds r1, r1, r2	@ 0007bcf6 8918
.org 0x7bcf8
	ldrh r2, [r1, #0]	@ 0007bcf8 0a88
.org 0x7bcfa
	lsls r2, r2, #2	@ 0007bcfa 9200
.org 0x7bcfc
	adds r2, r2, r3	@ 0007bcfc d218
.org 0x7bcfe
	adds r1, r4, #0	@ 0007bcfe 211c
.org 0x7bd00
	adds r1, #113	@ 0007bd00 7131
.org 0x7bd02
	ldrb r1, [r1, #0]	@ 0007bd02 0978
.org 0x7bd04
	lsls r1, r1, #24	@ 0007bd04 0906
.org 0x7bd06
	asrs r1, r1, #24	@ 0007bd06 0916
.org 0x7bd08
	ldr r2, [r2, #0]	@ 0007bd08 1268
.org 0x7bd0a
	lsls r1, r1, #2	@ 0007bd0a 8900
.org 0x7bd0c
	adds r1, r1, r2	@ 0007bd0c 8918
.org 0x7bd0e
	ldr r1, [r1, #0]	@ 0007bd0e 0968
.org 0x7bd10
	bl 0x5784	@ 0007bd10 89f738fd
.org 0x7bd14
	ldr r0, [r4, #84]	@ 0007bd14 606d
.org 0x7bd16
	ldr r1, [r4, #92]	@ 0007bd16 e16d
.org 0x7bd18
	adds r0, r0, r1	@ 0007bd18 4018
.org 0x7bd1a
	str r0, [r4, #84]	@ 0007bd1a 6065
.org 0x7bd1c
	ldr r0, [r4, #100]	@ 0007bd1c 606e
.org 0x7bd1e
	adds r1, r1, r0	@ 0007bd1e 0918
.org 0x7bd20
	str r1, [r4, #92]	@ 0007bd20 e165
.org 0x7bd22
	ldrb r0, [r4, #18]	@ 0007bd22 a07c
.org 0x7bd24
	subs r0, #1	@ 0007bd24 0138
.org 0x7bd26
	strb r0, [r4, #18]	@ 0007bd26 a074
.org 0x7bd28
	lsls r0, r0, #24	@ 0007bd28 0006
.org 0x7bd2a
	lsrs r1, r0, #24	@ 0007bd2a 010e
.org 0x7bd2c
	cmp r1, #0	@ 0007bd2c 0029
.org 0x7bd2e
	bne.n 0x7bd38	@ 0007bd2e 03d1
.org 0x7bd30
	ldrb r0, [r4, #14]	@ 0007bd30 a07b
.org 0x7bd32
	adds r0, #1	@ 0007bd32 0130
.org 0x7bd34
	strb r0, [r4, #14]	@ 0007bd34 a073
.org 0x7bd36
	strb r1, [r4, #15]	@ 0007bd36 e173
.org 0x7bd38
	pop {r4, r5}	@ 0007bd38 30bc
.org 0x7bd3a
	pop {r0}	@ 0007bd3a 01bc
.org 0x7bd3c
	bx r0	@ 0007bd3c 0047
