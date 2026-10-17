@ FUN_080fbb34  entry 0x080fbb34  size 202
.thumb
.org 0xfbb34
FUN_080fbb34:
	push {r4, r5, r6, r7, lr}	@ 000fbb34 f0b5
.org 0xfbb36
	mov r7, r8	@ 000fbb36 4746
.org 0xfbb38
	push {r7}	@ 000fbb38 80b4
.org 0xfbb3a
	adds r5, r0, #0	@ 000fbb3a 051c
.org 0xfbb3c
	ldr r0, [pc, #100]	@ 000fbb3c 1948
.org 0xfbb3e
	mov r8, r0	@ 000fbb3e 8046
.org 0xfbb40
	ldrb r0, [r5, #9]	@ 000fbb40 687a
.org 0xfbb42
	lsls r0, r0, #2	@ 000fbb42 8000
.org 0xfbb44
	add r0, r8	@ 000fbb44 4044
.org 0xfbb46
	movs r4, #1	@ 000fbb46 0124
.org 0xfbb48
	str r4, [r5, #12]	@ 000fbb48 ec60
.org 0xfbb4a
	ldr r0, [r0, #0]	@ 000fbb4a 0068
.org 0xfbb4c
	ldr r0, [r0, #4]	@ 000fbb4c 4068
.org 0xfbb4e
	str r0, [r5, #20]	@ 000fbb4e 6861
.org 0xfbb50
	adds r0, r5, #0	@ 000fbb50 281c
.org 0xfbb52
	bl 0x1cc9c	@ 000fbb52 21f7a3f8
.org 0xfbb56
	ldrb r1, [r5, #10]	@ 000fbb56 a97a
.org 0xfbb58
	movs r0, #1	@ 000fbb58 0120
.org 0xfbb5a
	movs r7, #0	@ 000fbb5a 0027
.org 0xfbb5c
	orrs r0, r1	@ 000fbb5c 0843
.org 0xfbb5e
	movs r1, #2	@ 000fbb5e 0221
.org 0xfbb60
	orrs r0, r1	@ 000fbb60 0843
.org 0xfbb62
	strb r0, [r5, #10]	@ 000fbb62 a872
.org 0xfbb64
	ldr r2, [pc, #64]	@ 000fbb64 104a
.org 0xfbb66
	ldr r1, [pc, #68]	@ 000fbb66 1149
.org 0xfbb68
	ldrb r0, [r5, #16]	@ 000fbb68 287c
.org 0xfbb6a
	lsls r0, r0, #2	@ 000fbb6a 8000
.org 0xfbb6c
	adds r0, r0, r1	@ 000fbb6c 4018
.org 0xfbb6e
	ldr r1, [r0, #0]	@ 000fbb6e 0168
.org 0xfbb70
	lsrs r0, r1, #3	@ 000fbb70 c808
.org 0xfbb72
	adds r2, #4	@ 000fbb72 0432
.org 0xfbb74
	adds r0, r0, r2	@ 000fbb74 8018
.org 0xfbb76
	ldrb r6, [r0, #0]	@ 000fbb76 0678
.org 0xfbb78
	movs r0, #7	@ 000fbb78 0720
.org 0xfbb7a
	ands r1, r0	@ 000fbb7a 0140
.org 0xfbb7c
	asrs r6, r1	@ 000fbb7c 0e41
.org 0xfbb7e
	ands r6, r4	@ 000fbb7e 2640
.org 0xfbb80
	cmp r6, #0	@ 000fbb80 002e
.org 0xfbb82
	beq.n 0xfbbb4	@ 000fbb82 17d0
.org 0xfbb84
	ldr r1, [pc, #40]	@ 000fbb84 0a49
.org 0xfbb86
	adds r0, r5, #0	@ 000fbb86 281c
.org 0xfbb88
	bl 0x1cf00	@ 000fbb88 21f7baf9
.org 0xfbb8c
	adds r0, r5, #0	@ 000fbb8c 281c
.org 0xfbb8e
	bl 0x1cff0	@ 000fbb8e 21f72ffa
.org 0xfbb92
	ldrb r0, [r5, #9]	@ 000fbb92 687a
.org 0xfbb94
	lsls r0, r0, #2	@ 000fbb94 8000
.org 0xfbb96
	add r0, r8	@ 000fbb96 4044
.org 0xfbb98
	movs r1, #2	@ 000fbb98 0221
.org 0xfbb9a
	str r1, [r5, #12]	@ 000fbb9a e960
.org 0xfbb9c
	ldr r0, [r0, #0]	@ 000fbb9c 0068
.org 0xfbb9e
	ldr r0, [r0, #8]	@ 000fbb9e 8068
.org 0xfbba0
	str r0, [r5, #20]	@ 000fbba0 6861
.org 0xfbba2
	b.n 0xfbc04	@ 000fbba2 2fe0
.org 0xfbba4
	.byte 0xfc,0x92,0x86,0x08	@ 000fbba4 data
.org 0xfbba8
	.byte 0xb0,0xe8,0x02,0x02	@ 000fbba8 data
.org 0xfbbac
	.byte 0xe0,0xab,0x86,0x08	@ 000fbbac data
.org 0xfbbb0
	.byte 0x01,0xbc,0x00,0x00	@ 000fbbb0 data
.org 0xfbbb4
	movs r1, #188	@ 000fbbb4 bc21
.org 0xfbbb6
	lsls r1, r1, #8	@ 000fbbb6 0902
.org 0xfbbb8
	adds r0, r5, #0	@ 000fbbb8 281c
.org 0xfbbba
	bl 0x1cf00	@ 000fbbba 21f7a1f9
.org 0xfbbbe
	ldrb r0, [r5, #10]	@ 000fbbbe a87a
.org 0xfbbc0
	movs r1, #4	@ 000fbbc0 0421
.org 0xfbbc2
	orrs r0, r1	@ 000fbbc2 0843
.org 0xfbbc4
	strb r0, [r5, #10]	@ 000fbbc4 a872
.org 0xfbbc6
	adds r4, r5, #0	@ 000fbbc6 2c1c
.org 0xfbbc8
	adds r4, #116	@ 000fbbc8 7434
.org 0xfbbca
	ldr r1, [pc, #68]	@ 000fbbca 1149
.org 0xfbbcc
	adds r2, r5, #0	@ 000fbbcc 2a1c
.org 0xfbbce
	adds r2, #84	@ 000fbbce 5432
.org 0xfbbd0
	adds r0, r4, #0	@ 000fbbd0 201c
.org 0xfbbd2
	movs r3, #16	@ 000fbbd2 1023
.org 0xfbbd4
	bl 0x5760	@ 000fbbd4 09f7c4fd
.org 0xfbbd8
	str r5, [r4, #44]	@ 000fbbd8 e562
.org 0xfbbda
	str r6, [r4, #36]	@ 000fbbda 6662
.org 0xfbbdc
	adds r0, r5, #0	@ 000fbbdc 281c
.org 0xfbbde
	bl 0x1cff0	@ 000fbbde 21f707fa
.org 0xfbbe2
	ldrb r1, [r5, #10]	@ 000fbbe2 a97a
.org 0xfbbe4
	movs r0, #239	@ 000fbbe4 ef20
.org 0xfbbe6
	ands r0, r1	@ 000fbbe6 0840
.org 0xfbbe8
	strb r0, [r5, #10]	@ 000fbbe8 a872
.org 0xfbbea
	adds r0, r5, #0	@ 000fbbea 281c
.org 0xfbbec
	adds r0, #76	@ 000fbbec 4c30
.org 0xfbbee
	strb r6, [r0, #0]	@ 000fbbee 0670
.org 0xfbbf0
	adds r2, r5, #0	@ 000fbbf0 2a1c
.org 0xfbbf2
	adds r2, #74	@ 000fbbf2 4a32
.org 0xfbbf4
	ldrb r1, [r2, #0]	@ 000fbbf4 1178
.org 0xfbbf6
	movs r0, #17	@ 000fbbf6 1120
.org 0xfbbf8
	negs r0, r0	@ 000fbbf8 4042
.org 0xfbbfa
	ands r0, r1	@ 000fbbfa 0840
.org 0xfbbfc
	strb r0, [r2, #0]	@ 000fbbfc 1070
