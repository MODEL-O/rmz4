@ FUN_080ccc40  entry 0x080ccc40  size 178
.thumb
.org 0xccc40
FUN_080ccc40:
	push {r4, lr}	@ 000ccc40 10b5
.org 0xccc42
	adds r4, r0, #0	@ 000ccc42 041c
.org 0xccc44
	adds r0, #180	@ 000ccc44 b430
.org 0xccc46
	ldrb r0, [r0, #0]	@ 000ccc46 0078
.org 0xccc48
	cmp r0, #0	@ 000ccc48 0028
.org 0xccc4a
	bne.n 0xccc94	@ 000ccc4a 23d1
.org 0xccc4c
	ldr r2, [r4, #40]	@ 000ccc4c a26a
.org 0xccc4e
	ldr r3, [pc, #60]	@ 000ccc4e 0f4b
.org 0xccc50
	ldrb r1, [r2, #10]	@ 000ccc50 917a
.org 0xccc52
	movs r0, #16	@ 000ccc52 1020
.org 0xccc54
	ands r0, r1	@ 000ccc54 0840
.org 0xccc56
	lsls r0, r0, #24	@ 000ccc56 0006
.org 0xccc58
	lsrs r0, r0, #24	@ 000ccc58 000e
.org 0xccc5a
	negs r0, r0	@ 000ccc5a 4042
.org 0xccc5c
	asrs r0, r0, #31	@ 000ccc5c c017
.org 0xccc5e
	movs r1, #4	@ 000ccc5e 0421
.org 0xccc60
	ands r0, r1	@ 000ccc60 0840
.org 0xccc62
	adds r0, r0, r3	@ 000ccc62 c018
.org 0xccc64
	ldr r1, [r0, #0]	@ 000ccc64 0168
.org 0xccc66
	lsls r1, r1, #8	@ 000ccc66 0902
.org 0xccc68
	ldr r0, [r2, #84]	@ 000ccc68 506d
.org 0xccc6a
	adds r0, r0, r1	@ 000ccc6a 4018
.org 0xccc6c
	str r0, [r4, #84]	@ 000ccc6c 6065
.org 0xccc6e
	ldr r0, [r2, #88]	@ 000ccc6e 906d
.org 0xccc70
	ldr r1, [pc, #28]	@ 000ccc70 0749
.org 0xccc72
	adds r0, r0, r1	@ 000ccc72 4018
.org 0xccc74
	str r0, [r4, #88]	@ 000ccc74 a065
.org 0xccc76
	ldrb r1, [r4, #18]	@ 000ccc76 a17c
.org 0xccc78
	lsls r0, r1, #1	@ 000ccc78 4800
.org 0xccc7a
	adds r0, r0, r1	@ 000ccc7a 4018
.org 0xccc7c
	adds r0, #64	@ 000ccc7c 4030
.org 0xccc7e
	adds r1, r4, #0	@ 000ccc7e 211c
.org 0xccc80
	adds r1, #80	@ 000ccc80 5031
.org 0xccc82
	strh r0, [r1, #0]	@ 000ccc82 0880
.org 0xccc84
	adds r1, #2	@ 000ccc84 0231
.org 0xccc86
	strh r0, [r1, #0]	@ 000ccc86 0880
.org 0xccc88
	b.n 0xcccb2	@ 000ccc88 13e0
.org 0xccc8a
	.byte 0x00	@ 000ccc8a data
.org 0xccc8b
	.byte 0x00	@ 000ccc8b data
.org 0xccc8c
	.byte 0x34,0x68,0x86,0x08	@ 000ccc8c data
.org 0xccc90
	.byte 0x00,0xfc,0xff,0xff	@ 000ccc90 data
.org 0xccc94
	ldr r1, [r4, #40]	@ 000ccc94 a16a
.org 0xccc96
	ldr r0, [r1, #84]	@ 000ccc96 486d
.org 0xccc98
	str r0, [r4, #84]	@ 000ccc98 6065
.org 0xccc9a
	ldr r0, [r1, #88]	@ 000ccc9a 886d
.org 0xccc9c
	str r0, [r4, #88]	@ 000ccc9c a065
.org 0xccc9e
	ldrb r0, [r4, #14]	@ 000ccc9e a07b
.org 0xccca0
	cmp r0, #0	@ 000ccca0 0028
.org 0xccca2
	bne.n 0xcccb2	@ 000ccca2 06d1
.org 0xccca4
	ldr r1, [pc, #84]	@ 000ccca4 1549
.org 0xccca6
	adds r0, r4, #0	@ 000ccca6 201c
.org 0xccca8
	bl 0x1cf00	@ 000ccca8 50f72af9
.org 0xcccac
	ldrb r0, [r4, #14]	@ 000cccac a07b
.org 0xcccae
	adds r0, #1	@ 000cccae 0130
.org 0xcccb0
	strb r0, [r4, #14]	@ 000cccb0 a073
.org 0xcccb2
	ldr r0, [r4, #40]	@ 000cccb2 a06a
.org 0xcccb4
	ldrb r0, [r0, #12]	@ 000cccb4 007b
.org 0xcccb6
	cmp r0, #1	@ 000cccb6 0128
.org 0xcccb8
	bhi.n 0xcccc0	@ 000cccb8 02d8
.org 0xcccba
	ldrb r0, [r4, #18]	@ 000cccba a07c
.org 0xcccbc
	cmp r0, #0	@ 000cccbc 0028
.org 0xcccbe
	bne.n 0xcccf6	@ 000cccbe 1ad1
.org 0xcccc0
	ldrb r1, [r4, #10]	@ 000cccc0 a17a
.org 0xcccc2
	movs r0, #254	@ 000cccc2 fe20
.org 0xcccc4
	ands r0, r1	@ 000cccc4 0840
.org 0xcccc6
	movs r2, #0	@ 000cccc6 0022
.org 0xcccc8
	movs r1, #253	@ 000cccc8 fd21
.org 0xcccca
	ands r0, r1	@ 000cccca 0840
.org 0xccccc
	strb r0, [r4, #10]	@ 000ccccc a072
.org 0xcccce
	adds r0, r4, #0	@ 000cccce 201c
.org 0xcccd0
	adds r0, #140	@ 000cccd0 8c30
.org 0xcccd2
	str r2, [r0, #0]	@ 000cccd2 0260
.org 0xcccd4
	adds r0, #4	@ 000cccd4 0430
.org 0xcccd6
	str r2, [r0, #0]	@ 000cccd6 0260
.org 0xcccd8
	adds r0, #4	@ 000cccd8 0430
.org 0xcccda
	strb r2, [r0, #0]	@ 000cccda 0270
.org 0xcccdc
	ldrb r1, [r4, #10]	@ 000cccdc a17a
.org 0xcccde
	movs r0, #251	@ 000cccde fb20
.org 0xccce0
	ands r0, r1	@ 000ccce0 0840
.org 0xccce2
	strb r0, [r4, #10]	@ 000ccce2 a072
.org 0xccce4
	ldr r1, [pc, #24]	@ 000ccce4 0649
.org 0xccce6
	ldrb r0, [r4, #9]	@ 000ccce6 607a
.org 0xccce8
	lsls r0, r0, #2	@ 000ccce8 8000
.org 0xcccea
	adds r0, r0, r1	@ 000cccea 4018
.org 0xcccec
	movs r1, #3	@ 000cccec 0321
.org 0xcccee
	str r1, [r4, #12]	@ 000cccee e160
.org 0xcccf0
	ldr r0, [r0, #0]	@ 000cccf0 0068
