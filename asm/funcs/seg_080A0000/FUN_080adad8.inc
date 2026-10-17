@ FUN_080adad8  entry 0x080adad8  size 172
.thumb
.org 0xadad8
FUN_080adad8:
	push {r4, r5, r6, lr}	@ 000adad8 70b5
.org 0xadada
	adds r5, r0, #0	@ 000adada 051c
.org 0xadadc
	ldr r0, [r5, #84]	@ 000adadc 686d
.org 0xadade
	ldr r1, [r5, #92]	@ 000adade e96d
.org 0xadae0
	adds r0, r0, r1	@ 000adae0 4018
.org 0xadae2
	str r0, [r5, #84]	@ 000adae2 6865
.org 0xadae4
	ldr r1, [r5, #88]	@ 000adae4 a96d
.org 0xadae6
	ldr r0, [r5, #96]	@ 000adae6 286e
.org 0xadae8
	adds r1, r1, r0	@ 000adae8 0918
.org 0xadaea
	str r1, [r5, #88]	@ 000adaea a965
.org 0xadaec
	adds r0, r5, #0	@ 000adaec 281c
.org 0xadaee
	adds r0, #185	@ 000adaee b930
.org 0xadaf0
	ldrb r0, [r0, #0]	@ 000adaf0 0078
.org 0xadaf2
	cmp r0, #0	@ 000adaf2 0028
.org 0xadaf4
	bne.n 0xadb12	@ 000adaf4 0dd1
.org 0xadaf6
	adds r0, r5, #0	@ 000adaf6 281c
.org 0xadaf8
	adds r0, #188	@ 000adaf8 bc30
.org 0xadafa
	ldr r0, [r0, #0]	@ 000adafa 0068
.org 0xadafc
	cmp r0, r1	@ 000adafc 8842
.org 0xadafe
	bge.n 0xadb06	@ 000adafe 02da
.org 0xadb00
	movs r0, #80	@ 000adb00 5020
.org 0xadb02
	negs r0, r0	@ 000adb02 4042
.org 0xadb04
	b.n 0xadb10	@ 000adb04 04e0
.org 0xadb06
	ldr r2, [pc, #112]	@ 000adb06 1c4a
.org 0xadb08
	adds r0, r0, r2	@ 000adb08 8018
.org 0xadb0a
	cmp r0, r1	@ 000adb0a 8842
.org 0xadb0c
	ble.n 0xadb12	@ 000adb0c 01dd
.org 0xadb0e
	movs r0, #80	@ 000adb0e 5020
.org 0xadb10
	str r0, [r5, #96]	@ 000adb10 2866
.org 0xadb12
	ldrb r0, [r5, #18]	@ 000adb12 a87c
.org 0xadb14
	cmp r0, #0	@ 000adb14 0028
.org 0xadb16
	beq.n 0xadb8c	@ 000adb16 39d0
.org 0xadb18
	subs r0, #1	@ 000adb18 0138
.org 0xadb1a
	strb r0, [r5, #18]	@ 000adb1a a874
.org 0xadb1c
	lsls r0, r0, #24	@ 000adb1c 0006
.org 0xadb1e
	lsrs r2, r0, #24	@ 000adb1e 020e
.org 0xadb20
	cmp r2, #0	@ 000adb20 002a
.org 0xadb22
	bne.n 0xadb8c	@ 000adb22 33d1
.org 0xadb24
	adds r0, r5, #0	@ 000adb24 281c
.org 0xadb26
	adds r0, #185	@ 000adb26 b930
.org 0xadb28
	strb r2, [r0, #0]	@ 000adb28 0270
.org 0xadb2a
	subs r0, #1	@ 000adb2a 0138
.org 0xadb2c
	strb r2, [r0, #0]	@ 000adb2c 0270
.org 0xadb2e
	adds r1, r5, #0	@ 000adb2e 291c
.org 0xadb30
	adds r1, #188	@ 000adb30 bc31
.org 0xadb32
	ldr r0, [r5, #88]	@ 000adb32 a86d
.org 0xadb34
	str r0, [r1, #0]	@ 000adb34 0860
.org 0xadb36
	str r2, [r5, #92]	@ 000adb36 ea65
.org 0xadb38
	movs r0, #80	@ 000adb38 5020
.org 0xadb3a
	negs r0, r0	@ 000adb3a 4042
.org 0xadb3c
	str r0, [r5, #96]	@ 000adb3c 2866
.org 0xadb3e
	ldrb r0, [r5, #10]	@ 000adb3e a87a
.org 0xadb40
	movs r1, #4	@ 000adb40 0421
.org 0xadb42
	orrs r0, r1	@ 000adb42 0843
.org 0xadb44
	strb r0, [r5, #10]	@ 000adb44 a872
.org 0xadb46
	adds r4, r5, #0	@ 000adb46 2c1c
.org 0xadb48
	adds r4, #116	@ 000adb48 7434
.org 0xadb4a
	ldr r1, [pc, #48]	@ 000adb4a 0c49
.org 0xadb4c
	adds r2, r5, #0	@ 000adb4c 2a1c
.org 0xadb4e
	adds r2, #84	@ 000adb4e 5432
.org 0xadb50
	adds r0, r5, #0	@ 000adb50 281c
.org 0xadb52
	adds r0, #164	@ 000adb52 a430
.org 0xadb54
	movs r6, #0	@ 000adb54 0026
.org 0xadb56
	ldrsh r3, [r0, r6]	@ 000adb56 835f
.org 0xadb58
	adds r0, r4, #0	@ 000adb58 201c
.org 0xadb5a
	bl 0x5760	@ 000adb5a 57f701fe
.org 0xadb5e
	str r5, [r4, #44]	@ 000adb5e e562
.org 0xadb60
	ldr r0, [pc, #28]	@ 000adb60 0748
.org 0xadb62
	str r0, [r4, #36]	@ 000adb62 6062
.org 0xadb64
	ldrb r0, [r5, #16]	@ 000adb64 287c
.org 0xadb66
	cmp r0, #0	@ 000adb66 0028
.org 0xadb68
	bne.n 0xadb84	@ 000adb68 0cd1
.org 0xadb6a
	movs r1, #157	@ 000adb6a 9d21
.org 0xadb6c
	lsls r1, r1, #8	@ 000adb6c 0902
.org 0xadb6e
	adds r0, r5, #0	@ 000adb6e 281c
.org 0xadb70
	bl 0x1cf00	@ 000adb70 6ff7c6f9
.org 0xadb74
	b.n 0xadb8c	@ 000adb74 0ae0
.org 0xadb76
	.byte 0x00	@ 000adb76 data
.org 0xadb77
	.byte 0x00	@ 000adb77 data
.org 0xadb78
	.byte 0x00,0xf8,0xff,0xff	@ 000adb78 data
.org 0xadb7c
	.byte 0x1c,0x2e,0x86,0x08	@ 000adb7c data
.org 0xadb80
	.byte 0x75,0xd9,0x0a,0x08	@ 000adb80 data
