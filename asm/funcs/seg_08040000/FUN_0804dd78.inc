@ FUN_0804dd78  entry 0x0804dd78  size 356
.thumb
.org 0x4dd78
FUN_0804dd78:
	push {r4, r5, r6, lr}	@ 0004dd78 70b5
.org 0x4dd7a
	adds r5, r0, #0	@ 0004dd7a 051c
.org 0x4dd7c
	ldr r6, [r5, #40]	@ 0004dd7c ae6a
.org 0x4dd7e
	movs r1, #168	@ 0004dd7e a821
.org 0x4dd80
	lsls r1, r1, #1	@ 0004dd80 4900
.org 0x4dd82
	adds r0, r6, r1	@ 0004dd82 7018
.org 0x4dd84
	ldrb r0, [r0, #0]	@ 0004dd84 0078
.org 0x4dd86
	cmp r0, #255	@ 0004dd86 ff28
.org 0x4dd88
	bne.n 0x4ddd8	@ 0004dd88 26d1
.org 0x4dd8a
	ldr r0, [pc, #68]	@ 0004dd8a 1148
.org 0x4dd8c
	adds r2, r6, r0	@ 0004dd8c 3218
.org 0x4dd8e
	ldrb r0, [r2, #0]	@ 0004dd8e 1078
.org 0x4dd90
	movs r1, #64	@ 0004dd90 4021
.org 0x4dd92
	orrs r0, r1	@ 0004dd92 0843
.org 0x4dd94
	strb r0, [r2, #0]	@ 0004dd94 1070
.org 0x4dd96
	ldrb r1, [r5, #10]	@ 0004dd96 a97a
.org 0x4dd98
	movs r0, #254	@ 0004dd98 fe20
.org 0x4dd9a
	ands r0, r1	@ 0004dd9a 0840
.org 0x4dd9c
	movs r2, #0	@ 0004dd9c 0022
.org 0x4dd9e
	movs r1, #253	@ 0004dd9e fd21
.org 0x4dda0
	ands r0, r1	@ 0004dda0 0840
.org 0x4dda2
	strb r0, [r5, #10]	@ 0004dda2 a872
.org 0x4dda4
	adds r0, r5, #0	@ 0004dda4 281c
.org 0x4dda6
	adds r0, #140	@ 0004dda6 8c30
.org 0x4dda8
	str r2, [r0, #0]	@ 0004dda8 0260
.org 0x4ddaa
	adds r0, #4	@ 0004ddaa 0430
.org 0x4ddac
	str r2, [r0, #0]	@ 0004ddac 0260
.org 0x4ddae
	adds r0, #4	@ 0004ddae 0430
.org 0x4ddb0
	strb r2, [r0, #0]	@ 0004ddb0 0270
.org 0x4ddb2
	ldrb r1, [r5, #10]	@ 0004ddb2 a97a
.org 0x4ddb4
	movs r0, #251	@ 0004ddb4 fb20
.org 0x4ddb6
	ands r0, r1	@ 0004ddb6 0840
.org 0x4ddb8
	strb r0, [r5, #10]	@ 0004ddb8 a872
.org 0x4ddba
	ldr r1, [pc, #24]	@ 0004ddba 0649
.org 0x4ddbc
	ldrb r0, [r5, #9]	@ 0004ddbc 687a
.org 0x4ddbe
	lsls r0, r0, #2	@ 0004ddbe 8000
.org 0x4ddc0
	adds r0, r0, r1	@ 0004ddc0 4018
.org 0x4ddc2
	movs r1, #3	@ 0004ddc2 0321
.org 0x4ddc4
	str r1, [r5, #12]	@ 0004ddc4 e960
.org 0x4ddc6
	ldr r0, [r0, #0]	@ 0004ddc6 0068
.org 0x4ddc8
	ldr r0, [r0, #12]	@ 0004ddc8 c068
.org 0x4ddca
	str r0, [r5, #20]	@ 0004ddca 6861
.org 0x4ddcc
	b.n 0x4def6	@ 0004ddcc 93e0
.org 0x4ddce
	.byte 0x00	@ 0004ddce data
.org 0x4ddcf
	.byte 0x00	@ 0004ddcf data
.org 0x4ddd0
	.byte 0x53,0x01,0x00,0x00	@ 0004ddd0 data
.org 0x4ddd4
	.byte 0xf8,0x39,0x85,0x08	@ 0004ddd4 data
.org 0x4ddd8
	ldrb r4, [r5, #13]	@ 0004ddd8 6c7b
.org 0x4ddda
	cmp r4, #0	@ 0004ddda 002c
.org 0x4dddc
	beq.n 0x4de14	@ 0004dddc 1ad0
.org 0x4ddde
	ldrb r0, [r5, #18]	@ 0004ddde a87c
.org 0x4dde0
	adds r1, r0, #1	@ 0004dde0 411c
.org 0x4dde2
	strb r1, [r5, #18]	@ 0004dde2 a974
.org 0x4dde4
	lsls r0, r0, #24	@ 0004dde4 0006
.org 0x4dde6
	lsrs r0, r0, #24	@ 0004dde6 000e
.org 0x4dde8
	cmp r0, #3	@ 0004dde8 0328
.org 0x4ddea
	bls.n 0x4de3c	@ 0004ddea 27d9
.org 0x4ddec
	ldr r1, [pc, #28]	@ 0004ddec 0749
.org 0x4ddee
	adds r2, r6, r1	@ 0004ddee 7218
.org 0x4ddf0
	ldrb r0, [r2, #0]	@ 0004ddf0 1078
.org 0x4ddf2
	movs r1, #64	@ 0004ddf2 4021
.org 0x4ddf4
	orrs r0, r1	@ 0004ddf4 0843
.org 0x4ddf6
	strb r0, [r2, #0]	@ 0004ddf6 1070
.org 0x4ddf8
	ldr r1, [pc, #20]	@ 0004ddf8 0549
.org 0x4ddfa
	ldrb r0, [r5, #9]	@ 0004ddfa 687a
.org 0x4ddfc
	lsls r0, r0, #2	@ 0004ddfc 8000
.org 0x4ddfe
	adds r0, r0, r1	@ 0004ddfe 4018
.org 0x4de00
	movs r1, #2	@ 0004de00 0221
.org 0x4de02
	str r1, [r5, #12]	@ 0004de02 e960
.org 0x4de04
	ldr r0, [r0, #0]	@ 0004de04 0068
.org 0x4de06
	ldr r0, [r0, #8]	@ 0004de06 8068
.org 0x4de08
	str r0, [r5, #20]	@ 0004de08 6861
.org 0x4de0a
	b.n 0x4def6	@ 0004de0a 74e0
.org 0x4de0c
	.byte 0x53,0x01,0x00,0x00	@ 0004de0c data
.org 0x4de10
	.byte 0xf8,0x39,0x85,0x08	@ 0004de10 data
.org 0x4de14
	ldrb r0, [r5, #18]	@ 0004de14 a87c
.org 0x4de16
	adds r1, r0, #1	@ 0004de16 411c
.org 0x4de18
	strb r1, [r5, #18]	@ 0004de18 a974
.org 0x4de1a
	lsls r0, r0, #24	@ 0004de1a 0006
.org 0x4de1c
	lsrs r0, r0, #24	@ 0004de1c 000e
.org 0x4de1e
	cmp r0, #3	@ 0004de1e 0328
.org 0x4de20
	bls.n 0x4de3c	@ 0004de20 0cd9
.org 0x4de22
	ldr r1, [pc, #52]	@ 0004de22 0d49
.org 0x4de24
	adds r0, r5, #0	@ 0004de24 281c
.org 0x4de26
	bl 0x1cf00	@ 0004de26 cff76bf8
.org 0x4de2a
	adds r0, r5, #0	@ 0004de2a 281c
.org 0x4de2c
	adds r0, #116	@ 0004de2c 7430
.org 0x4de2e
	ldr r1, [pc, #44]	@ 0004de2e 0b49
.org 0x4de30
	bl 0x5784	@ 0004de30 b7f7a8fc
.org 0x4de34
	strb r4, [r5, #18]	@ 0004de34 ac74
.org 0x4de36
	ldrb r0, [r5, #13]	@ 0004de36 687b
.org 0x4de38
	adds r0, #1	@ 0004de38 0130
.org 0x4de3a
	strb r0, [r5, #13]	@ 0004de3a 6873
.org 0x4de3c
	adds r0, r5, #0	@ 0004de3c 281c
.org 0x4de3e
	bl 0x1cff0	@ 0004de3e cff7d7f8
.org 0x4de42
	ldrb r0, [r6, #10]	@ 0004de42 b07a
.org 0x4de44
	lsrs r2, r0, #4	@ 0004de44 0209
.org 0x4de46
	movs r0, #1	@ 0004de46 0120
.org 0x4de48
	ands r2, r0	@ 0004de48 0240
.org 0x4de4a
	cmp r2, #0	@ 0004de4a 002a
.org 0x4de4c
	beq.n 0x4de60	@ 0004de4c 08d0
.org 0x4de4e
	ldrb r1, [r5, #10]	@ 0004de4e a97a
.org 0x4de50
	movs r0, #16	@ 0004de50 1020
.org 0x4de52
	orrs r0, r1	@ 0004de52 0843
.org 0x4de54
	b.n 0x4de66	@ 0004de54 07e0
.org 0x4de56
	.byte 0x00	@ 0004de56 data
.org 0x4de57
	.byte 0x00	@ 0004de57 data
.org 0x4de58
	.byte 0x3f,0x80,0x00,0x00	@ 0004de58 data
.org 0x4de5c
	.byte 0x94,0x7a,0x85,0x08	@ 0004de5c data
.org 0x4de60
	ldrb r1, [r5, #10]	@ 0004de60 a97a
.org 0x4de62
	movs r0, #239	@ 0004de62 ef20
.org 0x4de64
	ands r0, r1	@ 0004de64 0840
.org 0x4de66
	strb r0, [r5, #10]	@ 0004de66 a872
.org 0x4de68
	adds r1, r2, #0	@ 0004de68 111c
.org 0x4de6a
	adds r0, r5, #0	@ 0004de6a 281c
.org 0x4de6c
	adds r0, #76	@ 0004de6c 4c30
.org 0x4de6e
	strb r1, [r0, #0]	@ 0004de6e 0170
.org 0x4de70
	adds r3, r5, #0	@ 0004de70 2b1c
.org 0x4de72
	adds r3, #74	@ 0004de72 4a33
.org 0x4de74
	lsls r1, r1, #4	@ 0004de74 0901
.org 0x4de76
	ldrb r2, [r3, #0]	@ 0004de76 1a78
.org 0x4de78
	movs r0, #17	@ 0004de78 1120
.org 0x4de7a
	negs r0, r0	@ 0004de7a 4042
.org 0x4de7c
	ands r0, r2	@ 0004de7c 1040
.org 0x4de7e
	orrs r0, r1	@ 0004de7e 0843
.org 0x4de80
	strb r0, [r3, #0]	@ 0004de80 1870
.org 0x4de82
	adds r0, r6, #0	@ 0004de82 301c
.org 0x4de84
	adds r0, #113	@ 0004de84 7130
.org 0x4de86
	ldrb r0, [r0, #0]	@ 0004de86 0078
.org 0x4de88
	lsls r0, r0, #24	@ 0004de88 0006
.org 0x4de8a
	asrs r0, r0, #24	@ 0004de8a 0016
.org 0x4de8c
	movs r4, #0	@ 0004de8c 0024
.org 0x4de8e
	cmp r0, #3	@ 0004de8e 0328
.org 0x4de90
	bne.n 0x4de94	@ 0004de90 00d1
.org 0x4de92
	movs r4, #1	@ 0004de92 0124
.org 0x4de94
	ldrb r1, [r5, #10]	@ 0004de94 a97a
.org 0x4de96
	movs r0, #16	@ 0004de96 1020
.org 0x4de98
	ands r0, r1	@ 0004de98 0840
.org 0x4de9a
	cmp r0, #0	@ 0004de9a 0028
.org 0x4de9c
	beq.n 0x4debc	@ 0004de9c 0ed0
.org 0x4de9e
	ldr r3, [pc, #24]	@ 0004de9e 064b
.org 0x4dea0
	lsls r4, r4, #3	@ 0004dea0 e400
.org 0x4dea2
	movs r0, #168	@ 0004dea2 a820
.org 0x4dea4
	lsls r0, r0, #1	@ 0004dea4 4000
.org 0x4dea6
	adds r2, r6, r0	@ 0004dea6 3218
.org 0x4dea8
	ldrb r0, [r2, #0]	@ 0004dea8 1078
.org 0x4deaa
	lsls r0, r0, #4	@ 0004deaa 0001
.org 0x4deac
	adds r0, r4, r0	@ 0004deac 2018
.org 0x4deae
	adds r0, r0, r3	@ 0004deae c018
.org 0x4deb0
	ldr r1, [r6, #84]	@ 0004deb0 716d
.org 0x4deb2
	ldr r0, [r0, #0]	@ 0004deb2 0068
.org 0x4deb4
	subs r1, r1, r0	@ 0004deb4 091a
.org 0x4deb6
	b.n 0x4ded4	@ 0004deb6 0de0
.org 0x4deb8
	.byte 0x4c,0x35,0x85,0x08	@ 0004deb8 data
.org 0x4debc
	ldr r3, [pc, #60]	@ 0004debc 0f4b
.org 0x4debe
	lsls r4, r4, #3	@ 0004debe e400
.org 0x4dec0
	movs r1, #168	@ 0004dec0 a821
.org 0x4dec2
	lsls r1, r1, #1	@ 0004dec2 4900
.org 0x4dec4
	adds r2, r6, r1	@ 0004dec4 7218
.org 0x4dec6
	ldrb r0, [r2, #0]	@ 0004dec6 1078
.org 0x4dec8
	lsls r0, r0, #4	@ 0004dec8 0001
.org 0x4deca
	adds r0, r4, r0	@ 0004deca 2018
.org 0x4decc
	adds r0, r0, r3	@ 0004decc c018
.org 0x4dece
	ldr r1, [r6, #84]	@ 0004dece 716d
.org 0x4ded0
	ldr r0, [r0, #0]	@ 0004ded0 0068
.org 0x4ded2
	adds r1, r1, r0	@ 0004ded2 0918
.org 0x4ded4
	str r1, [r5, #84]	@ 0004ded4 6965
.org 0x4ded6
	ldrb r0, [r2, #0]	@ 0004ded6 1078
.org 0x4ded8
	lsls r0, r0, #4	@ 0004ded8 0001
.org 0x4deda
	adds r0, r4, r0	@ 0004deda 2018
