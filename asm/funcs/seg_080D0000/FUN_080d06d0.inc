@ FUN_080d06d0  entry 0x080d06d0  size 178
.thumb
.org 0xd06d0
FUN_080d06d0:
	push {lr}	@ 000d06d0 00b5
.org 0xd06d2
	adds r3, r0, #0	@ 000d06d2 031c
.org 0xd06d4
	ldr r0, [r3, #84]	@ 000d06d4 586d
.org 0xd06d6
	ldr r1, [r3, #92]	@ 000d06d6 d96d
.org 0xd06d8
	adds r0, r0, r1	@ 000d06d8 4018
.org 0xd06da
	str r0, [r3, #84]	@ 000d06da 5865
.org 0xd06dc
	ldr r0, [r3, #88]	@ 000d06dc 986d
.org 0xd06de
	ldr r1, [r3, #96]	@ 000d06de 196e
.org 0xd06e0
	adds r0, r0, r1	@ 000d06e0 4018
.org 0xd06e2
	str r0, [r3, #88]	@ 000d06e2 9865
.org 0xd06e4
	adds r0, r3, #0	@ 000d06e4 181c
.org 0xd06e6
	adds r0, #113	@ 000d06e6 7130
.org 0xd06e8
	ldrb r0, [r0, #0]	@ 000d06e8 0078
.org 0xd06ea
	lsls r0, r0, #24	@ 000d06ea 0006
.org 0xd06ec
	asrs r0, r0, #24	@ 000d06ec 0016
.org 0xd06ee
	cmp r0, #5	@ 000d06ee 0528
.org 0xd06f0
	bne.n 0xd073a	@ 000d06f0 23d1
.org 0xd06f2
	adds r0, r3, #0	@ 000d06f2 181c
.org 0xd06f4
	adds r0, #140	@ 000d06f4 8c30
.org 0xd06f6
	movs r1, #0	@ 000d06f6 0021
.org 0xd06f8
	str r1, [r0, #0]	@ 000d06f8 0160
.org 0xd06fa
	adds r0, #4	@ 000d06fa 0430
.org 0xd06fc
	str r1, [r0, #0]	@ 000d06fc 0160
.org 0xd06fe
	adds r0, #4	@ 000d06fe 0430
.org 0xd0700
	strb r1, [r0, #0]	@ 000d0700 0170
.org 0xd0702
	ldrb r1, [r3, #10]	@ 000d0702 997a
.org 0xd0704
	movs r0, #251	@ 000d0704 fb20
.org 0xd0706
	ands r0, r1	@ 000d0706 0840
.org 0xd0708
	strb r0, [r3, #10]	@ 000d0708 9872
.org 0xd070a
	ldr r2, [pc, #120]	@ 000d070a 1e4a
.org 0xd070c
	ldrb r0, [r3, #16]	@ 000d070c 187c
.org 0xd070e
	lsls r0, r0, #29	@ 000d070e 4007
.org 0xd0710
	movs r1, #128	@ 000d0710 8021
.org 0xd0712
	lsls r1, r1, #23	@ 000d0712 c905
.org 0xd0714
	adds r0, r0, r1	@ 000d0714 4018
.org 0xd0716
	lsrs r0, r0, #23	@ 000d0716 c00d
.org 0xd0718
	adds r0, r0, r2	@ 000d0718 8018
.org 0xd071a
	movs r1, #0	@ 000d071a 0021
.org 0xd071c
	ldrsh r0, [r0, r1]	@ 000d071c 405e
.org 0xd071e
	lsrs r1, r0, #31	@ 000d071e c10f
.org 0xd0720
	adds r0, r0, r1	@ 000d0720 4018
.org 0xd0722
	asrs r0, r0, #1	@ 000d0722 4010
.org 0xd0724
	str r0, [r3, #92]	@ 000d0724 d865
.org 0xd0726
	ldrb r0, [r3, #16]	@ 000d0726 187c
.org 0xd0728
	lsls r0, r0, #29	@ 000d0728 4007
.org 0xd072a
	lsrs r0, r0, #23	@ 000d072a c00d
.org 0xd072c
	adds r0, r0, r2	@ 000d072c 8018
.org 0xd072e
	movs r1, #0	@ 000d072e 0021
.org 0xd0730
	ldrsh r0, [r0, r1]	@ 000d0730 405e
.org 0xd0732
	lsrs r1, r0, #31	@ 000d0732 c10f
.org 0xd0734
	adds r0, r0, r1	@ 000d0734 4018
.org 0xd0736
	asrs r0, r0, #1	@ 000d0736 4010
.org 0xd0738
	str r0, [r3, #96]	@ 000d0738 1866
.org 0xd073a
	ldr r0, [r3, #40]	@ 000d073a 986a
.org 0xd073c
	ldrh r0, [r0, #0]	@ 000d073c 0088
.org 0xd073e
	lsrs r0, r0, #8	@ 000d073e 000a
.org 0xd0740
	cmp r0, #255	@ 000d0740 ff28
.org 0xd0742
	bne.n 0xd075c	@ 000d0742 0bd1
.org 0xd0744
	adds r0, r3, #0	@ 000d0744 181c
.org 0xd0746
	adds r0, #140	@ 000d0746 8c30
.org 0xd0748
	movs r1, #0	@ 000d0748 0021
.org 0xd074a
	str r1, [r0, #0]	@ 000d074a 0160
.org 0xd074c
	adds r0, #4	@ 000d074c 0430
.org 0xd074e
	str r1, [r0, #0]	@ 000d074e 0160
.org 0xd0750
	adds r0, #4	@ 000d0750 0430
.org 0xd0752
	strb r1, [r0, #0]	@ 000d0752 0170
.org 0xd0754
	ldrb r1, [r3, #10]	@ 000d0754 997a
.org 0xd0756
	movs r0, #251	@ 000d0756 fb20
.org 0xd0758
	ands r0, r1	@ 000d0758 0840
.org 0xd075a
	strb r0, [r3, #10]	@ 000d075a 9872
.org 0xd075c
	adds r0, r3, #0	@ 000d075c 181c
.org 0xd075e
	adds r0, #115	@ 000d075e 7330
.org 0xd0760
	ldrb r0, [r0, #0]	@ 000d0760 0078
.org 0xd0762
	cmp r0, #3	@ 000d0762 0328
.org 0xd0764
	bne.n 0xd0778	@ 000d0764 08d1
.org 0xd0766
	ldr r1, [pc, #32]	@ 000d0766 0849
.org 0xd0768
	ldrb r0, [r3, #9]	@ 000d0768 587a
.org 0xd076a
	lsls r0, r0, #2	@ 000d076a 8000
.org 0xd076c
	adds r0, r0, r1	@ 000d076c 4018
.org 0xd076e
	movs r1, #2	@ 000d076e 0221
.org 0xd0770
	str r1, [r3, #12]	@ 000d0770 d960
.org 0xd0772
	ldr r0, [r0, #0]	@ 000d0772 0068
.org 0xd0774
	ldr r0, [r0, #8]	@ 000d0774 8068
.org 0xd0776
	str r0, [r3, #20]	@ 000d0776 5861
.org 0xd0778
	adds r0, r3, #0	@ 000d0778 181c
.org 0xd077a
	bl 0x1cff0	@ 000d077a 4cf739fc
.org 0xd077e
	pop {r0}	@ 000d077e 01bc
.org 0xd0780
	bx r0	@ 000d0780 0047
