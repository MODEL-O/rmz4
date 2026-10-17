@ FUN_080fbc14  entry 0x080fbc14  size 268
.thumb
.org 0xfbc14
FUN_080fbc14:
	push {r4, r5, r6, r7, lr}	@ 000fbc14 f0b5
.org 0xfbc16
	sub sp, #12	@ 000fbc16 83b0
.org 0xfbc18
	adds r6, r0, #0	@ 000fbc18 061c
.org 0xfbc1a
	bl 0x1cff0	@ 000fbc1a 21f7e9f9
.org 0xfbc1e
	ldrb r7, [r6, #13]	@ 000fbc1e 777b
.org 0xfbc20
	cmp r7, #0	@ 000fbc20 002f
.org 0xfbc22
	bne.n 0xfbcc0	@ 000fbc22 4dd1
.org 0xfbc24
	adds r0, r6, #0	@ 000fbc24 301c
.org 0xfbc26
	bl 0x1cff0	@ 000fbc26 21f7e3f9
.org 0xfbc2a
	adds r4, r6, #0	@ 000fbc2a 341c
.org 0xfbc2c
	adds r4, #140	@ 000fbc2c 8c34
.org 0xfbc2e
	ldr r0, [r4, #0]	@ 000fbc2e 2068
.org 0xfbc30
	movs r1, #128	@ 000fbc30 8021
.org 0xfbc32
	lsls r1, r1, #2	@ 000fbc32 8900
.org 0xfbc34
	ands r0, r1	@ 000fbc34 0840
.org 0xfbc36
	cmp r0, #0	@ 000fbc36 0028
.org 0xfbc38
	beq.n 0xfbd26	@ 000fbc38 75d0
.org 0xfbc3a
	movs r0, #189	@ 000fbc3a bd20
.org 0xfbc3c
	lsls r0, r0, #1	@ 000fbc3c 4000
.org 0xfbc3e
	bl 0x2b10	@ 000fbc3e 06f767ff
.org 0xfbc42
	ldr r2, [pc, #112]	@ 000fbc42 1c4a
.org 0xfbc44
	ldr r1, [pc, #112]	@ 000fbc44 1c49
.org 0xfbc46
	ldrb r0, [r6, #16]	@ 000fbc46 307c
.org 0xfbc48
	lsls r0, r0, #2	@ 000fbc48 8000
.org 0xfbc4a
	adds r0, r0, r1	@ 000fbc4a 4018
.org 0xfbc4c
	ldr r1, [r0, #0]	@ 000fbc4c 0168
.org 0xfbc4e
	lsrs r3, r1, #3	@ 000fbc4e cb08
.org 0xfbc50
	adds r2, #4	@ 000fbc50 0432
.org 0xfbc52
	adds r3, r3, r2	@ 000fbc52 9b18
.org 0xfbc54
	movs r0, #7	@ 000fbc54 0720
.org 0xfbc56
	ands r1, r0	@ 000fbc56 0140
.org 0xfbc58
	movs r5, #1	@ 000fbc58 0125
.org 0xfbc5a
	adds r0, r5, #0	@ 000fbc5a 281c
.org 0xfbc5c
	lsls r0, r1	@ 000fbc5c 8840
.org 0xfbc5e
	ldrb r1, [r3, #0]	@ 000fbc5e 1978
.org 0xfbc60
	orrs r0, r1	@ 000fbc60 0843
.org 0xfbc62
	strb r0, [r3, #0]	@ 000fbc62 1870
.org 0xfbc64
	ldr r1, [pc, #84]	@ 000fbc64 1549
.org 0xfbc66
	adds r0, r6, #0	@ 000fbc66 301c
.org 0xfbc68
	bl 0x1cf00	@ 000fbc68 21f74af9
.org 0xfbc6c
	adds r0, r6, #0	@ 000fbc6c 301c
.org 0xfbc6e
	bl 0x1cff0	@ 000fbc6e 21f7bff9
.org 0xfbc72
	str r7, [r4, #0]	@ 000fbc72 2760
.org 0xfbc74
	adds r0, r6, #0	@ 000fbc74 301c
.org 0xfbc76
	adds r0, #144	@ 000fbc76 9030
.org 0xfbc78
	str r7, [r0, #0]	@ 000fbc78 0760
.org 0xfbc7a
	adds r0, #4	@ 000fbc7a 0430
.org 0xfbc7c
	strb r7, [r0, #0]	@ 000fbc7c 0770
.org 0xfbc7e
	ldrb r1, [r6, #10]	@ 000fbc7e b17a
.org 0xfbc80
	movs r0, #251	@ 000fbc80 fb20
.org 0xfbc82
	ands r0, r1	@ 000fbc82 0840
.org 0xfbc84
	strb r0, [r6, #10]	@ 000fbc84 b072
.org 0xfbc86
	subs r4, #56	@ 000fbc86 383c
.org 0xfbc88
	str r5, [sp, #0]	@ 000fbc88 0095
.org 0xfbc8a
	adds r0, r6, #0	@ 000fbc8a 301c
.org 0xfbc8c
	adds r1, r4, #0	@ 000fbc8c 211c
.org 0xfbc8e
	movs r2, #8	@ 000fbc8e 0822
.org 0xfbc90
	movs r3, #0	@ 000fbc90 0023
.org 0xfbc92
	bl 0xdd60c	@ 000fbc92 e1f7bbfc
.org 0xfbc96
	str r7, [sp, #0]	@ 000fbc96 0097
.org 0xfbc98
	adds r0, r6, #0	@ 000fbc98 301c
.org 0xfbc9a
	adds r1, r4, #0	@ 000fbc9a 211c
.org 0xfbc9c
	movs r2, #8	@ 000fbc9c 0822
.org 0xfbc9e
	movs r3, #1	@ 000fbc9e 0123
.org 0xfbca0
	bl 0xdd60c	@ 000fbca0 e1f7b4fc
.org 0xfbca4
	movs r0, #225	@ 000fbca4 e120
.org 0xfbca6
	lsls r0, r0, #2	@ 000fbca6 8000
.org 0xfbca8
	str r0, [r6, #100]	@ 000fbca8 7066
.org 0xfbcaa
	ldrb r0, [r6, #13]	@ 000fbcaa 707b
.org 0xfbcac
	adds r0, #1	@ 000fbcac 0130
.org 0xfbcae
	strb r0, [r6, #13]	@ 000fbcae 7073
.org 0xfbcb0
	b.n 0xfbd26	@ 000fbcb0 39e0
.org 0xfbcb2
	.byte 0x00	@ 000fbcb2 data
.org 0xfbcb3
	.byte 0x00	@ 000fbcb3 data
.org 0xfbcb4
	.byte 0xb0,0xe8,0x02,0x02	@ 000fbcb4 data
.org 0xfbcb8
	.byte 0xe0,0xab,0x86,0x08	@ 000fbcb8 data
.org 0xfbcbc
	.byte 0x01,0xbc,0x00,0x00	@ 000fbcbc data
.org 0xfbcc0
	ldr r0, [r6, #100]	@ 000fbcc0 706e
.org 0xfbcc2
	movs r1, #7	@ 000fbcc2 0721
.org 0xfbcc4
	ands r0, r1	@ 000fbcc4 0840
.org 0xfbcc6
	cmp r0, #0	@ 000fbcc6 0028
.org 0xfbcc8
	bne.n 0xfbcfa	@ 000fbcc8 17d1
.org 0xfbcca
	ldr r0, [r6, #84]	@ 000fbcca 706d
.org 0xfbccc
	ldr r1, [pc, #96]	@ 000fbccc 1849
.org 0xfbcce
	adds r0, r0, r1	@ 000fbcce 4018
.org 0xfbcd0
	str r0, [sp, #4]	@ 000fbcd0 0190
.org 0xfbcd2
	ldr r0, [r6, #88]	@ 000fbcd2 b06d
.org 0xfbcd4
	movs r1, #176	@ 000fbcd4 b021
.org 0xfbcd6
	lsls r1, r1, #5	@ 000fbcd6 4901
.org 0xfbcd8
	adds r0, r0, r1	@ 000fbcd8 4018
.org 0xfbcda
	str r0, [sp, #8]	@ 000fbcda 0290
.org 0xfbcdc
	add r0, sp, #4	@ 000fbcdc 01a8
.org 0xfbcde
	movs r1, #0	@ 000fbcde 0021
.org 0xfbce0
	movs r2, #0	@ 000fbce0 0022
.org 0xfbce2
	bl 0x49300	@ 000fbce2 4df70dfb
.org 0xfbce6
	ldr r0, [r6, #84]	@ 000fbce6 706d
.org 0xfbce8
	movs r1, #192	@ 000fbce8 c021
.org 0xfbcea
	lsls r1, r1, #5	@ 000fbcea 4901
.org 0xfbcec
	adds r0, r0, r1	@ 000fbcec 4018
.org 0xfbcee
	str r0, [sp, #4]	@ 000fbcee 0190
.org 0xfbcf0
	add r0, sp, #4	@ 000fbcf0 01a8
.org 0xfbcf2
	movs r1, #0	@ 000fbcf2 0021
.org 0xfbcf4
	movs r2, #1	@ 000fbcf4 0122
.org 0xfbcf6
	bl 0x49300	@ 000fbcf6 4df703fb
.org 0xfbcfa
	ldr r0, [r6, #100]	@ 000fbcfa 706e
.org 0xfbcfc
	adds r1, r0, #0	@ 000fbcfc 011c
.org 0xfbcfe
	subs r0, #1	@ 000fbcfe 0138
.org 0xfbd00
	str r0, [r6, #100]	@ 000fbd00 7066
.org 0xfbd02
	cmp r1, #0	@ 000fbd02 0029
.org 0xfbd04
	bne.n 0xfbd26	@ 000fbd04 0fd1
.org 0xfbd06
	movs r0, #189	@ 000fbd06 bd20
.org 0xfbd08
	lsls r0, r0, #1	@ 000fbd08 4000
.org 0xfbd0a
	bl 0x2b5c	@ 000fbd0a 06f727ff
.org 0xfbd0e
	ldr r1, [pc, #36]	@ 000fbd0e 0949
.org 0xfbd10
	ldrb r0, [r6, #9]	@ 000fbd10 707a
.org 0xfbd12
	lsls r0, r0, #2	@ 000fbd12 8000
.org 0xfbd14
	adds r0, r0, r1	@ 000fbd14 4018
.org 0xfbd16
	movs r1, #2	@ 000fbd16 0221
.org 0xfbd18
	str r1, [r6, #12]	@ 000fbd18 f160
.org 0xfbd1a
	ldr r0, [r0, #0]	@ 000fbd1a 0068
.org 0xfbd1c
	ldr r0, [r0, #8]	@ 000fbd1c 8068
.org 0xfbd1e
	str r0, [r6, #20]	@ 000fbd1e 7061
