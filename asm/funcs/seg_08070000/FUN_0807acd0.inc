@ FUN_0807acd0  entry 0x0807acd0  size 516
.thumb
.org 0x7acd0
FUN_0807acd0:
	push {r4, r5, r6, r7, lr}	@ 0007acd0 f0b5
.org 0x7acd2
	mov r7, sl	@ 0007acd2 5746
.org 0x7acd4
	mov r6, r9	@ 0007acd4 4e46
.org 0x7acd6
	mov r5, r8	@ 0007acd6 4546
.org 0x7acd8
	push {r5, r6, r7}	@ 0007acd8 e0b4
.org 0x7acda
	sub sp, #12	@ 0007acda 83b0
.org 0x7acdc
	adds r7, r0, #0	@ 0007acdc 071c
.org 0x7acde
	ldrb r0, [r7, #14]	@ 0007acde b87b
.org 0x7ace0
	str r0, [sp, #8]	@ 0007ace0 0290
.org 0x7ace2
	cmp r0, #0	@ 0007ace2 0028
.org 0x7ace4
	bne.n 0x7ad84	@ 0007ace4 4ed1
.org 0x7ace6
	ldr r1, [pc, #180]	@ 0007ace6 2d49
.org 0x7ace8
	adds r0, r7, #0	@ 0007ace8 381c
.org 0x7acea
	bl 0x1cf00	@ 0007acea a2f709f9
.org 0x7acee
	ldr r5, [pc, #176]	@ 0007acee 2c4d
.org 0x7acf0
	ldr r1, [pc, #176]	@ 0007acf0 2c49
.org 0x7acf2
	mov r9, r1	@ 0007acf2 8946
.org 0x7acf4
	adds r0, r5, r1	@ 0007acf4 6818
.org 0x7acf6
	ldr r2, [pc, #176]	@ 0007acf6 2c4a
.org 0x7acf8
	mov r8, r2	@ 0007acf8 9046
.org 0x7acfa
	movs r4, #211	@ 0007acfa d324
.org 0x7acfc
	lsls r4, r4, #1	@ 0007acfc 6400
.org 0x7acfe
	adds r1, r2, r4	@ 0007acfe 1119
.org 0x7ad00
	ldrh r1, [r1, #0]	@ 0007ad00 0988
.org 0x7ad02
	ldrh r2, [r0, #6]	@ 0007ad02 c288
.org 0x7ad04
	lsrs r2, r2, #6	@ 0007ad04 9209
.org 0x7ad06
	subs r1, r1, r2	@ 0007ad06 891a
.org 0x7ad08
	lsls r1, r1, #5	@ 0007ad08 4901
.org 0x7ad0a
	movs r2, #128	@ 0007ad0a 8022
.org 0x7ad0c
	lsls r2, r2, #9	@ 0007ad0c 5202
.org 0x7ad0e
	adds r1, r1, r2	@ 0007ad0e 8918
.org 0x7ad10
	bl 0x1d30	@ 0007ad10 87f70ef8
.org 0x7ad14
	ldr r0, [pc, #148]	@ 0007ad14 2548
.org 0x7ad16
	adds r5, r5, r0	@ 0007ad16 2d18
.org 0x7ad18
	ldr r6, [pc, #148]	@ 0007ad18 254e
.org 0x7ad1a
	adds r4, r6, r4	@ 0007ad1a 3419
.org 0x7ad1c
	ldrh r1, [r4, #0]	@ 0007ad1c 2188
.org 0x7ad1e
	ldrb r0, [r5, #7]	@ 0007ad1e e879
.org 0x7ad20
	subs r1, r1, r0	@ 0007ad20 091a
.org 0x7ad22
	lsls r1, r1, #5	@ 0007ad22 4901
.org 0x7ad24
	movs r2, #128	@ 0007ad24 8022
.org 0x7ad26
	lsls r2, r2, #2	@ 0007ad26 9200
.org 0x7ad28
	mov sl, r2	@ 0007ad28 9246
.org 0x7ad2a
	add r1, sl	@ 0007ad2a 5144
.org 0x7ad2c
	adds r0, r5, #0	@ 0007ad2c 281c
.org 0x7ad2e
	bl 0x2208	@ 0007ad2e 87f76bfa
.org 0x7ad32
	ldr r4, [pc, #128]	@ 0007ad32 204c
.org 0x7ad34
	add r9, r4	@ 0007ad34 a144
.org 0x7ad36
	movs r5, #161	@ 0007ad36 a125
.org 0x7ad38
	lsls r5, r5, #1	@ 0007ad38 6d00
.org 0x7ad3a
	add r8, r5	@ 0007ad3a a844
.org 0x7ad3c
	mov r0, r8	@ 0007ad3c 4046
.org 0x7ad3e
	ldrh r1, [r0, #0]	@ 0007ad3e 0188
.org 0x7ad40
	mov r2, r9	@ 0007ad40 4a46
.org 0x7ad42
	ldrh r0, [r2, #6]	@ 0007ad42 d088
.org 0x7ad44
	lsrs r0, r0, #6	@ 0007ad44 8009
.org 0x7ad46
	subs r1, r1, r0	@ 0007ad46 091a
.org 0x7ad48
	lsls r1, r1, #5	@ 0007ad48 4901
.org 0x7ad4a
	movs r0, #128	@ 0007ad4a 8020
.org 0x7ad4c
	lsls r0, r0, #9	@ 0007ad4c 4002
.org 0x7ad4e
	adds r1, r1, r0	@ 0007ad4e 0918
.org 0x7ad50
	mov r0, r9	@ 0007ad50 4846
.org 0x7ad52
	bl 0x1d30	@ 0007ad52 86f7edff
.org 0x7ad56
	ldr r1, [pc, #84]	@ 0007ad56 1549
.org 0x7ad58
	adds r4, r4, r1	@ 0007ad58 6418
.org 0x7ad5a
	adds r6, r6, r5	@ 0007ad5a 7619
.org 0x7ad5c
	ldrh r1, [r6, #0]	@ 0007ad5c 3188
.org 0x7ad5e
	ldrb r0, [r4, #7]	@ 0007ad5e e079
.org 0x7ad60
	subs r1, r1, r0	@ 0007ad60 091a
.org 0x7ad62
	lsls r1, r1, #5	@ 0007ad62 4901
.org 0x7ad64
	add r1, sl	@ 0007ad64 5144
.org 0x7ad66
	adds r0, r4, #0	@ 0007ad66 201c
.org 0x7ad68
	bl 0x2208	@ 0007ad68 87f74efa
.org 0x7ad6c
	movs r0, #212	@ 0007ad6c d420
.org 0x7ad6e
	lsls r0, r0, #1	@ 0007ad6e 4000
.org 0x7ad70
	bl 0x2b10	@ 0007ad70 87f7cefe
.org 0x7ad74
	movs r0, #155	@ 0007ad74 9b20
.org 0x7ad76
	strb r0, [r7, #18]	@ 0007ad76 b874
.org 0x7ad78
	mov r2, sp	@ 0007ad78 6a46
.org 0x7ad7a
	ldrb r2, [r2, #8]	@ 0007ad7a 127a
.org 0x7ad7c
	strb r2, [r7, #15]	@ 0007ad7c fa73
.org 0x7ad7e
	ldrb r0, [r7, #14]	@ 0007ad7e b87b
.org 0x7ad80
	adds r0, #1	@ 0007ad80 0130
.org 0x7ad82
	strb r0, [r7, #14]	@ 0007ad82 b873
.org 0x7ad84
	adds r0, r7, #0	@ 0007ad84 381c
.org 0x7ad86
	bl 0x1cff0	@ 0007ad86 a2f733f9
.org 0x7ad8a
	ldrb r0, [r7, #15]	@ 0007ad8a f87b
.org 0x7ad8c
	cmp r0, #1	@ 0007ad8c 0128
.org 0x7ad8e
	bne.n 0x7ad92	@ 0007ad8e 00d1
.org 0x7ad90
	b.n 0x7aecc	@ 0007ad90 9ce0
.org 0x7ad92
	cmp r0, #1	@ 0007ad92 0128
.org 0x7ad94
	bgt.n 0x7adb8	@ 0007ad94 10dc
.org 0x7ad96
	cmp r0, #0	@ 0007ad96 0028
.org 0x7ad98
	beq.n 0x7adc0	@ 0007ad98 12d0
.org 0x7ad9a
	b.n 0x7af18	@ 0007ad9a bde0
.org 0x7ad9c
	.byte 0x02,0xb1,0x00,0x00	@ 0007ad9c data
.org 0x7ada0
	.byte 0x7c,0x10,0x00,0x00	@ 0007ada0 data
.org 0x7ada4
	.byte 0x00,0x40,0xc4,0x08	@ 0007ada4 data
.org 0x7ada8
	.byte 0x40,0xe0,0x02,0x02	@ 0007ada8 data
.org 0x7adac
	.byte 0x0c,0x40,0xc4,0x08	@ 0007adac data
.org 0x7adb0
	.byte 0x40,0xde,0x02,0x02	@ 0007adb0 data
.org 0x7adb4
	.byte 0x94,0x0c,0x00,0x00	@ 0007adb4 data
.org 0x7adb8
	cmp r0, #2	@ 0007adb8 0228
.org 0x7adba
	bne.n 0x7adbe	@ 0007adba 00d1
.org 0x7adbc
	b.n 0x7af04	@ 0007adbc a2e0
.org 0x7adbe
	b.n 0x7af18	@ 0007adbe abe0
.org 0x7adc0
	ldrb r0, [r7, #18]	@ 0007adc0 b87c
.org 0x7adc2
	cmp r0, #35	@ 0007adc2 2328
.org 0x7adc4
	bls.n 0x7ae78	@ 0007adc4 58d9
.org 0x7adc6
	ldr r0, [pc, #96]	@ 0007adc6 1848
.org 0x7adc8
	ldrh r1, [r0, #8]	@ 0007adc8 0189
.org 0x7adca
	movs r0, #8	@ 0007adca 0820
.org 0x7adcc
	ands r0, r1	@ 0007adcc 0840
.org 0x7adce
	cmp r0, #0	@ 0007adce 0028
.org 0x7add0
	bne.n 0x7adf2	@ 0007add0 0fd1
.org 0x7add2
	ldr r0, [pc, #88]	@ 0007add2 1648
.org 0x7add4
	ldr r2, [r0, #0]	@ 0007add4 0268
.org 0x7add6
	ldr r0, [r7, #84]	@ 0007add6 786d
.org 0x7add8
	ldr r1, [pc, #84]	@ 0007add8 1549
.org 0x7adda
	adds r0, r0, r1	@ 0007adda 4018
.org 0x7addc
	ldr r1, [r2, #84]	@ 0007addc 516d
.org 0x7adde
	cmp r1, r0	@ 0007adde 8142
.org 0x7ade0
	bge.n 0x7adf2	@ 0007ade0 07da
.org 0x7ade2
	movs r0, #222	@ 0007ade2 de20
.org 0x7ade4
	lsls r0, r0, #1	@ 0007ade4 4000
.org 0x7ade6
	adds r1, r2, r0	@ 0007ade6 1118
.org 0x7ade8
	ldr r0, [r1, #0]	@ 0007ade8 0868
.org 0x7adea
	movs r2, #192	@ 0007adea c022
.org 0x7adec
	lsls r2, r2, #1	@ 0007adec 5200
.org 0x7adee
	adds r0, r0, r2	@ 0007adee 8018
.org 0x7adf0
	str r0, [r1, #0]	@ 0007adf0 0860
.org 0x7adf2
	ldrb r1, [r7, #18]	@ 0007adf2 b97c
.org 0x7adf4
	movs r0, #3	@ 0007adf4 0320
.org 0x7adf6
	ands r0, r1	@ 0007adf6 0840
.org 0x7adf8
	cmp r0, #0	@ 0007adf8 0028
.org 0x7adfa
	bne.n 0x7ae80	@ 0007adfa 41d1
.org 0x7adfc
	lsrs r0, r1, #2	@ 0007adfc 8808
.org 0x7adfe
	movs r1, #1	@ 0007adfe 0121
.org 0x7ae00
	ands r0, r1	@ 0007ae00 0840
.org 0x7ae02
	cmp r0, #0	@ 0007ae02 0028
.org 0x7ae04
	beq.n 0x7ae40	@ 0007ae04 1cd0
.org 0x7ae06
	ldr r2, [pc, #44]	@ 0007ae06 0b4a
.org 0x7ae08
	ldr r1, [r2, #0]	@ 0007ae08 1168
.org 0x7ae0a
	ldr r0, [pc, #44]	@ 0007ae0a 0b48
.org 0x7ae0c
	muls r0, r1	@ 0007ae0c 4843
.org 0x7ae0e
	ldr r1, [pc, #44]	@ 0007ae0e 0b49
.org 0x7ae10
	adds r0, r0, r1	@ 0007ae10 4018
.org 0x7ae12
	lsls r0, r0, #1	@ 0007ae12 4000
.org 0x7ae14
	lsrs r1, r0, #1	@ 0007ae14 4108
.org 0x7ae16
	str r1, [r2, #0]	@ 0007ae16 1160
.org 0x7ae18
	lsrs r0, r0, #17	@ 0007ae18 400c
.org 0x7ae1a
	movs r1, #48	@ 0007ae1a 3021
.org 0x7ae1c
	bl 0x129198	@ 0007ae1c aef0bcf9
.org 0x7ae20
	adds r2, r0, #0	@ 0007ae20 021c
.org 0x7ae22
	adds r2, #128	@ 0007ae22 8032
.org 0x7ae24
	b.n 0x7ae5e	@ 0007ae24 1be0
.org 0x7ae26
	.byte 0x00	@ 0007ae26 data
.org 0x7ae27
	.byte 0x00	@ 0007ae27 data
.org 0x7ae28
	.byte 0x10,0xe9,0x02,0x02	@ 0007ae28 data
.org 0x7ae2c
	.byte 0xf0,0xdb,0x02,0x02	@ 0007ae2c data
.org 0x7ae30
	.byte 0x00,0xe0,0xff,0xff	@ 0007ae30 data
.org 0x7ae34
	.byte 0x38,0xdc,0x02,0x02	@ 0007ae34 data
.org 0x7ae38
	.byte 0xfd,0x43,0x03,0x00	@ 0007ae38 data
.org 0x7ae3c
	.byte 0xc3,0x9e,0x26,0x00	@ 0007ae3c data
.org 0x7ae40
	ldr r2, [pc, #40]	@ 0007ae40 0a4a
.org 0x7ae42
	ldr r1, [r2, #0]	@ 0007ae42 1168
.org 0x7ae44
	ldr r0, [pc, #40]	@ 0007ae44 0a48
.org 0x7ae46
	muls r0, r1	@ 0007ae46 4843
.org 0x7ae48
	ldr r1, [pc, #40]	@ 0007ae48 0a49
.org 0x7ae4a
	adds r0, r0, r1	@ 0007ae4a 4018
.org 0x7ae4c
	lsls r0, r0, #1	@ 0007ae4c 4000
.org 0x7ae4e
	lsrs r1, r0, #1	@ 0007ae4e 4108
.org 0x7ae50
	str r1, [r2, #0]	@ 0007ae50 1160
.org 0x7ae52
	lsrs r0, r0, #17	@ 0007ae52 400c
.org 0x7ae54
	movs r1, #48	@ 0007ae54 3021
.org 0x7ae56
	bl 0x129198	@ 0007ae56 aef09ff9
.org 0x7ae5a
	movs r2, #128	@ 0007ae5a 8022
.org 0x7ae5c
	subs r2, r2, r0	@ 0007ae5c 121a
.org 0x7ae5e
	lsls r2, r2, #24	@ 0007ae5e 1206
.org 0x7ae60
	lsrs r2, r2, #24	@ 0007ae60 120e
.org 0x7ae62
	adds r0, r7, #0	@ 0007ae62 381c
.org 0x7ae64
	movs r1, #2	@ 0007ae64 0221
.org 0x7ae66
	bl 0xe4210	@ 0007ae66 69f0d3f9
.org 0x7ae6a
	b.n 0x7ae80	@ 0007ae6a 09e0
.org 0x7ae6c
	.byte 0x38,0xdc,0x02,0x02	@ 0007ae6c data
.org 0x7ae70
	.byte 0xfd,0x43,0x03,0x00	@ 0007ae70 data
.org 0x7ae74
	.byte 0xc3,0x9e,0x26,0x00	@ 0007ae74 data
.org 0x7ae78
	adds r1, r7, #0	@ 0007ae78 391c
.org 0x7ae7a
	adds r1, #214	@ 0007ae7a d631
.org 0x7ae7c
	movs r0, #1	@ 0007ae7c 0120
.org 0x7ae7e
	strb r0, [r1, #0]	@ 0007ae7e 0870
.org 0x7ae80
	ldrb r0, [r7, #18]	@ 0007ae80 b87c
.org 0x7ae82
	subs r0, #1	@ 0007ae82 0138
.org 0x7ae84
	strb r0, [r7, #18]	@ 0007ae84 b874
.org 0x7ae86
	lsls r0, r0, #24	@ 0007ae86 0006
.org 0x7ae88
	lsrs r0, r0, #24	@ 0007ae88 000e
.org 0x7ae8a
	cmp r0, #255	@ 0007ae8a ff28
.org 0x7ae8c
	bne.n 0x7af18	@ 0007ae8c 44d1
.org 0x7ae8e
	ldr r1, [pc, #48]	@ 0007ae8e 0c49
.org 0x7ae90
	adds r0, r7, #0	@ 0007ae90 381c
.org 0x7ae92
	bl 0x1cf00	@ 0007ae92 a2f735f8
.org 0x7ae96
	adds r0, r7, #0	@ 0007ae96 381c
.org 0x7ae98
	bl 0x1cff0	@ 0007ae98 a2f7aaf8
.org 0x7ae9c
	ldr r0, [pc, #36]	@ 0007ae9c 0948
.org 0x7ae9e
	bl 0x2b10	@ 0007ae9e 87f737fe
.org 0x7aea2
	ldr r0, [r7, #84]	@ 0007aea2 786d
.org 0x7aea4
	ldr r2, [pc, #32]	@ 0007aea4 084a
.org 0x7aea6
	adds r0, r0, r2	@ 0007aea6 8018
.org 0x7aea8
	str r0, [sp, #0]	@ 0007aea8 0090
.org 0x7aeaa
	ldr r0, [r7, #88]	@ 0007aeaa b86d
.org 0x7aeac
	str r0, [sp, #4]	@ 0007aeac 0190
.org 0x7aeae
	adds r0, r7, #0	@ 0007aeae 381c
.org 0x7aeb0
	mov r1, sp	@ 0007aeb0 6946
.org 0x7aeb2
	movs r2, #0	@ 0007aeb2 0022
.org 0x7aeb4
	movs r3, #0	@ 0007aeb4 0023
.org 0x7aeb6
	bl 0xcdd9c	@ 0007aeb6 52f071ff
.org 0x7aeba
	movs r0, #60	@ 0007aeba 3c20
.org 0x7aebc
	strb r0, [r7, #18]	@ 0007aebc b874
.org 0x7aebe
	b.n 0x7aef6	@ 0007aebe 1ae0
.org 0x7aec0
	.byte 0x03,0xb1,0x00,0x00	@ 0007aec0 data
.org 0x7aec4
	.byte 0x57,0x01,0x00,0x00	@ 0007aec4 data
.org 0x7aec8
	.byte 0x00,0xf8,0xff,0xff	@ 0007aec8 data
.org 0x7aecc
	ldrb r0, [r7, #30]	@ 0007aecc b87f
.org 0x7aece
	lsls r0, r0, #8	@ 0007aece 0002
.org 0x7aed0
	adds r1, r7, #0	@ 0007aed0 391c
.org 0x7aed2
	adds r1, #112	@ 0007aed2 7031
