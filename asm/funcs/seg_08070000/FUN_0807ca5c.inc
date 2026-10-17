@ FUN_0807ca5c  entry 0x0807ca5c  size 308
.thumb
.org 0x7ca5c
FUN_0807ca5c:
	push {r4, r5, r6, r7, lr}	@ 0007ca5c f0b5
.org 0x7ca5e
	mov r7, sl	@ 0007ca5e 5746
.org 0x7ca60
	mov r6, r9	@ 0007ca60 4e46
.org 0x7ca62
	mov r5, r8	@ 0007ca62 4546
.org 0x7ca64
	push {r5, r6, r7}	@ 0007ca64 e0b4
.org 0x7ca66
	sub sp, #8	@ 0007ca66 82b0
.org 0x7ca68
	adds r5, r0, #0	@ 0007ca68 051c
.org 0x7ca6a
	adds r0, #213	@ 0007ca6a d530
.org 0x7ca6c
	ldrb r0, [r0, #0]	@ 0007ca6c 0078
.org 0x7ca6e
	mov sl, r0	@ 0007ca6e 8246
.org 0x7ca70
	ldrb r0, [r5, #15]	@ 0007ca70 e87b
.org 0x7ca72
	cmp r0, #0	@ 0007ca72 0028
.org 0x7ca74
	bne.n 0x7ca8c	@ 0007ca74 0ad1
.org 0x7ca76
	adds r0, r5, #0	@ 0007ca76 281c
.org 0x7ca78
	movs r1, #23	@ 0007ca78 1721
.org 0x7ca7a
	bl 0x7e8c8	@ 0007ca7a 01f025ff
.org 0x7ca7e
	movs r0, #64	@ 0007ca7e 4020
.org 0x7ca80
	strb r0, [r5, #18]	@ 0007ca80 a874
.org 0x7ca82
	movs r0, #1	@ 0007ca82 0120
.org 0x7ca84
	strb r0, [r5, #19]	@ 0007ca84 e874
.org 0x7ca86
	ldrb r0, [r5, #15]	@ 0007ca86 e87b
.org 0x7ca88
	adds r0, #1	@ 0007ca88 0130
.org 0x7ca8a
	strb r0, [r5, #15]	@ 0007ca8a e873
.org 0x7ca8c
	adds r4, r5, #0	@ 0007ca8c 2c1c
.org 0x7ca8e
	adds r4, #188	@ 0007ca8e bc34
.org 0x7ca90
	ldrb r0, [r4, #0]	@ 0007ca90 2078
.org 0x7ca92
	cmp r0, #0	@ 0007ca92 0028
.org 0x7ca94
	beq.n 0x7ca9c	@ 0007ca94 02d0
.org 0x7ca96
	adds r0, r5, #0	@ 0007ca96 281c
.org 0x7ca98
	bl 0x1cff0	@ 0007ca98 a0f7aafa
.org 0x7ca9c
	adds r0, r5, #0	@ 0007ca9c 281c
.org 0x7ca9e
	adds r0, #116	@ 0007ca9e 7430
.org 0x7caa0
	ldr r3, [pc, #236]	@ 0007caa0 3b4b
.org 0x7caa2
	ldr r2, [pc, #240]	@ 0007caa2 3c4a
.org 0x7caa4
	ldrb r1, [r4, #0]	@ 0007caa4 2178
.org 0x7caa6
	lsls r1, r1, #1	@ 0007caa6 4900
.org 0x7caa8
	adds r1, r1, r2	@ 0007caa8 8918
.org 0x7caaa
	ldrh r2, [r1, #0]	@ 0007caaa 0a88
.org 0x7caac
	lsls r2, r2, #2	@ 0007caac 9200
.org 0x7caae
	adds r2, r2, r3	@ 0007caae d218
.org 0x7cab0
	adds r4, r5, #0	@ 0007cab0 2c1c
.org 0x7cab2
	adds r4, #113	@ 0007cab2 7134
.org 0x7cab4
	movs r1, #0	@ 0007cab4 0021
.org 0x7cab6
	ldrsb r1, [r4, r1]	@ 0007cab6 6156
.org 0x7cab8
	ldr r2, [r2, #0]	@ 0007cab8 1268
.org 0x7caba
	lsls r1, r1, #2	@ 0007caba 8900
.org 0x7cabc
	adds r1, r1, r2	@ 0007cabc 8918
.org 0x7cabe
	ldr r1, [r1, #0]	@ 0007cabe 0968
.org 0x7cac0
	bl 0x5784	@ 0007cac0 88f760fe
.org 0x7cac4
	ldrb r0, [r5, #18]	@ 0007cac4 a87c
.org 0x7cac6
	cmp r0, #0	@ 0007cac6 0028
.org 0x7cac8
	beq.n 0x7cace	@ 0007cac8 01d0
.org 0x7caca
	subs r0, #1	@ 0007caca 0138
.org 0x7cacc
	strb r0, [r5, #18]	@ 0007cacc a874
.org 0x7cace
	ldrb r0, [r5, #19]	@ 0007cace e87c
.org 0x7cad0
	cmp r0, #0	@ 0007cad0 0028
.org 0x7cad2
	beq.n 0x7cb72	@ 0007cad2 4ed0
.org 0x7cad4
	movs r0, #0	@ 0007cad4 0020
.org 0x7cad6
	ldrsb r0, [r4, r0]	@ 0007cad6 2056
.org 0x7cad8
	cmp r0, #1	@ 0007cad8 0128
.org 0x7cada
	ble.n 0x7cb72	@ 0007cada 4add
.org 0x7cadc
	ldr r0, [pc, #184]	@ 0007cadc 2e48
.org 0x7cade
	ldr r1, [pc, #188]	@ 0007cade 2f49
.org 0x7cae0
	movs r4, #183	@ 0007cae0 b724
.org 0x7cae2
	lsls r4, r4, #1	@ 0007cae2 6400
.org 0x7cae4
	adds r1, r1, r4	@ 0007cae4 0919
.org 0x7cae6
	ldrh r1, [r1, #0]	@ 0007cae6 0988
.org 0x7cae8
	ldrh r2, [r0, #6]	@ 0007cae8 c288
.org 0x7caea
	lsrs r2, r2, #6	@ 0007caea 9209
.org 0x7caec
	subs r1, r1, r2	@ 0007caec 891a
.org 0x7caee
	lsls r1, r1, #5	@ 0007caee 4901
.org 0x7caf0
	movs r2, #128	@ 0007caf0 8022
.org 0x7caf2
	lsls r2, r2, #9	@ 0007caf2 5202
.org 0x7caf4
	adds r1, r1, r2	@ 0007caf4 8918
.org 0x7caf6
	bl 0x1d30	@ 0007caf6 85f71bf9
.org 0x7cafa
	ldr r0, [pc, #164]	@ 0007cafa 2948
.org 0x7cafc
	ldr r1, [pc, #164]	@ 0007cafc 2949
.org 0x7cafe
	adds r1, r1, r4	@ 0007cafe 0919
.org 0x7cb00
	ldrh r1, [r1, #0]	@ 0007cb00 0988
.org 0x7cb02
	ldrb r2, [r0, #7]	@ 0007cb02 c279
.org 0x7cb04
	subs r1, r1, r2	@ 0007cb04 891a
.org 0x7cb06
	lsls r1, r1, #5	@ 0007cb06 4901
.org 0x7cb08
	movs r2, #128	@ 0007cb08 8022
.org 0x7cb0a
	lsls r2, r2, #2	@ 0007cb0a 9200
.org 0x7cb0c
	adds r1, r1, r2	@ 0007cb0c 8918
.org 0x7cb0e
	bl 0x2208	@ 0007cb0e 85f77bfb
.org 0x7cb12
	movs r6, #0	@ 0007cb12 0026
.org 0x7cb14
	movs r0, #184	@ 0007cb14 b820
.org 0x7cb16
	adds r0, r0, r5	@ 0007cb16 4019
.org 0x7cb18
	mov r9, r0	@ 0007cb18 8146
.org 0x7cb1a
	ldr r7, [pc, #140]	@ 0007cb1a 234f
.org 0x7cb1c
	mov r8, sp	@ 0007cb1c e846
.org 0x7cb1e
	ldr r1, [r7, #0]	@ 0007cb1e 3968
.org 0x7cb20
	ldr r0, [pc, #136]	@ 0007cb20 2248
.org 0x7cb22
	muls r0, r1	@ 0007cb22 4843
.org 0x7cb24
	ldr r1, [pc, #136]	@ 0007cb24 2249
.org 0x7cb26
	adds r0, r0, r1	@ 0007cb26 4018
.org 0x7cb28
	lsls r0, r0, #1	@ 0007cb28 4000
.org 0x7cb2a
	lsrs r1, r0, #1	@ 0007cb2a 4108
.org 0x7cb2c
	str r1, [r7, #0]	@ 0007cb2c 3960
.org 0x7cb2e
	lsrs r0, r0, #17	@ 0007cb2e 400c
.org 0x7cb30
	movs r1, #3	@ 0007cb30 0321
.org 0x7cb32
	ands r0, r1	@ 0007cb32 0840
.org 0x7cb34
	lsls r0, r0, #12	@ 0007cb34 0003
.org 0x7cb36
	negs r0, r0	@ 0007cb36 4042
.org 0x7cb38
	ldr r2, [pc, #120]	@ 0007cb38 1e4a
.org 0x7cb3a
	adds r0, r0, r2	@ 0007cb3a 8018
.org 0x7cb3c
	mov r2, r9	@ 0007cb3c 4a46
.org 0x7cb3e
	ldr r1, [r2, #0]	@ 0007cb3e 1168
.org 0x7cb40
	adds r1, r1, r0	@ 0007cb40 0918
.org 0x7cb42
	mov r0, r8	@ 0007cb42 4046
.org 0x7cb44
	str r1, [r0, #4]	@ 0007cb44 4160
.org 0x7cb46
	lsrs r0, r6, #31	@ 0007cb46 f00f
.org 0x7cb48
	adds r0, r6, r0	@ 0007cb48 3018
.org 0x7cb4a
	asrs r0, r0, #1	@ 0007cb4a 4010
.org 0x7cb4c
	cmp r0, sl	@ 0007cb4c 5045
.org 0x7cb4e
	beq.n 0x7cb68	@ 0007cb4e 0bd0
.org 0x7cb50
	lsls r4, r6, #24	@ 0007cb50 3406
.org 0x7cb52
	lsrs r4, r4, #24	@ 0007cb52 240e
.org 0x7cb54
	adds r0, r5, #0	@ 0007cb54 281c
.org 0x7cb56
	adds r1, r4, #0	@ 0007cb56 211c
.org 0x7cb58
	bl 0x7e980	@ 0007cb58 01f012ff
.org 0x7cb5c
	str r0, [sp, #0]	@ 0007cb5c 0090
.org 0x7cb5e
	adds r0, r5, #0	@ 0007cb5e 281c
.org 0x7cb60
	mov r1, sp	@ 0007cb60 6946
.org 0x7cb62
	adds r2, r4, #0	@ 0007cb62 221c
.org 0x7cb64
	bl 0xb6160	@ 0007cb64 39f0fcfa
.org 0x7cb68
	adds r6, #1	@ 0007cb68 0136
.org 0x7cb6a
	cmp r6, #7	@ 0007cb6a 072e
.org 0x7cb6c
	ble.n 0x7cb1e	@ 0007cb6c d7dd
.org 0x7cb6e
	movs r0, #0	@ 0007cb6e 0020
.org 0x7cb70
	strb r0, [r5, #19]	@ 0007cb70 e874
.org 0x7cb72
	ldrh r1, [r5, #18]	@ 0007cb72 698a
.org 0x7cb74
	cmp r1, #0	@ 0007cb74 0029
.org 0x7cb76
	bne.n 0x7cb80	@ 0007cb76 03d1
.org 0x7cb78
	ldrb r0, [r5, #14]	@ 0007cb78 a87b
.org 0x7cb7a
	adds r0, #1	@ 0007cb7a 0130
.org 0x7cb7c
	strb r0, [r5, #14]	@ 0007cb7c a873
.org 0x7cb7e
	strb r1, [r5, #15]	@ 0007cb7e e973
.org 0x7cb80
	add sp, #8	@ 0007cb80 02b0
.org 0x7cb82
	pop {r3, r4, r5}	@ 0007cb82 38bc
.org 0x7cb84
	mov r8, r3	@ 0007cb84 9846
.org 0x7cb86
	mov r9, r4	@ 0007cb86 a146
.org 0x7cb88
	mov sl, r5	@ 0007cb88 aa46
.org 0x7cb8a
	pop {r4, r5, r6, r7}	@ 0007cb8a f0bc
.org 0x7cb8c
	pop {r0}	@ 0007cb8c 01bc
.org 0x7cb8e
	bx r0	@ 0007cb8e 0047
