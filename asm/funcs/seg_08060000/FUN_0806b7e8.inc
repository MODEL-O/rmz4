@ FUN_0806b7e8  entry 0x0806b7e8  size 180
.thumb
.org 0x6b7e8
FUN_0806b7e8:
	push {r4, lr}	@ 0006b7e8 10b5
.org 0x6b7ea
	adds r4, r0, #0	@ 0006b7ea 041c
.org 0x6b7ec
	ldrb r0, [r4, #14]	@ 0006b7ec a07b
.org 0x6b7ee
	cmp r0, #0	@ 0006b7ee 0028
.org 0x6b7f0
	bne.n 0x6b834	@ 0006b7f0 20d1
.org 0x6b7f2
	ldr r1, [pc, #32]	@ 0006b7f2 0849
.org 0x6b7f4
	adds r0, r4, #0	@ 0006b7f4 201c
.org 0x6b7f6
	bl 0x1cf00	@ 0006b7f6 b1f783fb
.org 0x6b7fa
	movs r0, #199	@ 0006b7fa c720
.org 0x6b7fc
	bl 0x2b10	@ 0006b7fc 97f788f9
.org 0x6b800
	ldrb r1, [r4, #10]	@ 0006b800 a17a
.org 0x6b802
	movs r0, #16	@ 0006b802 1020
.org 0x6b804
	ands r0, r1	@ 0006b804 0840
.org 0x6b806
	cmp r0, #0	@ 0006b806 0028
.org 0x6b808
	beq.n 0x6b818	@ 0006b808 06d0
.org 0x6b80a
	movs r0, #128	@ 0006b80a 8020
.org 0x6b80c
	lsls r0, r0, #3	@ 0006b80c c000
.org 0x6b80e
	str r0, [r4, #92]	@ 0006b80e e065
.org 0x6b810
	movs r0, #24	@ 0006b810 1820
.org 0x6b812
	b.n 0x6b820	@ 0006b812 05e0
.org 0x6b814
	.byte 0x09,0xaa,0x00,0x00	@ 0006b814 data
.org 0x6b818
	ldr r0, [pc, #76]	@ 0006b818 1348
.org 0x6b81a
	str r0, [r4, #92]	@ 0006b81a e065
.org 0x6b81c
	movs r0, #24	@ 0006b81c 1820
.org 0x6b81e
	negs r0, r0	@ 0006b81e 4042
.org 0x6b820
	str r0, [r4, #100]	@ 0006b820 6066
.org 0x6b822
	ldr r0, [r4, #84]	@ 0006b822 606d
.org 0x6b824
	str r0, [r4, #96]	@ 0006b824 2066
.org 0x6b826
	movs r1, #0	@ 0006b826 0021
.org 0x6b828
	movs r0, #25	@ 0006b828 1920
.org 0x6b82a
	strb r0, [r4, #18]	@ 0006b82a a074
.org 0x6b82c
	strb r1, [r4, #15]	@ 0006b82c e173
.org 0x6b82e
	ldrb r0, [r4, #14]	@ 0006b82e a07b
.org 0x6b830
	adds r0, #1	@ 0006b830 0130
.org 0x6b832
	strb r0, [r4, #14]	@ 0006b832 a073
.org 0x6b834
	adds r0, r4, #0	@ 0006b834 201c
.org 0x6b836
	bl 0x1cff0	@ 0006b836 b1f7dbfb
.org 0x6b83a
	ldrb r0, [r4, #15]	@ 0006b83a e07b
.org 0x6b83c
	cmp r0, #0	@ 0006b83c 0028
.org 0x6b83e
	bne.n 0x6b870	@ 0006b83e 17d1
.org 0x6b840
	adds r0, r4, #0	@ 0006b840 201c
.org 0x6b842
	adds r0, #113	@ 0006b842 7130
.org 0x6b844
	ldrb r0, [r0, #0]	@ 0006b844 0078
.org 0x6b846
	lsls r0, r0, #24	@ 0006b846 0006
.org 0x6b848
	asrs r0, r0, #24	@ 0006b848 0016
.org 0x6b84a
	cmp r0, #1	@ 0006b84a 0128
.org 0x6b84c
	ble.n 0x6b8a4	@ 0006b84c 2add
.org 0x6b84e
	movs r0, #210	@ 0006b84e d220
.org 0x6b850
	bl 0x2b10	@ 0006b850 97f75ef9
.org 0x6b854
	adds r0, r4, #0	@ 0006b854 201c
.org 0x6b856
	adds r0, #116	@ 0006b856 7430
.org 0x6b858
	ldr r1, [pc, #16]	@ 0006b858 0449
.org 0x6b85a
	bl 0x5784	@ 0006b85a 99f793ff
.org 0x6b85e
	ldrb r0, [r4, #15]	@ 0006b85e e07b
.org 0x6b860
	adds r0, #1	@ 0006b860 0130
.org 0x6b862
	strb r0, [r4, #15]	@ 0006b862 e073
.org 0x6b864
	b.n 0x6b8a4	@ 0006b864 1ee0
.org 0x6b866
	.byte 0x00	@ 0006b866 data
.org 0x6b867
	.byte 0x00	@ 0006b867 data
.org 0x6b868
	.byte 0x00,0xfc,0xff,0xff	@ 0006b868 data
.org 0x6b86c
	.byte 0x0c,0xc2,0x85,0x08	@ 0006b86c data
.org 0x6b870
	ldr r0, [r4, #84]	@ 0006b870 606d
.org 0x6b872
	ldr r1, [r4, #92]	@ 0006b872 e16d
.org 0x6b874
	adds r0, r0, r1	@ 0006b874 4018
.org 0x6b876
	str r0, [r4, #84]	@ 0006b876 6065
.org 0x6b878
	adds r2, r1, #0	@ 0006b878 0a1c
.org 0x6b87a
	cmp r1, #0	@ 0006b87a 0029
.org 0x6b87c
	bge.n 0x6b880	@ 0006b87c 00da
.org 0x6b87e
	negs r2, r1	@ 0006b87e 4a42
.org 0x6b880
	movs r0, #128	@ 0006b880 8020
.org 0x6b882
	lsls r0, r0, #2	@ 0006b882 8000
.org 0x6b884
	cmp r2, r0	@ 0006b884 8242
.org 0x6b886
	ble.n 0x6b88e	@ 0006b886 02dd
.org 0x6b888
	ldr r0, [r4, #100]	@ 0006b888 606e
.org 0x6b88a
	subs r0, r1, r0	@ 0006b88a 081a
.org 0x6b88c
	str r0, [r4, #92]	@ 0006b88c e065
.org 0x6b88e
	ldrb r0, [r4, #18]	@ 0006b88e a07c
.org 0x6b890
	subs r0, #1	@ 0006b890 0138
.org 0x6b892
	strb r0, [r4, #18]	@ 0006b892 a074
.org 0x6b894
	lsls r0, r0, #24	@ 0006b894 0006
.org 0x6b896
	lsrs r0, r0, #24	@ 0006b896 000e
.org 0x6b898
	cmp r0, #255	@ 0006b898 ff28
.org 0x6b89a
	bne.n 0x6b8a4	@ 0006b89a 03d1
