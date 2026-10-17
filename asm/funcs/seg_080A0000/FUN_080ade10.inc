@ FUN_080ade10  entry 0x080ade10  size 396
.thumb
.org 0xade10
FUN_080ade10:
	push {r4, r5, r6, r7, lr}	@ 000ade10 f0b5
.org 0xade12
	adds r5, r0, #0	@ 000ade12 051c
.org 0xade14
	ldrb r0, [r5, #13]	@ 000ade14 687b
.org 0xade16
	cmp r0, #0	@ 000ade16 0028
.org 0xade18
	beq.n 0xade68	@ 000ade18 26d0
.org 0xade1a
	adds r2, r5, #0	@ 000ade1a 2a1c
.org 0xade1c
	adds r2, #140	@ 000ade1c 8c32
.org 0xade1e
	ldr r0, [r2, #0]	@ 000ade1e 1068
.org 0xade20
	movs r1, #128	@ 000ade20 8021
.org 0xade22
	lsls r1, r1, #2	@ 000ade22 8900
.org 0xade24
	ands r0, r1	@ 000ade24 0840
.org 0xade26
	cmp r0, #0	@ 000ade26 0028
.org 0xade28
	bne.n 0xade46	@ 000ade28 0dd1
.org 0xade2a
	adds r0, r5, #0	@ 000ade2a 281c
.org 0xade2c
	adds r0, #188	@ 000ade2c bc30
.org 0xade2e
	ldrh r1, [r0, #0]	@ 000ade2e 0188
.org 0xade30
	subs r1, #1	@ 000ade30 0139
.org 0xade32
	strh r1, [r0, #0]	@ 000ade32 0180
.org 0xade34
	lsls r1, r1, #16	@ 000ade34 0904
.org 0xade36
	ldr r0, [pc, #40]	@ 000ade36 0a48
.org 0xade38
	cmp r1, r0	@ 000ade38 8142
.org 0xade3a
	beq.n 0xade46	@ 000ade3a 04d0
.org 0xade3c
	ldr r0, [r2, #0]	@ 000ade3c 1068
.org 0xade3e
	movs r1, #4	@ 000ade3e 0421
.org 0xade40
	ands r0, r1	@ 000ade40 0840
.org 0xade42
	cmp r0, #0	@ 000ade42 0028
.org 0xade44
	beq.n 0xade68	@ 000ade44 10d0
.org 0xade46
	ldr r1, [pc, #28]	@ 000ade46 0749
.org 0xade48
	ldrb r0, [r5, #9]	@ 000ade48 687a
.org 0xade4a
	lsls r0, r0, #2	@ 000ade4a 8000
.org 0xade4c
	adds r0, r0, r1	@ 000ade4c 4018
.org 0xade4e
	movs r1, #2	@ 000ade4e 0221
.org 0xade50
	str r1, [r5, #12]	@ 000ade50 e960
.org 0xade52
	ldr r0, [r0, #0]	@ 000ade52 0068
.org 0xade54
	ldr r0, [r0, #8]	@ 000ade54 8068
.org 0xade56
	str r0, [r5, #20]	@ 000ade56 6861
.org 0xade58
	adds r0, r5, #0	@ 000ade58 281c
.org 0xade5a
	bl 0xadfbc	@ 000ade5a 00f0aff8
.org 0xade5e
	b.n 0xadfa6	@ 000ade5e a2e0
.org 0xade60
	.byte 0x00,0x00,0xff,0xff	@ 000ade60 data
.org 0xade64
	.byte 0x40,0xdb,0x85,0x08	@ 000ade64 data
.org 0xade68
	ldrb r6, [r5, #13]	@ 000ade68 6e7b
.org 0xade6a
	cmp r6, #1	@ 000ade6a 012e
.org 0xade6c
	beq.n 0xadee0	@ 000ade6c 38d0
.org 0xade6e
	cmp r6, #1	@ 000ade6e 012e
.org 0xade70
	bgt.n 0xade78	@ 000ade70 02dc
.org 0xade72
	cmp r6, #0	@ 000ade72 002e
.org 0xade74
	beq.n 0xade82	@ 000ade74 05d0
.org 0xade76
	b.n 0xade7c	@ 000ade76 01e0
.org 0xade78
	cmp r6, #2	@ 000ade78 022e
.org 0xade7a
	beq.n 0xadf02	@ 000ade7a 42d0
.org 0xade7c
	adds r7, r5, #0	@ 000ade7c 2f1c
.org 0xade7e
	adds r7, #84	@ 000ade7e 5437
.org 0xade80
	b.n 0xadf5a	@ 000ade80 6be0
.org 0xade82
	adds r2, r5, #0	@ 000ade82 2a1c
.org 0xade84
	adds r2, #190	@ 000ade84 be32
.org 0xade86
	ldrh r1, [r2, #0]	@ 000ade86 1188
.org 0xade88
	adds r0, r5, #0	@ 000ade88 281c
.org 0xade8a
	adds r0, #80	@ 000ade8a 5030
.org 0xade8c
	strh r1, [r0, #0]	@ 000ade8c 0180
.org 0xade8e
	ldrh r0, [r2, #0]	@ 000ade8e 1088
.org 0xade90
	adds r1, r5, #0	@ 000ade90 291c
.org 0xade92
	adds r1, #82	@ 000ade92 5231
.org 0xade94
	strh r0, [r1, #0]	@ 000ade94 0880
.org 0xade96
	ldrh r0, [r2, #0]	@ 000ade96 1088
.org 0xade98
	adds r0, #4	@ 000ade98 0430
.org 0xade9a
	strh r0, [r2, #0]	@ 000ade9a 1080
.org 0xade9c
	lsls r0, r0, #16	@ 000ade9c 0004
.org 0xade9e
	lsrs r0, r0, #16	@ 000ade9e 000c
.org 0xadea0
	adds r7, r5, #0	@ 000adea0 2f1c
.org 0xadea2
	adds r7, #84	@ 000adea2 5437
.org 0xadea4
	cmp r0, #255	@ 000adea4 ff28
.org 0xadea6
	bls.n 0xadf5a	@ 000adea6 58d9
.org 0xadea8
	adds r0, r5, #0	@ 000adea8 281c
.org 0xadeaa
	bl 0x1cc9c	@ 000adeaa 6ef7f7fe
.org 0xadeae
	ldr r1, [pc, #40]	@ 000adeae 0a49
.org 0xadeb0
	adds r0, r5, #0	@ 000adeb0 281c
.org 0xadeb2
	bl 0x1cf00	@ 000adeb2 6ff725f8
.org 0xadeb6
	ldrb r1, [r5, #10]	@ 000adeb6 a97a
.org 0xadeb8
	movs r0, #4	@ 000adeb8 0420
.org 0xadeba
	orrs r0, r1	@ 000adeba 0843
.org 0xadebc
	strb r0, [r5, #10]	@ 000adebc a872
.org 0xadebe
	adds r4, r5, #0	@ 000adebe 2c1c
.org 0xadec0
	adds r4, #116	@ 000adec0 7434
.org 0xadec2
	ldr r1, [pc, #24]	@ 000adec2 0649
.org 0xadec4
	adds r0, r4, #0	@ 000adec4 201c
.org 0xadec6
	adds r2, r7, #0	@ 000adec6 3a1c
.org 0xadec8
	movs r3, #8	@ 000adec8 0823
.org 0xadeca
	bl 0x5760	@ 000adeca 57f749fc
.org 0xadece
	str r5, [r4, #44]	@ 000adece e562
.org 0xaded0
	str r6, [r4, #36]	@ 000aded0 6662
.org 0xaded2
	movs r0, #8	@ 000aded2 0820
.org 0xaded4
	strb r0, [r5, #18]	@ 000aded4 a874
.org 0xaded6
	b.n 0xadefa	@ 000aded6 10e0
.org 0xaded8
	.byte 0x04,0x2f,0x00,0x00	@ 000aded8 data
.org 0xadedc
	.byte 0x90,0x2e,0x86,0x08	@ 000adedc data
.org 0xadee0
	ldrb r0, [r5, #18]	@ 000adee0 a87c
.org 0xadee2
	subs r0, #1	@ 000adee2 0138
.org 0xadee4
	strb r0, [r5, #18]	@ 000adee4 a874
.org 0xadee6
	lsls r0, r0, #24	@ 000adee6 0006
.org 0xadee8
	lsrs r0, r0, #24	@ 000adee8 000e
.org 0xadeea
	adds r7, r5, #0	@ 000adeea 2f1c
.org 0xadeec
	adds r7, #84	@ 000adeec 5437
.org 0xadeee
	cmp r0, #255	@ 000adeee ff28
.org 0xadef0
	bne.n 0xadf5a	@ 000adef0 33d1
.org 0xadef2
	movs r0, #157	@ 000adef2 9d20
.org 0xadef4
	lsls r0, r0, #1	@ 000adef4 4000
.org 0xadef6
	bl 0x2b10	@ 000adef6 54f70bfe
.org 0xadefa
	ldrb r0, [r5, #13]	@ 000adefa 687b
.org 0xadefc
	adds r0, #1	@ 000adefc 0130
.org 0xadefe
	strb r0, [r5, #13]	@ 000adefe 6873
.org 0xadf00
	b.n 0xadf5a	@ 000adf00 2be0
.org 0xadf02
	ldr r0, [r5, #84]	@ 000adf02 686d
.org 0xadf04
	ldr r1, [r5, #92]	@ 000adf04 e96d
.org 0xadf06
	adds r0, r0, r1	@ 000adf06 4018
.org 0xadf08
	str r0, [r5, #84]	@ 000adf08 6865
.org 0xadf0a
	ldr r0, [r5, #100]	@ 000adf0a 686e
.org 0xadf0c
	adds r1, r1, r0	@ 000adf0c 0918
.org 0xadf0e
	str r1, [r5, #92]	@ 000adf0e e965
.org 0xadf10
	ldr r0, [pc, #152]	@ 000adf10 2648
.org 0xadf12
	cmp r1, r0	@ 000adf12 8142
.org 0xadf14
	bge.n 0xadf18	@ 000adf14 00da
.org 0xadf16
	str r0, [r5, #92]	@ 000adf16 e865
.org 0xadf18
	ldr r0, [r5, #88]	@ 000adf18 a86d
.org 0xadf1a
	ldr r1, [r5, #96]	@ 000adf1a 296e
.org 0xadf1c
	adds r0, r0, r1	@ 000adf1c 4018
.org 0xadf1e
	str r0, [r5, #88]	@ 000adf1e a865
.org 0xadf20
	ldr r0, [r5, #104]	@ 000adf20 a86e
.org 0xadf22
	adds r2, r1, r0	@ 000adf22 0a18
.org 0xadf24
	str r2, [r5, #96]	@ 000adf24 2a66
.org 0xadf26
	ldrb r0, [r5, #30]	@ 000adf26 a87f
.org 0xadf28
	lsls r0, r0, #8	@ 000adf28 0002
.org 0xadf2a
	adds r1, r5, #0	@ 000adf2a 291c
.org 0xadf2c
	adds r1, #112	@ 000adf2c 7031
.org 0xadf2e
	ldrb r1, [r1, #0]	@ 000adf2e 0978
.org 0xadf30
	orrs r0, r1	@ 000adf30 0843
.org 0xadf32
	ldr r1, [pc, #124]	@ 000adf32 1f49
.org 0xadf34
	cmp r0, r1	@ 000adf34 8842
.org 0xadf36
	bne.n 0xadf4a	@ 000adf36 08d1
.org 0xadf38
	cmp r2, #0	@ 000adf38 002a
.org 0xadf3a
	bge.n 0xadf4a	@ 000adf3a 06da
.org 0xadf3c
	adds r1, #1	@ 000adf3c 0131
.org 0xadf3e
	adds r0, r5, #0	@ 000adf3e 281c
.org 0xadf40
	bl 0x1cf00	@ 000adf40 6ef7deff
.org 0xadf44
	movs r0, #4	@ 000adf44 0420
.org 0xadf46
	negs r0, r0	@ 000adf46 4042
.org 0xadf48
	str r0, [r5, #104]	@ 000adf48 a866
.org 0xadf4a
	ldr r0, [r5, #96]	@ 000adf4a 286e
.org 0xadf4c
	movs r1, #128	@ 000adf4c 8021
.org 0xadf4e
	negs r1, r1	@ 000adf4e 4942
.org 0xadf50
	adds r7, r5, #0	@ 000adf50 2f1c
.org 0xadf52
	adds r7, #84	@ 000adf52 5437
.org 0xadf54
	cmp r0, r1	@ 000adf54 8842
.org 0xadf56
	bge.n 0xadf5a	@ 000adf56 00da
.org 0xadf58
	str r1, [r5, #96]	@ 000adf58 2966
.org 0xadf5a
	adds r0, r5, #0	@ 000adf5a 281c
.org 0xadf5c
	bl 0x1cff0	@ 000adf5c 6ff748f8
.org 0xadf60
	ldr r0, [pc, #80]	@ 000adf60 1448
.org 0xadf62
	adds r1, r7, #0	@ 000adf62 391c
.org 0xadf64
	bl 0x1fb14	@ 000adf64 71f7d6fd
.org 0xadf68
	movs r1, #160	@ 000adf68 a021
.org 0xadf6a
	lsls r1, r1, #7	@ 000adf6a c901
.org 0xadf6c
	cmp r0, r1	@ 000adf6c 8842
.org 0xadf6e
	bls.n 0xadfa6	@ 000adf6e 1ad9
.org 0xadf70
	ldrb r1, [r5, #10]	@ 000adf70 a97a
.org 0xadf72
	movs r0, #254	@ 000adf72 fe20
.org 0xadf74
	ands r0, r1	@ 000adf74 0840
.org 0xadf76
	movs r2, #0	@ 000adf76 0022
.org 0xadf78
	movs r1, #253	@ 000adf78 fd21
.org 0xadf7a
	ands r0, r1	@ 000adf7a 0840
.org 0xadf7c
	strb r0, [r5, #10]	@ 000adf7c a872
.org 0xadf7e
	adds r0, r5, #0	@ 000adf7e 281c
.org 0xadf80
	adds r0, #140	@ 000adf80 8c30
.org 0xadf82
	str r2, [r0, #0]	@ 000adf82 0260
.org 0xadf84
	adds r0, #4	@ 000adf84 0430
.org 0xadf86
	str r2, [r0, #0]	@ 000adf86 0260
.org 0xadf88
	adds r0, #4	@ 000adf88 0430
.org 0xadf8a
	strb r2, [r0, #0]	@ 000adf8a 0270
.org 0xadf8c
	ldrb r1, [r5, #10]	@ 000adf8c a97a
.org 0xadf8e
	movs r0, #251	@ 000adf8e fb20
.org 0xadf90
	ands r0, r1	@ 000adf90 0840
.org 0xadf92
	strb r0, [r5, #10]	@ 000adf92 a872
.org 0xadf94
	ldr r1, [pc, #32]	@ 000adf94 0849
.org 0xadf96
	ldrb r0, [r5, #9]	@ 000adf96 687a
.org 0xadf98
	lsls r0, r0, #2	@ 000adf98 8000
.org 0xadf9a
	adds r0, r0, r1	@ 000adf9a 4018
