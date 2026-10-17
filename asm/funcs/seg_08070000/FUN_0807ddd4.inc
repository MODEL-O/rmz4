@ FUN_0807ddd4  entry 0x0807ddd4  size 376
.thumb
.org 0x7ddd4
FUN_0807ddd4:
	push {r4, r5, lr}	@ 0007ddd4 30b5
.org 0x7ddd6
	sub sp, #8	@ 0007ddd6 82b0
.org 0x7ddd8
	adds r5, r0, #0	@ 0007ddd8 051c
.org 0x7ddda
	mov r0, sp	@ 0007ddda 6846
.org 0x7dddc
	movs r1, #0	@ 0007dddc 0021
.org 0x7ddde
	movs r2, #2	@ 0007ddde 0222
.org 0x7dde0
	bl 0x1292b8	@ 0007dde0 abf06afa
.org 0x7dde4
	add r4, sp, #4	@ 0007dde4 01ac
.org 0x7dde6
	ldr r1, [pc, #120]	@ 0007dde6 1e49
.org 0x7dde8
	adds r0, r4, #0	@ 0007dde8 201c
.org 0x7ddea
	movs r2, #2	@ 0007ddea 0222
.org 0x7ddec
	bl 0x129258	@ 0007ddec abf034fa
.org 0x7ddf0
	ldrb r1, [r5, #15]	@ 0007ddf0 e97b
.org 0x7ddf2
	cmp r1, #0	@ 0007ddf2 0029
.org 0x7ddf4
	bne.n 0x7ded0	@ 0007ddf4 6cd1
.org 0x7ddf6
	ldr r0, [pc, #108]	@ 0007ddf6 1b48
.org 0x7ddf8
	movs r3, #0	@ 0007ddf8 0023
.org 0x7ddfa
	strh r1, [r0, #0]	@ 0007ddfa 0180
.org 0x7ddfc
	adds r2, r5, #0	@ 0007ddfc 2a1c
.org 0x7ddfe
	adds r2, #69	@ 0007ddfe 4532
.org 0x7de00
	ldrb r1, [r2, #0]	@ 0007de00 1178
.org 0x7de02
	movs r0, #13	@ 0007de02 0d20
.org 0x7de04
	negs r0, r0	@ 0007de04 4042
.org 0x7de06
	ands r0, r1	@ 0007de06 0840
.org 0x7de08
	strb r0, [r2, #0]	@ 0007de08 1070
.org 0x7de0a
	adds r0, r5, #0	@ 0007de0a 281c
.org 0x7de0c
	adds r0, #216	@ 0007de0c d830
.org 0x7de0e
	ldr r0, [r0, #0]	@ 0007de0e 0068
.org 0x7de10
	cmp r0, #0	@ 0007de10 0028
.org 0x7de12
	bne.n 0x7de74	@ 0007de12 2fd1
.org 0x7de14
	adds r0, r5, #0	@ 0007de14 281c
.org 0x7de16
	adds r0, #184	@ 0007de16 b830
.org 0x7de18
	ldr r0, [r0, #0]	@ 0007de18 0068
.org 0x7de1a
	movs r1, #224	@ 0007de1a e021
.org 0x7de1c
	lsls r1, r1, #6	@ 0007de1c 8901
.org 0x7de1e
	adds r0, r0, r1	@ 0007de1e 4018
.org 0x7de20
	str r0, [r5, #88]	@ 0007de20 a865
.org 0x7de22
	adds r2, #131	@ 0007de22 8332
.org 0x7de24
	adds r1, r5, #0	@ 0007de24 291c
.org 0x7de26
	adds r1, #180	@ 0007de26 b431
.org 0x7de28
	ldr r0, [pc, #60]	@ 0007de28 0f48
.org 0x7de2a
	ldr r0, [r0, #8]	@ 0007de2a 8068
.org 0x7de2c
	movs r4, #240	@ 0007de2c f024
.org 0x7de2e
	lsls r4, r4, #7	@ 0007de2e e401
.org 0x7de30
	adds r0, r0, r4	@ 0007de30 0019
.org 0x7de32
	ldr r1, [r1, #0]	@ 0007de32 0968
.org 0x7de34
	adds r1, r1, r0	@ 0007de34 0918
.org 0x7de36
	str r1, [r2, #0]	@ 0007de36 1160
.org 0x7de38
	movs r2, #0	@ 0007de38 0022
.org 0x7de3a
	ldr r0, [pc, #48]	@ 0007de3a 0c48
.org 0x7de3c
	ldr r0, [r0, #0]	@ 0007de3c 0068
.org 0x7de3e
	ldr r0, [r0, #84]	@ 0007de3e 406d
.org 0x7de40
	cmp r1, r0	@ 0007de40 8142
.org 0x7de42
	bge.n 0x7de46	@ 0007de42 00da
.org 0x7de44
	movs r2, #1	@ 0007de44 0122
.org 0x7de46
	adds r0, r5, #0	@ 0007de46 281c
.org 0x7de48
	adds r0, #190	@ 0007de48 be30
.org 0x7de4a
	strb r2, [r0, #0]	@ 0007de4a 0270
.org 0x7de4c
	movs r0, #12	@ 0007de4c 0c20
.org 0x7de4e
	strb r0, [r5, #13]	@ 0007de4e 6873
.org 0x7de50
	strb r3, [r5, #14]	@ 0007de50 ab73
.org 0x7de52
	strb r3, [r5, #15]	@ 0007de52 eb73
.org 0x7de54
	ldr r0, [pc, #24]	@ 0007de54 0648
.org 0x7de56
	ldr r1, [r0, #48]	@ 0007de56 016b
.org 0x7de58
	adds r0, r5, #0	@ 0007de58 281c
.org 0x7de5a
	bl 0x128f80	@ 0007de5a abf091f8
.org 0x7de5e
	b.n 0x7df6a	@ 0007de5e 84e0
.org 0x7de60
	.byte 0x48,0x9a,0x12,0x08	@ 0007de60 data
.org 0x7de64
	.byte 0x40,0x0a,0x00,0x02	@ 0007de64 data
.org 0x7de68
	.byte 0x50,0xd8,0x85,0x08	@ 0007de68 data
.org 0x7de6c
	.byte 0xf0,0xdb,0x02,0x02	@ 0007de6c data
.org 0x7de70
	.byte 0xa4,0xd4,0x85,0x08	@ 0007de70 data
.org 0x7de74
	adds r2, r5, #0	@ 0007de74 2a1c
.org 0x7de76
	adds r2, #191	@ 0007de76 bf32
.org 0x7de78
	ldrb r1, [r2, #0]	@ 0007de78 1178
.org 0x7de7a
	movs r0, #4	@ 0007de7a 0420
.org 0x7de7c
	orrs r0, r1	@ 0007de7c 0843
.org 0x7de7e
	strb r0, [r2, #0]	@ 0007de7e 1070
.org 0x7de80
	adds r0, r5, #0	@ 0007de80 281c
.org 0x7de82
	movs r1, #0	@ 0007de82 0021
.org 0x7de84
	bl 0x7e8c8	@ 0007de84 00f020fd
.org 0x7de88
	mov r2, sp	@ 0007de88 6a46
.org 0x7de8a
	movs r3, #0	@ 0007de8a 0023
.org 0x7de8c
	ldr r0, [pc, #176]	@ 0007de8c 2c48
.org 0x7de8e
	ldr r0, [r0, #0]	@ 0007de8e 0068
.org 0x7de90
	ldrb r0, [r0, #1]	@ 0007de90 4078
.org 0x7de92
	cmp r0, #4	@ 0007de92 0428
.org 0x7de94
	bls.n 0x7dea4	@ 0007de94 06d9
.org 0x7de96
	ldr r0, [pc, #172]	@ 0007de96 2b48
.org 0x7de98
	ldrb r1, [r0, #4]	@ 0007de98 0179
.org 0x7de9a
	movs r0, #4	@ 0007de9a 0420
.org 0x7de9c
	ands r0, r1	@ 0007de9c 0840
.org 0x7de9e
	cmp r0, #0	@ 0007de9e 0028
.org 0x7dea0
	bne.n 0x7dea4	@ 0007dea0 00d1
.org 0x7dea2
	movs r3, #1	@ 0007dea2 0123
.org 0x7dea4
	adds r0, r2, r3	@ 0007dea4 d018
.org 0x7dea6
	ldrb r0, [r0, #0]	@ 0007dea6 0078
.org 0x7dea8
	strb r0, [r5, #18]	@ 0007dea8 a874
.org 0x7deaa
	movs r2, #0	@ 0007deaa 0022
.org 0x7deac
	ldr r0, [pc, #144]	@ 0007deac 2448
.org 0x7deae
	ldr r0, [r0, #0]	@ 0007deae 0068
.org 0x7deb0
	ldrb r0, [r0, #1]	@ 0007deb0 4078
.org 0x7deb2
	cmp r0, #4	@ 0007deb2 0428
.org 0x7deb4
	bls.n 0x7dec4	@ 0007deb4 06d9
.org 0x7deb6
	ldr r0, [pc, #140]	@ 0007deb6 2348
.org 0x7deb8
	ldrb r1, [r0, #4]	@ 0007deb8 0179
.org 0x7deba
	movs r0, #4	@ 0007deba 0420
.org 0x7debc
	ands r0, r1	@ 0007debc 0840
.org 0x7debe
	cmp r0, #0	@ 0007debe 0028
.org 0x7dec0
	bne.n 0x7dec4	@ 0007dec0 00d1
.org 0x7dec2
	movs r2, #1	@ 0007dec2 0122
.org 0x7dec4
	adds r0, r4, r2	@ 0007dec4 a018
.org 0x7dec6
	ldrb r0, [r0, #0]	@ 0007dec6 0078
.org 0x7dec8
	strb r0, [r5, #19]	@ 0007dec8 e874
.org 0x7deca
	ldrb r0, [r5, #15]	@ 0007deca e87b
.org 0x7decc
	adds r0, #1	@ 0007decc 0130
.org 0x7dece
	strb r0, [r5, #15]	@ 0007dece e873
.org 0x7ded0
	adds r4, r5, #0	@ 0007ded0 2c1c
.org 0x7ded2
	adds r4, #188	@ 0007ded2 bc34
.org 0x7ded4
	ldrb r0, [r4, #0]	@ 0007ded4 2078
.org 0x7ded6
	cmp r0, #0	@ 0007ded6 0028
.org 0x7ded8
	beq.n 0x7dee0	@ 0007ded8 02d0
.org 0x7deda
	adds r0, r5, #0	@ 0007deda 281c
.org 0x7dedc
	bl 0x1cff0	@ 0007dedc 9ff788f8
.org 0x7dee0
	adds r0, r5, #0	@ 0007dee0 281c
.org 0x7dee2
	adds r0, #116	@ 0007dee2 7430
.org 0x7dee4
	ldr r3, [pc, #96]	@ 0007dee4 184b
.org 0x7dee6
	ldr r2, [pc, #100]	@ 0007dee6 194a
.org 0x7dee8
	ldrb r1, [r4, #0]	@ 0007dee8 2178
.org 0x7deea
	lsls r1, r1, #1	@ 0007deea 4900
.org 0x7deec
	adds r1, r1, r2	@ 0007deec 8918
.org 0x7deee
	ldrh r2, [r1, #0]	@ 0007deee 0a88
.org 0x7def0
	lsls r2, r2, #2	@ 0007def0 9200
.org 0x7def2
	adds r2, r2, r3	@ 0007def2 d218
.org 0x7def4
	adds r1, r5, #0	@ 0007def4 291c
.org 0x7def6
	adds r1, #113	@ 0007def6 7131
.org 0x7def8
	ldrb r1, [r1, #0]	@ 0007def8 0978
.org 0x7defa
	lsls r1, r1, #24	@ 0007defa 0906
.org 0x7defc
	asrs r1, r1, #24	@ 0007defc 0916
.org 0x7defe
	ldr r2, [r2, #0]	@ 0007defe 1268
.org 0x7df00
	lsls r1, r1, #2	@ 0007df00 8900
.org 0x7df02
	adds r1, r1, r2	@ 0007df02 8918
.org 0x7df04
	ldr r1, [r1, #0]	@ 0007df04 0968
.org 0x7df06
	bl 0x5784	@ 0007df06 87f73dfc
.org 0x7df0a
	adds r0, r5, #0	@ 0007df0a 281c
.org 0x7df0c
	adds r0, #216	@ 0007df0c d830
.org 0x7df0e
	ldr r2, [r0, #0]	@ 0007df0e 0268
.org 0x7df10
	adds r0, r2, #0	@ 0007df10 101c
.org 0x7df12
	adds r0, #181	@ 0007df12 b530
.org 0x7df14
	ldrb r0, [r0, #0]	@ 0007df14 0078
.org 0x7df16
	cmp r0, #0	@ 0007df16 0028
.org 0x7df18
	beq.n 0x7df6a	@ 0007df18 27d0
.org 0x7df1a
	adds r0, r5, #0	@ 0007df1a 281c
.org 0x7df1c
	adds r0, #191	@ 0007df1c bf30
.org 0x7df1e
	ldrb r0, [r0, #0]	@ 0007df1e 0078
.org 0x7df20
	lsrs r0, r0, #2	@ 0007df20 8008
.org 0x7df22
	movs r1, #1	@ 0007df22 0121
.org 0x7df24
	ands r0, r1	@ 0007df24 0840
.org 0x7df26
	cmp r0, #0	@ 0007df26 0028
.org 0x7df28
	beq.n 0x7df6a	@ 0007df28 1fd0
.org 0x7df2a
	ldrb r0, [r5, #18]	@ 0007df2a a87c
.org 0x7df2c
	ldrb r1, [r5, #19]	@ 0007df2c e97c
.org 0x7df2e
	cmp r0, r1	@ 0007df2e 8842
.org 0x7df30
	bcc.n 0x7df50	@ 0007df30 0ed3
.org 0x7df32
	ldrb r0, [r5, #14]	@ 0007df32 a87b
.org 0x7df34
	adds r0, #1	@ 0007df34 0130
.org 0x7df36
	movs r1, #0	@ 0007df36 0021
.org 0x7df38
	strb r0, [r5, #14]	@ 0007df38 a873
.org 0x7df3a
	strb r1, [r5, #15]	@ 0007df3a e973
.org 0x7df3c
	b.n 0x7df6a	@ 0007df3c 15e0
.org 0x7df3e
	.byte 0x00	@ 0007df3e data
.org 0x7df3f
	.byte 0x00	@ 0007df3f data
.org 0x7df40
	.byte 0xe0,0xe8,0x02,0x02	@ 0007df40 data
.org 0x7df44
	.byte 0xb0,0xe8,0x02,0x02	@ 0007df44 data
.org 0x7df48
	.byte 0xd8,0xd7,0x85,0x08	@ 0007df48 data
