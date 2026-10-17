@ FUN_0805acfc  entry 0x0805acfc  size 210
.thumb
.org 0x5acfc
FUN_0805acfc:
	push {r4, r5, r6, lr}	@ 0005acfc 70b5
.org 0x5acfe
	adds r5, r0, #0	@ 0005acfe 051c
.org 0x5ad00
	ldrb r0, [r5, #10]	@ 0005ad00 a87a
.org 0x5ad02
	lsrs r4, r0, #4	@ 0005ad02 0409
.org 0x5ad04
	movs r6, #1	@ 0005ad04 0126
.org 0x5ad06
	ands r4, r6	@ 0005ad06 3440
.org 0x5ad08
	ldrb r0, [r5, #15]	@ 0005ad08 e87b
.org 0x5ad0a
	cmp r0, #0	@ 0005ad0a 0028
.org 0x5ad0c
	bne.n 0x5ad72	@ 0005ad0c 31d1
.org 0x5ad0e
	adds r0, r5, #0	@ 0005ad0e 281c
.org 0x5ad10
	adds r0, #116	@ 0005ad10 7430
.org 0x5ad12
	ldr r1, [pc, #188]	@ 0005ad12 2f49
.org 0x5ad14
	bl 0x5784	@ 0005ad14 aaf736fd
.org 0x5ad18
	ldrb r0, [r5, #30]	@ 0005ad18 a87f
.org 0x5ad1a
	lsls r0, r0, #8	@ 0005ad1a 0002
.org 0x5ad1c
	adds r1, r5, #0	@ 0005ad1c 291c
.org 0x5ad1e
	adds r1, #112	@ 0005ad1e 7031
.org 0x5ad20
	ldrb r1, [r1, #0]	@ 0005ad20 0978
.org 0x5ad22
	orrs r0, r1	@ 0005ad22 0843
.org 0x5ad24
	ldr r1, [pc, #172]	@ 0005ad24 2b49
.org 0x5ad26
	cmp r0, r1	@ 0005ad26 8842
.org 0x5ad28
	beq.n 0x5ad36	@ 0005ad28 05d0
.org 0x5ad2a
	adds r0, r5, #0	@ 0005ad2a 281c
.org 0x5ad2c
	bl 0x1cf00	@ 0005ad2c c2f7e8f8
.org 0x5ad30
	adds r0, r5, #0	@ 0005ad30 281c
.org 0x5ad32
	adds r0, #189	@ 0005ad32 bd30
.org 0x5ad34
	strb r6, [r0, #0]	@ 0005ad34 0670
.org 0x5ad36
	adds r0, r5, #0	@ 0005ad36 281c
.org 0x5ad38
	bl 0x5c3a8	@ 0005ad38 01f036fb
.org 0x5ad3c
	lsls r1, r4, #1	@ 0005ad3c 6100
.org 0x5ad3e
	subs r1, r6, r1	@ 0005ad3e 711a
.org 0x5ad40
	lsls r1, r1, #14	@ 0005ad40 8903
.org 0x5ad42
	movs r2, #240	@ 0005ad42 f022
.org 0x5ad44
	lsls r2, r2, #7	@ 0005ad44 d201
.org 0x5ad46
	adds r1, r1, r2	@ 0005ad46 8918
.org 0x5ad48
	adds r0, r0, r1	@ 0005ad48 4018
.org 0x5ad4a
	ldr r3, [r5, #84]	@ 0005ad4a 6b6d
.org 0x5ad4c
	subs r0, r0, r3	@ 0005ad4c c01a
.org 0x5ad4e
	str r0, [r5, #92]	@ 0005ad4e e865
.org 0x5ad50
	adds r1, r5, #0	@ 0005ad50 291c
.org 0x5ad52
	adds r1, #180	@ 0005ad52 b431
.org 0x5ad54
	ldr r2, [r5, #88]	@ 0005ad54 aa6d
.org 0x5ad56
	ldr r6, [pc, #128]	@ 0005ad56 204e
.org 0x5ad58
	adds r4, r2, r6	@ 0005ad58 9419
.org 0x5ad5a
	ldr r1, [r1, #0]	@ 0005ad5a 0968
.org 0x5ad5c
	subs r1, r1, r4	@ 0005ad5c 091b
.org 0x5ad5e
	str r1, [r5, #96]	@ 0005ad5e 2966
.org 0x5ad60
	adds r3, r3, r0	@ 0005ad60 1b18
.org 0x5ad62
	str r3, [r5, #100]	@ 0005ad62 6b66
.org 0x5ad64
	adds r2, r2, r1	@ 0005ad64 5218
.org 0x5ad66
	str r2, [r5, #104]	@ 0005ad66 aa66
.org 0x5ad68
	movs r0, #40	@ 0005ad68 2820
.org 0x5ad6a
	strb r0, [r5, #18]	@ 0005ad6a a874
.org 0x5ad6c
	ldrb r0, [r5, #15]	@ 0005ad6c e87b
.org 0x5ad6e
	adds r0, #1	@ 0005ad6e 0130
.org 0x5ad70
	strb r0, [r5, #15]	@ 0005ad70 e873
.org 0x5ad72
	adds r0, r5, #0	@ 0005ad72 281c
.org 0x5ad74
	bl 0x1cff0	@ 0005ad74 c2f73cf9
.org 0x5ad78
	ldrb r0, [r5, #18]	@ 0005ad78 a87c
.org 0x5ad7a
	subs r4, r0, #1	@ 0005ad7a 441e
.org 0x5ad7c
	strb r4, [r5, #18]	@ 0005ad7c ac74
.org 0x5ad7e
	ldrb r0, [r5, #18]	@ 0005ad7e a87c
.org 0x5ad80
	lsls r0, r0, #6	@ 0005ad80 8001
.org 0x5ad82
	movs r1, #40	@ 0005ad82 2821
.org 0x5ad84
	bl 0x128fb8	@ 0005ad84 cef018f9
.org 0x5ad88
	adds r2, r0, #0	@ 0005ad88 021c
.org 0x5ad8a
	ldr r1, [pc, #80]	@ 0005ad8a 1449
.org 0x5ad8c
	lsls r0, r2, #24	@ 0005ad8c 1006
.org 0x5ad8e
	lsrs r0, r0, #23	@ 0005ad8e c00d
.org 0x5ad90
	adds r0, r0, r1	@ 0005ad90 4018
.org 0x5ad92
	movs r1, #0	@ 0005ad92 0021
.org 0x5ad94
	ldrsh r2, [r0, r1]	@ 0005ad94 425e
.org 0x5ad96
	ldr r0, [r5, #92]	@ 0005ad96 e86d
.org 0x5ad98
	muls r0, r2	@ 0005ad98 5043
.org 0x5ad9a
	cmp r0, #0	@ 0005ad9a 0028
.org 0x5ad9c
	bge.n 0x5ada0	@ 0005ad9c 00da
.org 0x5ad9e
	adds r0, #255	@ 0005ad9e ff30
.org 0x5ada0
	asrs r0, r0, #8	@ 0005ada0 0012
.org 0x5ada2
	ldr r1, [r5, #100]	@ 0005ada2 696e
.org 0x5ada4
	subs r1, r1, r0	@ 0005ada4 091a
.org 0x5ada6
	str r1, [r5, #84]	@ 0005ada6 6965
.org 0x5ada8
	ldr r0, [r5, #96]	@ 0005ada8 286e
.org 0x5adaa
	muls r0, r2	@ 0005adaa 5043
.org 0x5adac
	cmp r0, #0	@ 0005adac 0028
.org 0x5adae
	bge.n 0x5adb2	@ 0005adae 00da
.org 0x5adb0
	adds r0, #255	@ 0005adb0 ff30
.org 0x5adb2
	asrs r0, r0, #8	@ 0005adb2 0012
.org 0x5adb4
	ldr r1, [r5, #104]	@ 0005adb4 a96e
.org 0x5adb6
	subs r1, r1, r0	@ 0005adb6 091a
.org 0x5adb8
	str r1, [r5, #88]	@ 0005adb8 a965
.org 0x5adba
	lsls r0, r4, #24	@ 0005adba 2006
.org 0x5adbc
	lsrs r1, r0, #24	@ 0005adbc 010e
.org 0x5adbe
	cmp r1, #0	@ 0005adbe 0029
.org 0x5adc0
	bne.n 0x5adc8	@ 0005adc0 02d1
.org 0x5adc2
	movs r0, #1	@ 0005adc2 0120
.org 0x5adc4
	strb r0, [r5, #14]	@ 0005adc4 a873
.org 0x5adc6
	strb r1, [r5, #15]	@ 0005adc6 e973
.org 0x5adc8
	pop {r4, r5, r6}	@ 0005adc8 70bc
.org 0x5adca
	pop {r0}	@ 0005adca 01bc
.org 0x5adcc
	bx r0	@ 0005adcc 0047
