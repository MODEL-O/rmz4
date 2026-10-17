@ FUN_0803ca80  entry 0x0803ca80  size 460
.thumb
.org 0x3ca80
FUN_0803ca80:
	push {r4, r5, r6, r7, lr}	@ 0003ca80 f0b5
.org 0x3ca82
	mov r7, r8	@ 0003ca82 4746
.org 0x3ca84
	push {r7}	@ 0003ca84 80b4
.org 0x3ca86
	sub sp, #8	@ 0003ca86 82b0
.org 0x3ca88
	adds r5, r0, #0	@ 0003ca88 051c
.org 0x3ca8a
	adds r4, r5, #0	@ 0003ca8a 2c1c
.org 0x3ca8c
	adds r4, #180	@ 0003ca8c b434
.org 0x3ca8e
	ldr r0, [r4, #0]	@ 0003ca8e 2068
.org 0x3ca90
	mov r8, r0	@ 0003ca90 8046
.org 0x3ca92
	ldrb r0, [r5, #14]	@ 0003ca92 a87b
.org 0x3ca94
	cmp r0, #0	@ 0003ca94 0028
.org 0x3ca96
	beq.n 0x3ca9a	@ 0003ca96 00d0
.org 0x3ca98
	b.n 0x3cba8	@ 0003ca98 86e0
.org 0x3ca9a
	ldr r0, [pc, #72]	@ 0003ca9a 1248
.org 0x3ca9c
	add r0, r8	@ 0003ca9c 4044
.org 0x3ca9e
	ldrb r1, [r0, #0]	@ 0003ca9e 0178
.org 0x3caa0
	adds r0, r1, #7	@ 0003caa0 c81d
.org 0x3caa2
	lsls r0, r0, #24	@ 0003caa2 0006
.org 0x3caa4
	lsrs r6, r0, #24	@ 0003caa4 060e
.org 0x3caa6
	cmp r1, #0	@ 0003caa6 0029
.org 0x3caa8
	bne.n 0x3caac	@ 0003caa8 00d1
.org 0x3caaa
	b.n 0x3cc4e	@ 0003caaa d0e0
.org 0x3caac
	ldr r1, [pc, #56]	@ 0003caac 0e49
.org 0x3caae
	lsls r0, r6, #1	@ 0003caae 7000
.org 0x3cab0
	adds r0, r0, r1	@ 0003cab0 4018
.org 0x3cab2
	ldrh r7, [r0, #0]	@ 0003cab2 0788
.org 0x3cab4
	ldrb r1, [r5, #30]	@ 0003cab4 a97f
.org 0x3cab6
	lsls r1, r1, #8	@ 0003cab6 0902
.org 0x3cab8
	adds r0, r5, #0	@ 0003cab8 281c
.org 0x3caba
	adds r0, #112	@ 0003caba 7030
.org 0x3cabc
	ldrb r0, [r0, #0]	@ 0003cabc 0078
.org 0x3cabe
	orrs r0, r1	@ 0003cabe 0843
.org 0x3cac0
	adds r4, r5, #0	@ 0003cac0 2c1c
.org 0x3cac2
	adds r4, #113	@ 0003cac2 7134
.org 0x3cac4
	cmp r7, r0	@ 0003cac4 8742
.org 0x3cac6
	beq.n 0x3cb0c	@ 0003cac6 21d0
.org 0x3cac8
	ldr r0, [pc, #32]	@ 0003cac8 0848
.org 0x3caca
	cmp r7, r0	@ 0003caca 8742
.org 0x3cacc
	bne.n 0x3caf0	@ 0003cacc 10d1
.org 0x3cace
	movs r0, #0	@ 0003cace 0020
.org 0x3cad0
	ldrsb r0, [r4, r0]	@ 0003cad0 2056
.org 0x3cad2
	cmp r0, #6	@ 0003cad2 0628
.org 0x3cad4
	ble.n 0x3caf0	@ 0003cad4 0cdd
.org 0x3cad6
	adds r0, r5, #0	@ 0003cad6 281c
.org 0x3cad8
	adds r1, r7, #0	@ 0003cad8 391c
.org 0x3cada
	movs r2, #7	@ 0003cada 0722
.org 0x3cadc
	movs r3, #1	@ 0003cadc 0123
.org 0x3cade
	bl 0x1cfc8	@ 0003cade e0f773fa
.org 0x3cae2
	b.n 0x3cb0c	@ 0003cae2 13e0
.org 0x3cae4
	.byte 0x4d,0x01,0x00,0x00	@ 0003cae4 data
.org 0x3cae8
	.byte 0x38,0x3e,0x85,0x08	@ 0003cae8 data
.org 0x3caec
	.byte 0x02,0x6a,0x00,0x00	@ 0003caec data
.org 0x3caf0
	movs r2, #0	@ 0003caf0 0022
.org 0x3caf2
	ldrsb r2, [r4, r2]	@ 0003caf2 a256
.org 0x3caf4
	lsls r2, r2, #16	@ 0003caf4 1204
.org 0x3caf6
	lsrs r2, r2, #16	@ 0003caf6 120c
.org 0x3caf8
	adds r0, r5, #0	@ 0003caf8 281c
.org 0x3cafa
	adds r0, #114	@ 0003cafa 7230
.org 0x3cafc
	movs r3, #0	@ 0003cafc 0023
.org 0x3cafe
	ldrsb r3, [r0, r3]	@ 0003cafe c356
.org 0x3cb00
	lsls r3, r3, #16	@ 0003cb00 1b04
.org 0x3cb02
	lsrs r3, r3, #16	@ 0003cb02 1b0c
.org 0x3cb04
	adds r0, r5, #0	@ 0003cb04 281c
.org 0x3cb06
	adds r1, r7, #0	@ 0003cb06 391c
.org 0x3cb08
	bl 0x1cfc8	@ 0003cb08 e0f75efa
.org 0x3cb0c
	ldrb r0, [r5, #16]	@ 0003cb0c 287c
.org 0x3cb0e
	cmp r0, #8	@ 0003cb0e 0828
.org 0x3cb10
	bne.n 0x3cb38	@ 0003cb10 12d1
.org 0x3cb12
	movs r0, #0	@ 0003cb12 0020
.org 0x3cb14
	ldrsb r0, [r4, r0]	@ 0003cb14 2056
.org 0x3cb16
	cmp r0, #3	@ 0003cb16 0328
.org 0x3cb18
	bne.n 0x3cb38	@ 0003cb18 0ed1
.org 0x3cb1a
	adds r0, r5, #0	@ 0003cb1a 281c
.org 0x3cb1c
	adds r0, #114	@ 0003cb1c 7230
.org 0x3cb1e
	ldrb r0, [r0, #0]	@ 0003cb1e 0078
.org 0x3cb20
	lsls r0, r0, #24	@ 0003cb20 0006
.org 0x3cb22
	asrs r0, r0, #24	@ 0003cb22 0016
.org 0x3cb24
	cmp r0, #1	@ 0003cb24 0128
.org 0x3cb26
	bgt.n 0x3cb38	@ 0003cb26 07dc
.org 0x3cb28
	adds r0, r5, #0	@ 0003cb28 281c
.org 0x3cb2a
	adds r0, #84	@ 0003cb2a 5430
.org 0x3cb2c
	ldrb r1, [r5, #10]	@ 0003cb2c a97a
.org 0x3cb2e
	lsrs r1, r1, #4	@ 0003cb2e 0909
.org 0x3cb30
	movs r2, #1	@ 0003cb30 0122
.org 0x3cb32
	ands r1, r2	@ 0003cb32 1140
.org 0x3cb34
	bl 0xd1c50	@ 0003cb34 95f08cf8
.org 0x3cb38
	adds r0, r5, #0	@ 0003cb38 281c
.org 0x3cb3a
	bl 0x1cff0	@ 0003cb3a e0f759fa
.org 0x3cb3e
	adds r0, r5, #0	@ 0003cb3e 281c
.org 0x3cb40
	adds r0, #116	@ 0003cb40 7430
.org 0x3cb42
	ldr r1, [pc, #88]	@ 0003cb42 1649
.org 0x3cb44
	lsls r2, r6, #2	@ 0003cb44 b200
.org 0x3cb46
	adds r2, r2, r1	@ 0003cb46 5218
.org 0x3cb48
	movs r1, #0	@ 0003cb48 0021
.org 0x3cb4a
	ldrsb r1, [r4, r1]	@ 0003cb4a 6156
.org 0x3cb4c
	ldr r2, [r2, #0]	@ 0003cb4c 1268
.org 0x3cb4e
	lsls r1, r1, #2	@ 0003cb4e 8900
.org 0x3cb50
	adds r1, r1, r2	@ 0003cb50 8918
.org 0x3cb52
	ldr r1, [r1, #0]	@ 0003cb52 0968
.org 0x3cb54
	adds r6, r5, #0	@ 0003cb54 2e1c
.org 0x3cb56
	adds r6, #180	@ 0003cb56 b436
.org 0x3cb58
	ldrb r2, [r6, #13]	@ 0003cb58 727b
.org 0x3cb5a
	ldrb r3, [r6, #12]	@ 0003cb5a 337b
.org 0x3cb5c
	ldrb r4, [r6, #14]	@ 0003cb5c b47b
.org 0x3cb5e
	str r4, [sp, #0]	@ 0003cb5e 0094
.org 0x3cb60
	movs r4, #1	@ 0003cb60 0124
.org 0x3cb62
	negs r4, r4	@ 0003cb62 6442
.org 0x3cb64
	str r4, [sp, #4]	@ 0003cb64 0194
.org 0x3cb66
	bl 0x5794	@ 0003cb66 c8f715fe
.org 0x3cb6a
	adds r0, r5, #0	@ 0003cb6a 281c
.org 0x3cb6c
	adds r0, #115	@ 0003cb6c 7330
.org 0x3cb6e
	ldrb r0, [r0, #0]	@ 0003cb6e 0078
.org 0x3cb70
	cmp r0, #3	@ 0003cb70 0328
.org 0x3cb72
	bne.n 0x3cc60	@ 0003cb72 75d1
.org 0x3cb74
	ldr r0, [pc, #40]	@ 0003cb74 0a48
.org 0x3cb76
	cmp r7, r0	@ 0003cb76 8742
.org 0x3cb78
	bne.n 0x3cc4e	@ 0003cb78 69d1
.org 0x3cb7a
	movs r1, #0	@ 0003cb7a 0021
.org 0x3cb7c
	movs r0, #1	@ 0003cb7c 0120
.org 0x3cb7e
	strb r0, [r5, #14]	@ 0003cb7e a873
.org 0x3cb80
	strb r1, [r5, #15]	@ 0003cb80 e973
.org 0x3cb82
	movs r0, #10	@ 0003cb82 0a20
.org 0x3cb84
	strb r0, [r6, #13]	@ 0003cb84 7073
.org 0x3cb86
	mov r0, r8	@ 0003cb86 4046
.org 0x3cb88
	bl 0x3a4e8	@ 0003cb88 fdf7aefc
.org 0x3cb8c
	ldrb r1, [r6, #13]	@ 0003cb8c 717b
.org 0x3cb8e
	adds r0, r0, r1	@ 0003cb8e 4018
.org 0x3cb90
	strb r0, [r6, #13]	@ 0003cb90 7073
.org 0x3cb92
	ldr r0, [pc, #16]	@ 0003cb92 0448
.org 0x3cb94
	ldrb r0, [r0, #0]	@ 0003cb94 0078
.org 0x3cb96
	strb r0, [r6, #12]	@ 0003cb96 3073
.org 0x3cb98
	b.n 0x3cc60	@ 0003cb98 62e0
.org 0x3cb9a
	.byte 0x00	@ 0003cb9a data
.org 0x3cb9b
	.byte 0x00	@ 0003cb9b data
.org 0x3cb9c
	.byte 0x10,0x50,0x85,0x08	@ 0003cb9c data
.org 0x3cba0
	.byte 0x02,0x6a,0x00,0x00	@ 0003cba0 data
.org 0x3cba4
	.byte 0xb0,0x3e,0x85,0x08	@ 0003cba4 data
.org 0x3cba8
	cmp r0, #1	@ 0003cba8 0128
.org 0x3cbaa
	bne.n 0x3cc20	@ 0003cbaa 39d1
.org 0x3cbac
	ldrb r0, [r5, #15]	@ 0003cbac e87b
.org 0x3cbae
	cmp r0, #0	@ 0003cbae 0028
.org 0x3cbb0
	bne.n 0x3cbc6	@ 0003cbb0 09d1
.org 0x3cbb2
	movs r1, #212	@ 0003cbb2 d421
.org 0x3cbb4
	lsls r1, r1, #7	@ 0003cbb4 c901
.org 0x3cbb6
	adds r0, r5, #0	@ 0003cbb6 281c
.org 0x3cbb8
	movs r2, #4	@ 0003cbb8 0422
.org 0x3cbba
	movs r3, #2	@ 0003cbba 0223
.org 0x3cbbc
	bl 0x1cfc8	@ 0003cbbc e0f704fa
.org 0x3cbc0
	ldrb r0, [r5, #15]	@ 0003cbc0 e87b
.org 0x3cbc2
	adds r0, #1	@ 0003cbc2 0130
.org 0x3cbc4
	strb r0, [r5, #15]	@ 0003cbc4 e873
.org 0x3cbc6
	adds r0, r5, #0	@ 0003cbc6 281c
.org 0x3cbc8
	bl 0x1cff0	@ 0003cbc8 e0f712fa
.org 0x3cbcc
	adds r0, r5, #0	@ 0003cbcc 281c
.org 0x3cbce
	adds r0, #116	@ 0003cbce 7430
.org 0x3cbd0
	ldr r2, [pc, #72]	@ 0003cbd0 124a
.org 0x3cbd2
	adds r1, r5, #0	@ 0003cbd2 291c
.org 0x3cbd4
	adds r1, #113	@ 0003cbd4 7131
.org 0x3cbd6
	ldrb r1, [r1, #0]	@ 0003cbd6 0978
.org 0x3cbd8
	lsls r1, r1, #24	@ 0003cbd8 0906
.org 0x3cbda
	asrs r1, r1, #24	@ 0003cbda 0916
.org 0x3cbdc
	ldr r2, [r2, #20]	@ 0003cbdc 5269
.org 0x3cbde
	lsls r1, r1, #2	@ 0003cbde 8900
.org 0x3cbe0
	adds r1, r1, r2	@ 0003cbe0 8918
.org 0x3cbe2
	ldr r1, [r1, #0]	@ 0003cbe2 0968
.org 0x3cbe4
	ldrb r2, [r4, #13]	@ 0003cbe4 627b
.org 0x3cbe6
	ldrb r3, [r4, #12]	@ 0003cbe6 237b
.org 0x3cbe8
	ldrb r4, [r4, #14]	@ 0003cbe8 a47b
.org 0x3cbea
	str r4, [sp, #0]	@ 0003cbea 0094
.org 0x3cbec
	movs r4, #1	@ 0003cbec 0124
.org 0x3cbee
	negs r4, r4	@ 0003cbee 6442
.org 0x3cbf0
	str r4, [sp, #4]	@ 0003cbf0 0194
.org 0x3cbf2
	bl 0x5794	@ 0003cbf2 c8f7cffd
.org 0x3cbf6
	mov r1, r8	@ 0003cbf6 4146
.org 0x3cbf8
	ldrb r0, [r1, #30]	@ 0003cbf8 887f
.org 0x3cbfa
	lsls r0, r0, #8	@ 0003cbfa 0002
.org 0x3cbfc
	adds r1, #112	@ 0003cbfc 7031
.org 0x3cbfe
	ldrb r1, [r1, #0]	@ 0003cbfe 0978
.org 0x3cc00
	orrs r1, r0	@ 0003cc00 0143
.org 0x3cc02
	movs r0, #200	@ 0003cc02 c820
.org 0x3cc04
	lsls r0, r0, #5	@ 0003cc04 4001
.org 0x3cc06
	cmp r1, r0	@ 0003cc06 8142
.org 0x3cc08
	beq.n 0x3cc60	@ 0003cc08 2ad0
.org 0x3cc0a
	adds r0, #2	@ 0003cc0a 0230
.org 0x3cc0c
	cmp r1, r0	@ 0003cc0c 8142
.org 0x3cc0e
	beq.n 0x3cc60	@ 0003cc0e 27d0
.org 0x3cc10
	movs r1, #0	@ 0003cc10 0021
.org 0x3cc12
	movs r0, #2	@ 0003cc12 0220
.org 0x3cc14
	strb r0, [r5, #14]	@ 0003cc14 a873
.org 0x3cc16
	strb r1, [r5, #15]	@ 0003cc16 e973
.org 0x3cc18
	b.n 0x3cc60	@ 0003cc18 22e0
.org 0x3cc1a
	.byte 0x00	@ 0003cc1a data
.org 0x3cc1b
	.byte 0x00	@ 0003cc1b data
.org 0x3cc1c
	.byte 0x10,0x50,0x85,0x08	@ 0003cc1c data
.org 0x3cc20
	ldrb r0, [r5, #15]	@ 0003cc20 e87b
.org 0x3cc22
	cmp r0, #0	@ 0003cc22 0028
.org 0x3cc24
	bne.n 0x3cc34	@ 0003cc24 06d1
.org 0x3cc26
	ldr r1, [pc, #68]	@ 0003cc26 1149
.org 0x3cc28
	adds r0, r5, #0	@ 0003cc28 281c
.org 0x3cc2a
	bl 0x1cf00	@ 0003cc2a e0f769f9
.org 0x3cc2e
	ldrb r0, [r5, #15]	@ 0003cc2e e87b
.org 0x3cc30
	adds r0, #1	@ 0003cc30 0130
.org 0x3cc32
	strb r0, [r5, #15]	@ 0003cc32 e873
.org 0x3cc34
	adds r0, r5, #0	@ 0003cc34 281c
.org 0x3cc36
	bl 0x1cff0	@ 0003cc36 e0f7dbf9
.org 0x3cc3a
	adds r0, r5, #0	@ 0003cc3a 281c
.org 0x3cc3c
	adds r0, #116	@ 0003cc3c 7430
.org 0x3cc3e
	ldr r1, [pc, #48]	@ 0003cc3e 0c49
.org 0x3cc40
	bl 0x5784	@ 0003cc40 c8f7a0fd
.org 0x3cc44
	adds r0, r5, #0	@ 0003cc44 281c
.org 0x3cc46
	adds r0, #115	@ 0003cc46 7330
.org 0x3cc48
	ldrb r0, [r0, #0]	@ 0003cc48 0078
.org 0x3cc4a
	cmp r0, #3	@ 0003cc4a 0328
