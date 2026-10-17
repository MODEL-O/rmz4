@ FUN_080cabbc  entry 0x080cabbc  size 474
.thumb
.org 0xcabbc
FUN_080cabbc:
	push {r4, r5, lr}	@ 000cabbc 30b5
.org 0xcabbe
	sub sp, #64	@ 000cabbe 90b0
.org 0xcabc0
	adds r5, r0, #0	@ 000cabc0 051c
.org 0xcabc2
	ldr r1, [pc, #168]	@ 000cabc2 2a49
.org 0xcabc4
	mov r0, sp	@ 000cabc4 6846
.org 0xcabc6
	movs r2, #64	@ 000cabc6 4022
.org 0xcabc8
	bl 0x129258	@ 000cabc8 5ef046fb
.org 0xcabcc
	adds r0, r5, #0	@ 000cabcc 281c
.org 0xcabce
	bl 0x1cc9c	@ 000cabce 52f765f8
.org 0xcabd2
	ldrb r1, [r5, #10]	@ 000cabd2 a97a
.org 0xcabd4
	movs r0, #1	@ 000cabd4 0120
.org 0xcabd6
	movs r2, #0	@ 000cabd6 0022
.org 0xcabd8
	orrs r0, r1	@ 000cabd8 0843
.org 0xcabda
	movs r1, #2	@ 000cabda 0221
.org 0xcabdc
	orrs r0, r1	@ 000cabdc 0843
.org 0xcabde
	strb r0, [r5, #10]	@ 000cabde a872
.org 0xcabe0
	ldr r1, [pc, #140]	@ 000cabe0 2349
.org 0xcabe2
	ldrb r0, [r5, #9]	@ 000cabe2 687a
.org 0xcabe4
	lsls r0, r0, #2	@ 000cabe4 8000
.org 0xcabe6
	adds r0, r0, r1	@ 000cabe6 4018
.org 0xcabe8
	movs r1, #1	@ 000cabe8 0121
.org 0xcabea
	str r1, [r5, #12]	@ 000cabea e960
.org 0xcabec
	ldr r0, [r0, #0]	@ 000cabec 0068
.org 0xcabee
	ldr r0, [r0, #4]	@ 000cabee 4068
.org 0xcabf0
	str r0, [r5, #20]	@ 000cabf0 6861
.org 0xcabf2
	str r2, [r5, #92]	@ 000cabf2 ea65
.org 0xcabf4
	str r2, [r5, #96]	@ 000cabf4 2a66
.org 0xcabf6
	str r2, [r5, #100]	@ 000cabf6 6a66
.org 0xcabf8
	str r2, [r5, #104]	@ 000cabf8 aa66
.org 0xcabfa
	ldrb r0, [r5, #16]	@ 000cabfa 287c
.org 0xcabfc
	ands r1, r0	@ 000cabfc 0140
.org 0xcabfe
	cmp r1, #0	@ 000cabfe 0029
.org 0xcac00
	beq.n 0xcac7c	@ 000cac00 3cd0
.org 0xcac02
	ldr r1, [pc, #112]	@ 000cac02 1c49
.org 0xcac04
	adds r0, r5, #0	@ 000cac04 281c
.org 0xcac06
	bl 0x1cf00	@ 000cac06 52f77bf9
.org 0xcac0a
	ldr r2, [pc, #108]	@ 000cac0a 1b4a
.org 0xcac0c
	adds r0, r2, #0	@ 000cac0c 101c
.org 0xcac0e
	adds r0, #192	@ 000cac0e c030
.org 0xcac10
	movs r3, #0	@ 000cac10 0023
.org 0xcac12
	ldrsh r1, [r0, r3]	@ 000cac12 c15e
.org 0xcac14
	lsls r0, r1, #9	@ 000cac14 4802
.org 0xcac16
	negs r0, r0	@ 000cac16 4042
.org 0xcac18
	cmp r0, #0	@ 000cac18 0028
.org 0xcac1a
	bge.n 0xcac1e	@ 000cac1a 00da
.org 0xcac1c
	adds r0, #255	@ 000cac1c ff30
.org 0xcac1e
	asrs r0, r0, #8	@ 000cac1e 0012
.org 0xcac20
	str r0, [r5, #92]	@ 000cac20 e865
.org 0xcac22
	adds r0, r2, #0	@ 000cac22 101c
.org 0xcac24
	adds r0, #64	@ 000cac24 4030
.org 0xcac26
	movs r3, #0	@ 000cac26 0023
.org 0xcac28
	ldrsh r2, [r0, r3]	@ 000cac28 c25e
.org 0xcac2a
	lsls r0, r2, #9	@ 000cac2a 5002
.org 0xcac2c
	negs r0, r0	@ 000cac2c 4042
.org 0xcac2e
	cmp r0, #0	@ 000cac2e 0028
.org 0xcac30
	bge.n 0xcac34	@ 000cac30 00da
.org 0xcac32
	adds r0, #255	@ 000cac32 ff30
.org 0xcac34
	asrs r0, r0, #8	@ 000cac34 0012
.org 0xcac36
	str r0, [r5, #96]	@ 000cac36 2866
.org 0xcac38
	adds r0, r1, #0	@ 000cac38 081c
.org 0xcac3a
	cmp r0, #0	@ 000cac3a 0028
.org 0xcac3c
	bge.n 0xcac40	@ 000cac3c 00da
.org 0xcac3e
	adds r0, #15	@ 000cac3e 0f30
.org 0xcac40
	asrs r0, r0, #4	@ 000cac40 0011
.org 0xcac42
	lsls r0, r0, #8	@ 000cac42 0002
.org 0xcac44
	negs r0, r0	@ 000cac44 4042
.org 0xcac46
	cmp r0, #0	@ 000cac46 0028
.org 0xcac48
	bge.n 0xcac4c	@ 000cac48 00da
.org 0xcac4a
	adds r0, #255	@ 000cac4a ff30
.org 0xcac4c
	asrs r0, r0, #8	@ 000cac4c 0012
.org 0xcac4e
	str r0, [r5, #100]	@ 000cac4e 6866
.org 0xcac50
	adds r0, r2, #0	@ 000cac50 101c
.org 0xcac52
	cmp r0, #0	@ 000cac52 0028
.org 0xcac54
	bge.n 0xcac58	@ 000cac54 00da
.org 0xcac56
	adds r0, #15	@ 000cac56 0f30
.org 0xcac58
	asrs r0, r0, #4	@ 000cac58 0011
.org 0xcac5a
	lsls r0, r0, #8	@ 000cac5a 0002
.org 0xcac5c
	negs r0, r0	@ 000cac5c 4042
.org 0xcac5e
	cmp r0, #0	@ 000cac5e 0028
.org 0xcac60
	bge.n 0xcac64	@ 000cac60 00da
.org 0xcac62
	adds r0, #255	@ 000cac62 ff30
.org 0xcac64
	asrs r0, r0, #8	@ 000cac64 0012
.org 0xcac66
	str r0, [r5, #104]	@ 000cac66 a866
.org 0xcac68
	b.n 0xcacb6	@ 000cac68 25e0
.org 0xcac6a
	.byte 0x00	@ 000cac6a data
.org 0xcac6b
	.byte 0x00	@ 000cac6b data
.org 0xcac6c
	.byte 0xc4,0xa1,0x12,0x08	@ 000cac6c data
.org 0xcac70
	.byte 0xf4,0x49,0x86,0x08	@ 000cac70 data
.org 0xcac74
	.byte 0x10,0x8a,0x00,0x00	@ 000cac74 data
.org 0xcac78
	.byte 0x0c,0x93,0x12,0x08	@ 000cac78 data
.org 0xcac7c
	lsls r0, r0, #24	@ 000cac7c 0006
.org 0xcac7e
	lsrs r0, r0, #24	@ 000cac7e 000e
.org 0xcac80
	cmp r0, #0	@ 000cac80 0028
.org 0xcac82
	beq.n 0xcac88	@ 000cac82 01d0
.org 0xcac84
	cmp r0, #4	@ 000cac84 0428
.org 0xcac86
	bne.n 0xcaca4	@ 000cac86 0dd1
.org 0xcac88
	ldr r1, [pc, #16]	@ 000cac88 0449
.org 0xcac8a
	adds r0, r5, #0	@ 000cac8a 281c
.org 0xcac8c
	bl 0x1cf00	@ 000cac8c 52f738f9
.org 0xcac90
	ldr r0, [pc, #12]	@ 000cac90 0348
.org 0xcac92
	str r0, [r5, #96]	@ 000cac92 2866
.org 0xcac94
	movs r0, #16	@ 000cac94 1020
.org 0xcac96
	negs r0, r0	@ 000cac96 4042
.org 0xcac98
	str r0, [r5, #104]	@ 000cac98 a866
.org 0xcac9a
	b.n 0xcacb6	@ 000cac9a 0ce0
.org 0xcac9c
	.byte 0x0f,0x8a,0x00,0x00	@ 000cac9c data
.org 0xcaca0
	.byte 0x00,0xfe,0xff,0xff	@ 000caca0 data
.org 0xcaca4
	ldr r1, [pc, #264]	@ 000caca4 4249
.org 0xcaca6
	adds r0, r5, #0	@ 000caca6 281c
.org 0xcaca8
	bl 0x1cf00	@ 000caca8 52f72af9
.org 0xcacac
	ldr r0, [pc, #260]	@ 000cacac 4148
.org 0xcacae
	str r0, [r5, #92]	@ 000cacae e865
.org 0xcacb0
	movs r0, #16	@ 000cacb0 1020
.org 0xcacb2
	negs r0, r0	@ 000cacb2 4042
.org 0xcacb4
	str r0, [r5, #100]	@ 000cacb4 6866
.org 0xcacb6
	ldrb r1, [r5, #16]	@ 000cacb6 297c
.org 0xcacb8
	subs r0, r1, #3	@ 000cacb8 c81e
.org 0xcacba
	lsls r0, r0, #24	@ 000cacba 0006
.org 0xcacbc
	lsrs r0, r0, #24	@ 000cacbc 000e
.org 0xcacbe
	cmp r0, #2	@ 000cacbe 0228
.org 0xcacc0
	bhi.n 0xcad06	@ 000cacc0 21d8
.org 0xcacc2
	movs r2, #1	@ 000cacc2 0122
.org 0xcacc4
	ldrb r1, [r5, #10]	@ 000cacc4 a97a
.org 0xcacc6
	movs r0, #32	@ 000cacc6 2020
.org 0xcacc8
	orrs r0, r1	@ 000cacc8 0843
.org 0xcacca
	strb r0, [r5, #10]	@ 000cacca a872
.org 0xcaccc
	adds r0, r5, #0	@ 000caccc 281c
.org 0xcacce
	adds r0, #77	@ 000cacce 4d30
.org 0xcacd0
	strb r2, [r0, #0]	@ 000cacd0 0270
.org 0xcacd2
	adds r3, r5, #0	@ 000cacd2 2b1c
.org 0xcacd4
	adds r3, #74	@ 000cacd4 4a33
.org 0xcacd6
	movs r2, #32	@ 000cacd6 2022
.org 0xcacd8
	ldrb r1, [r3, #0]	@ 000cacd8 1978
.org 0xcacda
	movs r0, #33	@ 000cacda 2120
.org 0xcacdc
	negs r0, r0	@ 000cacdc 4042
.org 0xcacde
	ands r0, r1	@ 000cacde 0840
.org 0xcace0
	orrs r0, r2	@ 000cace0 1043
.org 0xcace2
	strb r0, [r3, #0]	@ 000cace2 1870
.org 0xcace4
	ldr r0, [r5, #96]	@ 000cace4 286e
.org 0xcace6
	lsls r0, r0, #8	@ 000cace6 0002
.org 0xcace8
	negs r0, r0	@ 000cace8 4042
.org 0xcacea
	cmp r0, #0	@ 000cacea 0028
.org 0xcacec
	bge.n 0xcacf0	@ 000cacec 00da
.org 0xcacee
	adds r0, #255	@ 000cacee ff30
.org 0xcacf0
	asrs r0, r0, #8	@ 000cacf0 0012
.org 0xcacf2
	str r0, [r5, #96]	@ 000cacf2 2866
.org 0xcacf4
	ldr r0, [r5, #104]	@ 000cacf4 a86e
.org 0xcacf6
	lsls r0, r0, #8	@ 000cacf6 0002
.org 0xcacf8
	negs r0, r0	@ 000cacf8 4042
.org 0xcacfa
	cmp r0, #0	@ 000cacfa 0028
.org 0xcacfc
	bge.n 0xcad00	@ 000cacfc 00da
.org 0xcacfe
	adds r0, #255	@ 000cacfe ff30
.org 0xcad00
	asrs r0, r0, #8	@ 000cad00 0012
.org 0xcad02
	str r0, [r5, #104]	@ 000cad02 a866
.org 0xcad04
	ldrb r1, [r5, #16]	@ 000cad04 297c
.org 0xcad06
	subs r0, r1, #5	@ 000cad06 481f
.org 0xcad08
	lsls r0, r0, #24	@ 000cad08 0006
.org 0xcad0a
	lsrs r0, r0, #24	@ 000cad0a 000e
.org 0xcad0c
	cmp r0, #2	@ 000cad0c 0228
.org 0xcad0e
	bhi.n 0xcad52	@ 000cad0e 20d8
.org 0xcad10
	movs r2, #1	@ 000cad10 0122
.org 0xcad12
	ldrb r1, [r5, #10]	@ 000cad12 a97a
.org 0xcad14
	movs r0, #16	@ 000cad14 1020
.org 0xcad16
	orrs r0, r1	@ 000cad16 0843
.org 0xcad18
	strb r0, [r5, #10]	@ 000cad18 a872
.org 0xcad1a
	adds r0, r5, #0	@ 000cad1a 281c
.org 0xcad1c
	adds r0, #76	@ 000cad1c 4c30
.org 0xcad1e
	strb r2, [r0, #0]	@ 000cad1e 0270
.org 0xcad20
	adds r3, r5, #0	@ 000cad20 2b1c
.org 0xcad22
	adds r3, #74	@ 000cad22 4a33
.org 0xcad24
	movs r2, #16	@ 000cad24 1022
.org 0xcad26
	ldrb r1, [r3, #0]	@ 000cad26 1978
.org 0xcad28
	movs r0, #17	@ 000cad28 1120
.org 0xcad2a
	negs r0, r0	@ 000cad2a 4042
.org 0xcad2c
	ands r0, r1	@ 000cad2c 0840
.org 0xcad2e
	orrs r0, r2	@ 000cad2e 1043
.org 0xcad30
	strb r0, [r3, #0]	@ 000cad30 1870
.org 0xcad32
	ldr r0, [r5, #92]	@ 000cad32 e86d
.org 0xcad34
	lsls r0, r0, #8	@ 000cad34 0002
.org 0xcad36
	negs r0, r0	@ 000cad36 4042
.org 0xcad38
	cmp r0, #0	@ 000cad38 0028
.org 0xcad3a
	bge.n 0xcad3e	@ 000cad3a 00da
.org 0xcad3c
	adds r0, #255	@ 000cad3c ff30
.org 0xcad3e
	asrs r0, r0, #8	@ 000cad3e 0012
.org 0xcad40
	str r0, [r5, #92]	@ 000cad40 e865
.org 0xcad42
	ldr r0, [r5, #100]	@ 000cad42 686e
.org 0xcad44
	lsls r0, r0, #8	@ 000cad44 0002
.org 0xcad46
	negs r0, r0	@ 000cad46 4042
.org 0xcad48
	cmp r0, #0	@ 000cad48 0028
.org 0xcad4a
	bge.n 0xcad4e	@ 000cad4a 00da
.org 0xcad4c
	adds r0, #255	@ 000cad4c ff30
.org 0xcad4e
	asrs r0, r0, #8	@ 000cad4e 0012
.org 0xcad50
	str r0, [r5, #100]	@ 000cad50 6866
.org 0xcad52
	ldrb r0, [r5, #16]	@ 000cad52 287c
.org 0xcad54
	lsls r0, r0, #3	@ 000cad54 c000
.org 0xcad56
	add r0, sp	@ 000cad56 6844
.org 0xcad58
	ldr r1, [r0, #0]	@ 000cad58 0168
.org 0xcad5a
	lsls r1, r1, #8	@ 000cad5a 0902
.org 0xcad5c
	ldr r0, [r5, #84]	@ 000cad5c 686d
.org 0xcad5e
	adds r0, r0, r1	@ 000cad5e 4018
.org 0xcad60
	str r0, [r5, #84]	@ 000cad60 6865
.org 0xcad62
	ldrb r1, [r5, #16]	@ 000cad62 297c
.org 0xcad64
	lsls r1, r1, #3	@ 000cad64 c900
.org 0xcad66
	add r0, sp, #4	@ 000cad66 01a8
.org 0xcad68
	adds r0, r0, r1	@ 000cad68 4018
.org 0xcad6a
	ldr r1, [r0, #0]	@ 000cad6a 0168
.org 0xcad6c
	lsls r1, r1, #8	@ 000cad6c 0902
.org 0xcad6e
	ldr r0, [r5, #88]	@ 000cad6e a86d
.org 0xcad70
	adds r0, r0, r1	@ 000cad70 4018
.org 0xcad72
	str r0, [r5, #88]	@ 000cad72 a865
.org 0xcad74
	adds r1, r5, #0	@ 000cad74 291c
.org 0xcad76
	adds r1, #180	@ 000cad76 b431
.org 0xcad78
	movs r0, #128	@ 000cad78 8020
.org 0xcad7a
	lsls r0, r0, #2	@ 000cad7a 8000
.org 0xcad7c
	str r0, [r1, #0]	@ 000cad7c 0860
.org 0xcad7e
	movs r0, #196	@ 000cad7e c420
.org 0xcad80
	strb r0, [r5, #18]	@ 000cad80 a874
.org 0xcad82
	ldrb r1, [r5, #10]	@ 000cad82 a97a
.org 0xcad84
	movs r0, #4	@ 000cad84 0420
.org 0xcad86
	orrs r0, r1	@ 000cad86 0843
.org 0xcad88
	strb r0, [r5, #10]	@ 000cad88 a872
.org 0xcad8a
	adds r4, r5, #0	@ 000cad8a 2c1c
.org 0xcad8c
	adds r4, #116	@ 000cad8c 7434
.org 0xcad8e
	ldr r1, [pc, #40]	@ 000cad8e 0a49
.org 0xcad90
	adds r2, r5, #0	@ 000cad90 2a1c
.org 0xcad92
	adds r2, #84	@ 000cad92 5432
.org 0xcad94
	adds r0, r4, #0	@ 000cad94 201c
