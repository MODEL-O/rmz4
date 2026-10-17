@ FUN_080d96cc  entry 0x080d96cc  size 322
.thumb
.org 0xd96cc
FUN_080d96cc:
	push {r4, r5, lr}	@ 000d96cc 30b5
.org 0xd96ce
	adds r4, r0, #0	@ 000d96ce 041c
.org 0xd96d0
	ldr r1, [pc, #60]	@ 000d96d0 0f49
.org 0xd96d2
	ldrb r0, [r4, #9]	@ 000d96d2 607a
.org 0xd96d4
	lsls r0, r0, #2	@ 000d96d4 8000
.org 0xd96d6
	adds r0, r0, r1	@ 000d96d6 4018
.org 0xd96d8
	movs r1, #1	@ 000d96d8 0121
.org 0xd96da
	str r1, [r4, #12]	@ 000d96da e160
.org 0xd96dc
	ldr r0, [r0, #0]	@ 000d96dc 0068
.org 0xd96de
	movs r5, #4	@ 000d96de 0425
.org 0xd96e0
	ldr r0, [r0, #4]	@ 000d96e0 4068
.org 0xd96e2
	str r0, [r4, #20]	@ 000d96e2 6061
.org 0xd96e4
	adds r0, r4, #0	@ 000d96e4 201c
.org 0xd96e6
	bl 0x1cc9c	@ 000d96e6 43f7d9fa
.org 0xd96ea
	ldrb r1, [r4, #10]	@ 000d96ea a17a
.org 0xd96ec
	movs r0, #1	@ 000d96ec 0120
.org 0xd96ee
	orrs r0, r1	@ 000d96ee 0843
.org 0xd96f0
	movs r1, #2	@ 000d96f0 0221
.org 0xd96f2
	orrs r0, r1	@ 000d96f2 0843
.org 0xd96f4
	strb r0, [r4, #10]	@ 000d96f4 a072
.org 0xd96f6
	adds r0, r4, #0	@ 000d96f6 201c
.org 0xd96f8
	bl 0x1ceec	@ 000d96f8 43f7f8fb
.org 0xd96fc
	ldrb r2, [r4, #17]	@ 000d96fc 627c
.org 0xd96fe
	lsrs r0, r2, #4	@ 000d96fe 1009
.org 0xd9700
	cmp r0, #1	@ 000d9700 0128
.org 0xd9702
	beq.n 0xd9778	@ 000d9702 39d0
.org 0xd9704
	cmp r0, #1	@ 000d9704 0128
.org 0xd9706
	bgt.n 0xd9714	@ 000d9706 05dc
.org 0xd9708
	cmp r0, #0	@ 000d9708 0028
.org 0xd970a
	beq.n 0xd971a	@ 000d970a 06d0
.org 0xd970c
	b.n 0xd9818	@ 000d970c 84e0
.org 0xd970e
	.byte 0x00	@ 000d970e data
.org 0xd970f
	.byte 0x00	@ 000d970f data
.org 0xd9710
	.byte 0x64,0x6f,0x86,0x08	@ 000d9710 data
.org 0xd9714
	cmp r0, #2	@ 000d9714 0228
.org 0xd9716
	beq.n 0xd97d4	@ 000d9716 5dd0
.org 0xd9718
	b.n 0xd9818	@ 000d9718 7ee0
.org 0xd971a
	ldr r1, [pc, #68]	@ 000d971a 1149
.org 0xd971c
	adds r0, r5, #0	@ 000d971c 281c
.org 0xd971e
	ands r0, r2	@ 000d971e 1040
.org 0xd9720
	lsls r0, r0, #24	@ 000d9720 0006
.org 0xd9722
	lsrs r0, r0, #24	@ 000d9722 000e
.org 0xd9724
	lsls r2, r0, #1	@ 000d9724 4200
.org 0xd9726
	adds r2, r2, r0	@ 000d9726 1218
.org 0xd9728
	adds r2, r2, r1	@ 000d9728 5218
.org 0xd972a
	ldr r0, [pc, #56]	@ 000d972a 0e48
.org 0xd972c
	adds r1, r0, #0	@ 000d972c 011c
.org 0xd972e
	ldrb r2, [r2, #0]	@ 000d972e 1278
.org 0xd9730
	adds r1, r1, r2	@ 000d9730 8918
.org 0xd9732
	lsls r1, r1, #16	@ 000d9732 0904
.org 0xd9734
	lsrs r1, r1, #16	@ 000d9734 090c
.org 0xd9736
	adds r0, r4, #0	@ 000d9736 201c
.org 0xd9738
	bl 0x1cf00	@ 000d9738 43f7e2fb
.org 0xd973c
	ldr r2, [pc, #40]	@ 000d973c 0a4a
.org 0xd973e
	ldr r1, [r2, #0]	@ 000d973e 1168
.org 0xd9740
	ldr r0, [pc, #40]	@ 000d9740 0a48
.org 0xd9742
	muls r0, r1	@ 000d9742 4843
.org 0xd9744
	ldr r1, [pc, #40]	@ 000d9744 0a49
.org 0xd9746
	adds r0, r0, r1	@ 000d9746 4018
.org 0xd9748
	lsls r0, r0, #1	@ 000d9748 4000
.org 0xd974a
	lsrs r1, r0, #1	@ 000d974a 4108
.org 0xd974c
	str r1, [r2, #0]	@ 000d974c 1160
.org 0xd974e
	lsrs r0, r0, #17	@ 000d974e 400c
.org 0xd9750
	movs r1, #127	@ 000d9750 7f21
.org 0xd9752
	ands r0, r1	@ 000d9752 0840
.org 0xd9754
	movs r1, #192	@ 000d9754 c021
.org 0xd9756
	lsls r1, r1, #1	@ 000d9756 4900
.org 0xd9758
	adds r0, r0, r1	@ 000d9758 4018
.org 0xd975a
	str r0, [r4, #92]	@ 000d975a e065
.org 0xd975c
	ldr r0, [pc, #20]	@ 000d975c 0548
.org 0xd975e
	b.n 0xd9816	@ 000d975e 5ae0
.org 0xd9760
	.byte 0x98,0x82,0x86,0x08	@ 000d9760 data
.org 0xd9764
	.byte 0x09,0x81,0x00,0x00	@ 000d9764 data
.org 0xd9768
	.byte 0x38,0xdc,0x02,0x02	@ 000d9768 data
.org 0xd976c
	.byte 0xfd,0x43,0x03,0x00	@ 000d976c data
.org 0xd9770
	.byte 0xc3,0x9e,0x26,0x00	@ 000d9770 data
.org 0xd9774
	.byte 0x80,0xfc,0xff,0xff	@ 000d9774 data
.org 0xd9778
	ldr r1, [pc, #64]	@ 000d9778 1049
.org 0xd977a
	adds r0, r5, #0	@ 000d977a 281c
.org 0xd977c
	ands r0, r2	@ 000d977c 1040
.org 0xd977e
	lsls r0, r0, #24	@ 000d977e 0006
.org 0xd9780
	lsrs r0, r0, #24	@ 000d9780 000e
.org 0xd9782
	lsls r2, r0, #1	@ 000d9782 4200
.org 0xd9784
	adds r2, r2, r0	@ 000d9784 1218
.org 0xd9786
	adds r1, #1	@ 000d9786 0131
.org 0xd9788
	adds r2, r2, r1	@ 000d9788 5218
.org 0xd978a
	ldr r0, [pc, #52]	@ 000d978a 0d48
.org 0xd978c
	adds r1, r0, #0	@ 000d978c 011c
.org 0xd978e
	ldrb r2, [r2, #0]	@ 000d978e 1278
.org 0xd9790
	adds r1, r1, r2	@ 000d9790 8918
.org 0xd9792
	lsls r1, r1, #16	@ 000d9792 0904
.org 0xd9794
	lsrs r1, r1, #16	@ 000d9794 090c
.org 0xd9796
	adds r0, r4, #0	@ 000d9796 201c
.org 0xd9798
	bl 0x1cf00	@ 000d9798 43f7b2fb
.org 0xd979c
	ldr r2, [pc, #36]	@ 000d979c 094a
.org 0xd979e
	ldr r1, [r2, #0]	@ 000d979e 1168
.org 0xd97a0
	ldr r0, [pc, #36]	@ 000d97a0 0948
.org 0xd97a2
	muls r0, r1	@ 000d97a2 4843
.org 0xd97a4
	ldr r1, [pc, #36]	@ 000d97a4 0949
.org 0xd97a6
	adds r0, r0, r1	@ 000d97a6 4018
.org 0xd97a8
	lsls r0, r0, #1	@ 000d97a8 4000
.org 0xd97aa
	lsrs r1, r0, #1	@ 000d97aa 4108
.org 0xd97ac
	str r1, [r2, #0]	@ 000d97ac 1160
.org 0xd97ae
	lsrs r0, r0, #17	@ 000d97ae 400c
.org 0xd97b0
	movs r1, #127	@ 000d97b0 7f21
.org 0xd97b2
	ands r0, r1	@ 000d97b2 0840
.org 0xd97b4
	negs r0, r0	@ 000d97b4 4042
.org 0xd97b6
	str r0, [r4, #92]	@ 000d97b6 e065
.org 0xd97b8
	ldr r0, [pc, #20]	@ 000d97b8 0548
.org 0xd97ba
	b.n 0xd9816	@ 000d97ba 2ce0
.org 0xd97bc
	.byte 0x98,0x82,0x86,0x08	@ 000d97bc data
.org 0xd97c0
	.byte 0x09,0x81,0x00,0x00	@ 000d97c0 data
.org 0xd97c4
	.byte 0x38,0xdc,0x02,0x02	@ 000d97c4 data
.org 0xd97c8
	.byte 0xfd,0x43,0x03,0x00	@ 000d97c8 data
.org 0xd97cc
	.byte 0xc3,0x9e,0x26,0x00	@ 000d97cc data
.org 0xd97d0
	.byte 0x80,0xfb,0xff,0xff	@ 000d97d0 data
.org 0xd97d4
	ldr r1, [pc, #108]	@ 000d97d4 1b49
.org 0xd97d6
	adds r0, r5, #0	@ 000d97d6 281c
.org 0xd97d8
	ands r0, r2	@ 000d97d8 1040
.org 0xd97da
	lsls r0, r0, #24	@ 000d97da 0006
.org 0xd97dc
	lsrs r0, r0, #24	@ 000d97dc 000e
.org 0xd97de
	lsls r2, r0, #1	@ 000d97de 4200
.org 0xd97e0
	adds r2, r2, r0	@ 000d97e0 1218
.org 0xd97e2
	adds r1, #2	@ 000d97e2 0231
.org 0xd97e4
	adds r2, r2, r1	@ 000d97e4 5218
.org 0xd97e6
	ldr r0, [pc, #96]	@ 000d97e6 1848
.org 0xd97e8
	adds r1, r0, #0	@ 000d97e8 011c
.org 0xd97ea
	ldrb r2, [r2, #0]	@ 000d97ea 1278
.org 0xd97ec
	adds r1, r1, r2	@ 000d97ec 8918
.org 0xd97ee
	lsls r1, r1, #16	@ 000d97ee 0904
.org 0xd97f0
	lsrs r1, r1, #16	@ 000d97f0 090c
.org 0xd97f2
	adds r0, r4, #0	@ 000d97f2 201c
.org 0xd97f4
	bl 0x1cf00	@ 000d97f4 43f784fb
.org 0xd97f8
	ldr r2, [pc, #80]	@ 000d97f8 144a
.org 0xd97fa
	ldr r1, [r2, #0]	@ 000d97fa 1168
.org 0xd97fc
	ldr r0, [pc, #80]	@ 000d97fc 1448
.org 0xd97fe
	muls r0, r1	@ 000d97fe 4843
.org 0xd9800
	ldr r1, [pc, #80]	@ 000d9800 1449
.org 0xd9802
	adds r0, r0, r1	@ 000d9802 4018
.org 0xd9804
	lsls r0, r0, #1	@ 000d9804 4000
.org 0xd9806
	lsrs r1, r0, #1	@ 000d9806 4108
.org 0xd9808
	str r1, [r2, #0]	@ 000d9808 1160
.org 0xd980a
	lsrs r0, r0, #17	@ 000d980a 400c
.org 0xd980c
	movs r1, #127	@ 000d980c 7f21
