@ FUN_080cd794  entry 0x080cd794  size 356
.thumb
.org 0xcd794
FUN_080cd794:
	push {r4, r5, r6, lr}	@ 000cd794 70b5
.org 0xcd796
	adds r6, r0, #0	@ 000cd796 061c
.org 0xcd798
	ldr r3, [r6, #40]	@ 000cd798 b36a
.org 0xcd79a
	ldrb r0, [r3, #12]	@ 000cd79a 187b
.org 0xcd79c
	cmp r0, #1	@ 000cd79c 0128
.org 0xcd79e
	bls.n 0xcd7dc	@ 000cd79e 1dd9
.org 0xcd7a0
	ldrb r1, [r6, #10]	@ 000cd7a0 b17a
.org 0xcd7a2
	movs r0, #254	@ 000cd7a2 fe20
.org 0xcd7a4
	ands r0, r1	@ 000cd7a4 0840
.org 0xcd7a6
	movs r2, #0	@ 000cd7a6 0022
.org 0xcd7a8
	movs r1, #253	@ 000cd7a8 fd21
.org 0xcd7aa
	ands r0, r1	@ 000cd7aa 0840
.org 0xcd7ac
	strb r0, [r6, #10]	@ 000cd7ac b072
.org 0xcd7ae
	adds r0, r6, #0	@ 000cd7ae 301c
.org 0xcd7b0
	adds r0, #140	@ 000cd7b0 8c30
.org 0xcd7b2
	str r2, [r0, #0]	@ 000cd7b2 0260
.org 0xcd7b4
	adds r0, #4	@ 000cd7b4 0430
.org 0xcd7b6
	str r2, [r0, #0]	@ 000cd7b6 0260
.org 0xcd7b8
	adds r0, #4	@ 000cd7b8 0430
.org 0xcd7ba
	strb r2, [r0, #0]	@ 000cd7ba 0270
.org 0xcd7bc
	ldrb r1, [r6, #10]	@ 000cd7bc b17a
.org 0xcd7be
	movs r0, #251	@ 000cd7be fb20
.org 0xcd7c0
	ands r0, r1	@ 000cd7c0 0840
.org 0xcd7c2
	strb r0, [r6, #10]	@ 000cd7c2 b072
.org 0xcd7c4
	ldr r1, [pc, #16]	@ 000cd7c4 0449
.org 0xcd7c6
	ldrb r0, [r6, #9]	@ 000cd7c6 707a
.org 0xcd7c8
	lsls r0, r0, #2	@ 000cd7c8 8000
.org 0xcd7ca
	adds r0, r0, r1	@ 000cd7ca 4018
.org 0xcd7cc
	movs r1, #3	@ 000cd7cc 0321
.org 0xcd7ce
	str r1, [r6, #12]	@ 000cd7ce f160
.org 0xcd7d0
	ldr r0, [r0, #0]	@ 000cd7d0 0068
.org 0xcd7d2
	ldr r0, [r0, #12]	@ 000cd7d2 c068
.org 0xcd7d4
	str r0, [r6, #20]	@ 000cd7d4 7061
.org 0xcd7d6
	b.n 0xcd91a	@ 000cd7d6 a0e0
.org 0xcd7d8
	.byte 0xf4,0x49,0x86,0x08	@ 000cd7d8 data
.org 0xcd7dc
	adds r1, r3, #0	@ 000cd7dc 191c
.org 0xcd7de
	adds r1, #215	@ 000cd7de d731
.org 0xcd7e0
	ldrb r0, [r1, #0]	@ 000cd7e0 0878
.org 0xcd7e2
	adds r0, #1	@ 000cd7e2 0130
.org 0xcd7e4
	strb r0, [r1, #0]	@ 000cd7e4 0870
.org 0xcd7e6
	ldr r0, [r3, #84]	@ 000cd7e6 586d
.org 0xcd7e8
	ldr r1, [r3, #88]	@ 000cd7e8 996d
.org 0xcd7ea
	str r0, [r6, #84]	@ 000cd7ea 7065
.org 0xcd7ec
	str r1, [r6, #88]	@ 000cd7ec b165
.org 0xcd7ee
	ldrb r0, [r6, #16]	@ 000cd7ee 307c
.org 0xcd7f0
	cmp r0, #0	@ 000cd7f0 0028
.org 0xcd7f2
	beq.n 0xcd806	@ 000cd7f2 08d0
.org 0xcd7f4
	ldr r1, [r6, #84]	@ 000cd7f4 716d
.org 0xcd7f6
	movs r0, #128	@ 000cd7f6 8020
.org 0xcd7f8
	lsls r0, r0, #4	@ 000cd7f8 0001
.org 0xcd7fa
	adds r1, r1, r0	@ 000cd7fa 0918
.org 0xcd7fc
	ldrb r0, [r6, #16]	@ 000cd7fc 307c
.org 0xcd7fe
	lsls r0, r0, #13	@ 000cd7fe 4003
.org 0xcd800
	subs r1, r1, r0	@ 000cd800 091a
.org 0xcd802
	str r1, [r6, #84]	@ 000cd802 7165
.org 0xcd804
	b.n 0xcd80e	@ 000cd804 03e0
.org 0xcd806
	ldr r0, [r6, #84]	@ 000cd806 706d
.org 0xcd808
	ldr r1, [pc, #20]	@ 000cd808 0549
.org 0xcd80a
	adds r0, r0, r1	@ 000cd80a 4018
.org 0xcd80c
	str r0, [r6, #84]	@ 000cd80c 7065
.org 0xcd80e
	ldrb r2, [r6, #13]	@ 000cd80e 727b
.org 0xcd810
	cmp r2, #1	@ 000cd810 012a
.org 0xcd812
	beq.n 0xcd884	@ 000cd812 37d0
.org 0xcd814
	cmp r2, #1	@ 000cd814 012a
.org 0xcd816
	bgt.n 0xcd824	@ 000cd816 05dc
.org 0xcd818
	cmp r2, #0	@ 000cd818 002a
.org 0xcd81a
	beq.n 0xcd82a	@ 000cd81a 06d0
.org 0xcd81c
	b.n 0xcd914	@ 000cd81c 7ae0
.org 0xcd81e
	.byte 0x00	@ 000cd81e data
.org 0xcd81f
	.byte 0x00	@ 000cd81f data
.org 0xcd820
	.byte 0x00,0xf8,0xff,0xff	@ 000cd820 data
.org 0xcd824
	cmp r2, #2	@ 000cd824 022a
.org 0xcd826
	beq.n 0xcd8ec	@ 000cd826 61d0
.org 0xcd828
	b.n 0xcd914	@ 000cd828 74e0
.org 0xcd82a
	ldrb r0, [r6, #18]	@ 000cd82a b07c
.org 0xcd82c
	subs r0, #1	@ 000cd82c 0138
.org 0xcd82e
	strb r0, [r6, #18]	@ 000cd82e b074
.org 0xcd830
	lsls r0, r0, #24	@ 000cd830 0006
.org 0xcd832
	lsrs r0, r0, #24	@ 000cd832 000e
.org 0xcd834
	cmp r0, #255	@ 000cd834 ff28
.org 0xcd836
	bne.n 0xcd914	@ 000cd836 6dd1
.org 0xcd838
	ldrb r0, [r6, #16]	@ 000cd838 307c
.org 0xcd83a
	cmp r0, #0	@ 000cd83a 0028
.org 0xcd83c
	beq.n 0xcd84c	@ 000cd83c 06d0
.org 0xcd83e
	ldr r1, [pc, #8]	@ 000cd83e 0249
.org 0xcd840
	adds r0, r6, #0	@ 000cd840 301c
.org 0xcd842
	bl 0x1cf00	@ 000cd842 4ff75dfb
.org 0xcd846
	b.n 0xcd854	@ 000cd846 05e0
.org 0xcd848
	.byte 0x07,0xd6,0x00,0x00	@ 000cd848 data
.org 0xcd84c
	ldr r1, [pc, #44]	@ 000cd84c 0b49
.org 0xcd84e
	adds r0, r6, #0	@ 000cd84e 301c
.org 0xcd850
	bl 0x1cf00	@ 000cd850 4ff756fb
.org 0xcd854
	ldrb r1, [r6, #10]	@ 000cd854 b17a
.org 0xcd856
	movs r0, #4	@ 000cd856 0420
.org 0xcd858
	movs r5, #0	@ 000cd858 0025
.org 0xcd85a
	orrs r0, r1	@ 000cd85a 0843
.org 0xcd85c
	strb r0, [r6, #10]	@ 000cd85c b072
.org 0xcd85e
	adds r4, r6, #0	@ 000cd85e 341c
.org 0xcd860
	adds r4, #116	@ 000cd860 7434
.org 0xcd862
	ldr r1, [pc, #28]	@ 000cd862 0749
.org 0xcd864
	adds r2, r6, #0	@ 000cd864 321c
.org 0xcd866
	adds r2, #84	@ 000cd866 5432
.org 0xcd868
	adds r0, r4, #0	@ 000cd868 201c
.org 0xcd86a
	movs r3, #8	@ 000cd86a 0823
.org 0xcd86c
	bl 0x5760	@ 000cd86c 37f778ff
.org 0xcd870
	str r6, [r4, #44]	@ 000cd870 e662
.org 0xcd872
	str r5, [r4, #36]	@ 000cd872 6562
.org 0xcd874
	movs r0, #64	@ 000cd874 4020
.org 0xcd876
	strb r0, [r6, #18]	@ 000cd876 b074
.org 0xcd878
	b.n 0xcd8e0	@ 000cd878 32e0
.org 0xcd87a
	.byte 0x00	@ 000cd87a data
.org 0xcd87b
	.byte 0x00	@ 000cd87b data
.org 0xcd87c
	.byte 0x06,0xd6,0x00,0x00	@ 000cd87c data
.org 0xcd880
	.byte 0x24,0x6a,0x86,0x08	@ 000cd880 data
.org 0xcd884
	ldrb r0, [r6, #17]	@ 000cd884 707c
.org 0xcd886
	cmp r0, #0	@ 000cd886 0028
.org 0xcd888
	beq.n 0xcd89c	@ 000cd888 08d0
.org 0xcd88a
	adds r0, r3, #0	@ 000cd88a 181c
.org 0xcd88c
	adds r0, #218	@ 000cd88c da30
.org 0xcd88e
	ldrb r0, [r0, #0]	@ 000cd88e 0078
.org 0xcd890
	cmp r0, #0	@ 000cd890 0028
.org 0xcd892
	bne.n 0xcd914	@ 000cd892 3fd1
.org 0xcd894
	ldrb r0, [r6, #16]	@ 000cd894 307c
.org 0xcd896
	cmp r0, #0	@ 000cd896 0028
.org 0xcd898
	bne.n 0xcd8b0	@ 000cd898 0ad1
.org 0xcd89a
	b.n 0xcd8c0	@ 000cd89a 11e0
.org 0xcd89c
	ldrb r0, [r6, #18]	@ 000cd89c b07c
.org 0xcd89e
	subs r0, #1	@ 000cd89e 0138
.org 0xcd8a0
	strb r0, [r6, #18]	@ 000cd8a0 b074
.org 0xcd8a2
	lsls r0, r0, #24	@ 000cd8a2 0006
.org 0xcd8a4
	lsrs r0, r0, #24	@ 000cd8a4 000e
.org 0xcd8a6
	cmp r0, #255	@ 000cd8a6 ff28
.org 0xcd8a8
	bne.n 0xcd914	@ 000cd8a8 34d1
.org 0xcd8aa
	ldrb r0, [r6, #16]	@ 000cd8aa 307c
.org 0xcd8ac
	cmp r0, #0	@ 000cd8ac 0028
.org 0xcd8ae
	beq.n 0xcd8c0	@ 000cd8ae 07d0
.org 0xcd8b0
	ldr r1, [pc, #8]	@ 000cd8b0 0249
.org 0xcd8b2
	adds r0, r6, #0	@ 000cd8b2 301c
.org 0xcd8b4
	bl 0x1cf00	@ 000cd8b4 4ff724fb
.org 0xcd8b8
	b.n 0xcd8c8	@ 000cd8b8 06e0
.org 0xcd8ba
	.byte 0x00	@ 000cd8ba data
.org 0xcd8bb
	.byte 0x00	@ 000cd8bb data
.org 0xcd8bc
	.byte 0x09,0xd6,0x00,0x00	@ 000cd8bc data
.org 0xcd8c0
	ldr r1, [pc, #36]	@ 000cd8c0 0949
.org 0xcd8c2
	adds r0, r6, #0	@ 000cd8c2 301c
.org 0xcd8c4
	bl 0x1cf00	@ 000cd8c4 4ff71cfb
.org 0xcd8c8
	adds r0, r6, #0	@ 000cd8c8 301c
.org 0xcd8ca
	adds r0, #140	@ 000cd8ca 8c30
.org 0xcd8cc
	movs r1, #0	@ 000cd8cc 0021
.org 0xcd8ce
	str r1, [r0, #0]	@ 000cd8ce 0160
.org 0xcd8d0
	adds r0, #4	@ 000cd8d0 0430
.org 0xcd8d2
	str r1, [r0, #0]	@ 000cd8d2 0160
.org 0xcd8d4
	adds r0, #4	@ 000cd8d4 0430
.org 0xcd8d6
	strb r1, [r0, #0]	@ 000cd8d6 0170
.org 0xcd8d8
	ldrb r1, [r6, #10]	@ 000cd8d8 b17a
.org 0xcd8da
	movs r0, #251	@ 000cd8da fb20
.org 0xcd8dc
	ands r0, r1	@ 000cd8dc 0840
.org 0xcd8de
	strb r0, [r6, #10]	@ 000cd8de b072
.org 0xcd8e0
	ldrb r0, [r6, #13]	@ 000cd8e0 707b
.org 0xcd8e2
	adds r0, #1	@ 000cd8e2 0130
.org 0xcd8e4
	strb r0, [r6, #13]	@ 000cd8e4 7073
.org 0xcd8e6
	b.n 0xcd914	@ 000cd8e6 15e0
.org 0xcd8e8
	.byte 0x08,0xd6,0x00,0x00	@ 000cd8e8 data
.org 0xcd8ec
	adds r0, r6, #0	@ 000cd8ec 301c
.org 0xcd8ee
	adds r0, #115	@ 000cd8ee 7330
.org 0xcd8f0
	ldrb r0, [r0, #0]	@ 000cd8f0 0078
.org 0xcd8f2
	cmp r0, #3	@ 000cd8f2 0328
.org 0xcd8f4
	bne.n 0xcd914	@ 000cd8f4 0ed1
.org 0xcd8f6
	ldr r1, [pc, #24]	@ 000cd8f6 0649
