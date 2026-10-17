@ FUN_080adbcc  entry 0x080adbcc  size 156
.thumb
.org 0xadbcc
FUN_080adbcc:
	push {r4, r5, lr}	@ 000adbcc 30b5
.org 0xadbce
	adds r5, r0, #0	@ 000adbce 051c
.org 0xadbd0
	adds r0, #184	@ 000adbd0 b830
.org 0xadbd2
	ldrb r0, [r0, #0]	@ 000adbd2 0078
.org 0xadbd4
	subs r0, #1	@ 000adbd4 0138
.org 0xadbd6
	ldrb r1, [r5, #16]	@ 000adbd6 297c
.org 0xadbd8
	cmp r0, r1	@ 000adbd8 8842
.org 0xadbda
	beq.n 0xadc14	@ 000adbda 1bd0
.org 0xadbdc
	movs r4, #0	@ 000adbdc 0024
.org 0xadbde
	str r4, [r5, #92]	@ 000adbde ec65
.org 0xadbe0
	str r4, [r5, #96]	@ 000adbe0 2c66
.org 0xadbe2
	movs r0, #180	@ 000adbe2 b420
.org 0xadbe4
	strb r0, [r5, #18]	@ 000adbe4 a874
.org 0xadbe6
	ldr r1, [pc, #36]	@ 000adbe6 0949
.org 0xadbe8
	adds r0, r5, #0	@ 000adbe8 281c
.org 0xadbea
	bl 0x1cf00	@ 000adbea 6ff789f9
.org 0xadbee
	adds r0, r5, #0	@ 000adbee 281c
.org 0xadbf0
	adds r0, #140	@ 000adbf0 8c30
.org 0xadbf2
	str r4, [r0, #0]	@ 000adbf2 0460
.org 0xadbf4
	adds r0, #4	@ 000adbf4 0430
.org 0xadbf6
	str r4, [r0, #0]	@ 000adbf6 0460
.org 0xadbf8
	adds r0, #4	@ 000adbf8 0430
.org 0xadbfa
	strb r4, [r0, #0]	@ 000adbfa 0470
.org 0xadbfc
	ldrb r1, [r5, #10]	@ 000adbfc a97a
.org 0xadbfe
	movs r0, #251	@ 000adbfe fb20
.org 0xadc00
	ands r0, r1	@ 000adc00 0840
.org 0xadc02
	strb r0, [r5, #10]	@ 000adc02 a872
.org 0xadc04
	ldr r0, [pc, #8]	@ 000adc04 0248
.org 0xadc06
	bl 0x2b10	@ 000adc06 54f783ff
.org 0xadc0a
	b.n 0xadc62	@ 000adc0a 2ae0
.org 0xadc0c
	.byte 0x03,0x9d,0x00,0x00	@ 000adc0c data
.org 0xadc10
	.byte 0x73,0x01,0x00,0x00	@ 000adc10 data
.org 0xadc14
	adds r0, r5, #0	@ 000adc14 281c
.org 0xadc16
	bl 0xadb98	@ 000adc16 fff7bfff
.org 0xadc1a
	adds r2, r0, #0	@ 000adc1a 021c
.org 0xadc1c
	ldr r3, [pc, #80]	@ 000adc1c 144b
.org 0xadc1e
	adds r0, #64	@ 000adc1e 4030
.org 0xadc20
	lsls r0, r0, #24	@ 000adc20 0006
.org 0xadc22
	lsrs r0, r0, #23	@ 000adc22 c00d
.org 0xadc24
	adds r0, r0, r3	@ 000adc24 c018
.org 0xadc26
	movs r4, #0	@ 000adc26 0024
.org 0xadc28
	ldrsh r1, [r0, r4]	@ 000adc28 015f
.org 0xadc2a
	lsls r0, r1, #3	@ 000adc2a c800
.org 0xadc2c
	subs r0, r0, r1	@ 000adc2c 401a
.org 0xadc2e
	lsls r0, r0, #8	@ 000adc2e 0002
.org 0xadc30
	negs r0, r0	@ 000adc30 4042
.org 0xadc32
	cmp r0, #0	@ 000adc32 0028
.org 0xadc34
	bge.n 0xadc38	@ 000adc34 00da
.org 0xadc36
	adds r0, #255	@ 000adc36 ff30
.org 0xadc38
	asrs r0, r0, #8	@ 000adc38 0012
.org 0xadc3a
	str r0, [r5, #92]	@ 000adc3a e865
.org 0xadc3c
	lsls r0, r2, #24	@ 000adc3c 1006
.org 0xadc3e
	lsrs r0, r0, #23	@ 000adc3e c00d
.org 0xadc40
	adds r0, r0, r3	@ 000adc40 c018
.org 0xadc42
	movs r2, #0	@ 000adc42 0022
.org 0xadc44
	ldrsh r1, [r0, r2]	@ 000adc44 815e
.org 0xadc46
	lsls r0, r1, #3	@ 000adc46 c800
.org 0xadc48
	subs r0, r0, r1	@ 000adc48 401a
.org 0xadc4a
	lsls r0, r0, #8	@ 000adc4a 0002
.org 0xadc4c
	negs r0, r0	@ 000adc4c 4042
.org 0xadc4e
	cmp r0, #0	@ 000adc4e 0028
.org 0xadc50
	bge.n 0xadc54	@ 000adc50 00da
.org 0xadc52
	adds r0, #255	@ 000adc52 ff30
.org 0xadc54
	asrs r0, r0, #8	@ 000adc54 0012
.org 0xadc56
	str r0, [r5, #96]	@ 000adc56 2866
.org 0xadc58
	adds r0, r5, #0	@ 000adc58 281c
.org 0xadc5a
	adds r0, #116	@ 000adc5a 7430
.org 0xadc5c
	ldr r1, [pc, #20]	@ 000adc5c 0549
.org 0xadc5e
	bl 0x5784	@ 000adc5e 57f791fd
.org 0xadc62
	adds r1, r5, #0	@ 000adc62 291c
.org 0xadc64
	adds r1, #185	@ 000adc64 b931
.org 0xadc66
	movs r0, #1	@ 000adc66 0120
