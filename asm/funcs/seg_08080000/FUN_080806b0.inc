@ FUN_080806b0  entry 0x080806b0  size 114
.thumb
.org 0x806b0
FUN_080806b0:
	push {r4, r5, r6, r7, lr}	@ 000806b0 f0b5
.org 0x806b2
	adds r4, r0, #0	@ 000806b2 041c
.org 0x806b4
	ldr r0, [r4, #84]	@ 000806b4 606d
.org 0x806b6
	ldr r1, [r4, #88]	@ 000806b6 a16d
.org 0x806b8
	bl 0x8534	@ 000806b8 87f73cff
.org 0x806bc
	adds r5, r0, #0	@ 000806bc 051c
.org 0x806be
	ldr r0, [r4, #88]	@ 000806be a06d
.org 0x806c0
	subs r0, r5, r0	@ 000806c0 281a
.org 0x806c2
	ldr r1, [pc, #68]	@ 000806c2 1149
.org 0x806c4
	cmp r0, r1	@ 000806c4 8842
.org 0x806c6
	bgt.n 0x806d4	@ 000806c6 05dc
.org 0x806c8
	str r5, [r4, #88]	@ 000806c8 a565
.org 0x806ca
	ldr r0, [r4, #96]	@ 000806ca 206e
.org 0x806cc
	cmp r0, #64	@ 000806cc 4028
.org 0x806ce
	ble.n 0x806d4	@ 000806ce 01dd
.org 0x806d0
	movs r0, #0	@ 000806d0 0020
.org 0x806d2
	str r0, [r4, #96]	@ 000806d2 2066
.org 0x806d4
	ldrb r0, [r4, #10]	@ 000806d4 a07a
.org 0x806d6
	lsrs r6, r0, #4	@ 000806d6 0609
.org 0x806d8
	movs r0, #1	@ 000806d8 0120
.org 0x806da
	ands r6, r0	@ 000806da 0640
.org 0x806dc
	lsls r0, r6, #13	@ 000806dc 7003
.org 0x806de
	ldr r1, [pc, #44]	@ 000806de 0b49
.org 0x806e0
	adds r7, r0, r1	@ 000806e0 4718
.org 0x806e2
	ldr r0, [r4, #88]	@ 000806e2 a06d
.org 0x806e4
	ldr r1, [pc, #40]	@ 000806e4 0a49
.org 0x806e6
	adds r5, r0, r1	@ 000806e6 4518
.org 0x806e8
	ldr r0, [r4, #84]	@ 000806e8 606d
.org 0x806ea
	adds r0, r0, r7	@ 000806ea c019
.org 0x806ec
	adds r1, r5, #0	@ 000806ec 291c
.org 0x806ee
	bl 0x7c7c	@ 000806ee 87f7c5fa
.org 0x806f2
	lsls r0, r0, #16	@ 000806f2 0004
.org 0x806f4
	cmp r0, #0	@ 000806f4 0028
.org 0x806f6
	beq.n 0x80726	@ 000806f6 16d0
.org 0x806f8
	cmp r6, #0	@ 000806f8 002e
.org 0x806fa
	beq.n 0x80714	@ 000806fa 0bd0
.org 0x806fc
	ldr r0, [r4, #84]	@ 000806fc 606d
.org 0x806fe
	adds r0, r0, r7	@ 000806fe c019
.org 0x80700
	adds r1, r5, #0	@ 00080700 291c
.org 0x80702
	bl 0x8868	@ 00080702 88f7b1f8
.org 0x80706
	b.n 0x8071e	@ 00080706 0ae0
.org 0x80708
	.byte 0x3f,0x04,0x00,0x00	@ 00080708 data
.org 0x8070c
	.byte 0x00,0xf0,0xff,0xff	@ 0008070c data
.org 0x80710
	.byte 0x00,0xf8,0xff,0xff	@ 00080710 data
.org 0x80714
	ldr r0, [r4, #84]	@ 00080714 606d
.org 0x80716
	adds r0, r0, r7	@ 00080716 c019
.org 0x80718
	adds r1, r5, #0	@ 00080718 291c
.org 0x8071a
	bl 0x8988	@ 0008071a 88f735f9
.org 0x8071e
	subs r0, r0, r7	@ 0008071e c01b
.org 0x80720
	str r0, [r4, #84]	@ 00080720 6065
