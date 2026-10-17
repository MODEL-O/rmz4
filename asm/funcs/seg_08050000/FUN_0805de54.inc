@ FUN_0805de54  entry 0x0805de54  size 254
.thumb
.org 0x5de54
FUN_0805de54:
	push {r4, r5, lr}	@ 0005de54 30b5
.org 0x5de56
	sub sp, #8	@ 0005de56 82b0
.org 0x5de58
	adds r5, r0, #0	@ 0005de58 051c
.org 0x5de5a
	ldrb r0, [r5, #15]	@ 0005de5a e87b
.org 0x5de5c
	cmp r0, #0	@ 0005de5c 0028
.org 0x5de5e
	bne.n 0x5df00	@ 0005de5e 4fd1
.org 0x5de60
	ldr r0, [pc, #76]	@ 0005de60 1348
.org 0x5de62
	ldr r1, [pc, #80]	@ 0005de62 1449
.org 0x5de64
	adds r1, #166	@ 0005de64 a631
.org 0x5de66
	ldrh r1, [r1, #0]	@ 0005de66 0988
.org 0x5de68
	ldrh r2, [r0, #6]	@ 0005de68 c288
.org 0x5de6a
	lsrs r2, r2, #6	@ 0005de6a 9209
.org 0x5de6c
	subs r1, r1, r2	@ 0005de6c 891a
.org 0x5de6e
	lsls r1, r1, #5	@ 0005de6e 4901
.org 0x5de70
	movs r2, #128	@ 0005de70 8022
.org 0x5de72
	lsls r2, r2, #9	@ 0005de72 5202
.org 0x5de74
	adds r1, r1, r2	@ 0005de74 8918
.org 0x5de76
	bl 0x1d30	@ 0005de76 a3f75bff
.org 0x5de7a
	ldr r0, [pc, #60]	@ 0005de7a 0f48
.org 0x5de7c
	ldr r1, [pc, #60]	@ 0005de7c 0f49
.org 0x5de7e
	adds r1, #166	@ 0005de7e a631
.org 0x5de80
	ldrh r1, [r1, #0]	@ 0005de80 0988
.org 0x5de82
	ldrb r2, [r0, #7]	@ 0005de82 c279
.org 0x5de84
	subs r1, r1, r2	@ 0005de84 891a
.org 0x5de86
	lsls r1, r1, #5	@ 0005de86 4901
.org 0x5de88
	movs r2, #128	@ 0005de88 8022
.org 0x5de8a
	lsls r2, r2, #2	@ 0005de8a 9200
.org 0x5de8c
	adds r1, r1, r2	@ 0005de8c 8918
.org 0x5de8e
	bl 0x2208	@ 0005de8e a4f7bbf9
.org 0x5de92
	adds r0, r5, #0	@ 0005de92 281c
.org 0x5de94
	adds r0, #204	@ 0005de94 cc30
.org 0x5de96
	ldr r1, [r0, #0]	@ 0005de96 0168
.org 0x5de98
	adds r4, r0, #0	@ 0005de98 041c
.org 0x5de9a
	cmp r1, #0	@ 0005de9a 0029
.org 0x5de9c
	bne.n 0x5def6	@ 0005de9c 2bd1
.org 0x5de9e
	ldr r2, [r5, #84]	@ 0005de9e 6a6d
.org 0x5dea0
	ldrb r1, [r5, #10]	@ 0005dea0 a97a
.org 0x5dea2
	movs r0, #16	@ 0005dea2 1020
.org 0x5dea4
	ands r0, r1	@ 0005dea4 0840
.org 0x5dea6
	cmp r0, #0	@ 0005dea6 0028
.org 0x5dea8
	beq.n 0x5dec0	@ 0005dea8 0ad0
.org 0x5deaa
	movs r1, #240	@ 0005deaa f021
.org 0x5deac
	lsls r1, r1, #6	@ 0005deac 8901
.org 0x5deae
	b.n 0x5dec2	@ 0005deae 08e0
.org 0x5deb0
	.byte 0x7c,0x46,0xc4,0x08	@ 0005deb0 data
.org 0x5deb4
	.byte 0x40,0xe0,0x02,0x02	@ 0005deb4 data
.org 0x5deb8
	.byte 0x88,0x46,0xc4,0x08	@ 0005deb8 data
.org 0x5debc
	.byte 0x40,0xde,0x02,0x02	@ 0005debc data
.org 0x5dec0
	ldr r1, [pc, #160]	@ 0005dec0 2849
.org 0x5dec2
	adds r0, r2, r1	@ 0005dec2 5018
.org 0x5dec4
	str r0, [sp, #0]	@ 0005dec4 0090
.org 0x5dec6
	ldr r0, [r5, #88]	@ 0005dec6 a86d
.org 0x5dec8
	str r0, [sp, #4]	@ 0005dec8 0190
.org 0x5deca
	movs r3, #0	@ 0005deca 0023
.org 0x5decc
	ldr r2, [pc, #152]	@ 0005decc 264a
.org 0x5dece
	ldr r1, [r2, #0]	@ 0005dece 1168
.org 0x5ded0
	ldr r0, [pc, #152]	@ 0005ded0 2648
.org 0x5ded2
	muls r0, r1	@ 0005ded2 4843
.org 0x5ded4
	ldr r1, [pc, #152]	@ 0005ded4 2649
.org 0x5ded6
	adds r0, r0, r1	@ 0005ded6 4018
.org 0x5ded8
	lsls r0, r0, #1	@ 0005ded8 4000
.org 0x5deda
	lsrs r1, r0, #1	@ 0005deda 4108
.org 0x5dedc
	str r1, [r2, #0]	@ 0005dedc 1160
.org 0x5dede
	lsrs r0, r0, #17	@ 0005dede 400c
.org 0x5dee0
	movs r1, #31	@ 0005dee0 1f21
.org 0x5dee2
	ands r0, r1	@ 0005dee2 0840
.org 0x5dee4
	cmp r0, #17	@ 0005dee4 1128
.org 0x5dee6
	bls.n 0x5deea	@ 0005dee6 00d9
.org 0x5dee8
	movs r3, #1	@ 0005dee8 0123
.org 0x5deea
	adds r2, r3, #0	@ 0005deea 1a1c
.org 0x5deec
	adds r0, r5, #0	@ 0005deec 281c
.org 0x5deee
	mov r1, sp	@ 0005deee 6946
.org 0x5def0
	bl 0xc4480	@ 0005def0 66f0c6fa
.org 0x5def4
	str r0, [r4, #0]	@ 0005def4 2060
.org 0x5def6
	movs r0, #16	@ 0005def6 1020
.org 0x5def8
	strb r0, [r5, #18]	@ 0005def8 a874
.org 0x5defa
	ldrb r0, [r5, #15]	@ 0005defa e87b
.org 0x5defc
	adds r0, #1	@ 0005defc 0130
.org 0x5defe
	strb r0, [r5, #15]	@ 0005defe e873
.org 0x5df00
	adds r0, r5, #0	@ 0005df00 281c
.org 0x5df02
	bl 0x1cff0	@ 0005df02 bff775f8
.org 0x5df06
	adds r0, r5, #0	@ 0005df06 281c
.org 0x5df08
	adds r0, #116	@ 0005df08 7430
.org 0x5df0a
	ldr r4, [pc, #104]	@ 0005df0a 1a4c
.org 0x5df0c
	ldr r3, [pc, #104]	@ 0005df0c 1a4b
.org 0x5df0e
	adds r1, r5, #0	@ 0005df0e 291c
.org 0x5df10
	adds r1, #184	@ 0005df10 b831
.org 0x5df12
	ldrb r2, [r1, #0]	@ 0005df12 0a78
.org 0x5df14
	lsls r1, r2, #1	@ 0005df14 5100
.org 0x5df16
	adds r1, r1, r3	@ 0005df16 c918
.org 0x5df18
	ldrh r1, [r1, #0]	@ 0005df18 0988
.org 0x5df1a
	lsls r1, r1, #2	@ 0005df1a 8900
.org 0x5df1c
	adds r1, r1, r4	@ 0005df1c 0919
.org 0x5df1e
	adds r3, r5, #0	@ 0005df1e 2b1c
.org 0x5df20
	adds r3, #113	@ 0005df20 7133
.org 0x5df22
	movs r4, #0	@ 0005df22 0024
.org 0x5df24
	ldrsb r4, [r3, r4]	@ 0005df24 1c57
.org 0x5df26
	ldr r1, [r1, #0]	@ 0005df26 0968
.org 0x5df28
	lsls r3, r4, #2	@ 0005df28 a300
.org 0x5df2a
	adds r3, r3, r1	@ 0005df2a 5b18
.org 0x5df2c
	ldr r1, [pc, #76]	@ 0005df2c 1349
.org 0x5df2e
	lsls r2, r2, #2	@ 0005df2e 9200
.org 0x5df30
	adds r2, r2, r1	@ 0005df30 5218
.org 0x5df32
	ldr r1, [r2, #0]	@ 0005df32 1168
.org 0x5df34
	adds r1, r1, r4	@ 0005df34 0919
.org 0x5df36
	ldrb r1, [r1, #0]	@ 0005df36 0978
.org 0x5df38
	lsls r2, r1, #1	@ 0005df38 4a00
.org 0x5df3a
	adds r2, r2, r1	@ 0005df3a 5218
.org 0x5df3c
	lsls r2, r2, #3	@ 0005df3c d200
.org 0x5df3e
	ldr r1, [r3, #0]	@ 0005df3e 1968
.org 0x5df40
	adds r1, r1, r2	@ 0005df40 8918
.org 0x5df42
	bl 0x5784	@ 0005df42 a7f71ffc
.org 0x5df46
	ldrb r0, [r5, #18]	@ 0005df46 a87c
.org 0x5df48
	subs r0, #1	@ 0005df48 0138
.org 0x5df4a
	strb r0, [r5, #18]	@ 0005df4a a874
.org 0x5df4c
	lsls r0, r0, #24	@ 0005df4c 0006
.org 0x5df4e
	lsrs r1, r0, #24	@ 0005df4e 010e
.org 0x5df50
	cmp r1, #0	@ 0005df50 0029
