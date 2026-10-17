@ FUN_080b45a8  entry 0x080b45a8  size 348
.thumb
.org 0xb45a8
FUN_080b45a8:
	push {r4, r5, r6, r7, lr}	@ 000b45a8 f0b5
.org 0xb45aa
	sub sp, #8	@ 000b45aa 82b0
.org 0xb45ac
	adds r4, r0, #0	@ 000b45ac 041c
.org 0xb45ae
	ldrb r0, [r4, #15]	@ 000b45ae e07b
.org 0xb45b0
	cmp r0, #0	@ 000b45b0 0028
.org 0xb45b2
	bne.n 0xb45ce	@ 000b45b2 0cd1
.org 0xb45b4
	ldrb r0, [r4, #16]	@ 000b45b4 207c
.org 0xb45b6
	lsls r1, r0, #3	@ 000b45b6 c100
.org 0xb45b8
	adds r1, r1, r0	@ 000b45b8 0918
.org 0xb45ba
	ldr r0, [pc, #64]	@ 000b45ba 1048
.org 0xb45bc
	adds r1, r1, r0	@ 000b45bc 0918
.org 0xb45be
	lsls r1, r1, #16	@ 000b45be 0904
.org 0xb45c0
	lsrs r1, r1, #16	@ 000b45c0 090c
.org 0xb45c2
	adds r0, r4, #0	@ 000b45c2 201c
.org 0xb45c4
	bl 0x1cf00	@ 000b45c4 68f79cfc
.org 0xb45c8
	ldrb r0, [r4, #15]	@ 000b45c8 e07b
.org 0xb45ca
	adds r0, #1	@ 000b45ca 0130
.org 0xb45cc
	strb r0, [r4, #15]	@ 000b45cc e073
.org 0xb45ce
	adds r0, r4, #0	@ 000b45ce 201c
.org 0xb45d0
	bl 0x1cff0	@ 000b45d0 68f70efd
.org 0xb45d4
	ldr r0, [r4, #84]	@ 000b45d4 606d
.org 0xb45d6
	str r0, [sp, #0]	@ 000b45d6 0090
.org 0xb45d8
	ldr r0, [r4, #88]	@ 000b45d8 a06d
.org 0xb45da
	ldr r1, [pc, #36]	@ 000b45da 0949
.org 0xb45dc
	adds r0, r0, r1	@ 000b45dc 4018
.org 0xb45de
	str r0, [sp, #4]	@ 000b45de 0190
.org 0xb45e0
	ldr r7, [pc, #32]	@ 000b45e0 084f
.org 0xb45e2
	adds r2, r4, #0	@ 000b45e2 221c
.org 0xb45e4
	adds r2, #188	@ 000b45e4 bc32
.org 0xb45e6
	ldrb r5, [r2, #0]	@ 000b45e6 1578
.org 0xb45e8
	ldrb r1, [r4, #10]	@ 000b45e8 a17a
.org 0xb45ea
	movs r3, #16	@ 000b45ea 1023
.org 0xb45ec
	adds r0, r3, #0	@ 000b45ec 181c
.org 0xb45ee
	ands r0, r1	@ 000b45ee 0840
.org 0xb45f0
	adds r6, r2, #0	@ 000b45f0 161c
.org 0xb45f2
	cmp r0, #0	@ 000b45f2 0028
.org 0xb45f4
	beq.n 0xb4608	@ 000b45f4 08d0
.org 0xb45f6
	orrs r3, r5	@ 000b45f6 2b43
.org 0xb45f8
	b.n 0xb460a	@ 000b45f8 07e0
.org 0xb45fa
	.byte 0x00	@ 000b45fa data
.org 0xb45fb
	.byte 0x00	@ 000b45fb data
.org 0xb45fc
	.byte 0x04,0xc9,0xff,0xff	@ 000b45fc data
.org 0xb4600
	.byte 0x00,0xf8,0xff,0xff	@ 000b4600 data
.org 0xb4604
	.byte 0xb8,0x38,0x86,0x08	@ 000b4604 data
.org 0xb4608
	adds r3, r5, #0	@ 000b4608 2b1c
.org 0xb460a
	mov r0, sp	@ 000b460a 6846
.org 0xb460c
	adds r1, r7, #0	@ 000b460c 391c
.org 0xb460e
	movs r2, #0	@ 000b460e 0022
.org 0xb4610
	bl 0xd4c8c	@ 000b4610 20f03cfb
.org 0xb4614
	ldrb r0, [r4, #16]	@ 000b4614 207c
.org 0xb4616
	cmp r0, #0	@ 000b4616 0028
.org 0xb4618
	bne.n 0xb466a	@ 000b4618 27d1
.org 0xb461a
	mov r5, sp	@ 000b461a 6d46
.org 0xb461c
	ldr r7, [pc, #16]	@ 000b461c 044f
.org 0xb461e
	ldrb r2, [r6, #0]	@ 000b461e 3278
.org 0xb4620
	ldrb r1, [r4, #10]	@ 000b4620 a17a
.org 0xb4622
	movs r3, #16	@ 000b4622 1023
.org 0xb4624
	adds r0, r3, #0	@ 000b4624 181c
.org 0xb4626
	ands r0, r1	@ 000b4626 0840
.org 0xb4628
	cmp r0, #0	@ 000b4628 0028
.org 0xb462a
	beq.n 0xb4634	@ 000b462a 03d0
.org 0xb462c
	orrs r3, r2	@ 000b462c 1343
.org 0xb462e
	b.n 0xb4636	@ 000b462e 02e0
.org 0xb4630
	.byte 0xd4,0x38,0x86,0x08	@ 000b4630 data
.org 0xb4634
	adds r3, r2, #0	@ 000b4634 131c
.org 0xb4636
	adds r0, r5, #0	@ 000b4636 281c
.org 0xb4638
	adds r1, r7, #0	@ 000b4638 391c
.org 0xb463a
	movs r2, #0	@ 000b463a 0022
.org 0xb463c
	bl 0xd4c8c	@ 000b463c 20f026fb
.org 0xb4640
	mov r5, sp	@ 000b4640 6d46
.org 0xb4642
	ldr r7, [pc, #20]	@ 000b4642 054f
.org 0xb4644
	ldrb r2, [r6, #0]	@ 000b4644 3278
.org 0xb4646
	ldrb r1, [r4, #10]	@ 000b4646 a17a
.org 0xb4648
	movs r3, #16	@ 000b4648 1023
.org 0xb464a
	adds r0, r3, #0	@ 000b464a 181c
.org 0xb464c
	ands r0, r1	@ 000b464c 0840
.org 0xb464e
	cmp r0, #0	@ 000b464e 0028
.org 0xb4650
	bne.n 0xb465c	@ 000b4650 04d1
.org 0xb4652
	orrs r3, r2	@ 000b4652 1343
.org 0xb4654
	b.n 0xb465e	@ 000b4654 03e0
.org 0xb4656
	.byte 0x00	@ 000b4656 data
.org 0xb4657
	.byte 0x00	@ 000b4657 data
.org 0xb4658
	.byte 0xf0,0x38,0x86,0x08	@ 000b4658 data
.org 0xb465c
	adds r3, r2, #0	@ 000b465c 131c
.org 0xb465e
	adds r0, r5, #0	@ 000b465e 281c
.org 0xb4660
	adds r1, r7, #0	@ 000b4660 391c
.org 0xb4662
	movs r2, #0	@ 000b4662 0022
.org 0xb4664
	bl 0xd4c8c	@ 000b4664 20f012fb
.org 0xb4668
	b.n 0xb46b8	@ 000b4668 26e0
.org 0xb466a
	mov r5, sp	@ 000b466a 6d46
.org 0xb466c
	ldr r7, [pc, #16]	@ 000b466c 044f
.org 0xb466e
	ldrb r2, [r6, #0]	@ 000b466e 3278
.org 0xb4670
	ldrb r1, [r4, #10]	@ 000b4670 a17a
.org 0xb4672
	movs r3, #16	@ 000b4672 1023
.org 0xb4674
	adds r0, r3, #0	@ 000b4674 181c
.org 0xb4676
	ands r0, r1	@ 000b4676 0840
.org 0xb4678
	cmp r0, #0	@ 000b4678 0028
.org 0xb467a
	beq.n 0xb4684	@ 000b467a 03d0
.org 0xb467c
	orrs r3, r2	@ 000b467c 1343
.org 0xb467e
	b.n 0xb4686	@ 000b467e 02e0
.org 0xb4680
	.byte 0x0c,0x39,0x86,0x08	@ 000b4680 data
.org 0xb4684
	adds r3, r2, #0	@ 000b4684 131c
.org 0xb4686
	adds r0, r5, #0	@ 000b4686 281c
.org 0xb4688
	adds r1, r7, #0	@ 000b4688 391c
.org 0xb468a
	movs r2, #0	@ 000b468a 0022
.org 0xb468c
	bl 0xd4c8c	@ 000b468c 20f0fefa
.org 0xb4690
	mov r5, sp	@ 000b4690 6d46
.org 0xb4692
	ldr r7, [pc, #20]	@ 000b4692 054f
.org 0xb4694
	ldrb r2, [r6, #0]	@ 000b4694 3278
.org 0xb4696
	ldrb r1, [r4, #10]	@ 000b4696 a17a
.org 0xb4698
	movs r3, #16	@ 000b4698 1023
.org 0xb469a
	adds r0, r3, #0	@ 000b469a 181c
.org 0xb469c
	ands r0, r1	@ 000b469c 0840
.org 0xb469e
	cmp r0, #0	@ 000b469e 0028
.org 0xb46a0
	bne.n 0xb46ac	@ 000b46a0 04d1
.org 0xb46a2
	orrs r3, r2	@ 000b46a2 1343
.org 0xb46a4
	b.n 0xb46ae	@ 000b46a4 03e0
.org 0xb46a6
	.byte 0x00	@ 000b46a6 data
.org 0xb46a7
	.byte 0x00	@ 000b46a7 data
.org 0xb46a8
	.byte 0x28,0x39,0x86,0x08	@ 000b46a8 data
.org 0xb46ac
	adds r3, r2, #0	@ 000b46ac 131c
.org 0xb46ae
	adds r0, r5, #0	@ 000b46ae 281c
.org 0xb46b0
	adds r1, r7, #0	@ 000b46b0 391c
.org 0xb46b2
	movs r2, #0	@ 000b46b2 0022
.org 0xb46b4
	bl 0xd4c8c	@ 000b46b4 20f0eafa
.org 0xb46b8
	movs r0, #1	@ 000b46b8 0120
.org 0xb46ba
	mov r1, sp	@ 000b46ba 6946
.org 0xb46bc
	bl 0xd0c88	@ 000b46bc 1cf0e4fa
.org 0xb46c0
	adds r0, r4, #0	@ 000b46c0 201c
.org 0xb46c2
	adds r0, #184	@ 000b46c2 b830
.org 0xb46c4
	ldrb r0, [r0, #0]	@ 000b46c4 0078
.org 0xb46c6
	cmp r0, #0	@ 000b46c6 0028
.org 0xb46c8
	beq.n 0xb46d2	@ 000b46c8 03d0
.org 0xb46ca
	movs r0, #165	@ 000b46ca a520
.org 0xb46cc
	bl 0x2b10	@ 000b46cc 4ef720fa
.org 0xb46d0
	b.n 0xb46d8	@ 000b46d0 02e0
.org 0xb46d2
	movs r0, #42	@ 000b46d2 2a20
.org 0xb46d4
	bl 0x2b10	@ 000b46d4 4ef71cfa
.org 0xb46d8
	ldrb r0, [r4, #16]	@ 000b46d8 207c
.org 0xb46da
	cmp r0, #0	@ 000b46da 0028
.org 0xb46dc
	bne.n 0xb46ea	@ 000b46dc 05d1
.org 0xb46de
	movs r0, #3	@ 000b46de 0320
.org 0xb46e0
	movs r1, #41	@ 000b46e0 2921
.org 0xb46e2
	mov r2, sp	@ 000b46e2 6a46
.org 0xb46e4
	bl 0x2ab88	@ 000b46e4 76f750fa
.org 0xb46e8
	b.n 0xb46f4	@ 000b46e8 04e0
.org 0xb46ea
	movs r0, #3	@ 000b46ea 0320
.org 0xb46ec
	movs r1, #40	@ 000b46ec 2821
.org 0xb46ee
	mov r2, sp	@ 000b46ee 6a46
.org 0xb46f0
	bl 0x2ab88	@ 000b46f0 76f74afa
.org 0xb46f4
	ldr r2, [pc, #48]	@ 000b46f4 0c4a
.org 0xb46f6
	ldrh r1, [r2, #12]	@ 000b46f6 9189
.org 0xb46f8
	ldr r0, [pc, #48]	@ 000b46f8 0c48
.org 0xb46fa
	cmp r1, r0	@ 000b46fa 8142
.org 0xb46fc
	bhi.n 0xb4702	@ 000b46fc 01d8
.org 0xb46fe
	adds r0, r1, #1	@ 000b46fe 481c
.org 0xb4700
	strh r0, [r2, #12]	@ 000b4700 9081
.org 0xb4702
	adds r1, r4, #0	@ 000b4702 211c
