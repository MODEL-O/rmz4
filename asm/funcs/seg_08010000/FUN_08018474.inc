@ FUN_08018474  entry 0x08018474  size 434
.thumb
.org 0x18474
FUN_08018474:
	push {r4, lr}	@ 00018474 10b5
.org 0x18476
	ldr r1, [pc, #36]	@ 00018476 0949
.org 0x18478
	ldr r0, [pc, #36]	@ 00018478 0948
.org 0x1847a
	adds r2, r1, r0	@ 0001847a 0a18
.org 0x1847c
	ldrb r0, [r2, #0]	@ 0001847c 1078
.org 0x1847e
	cmp r0, #0	@ 0001847e 0028
.org 0x18480
	bne.n 0x184a8	@ 00018480 12d1
.org 0x18482
	ldr r3, [pc, #32]	@ 00018482 084b
.org 0x18484
	adds r0, r1, r3	@ 00018484 c818
.org 0x18486
	ldrb r0, [r0, #0]	@ 00018486 0078
.org 0x18488
	cmp r0, #0	@ 00018488 0028
.org 0x1848a
	beq.n 0x184a8	@ 0001848a 0dd0
.org 0x1848c
	movs r0, #1	@ 0001848c 0120
.org 0x1848e
	strb r0, [r2, #0]	@ 0001848e 1070
.org 0x18490
	movs r0, #190	@ 00018490 be20
.org 0x18492
	lsls r0, r0, #1	@ 00018492 4000
.org 0x18494
	bl 0x2b10	@ 00018494 eaf73cfb
.org 0x18498
	b.n 0x184c8	@ 00018498 16e0
.org 0x1849a
	.byte 0x00	@ 0001849a data
.org 0x1849b
	.byte 0x00	@ 0001849b data
.org 0x1849c
	.byte 0xb0,0x0a,0x00,0x02	@ 0001849c data
.org 0x184a0
	.byte 0x41,0xd0,0x02,0x00	@ 000184a0 data
.org 0x184a4
	.byte 0x40,0xd0,0x02,0x00	@ 000184a4 data
.org 0x184a8
	ldr r1, [pc, #164]	@ 000184a8 2949
.org 0x184aa
	ldr r0, [pc, #168]	@ 000184aa 2a48
.org 0x184ac
	adds r2, r1, r0	@ 000184ac 0a18
.org 0x184ae
	ldrb r0, [r2, #0]	@ 000184ae 1078
.org 0x184b0
	cmp r0, #0	@ 000184b0 0028
.org 0x184b2
	beq.n 0x184c8	@ 000184b2 09d0
.org 0x184b4
	ldr r3, [pc, #160]	@ 000184b4 284b
.org 0x184b6
	adds r0, r1, r3	@ 000184b6 c818
.org 0x184b8
	ldrb r0, [r0, #0]	@ 000184b8 0078
.org 0x184ba
	cmp r0, #0	@ 000184ba 0028
.org 0x184bc
	bne.n 0x184c8	@ 000184bc 04d1
.org 0x184be
	strb r0, [r2, #0]	@ 000184be 1070
.org 0x184c0
	movs r0, #190	@ 000184c0 be20
.org 0x184c2
	lsls r0, r0, #1	@ 000184c2 4000
.org 0x184c4
	bl 0x2b5c	@ 000184c4 eaf74afb
.org 0x184c8
	ldr r0, [pc, #132]	@ 000184c8 2148
.org 0x184ca
	ldr r1, [pc, #140]	@ 000184ca 2349
.org 0x184cc
	adds r2, r0, r1	@ 000184cc 4218
.org 0x184ce
	movs r1, #0	@ 000184ce 0021
.org 0x184d0
	strb r1, [r2, #0]	@ 000184d0 1170
.org 0x184d2
	ldr r1, [pc, #136]	@ 000184d2 2249
.org 0x184d4
	adds r3, r0, r1	@ 000184d4 4318
.org 0x184d6
	ldrh r1, [r3, #0]	@ 000184d6 1988
.org 0x184d8
	adds r4, r0, #0	@ 000184d8 041c
.org 0x184da
	cmp r1, #0	@ 000184da 0029
.org 0x184dc
	beq.n 0x184ec	@ 000184dc 06d0
.org 0x184de
	subs r0, r1, #1	@ 000184de 481e
.org 0x184e0
	strh r0, [r3, #0]	@ 000184e0 1880
.org 0x184e2
	lsls r0, r0, #16	@ 000184e2 0004
.org 0x184e4
	cmp r0, #0	@ 000184e4 0028
.org 0x184e6
	bge.n 0x184ec	@ 000184e6 01da
.org 0x184e8
	ldr r0, [pc, #116]	@ 000184e8 1d48
.org 0x184ea
	strh r0, [r3, #0]	@ 000184ea 1880
.org 0x184ec
	ldr r3, [pc, #116]	@ 000184ec 1d4b
.org 0x184ee
	adds r0, r4, r3	@ 000184ee e018
.org 0x184f0
	ldrh r1, [r0, #0]	@ 000184f0 0188
.org 0x184f2
	lsrs r0, r1, #8	@ 000184f2 080a
.org 0x184f4
	cmp r0, #12	@ 000184f4 0c28
.org 0x184f6
	bne.n 0x1856c	@ 000184f6 39d1
.org 0x184f8
	movs r0, #255	@ 000184f8 ff20
.org 0x184fa
	ands r0, r1	@ 000184fa 0840
.org 0x184fc
	cmp r0, #4	@ 000184fc 0428
.org 0x184fe
	bne.n 0x1856c	@ 000184fe 35d1
.org 0x18500
	ldr r0, [pc, #100]	@ 00018500 1948
.org 0x18502
	adds r2, r4, r0	@ 00018502 2218
.org 0x18504
	ldrb r1, [r2, #0]	@ 00018504 1178
.org 0x18506
	movs r0, #1	@ 00018506 0120
.org 0x18508
	ands r0, r1	@ 00018508 0840
.org 0x1850a
	cmp r0, #0	@ 0001850a 0028
.org 0x1850c
	bne.n 0x18534	@ 0001850c 12d1
.org 0x1850e
	movs r0, #1	@ 0001850e 0120
.org 0x18510
	orrs r0, r1	@ 00018510 0843
.org 0x18512
	strb r0, [r2, #0]	@ 00018512 1070
.org 0x18514
	movs r0, #59	@ 00018514 3b20
.org 0x18516
	movs r1, #0	@ 00018516 0021
.org 0x18518
	bl 0x249c	@ 00018518 e9f7c0ff
.org 0x1851c
	movs r0, #60	@ 0001851c 3c20
.org 0x1851e
	movs r1, #0	@ 0001851e 0021
.org 0x18520
	bl 0x249c	@ 00018520 e9f7bcff
.org 0x18524
	movs r0, #61	@ 00018524 3d20
.org 0x18526
	movs r1, #0	@ 00018526 0021
.org 0x18528
	bl 0x249c	@ 00018528 e9f7b8ff
.org 0x1852c
	movs r0, #62	@ 0001852c 3e20
.org 0x1852e
	movs r1, #0	@ 0001852e 0021
.org 0x18530
	bl 0x249c	@ 00018530 e9f7b4ff
.org 0x18534
	movs r0, #59	@ 00018534 3b20
.org 0x18536
	bl 0x25d8	@ 00018536 eaf74ff8
.org 0x1853a
	movs r0, #60	@ 0001853a 3c20
.org 0x1853c
	bl 0x25d8	@ 0001853c eaf74cf8
.org 0x18540
	movs r0, #61	@ 00018540 3d20
.org 0x18542
	bl 0x25d8	@ 00018542 eaf749f8
.org 0x18546
	movs r0, #62	@ 00018546 3e20
.org 0x18548
	bl 0x25d8	@ 00018548 eaf746f8
.org 0x1854c
	b.n 0x1859a	@ 0001854c 25e0
.org 0x1854e
	.byte 0x00	@ 0001854e data
.org 0x1854f
	.byte 0x00	@ 0001854f data
.org 0x18550
	.byte 0xb0,0x0a,0x00,0x02	@ 00018550 data
.org 0x18554
	.byte 0x41,0xd0,0x02,0x00	@ 00018554 data
.org 0x18558
	.byte 0x40,0xd0,0x02,0x00	@ 00018558 data
.org 0x1855c
	.byte 0x3c,0xd0,0x02,0x00	@ 0001855c data
.org 0x18560
	.byte 0xff,0x7f,0x00,0x00	@ 00018560 data
.org 0x18564
	.byte 0xd6,0x07,0x00,0x00	@ 00018564 data
.org 0x18568
	.byte 0x28,0xd0,0x02,0x00	@ 00018568 data
.org 0x1856c
	ldr r0, [pc, #100]	@ 0001856c 1948
.org 0x1856e
	ldr r1, [pc, #104]	@ 0001856e 1a49
.org 0x18570
	adds r2, r0, r1	@ 00018570 4218
.org 0x18572
	ldrb r1, [r2, #0]	@ 00018572 1178
.org 0x18574
	movs r0, #1	@ 00018574 0120
.org 0x18576
	ands r0, r1	@ 00018576 0840
.org 0x18578
	cmp r0, #0	@ 00018578 0028
.org 0x1857a
	beq.n 0x1859a	@ 0001857a 0ed0
.org 0x1857c
	movs r0, #1	@ 0001857c 0120
.org 0x1857e
	eors r0, r1	@ 0001857e 4840
.org 0x18580
	strb r0, [r2, #0]	@ 00018580 1070
.org 0x18582
	movs r0, #59	@ 00018582 3b20
.org 0x18584
	bl 0x2624	@ 00018584 eaf74ef8
.org 0x18588
	movs r0, #60	@ 00018588 3c20
.org 0x1858a
	bl 0x2624	@ 0001858a eaf74bf8
.org 0x1858e
	movs r0, #61	@ 0001858e 3d20
.org 0x18590
	bl 0x2624	@ 00018590 eaf748f8
.org 0x18594
	movs r0, #62	@ 00018594 3e20
.org 0x18596
	bl 0x2624	@ 00018596 eaf745f8
.org 0x1859a
	ldr r2, [pc, #56]	@ 0001859a 0e4a
.org 0x1859c
	ldr r3, [pc, #60]	@ 0001859c 0f4b
.org 0x1859e
	adds r0, r2, r3	@ 0001859e d018
.org 0x185a0
	ldrh r1, [r0, #0]	@ 000185a0 0188
.org 0x185a2
	lsrs r0, r1, #8	@ 000185a2 080a
.org 0x185a4
	cmp r0, #12	@ 000185a4 0c28
.org 0x185a6
	bne.n 0x185e0	@ 000185a6 1bd1
.org 0x185a8
	movs r0, #255	@ 000185a8 ff20
.org 0x185aa
	ands r0, r1	@ 000185aa 0840
.org 0x185ac
	cmp r0, #5	@ 000185ac 0528
.org 0x185ae
	bne.n 0x185e0	@ 000185ae 17d1
.org 0x185b0
	ldr r0, [pc, #36]	@ 000185b0 0948
.org 0x185b2
	adds r2, r2, r0	@ 000185b2 1218
.org 0x185b4
	ldrb r1, [r2, #0]	@ 000185b4 1178
.org 0x185b6
	movs r0, #2	@ 000185b6 0220
.org 0x185b8
	ands r0, r1	@ 000185b8 0840
.org 0x185ba
	cmp r0, #0	@ 000185ba 0028
.org 0x185bc
	bne.n 0x185cc	@ 000185bc 06d1
.org 0x185be
	movs r0, #2	@ 000185be 0220
.org 0x185c0
	orrs r0, r1	@ 000185c0 0843
.org 0x185c2
	strb r0, [r2, #0]	@ 000185c2 1070
.org 0x185c4
	movs r0, #66	@ 000185c4 4220
.org 0x185c6
	movs r1, #0	@ 000185c6 0021
.org 0x185c8
	bl 0x249c	@ 000185c8 e9f768ff
.org 0x185cc
	movs r0, #66	@ 000185cc 4220
.org 0x185ce
	bl 0x25d8	@ 000185ce eaf703f8
.org 0x185d2
	b.n 0x185fc	@ 000185d2 13e0
.org 0x185d4
	.byte 0xb0,0x0a,0x00,0x02	@ 000185d4 data
.org 0x185d8
	.byte 0x28,0xd0,0x02,0x00	@ 000185d8 data
.org 0x185dc
	.byte 0xd4,0x07,0x00,0x00	@ 000185dc data
.org 0x185e0
	ldr r0, [pc, #68]	@ 000185e0 1148
.org 0x185e2
	ldr r1, [pc, #72]	@ 000185e2 1249
.org 0x185e4
	adds r2, r0, r1	@ 000185e4 4218
.org 0x185e6
	ldrb r1, [r2, #0]	@ 000185e6 1178
.org 0x185e8
	movs r0, #2	@ 000185e8 0220
.org 0x185ea
	ands r0, r1	@ 000185ea 0840
.org 0x185ec
	cmp r0, #0	@ 000185ec 0028
.org 0x185ee
	beq.n 0x185fc	@ 000185ee 05d0
.org 0x185f0
	movs r0, #2	@ 000185f0 0220
.org 0x185f2
	eors r0, r1	@ 000185f2 4840
.org 0x185f4
	strb r0, [r2, #0]	@ 000185f4 1070
.org 0x185f6
	movs r0, #66	@ 000185f6 4220
.org 0x185f8
	bl 0x2624	@ 000185f8 eaf714f8
.org 0x185fc
	ldr r2, [pc, #40]	@ 000185fc 0a4a
.org 0x185fe
	ldr r3, [pc, #48]	@ 000185fe 0c4b
.org 0x18600
	adds r0, r2, r3	@ 00018600 d018
.org 0x18602
	ldrb r1, [r0, #0]	@ 00018602 0178
.org 0x18604
	movs r0, #1	@ 00018604 0120
.org 0x18606
	ands r0, r1	@ 00018606 0840
.org 0x18608
	adds r4, r2, #0	@ 00018608 141c
.org 0x1860a
	cmp r0, #0	@ 0001860a 0028
.org 0x1860c
	beq.n 0x18642	@ 0001860c 19d0
.org 0x1860e
	ldr r0, [pc, #36]	@ 0001860e 0948
.org 0x18610
	adds r3, r4, r0	@ 00018610 2318
.org 0x18612
	ldrh r2, [r3, #0]	@ 00018612 1a88
.org 0x18614
	movs r0, #0	@ 00018614 0020
.org 0x18616
	ldrsh r1, [r3, r0]	@ 00018616 195e
.org 0x18618
	cmp r1, #0	@ 00018618 0029
.org 0x1861a
	beq.n 0x18642	@ 0001861a 12d0
.org 0x1861c
	ldr r0, [pc, #24]	@ 0001861c 0648
.org 0x1861e
	cmp r1, r0	@ 0001861e 8142
.org 0x18620
	bge.n 0x1863c	@ 00018620 0cda
.org 0x18622
	adds r0, r2, #1	@ 00018622 501c
.org 0x18624
	b.n 0x18640	@ 00018624 0ce0
