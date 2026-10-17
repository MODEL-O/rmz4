@ FUN_0806e784  entry 0x0806e784  size 366
.thumb
.org 0x6e784
FUN_0806e784:
	push {r4, r5, lr}	@ 0006e784 30b5
.org 0x6e786
	sub sp, #12	@ 0006e786 83b0
.org 0x6e788
	adds r5, r0, #0	@ 0006e788 051c
.org 0x6e78a
	ldr r1, [pc, #276]	@ 0006e78a 4549
.org 0x6e78c
	mov r0, sp	@ 0006e78c 6846
.org 0x6e78e
	movs r2, #3	@ 0006e78e 0322
.org 0x6e790
	bl 0x129258	@ 0006e790 baf062fd
.org 0x6e794
	ldrb r4, [r5, #15]	@ 0006e794 ec7b
.org 0x6e796
	cmp r4, #0	@ 0006e796 002c
.org 0x6e798
	bne.n 0x6e7c4	@ 0006e798 14d1
.org 0x6e79a
	movs r1, #168	@ 0006e79a a821
.org 0x6e79c
	lsls r1, r1, #2	@ 0006e79c 8900
.org 0x6e79e
	movs r0, #118	@ 0006e79e 7620
.org 0x6e7a0
	bl 0x249c	@ 0006e7a0 93f77cfe
.org 0x6e7a4
	adds r0, r5, #0	@ 0006e7a4 281c
.org 0x6e7a6
	adds r0, #116	@ 0006e7a6 7430
.org 0x6e7a8
	ldr r1, [pc, #248]	@ 0006e7a8 3e49
.org 0x6e7aa
	bl 0x5784	@ 0006e7aa 96f7ebff
.org 0x6e7ae
	movs r0, #3	@ 0006e7ae 0320
.org 0x6e7b0
	strb r0, [r5, #18]	@ 0006e7b0 a874
.org 0x6e7b2
	mov r0, sp	@ 0006e7b2 6846
.org 0x6e7b4
	ldrb r1, [r0, #0]	@ 0006e7b4 0178
.org 0x6e7b6
	lsls r0, r1, #4	@ 0006e7b6 0801
.org 0x6e7b8
	subs r0, r0, r1	@ 0006e7b8 401a
.org 0x6e7ba
	str r0, [r5, #100]	@ 0006e7ba 6866
.org 0x6e7bc
	strb r4, [r5, #19]	@ 0006e7bc ec74
.org 0x6e7be
	ldrb r0, [r5, #15]	@ 0006e7be e87b
.org 0x6e7c0
	adds r0, #1	@ 0006e7c0 0130
.org 0x6e7c2
	strb r0, [r5, #15]	@ 0006e7c2 e873
.org 0x6e7c4
	movs r0, #118	@ 0006e7c4 7620
.org 0x6e7c6
	bl 0x25d8	@ 0006e7c6 93f707ff
.org 0x6e7ca
	ldr r2, [r5, #100]	@ 0006e7ca 6a6e
.org 0x6e7cc
	cmp r2, #0	@ 0006e7cc 002a
.org 0x6e7ce
	ble.n 0x6e8bc	@ 0006e7ce 75dd
.org 0x6e7d0
	ldrb r1, [r5, #18]	@ 0006e7d0 a97c
.org 0x6e7d2
	movs r0, #3	@ 0006e7d2 0320
.org 0x6e7d4
	subs r0, r0, r1	@ 0006e7d4 401a
.org 0x6e7d6
	add r0, sp	@ 0006e7d6 6844
.org 0x6e7d8
	ldrb r1, [r0, #0]	@ 0006e7d8 0178
.org 0x6e7da
	adds r0, r2, #0	@ 0006e7da 101c
.org 0x6e7dc
	bl 0x129050	@ 0006e7dc baf038fc
.org 0x6e7e0
	cmp r0, #0	@ 0006e7e0 0028
.org 0x6e7e2
	bne.n 0x6e838	@ 0006e7e2 29d1
.org 0x6e7e4
	ldr r2, [pc, #192]	@ 0006e7e4 304a
.org 0x6e7e6
	ldr r1, [r2, #0]	@ 0006e7e6 1168
.org 0x6e7e8
	ldr r0, [pc, #192]	@ 0006e7e8 3048
.org 0x6e7ea
	muls r0, r1	@ 0006e7ea 4843
.org 0x6e7ec
	ldr r1, [pc, #192]	@ 0006e7ec 3049
.org 0x6e7ee
	adds r0, r0, r1	@ 0006e7ee 4018
.org 0x6e7f0
	lsls r0, r0, #1	@ 0006e7f0 4000
.org 0x6e7f2
	lsrs r1, r0, #1	@ 0006e7f2 4108
.org 0x6e7f4
	str r1, [r2, #0]	@ 0006e7f4 1160
.org 0x6e7f6
	lsrs r0, r0, #17	@ 0006e7f6 400c
.org 0x6e7f8
	movs r1, #22	@ 0006e7f8 1621
.org 0x6e7fa
	bl 0x129198	@ 0006e7fa baf0cdfc
.org 0x6e7fe
	lsls r0, r0, #24	@ 0006e7fe 0006
.org 0x6e800
	adds r4, r5, #0	@ 0006e800 2c1c
.org 0x6e802
	adds r4, #188	@ 0006e802 bc34
.org 0x6e804
	ldr r3, [pc, #172]	@ 0006e804 2b4b
.org 0x6e806
	lsrs r0, r0, #21	@ 0006e806 400d
.org 0x6e808
	adds r1, r0, r3	@ 0006e808 c118
.org 0x6e80a
	ldr r2, [r1, #0]	@ 0006e80a 0a68
.org 0x6e80c
	movs r1, #208	@ 0006e80c d021
.org 0x6e80e
	lsls r1, r1, #7	@ 0006e80e c901
.org 0x6e810
	adds r2, r2, r1	@ 0006e810 5218
.org 0x6e812
	ldr r1, [r4, #0]	@ 0006e812 2168
.org 0x6e814
	adds r1, r1, r2	@ 0006e814 8918
.org 0x6e816
	str r1, [sp, #4]	@ 0006e816 0191
.org 0x6e818
	adds r1, r5, #0	@ 0006e818 291c
.org 0x6e81a
	adds r1, #184	@ 0006e81a b831
.org 0x6e81c
	adds r3, #4	@ 0006e81c 0433
.org 0x6e81e
	adds r0, r0, r3	@ 0006e81e c018
.org 0x6e820
	ldr r0, [r0, #0]	@ 0006e820 0068
.org 0x6e822
	ldr r2, [pc, #148]	@ 0006e822 254a
.org 0x6e824
	adds r0, r0, r2	@ 0006e824 8018
.org 0x6e826
	ldr r2, [r1, #0]	@ 0006e826 0a68
.org 0x6e828
	adds r2, r2, r0	@ 0006e828 1218
.org 0x6e82a
	add r1, sp, #4	@ 0006e82a 01a9
.org 0x6e82c
	str r2, [r1, #4]	@ 0006e82c 4a60
.org 0x6e82e
	adds r0, r5, #0	@ 0006e82e 281c
.org 0x6e830
	movs r2, #2	@ 0006e830 0222
.org 0x6e832
	movs r3, #0	@ 0006e832 0023
.org 0x6e834
	bl 0xa5888	@ 0006e834 37f028f8
.org 0x6e838
	ldr r0, [r5, #100]	@ 0006e838 686e
.org 0x6e83a
	subs r0, #1	@ 0006e83a 0138
.org 0x6e83c
	str r0, [r5, #100]	@ 0006e83c 6866
.org 0x6e83e
	cmp r0, #0	@ 0006e83e 0028
.org 0x6e840
	bne.n 0x6e906	@ 0006e840 61d1
.org 0x6e842
	ldr r2, [pc, #100]	@ 0006e842 194a
.org 0x6e844
	ldr r1, [r2, #0]	@ 0006e844 1168
.org 0x6e846
	ldr r0, [pc, #100]	@ 0006e846 1948
.org 0x6e848
	muls r0, r1	@ 0006e848 4843
.org 0x6e84a
	ldr r1, [pc, #100]	@ 0006e84a 1949
.org 0x6e84c
	adds r0, r0, r1	@ 0006e84c 4018
.org 0x6e84e
	lsls r0, r0, #1	@ 0006e84e 4000
.org 0x6e850
	lsrs r1, r0, #1	@ 0006e850 4108
.org 0x6e852
	str r1, [r2, #0]	@ 0006e852 1160
.org 0x6e854
	lsrs r0, r0, #17	@ 0006e854 400c
.org 0x6e856
	movs r1, #22	@ 0006e856 1621
.org 0x6e858
	bl 0x129198	@ 0006e858 baf09efc
.org 0x6e85c
	lsls r0, r0, #24	@ 0006e85c 0006
.org 0x6e85e
	adds r4, r5, #0	@ 0006e85e 2c1c
.org 0x6e860
	adds r4, #188	@ 0006e860 bc34
.org 0x6e862
	ldr r3, [pc, #80]	@ 0006e862 144b
.org 0x6e864
	lsrs r0, r0, #21	@ 0006e864 400d
.org 0x6e866
	adds r1, r0, r3	@ 0006e866 c118
.org 0x6e868
	ldr r2, [r1, #0]	@ 0006e868 0a68
.org 0x6e86a
	movs r1, #208	@ 0006e86a d021
.org 0x6e86c
	lsls r1, r1, #7	@ 0006e86c c901
.org 0x6e86e
	adds r2, r2, r1	@ 0006e86e 5218
.org 0x6e870
	ldr r1, [r4, #0]	@ 0006e870 2168
.org 0x6e872
	adds r1, r1, r2	@ 0006e872 8918
.org 0x6e874
	str r1, [sp, #4]	@ 0006e874 0191
.org 0x6e876
	add r1, sp, #4	@ 0006e876 01a9
.org 0x6e878
	subs r4, #4	@ 0006e878 043c
.org 0x6e87a
	adds r3, #4	@ 0006e87a 0433
.org 0x6e87c
	adds r0, r0, r3	@ 0006e87c c018
.org 0x6e87e
	ldr r2, [r0, #0]	@ 0006e87e 0268
.org 0x6e880
	ldr r0, [pc, #52]	@ 0006e880 0d48
.org 0x6e882
	adds r2, r2, r0	@ 0006e882 1218
.org 0x6e884
	ldr r0, [r4, #0]	@ 0006e884 2068
.org 0x6e886
	adds r0, r0, r2	@ 0006e886 8018
.org 0x6e888
	str r0, [r1, #4]	@ 0006e888 4860
.org 0x6e88a
	adds r0, r5, #0	@ 0006e88a 281c
.org 0x6e88c
	movs r2, #0	@ 0006e88c 0022
.org 0x6e88e
	movs r3, #0	@ 0006e88e 0023
.org 0x6e890
	bl 0xa5888	@ 0006e890 36f0faff
.org 0x6e894
	adds r1, r5, #0	@ 0006e894 291c
.org 0x6e896
	adds r1, #200	@ 0006e896 c831
.org 0x6e898
	str r0, [r1, #0]	@ 0006e898 0860
.org 0x6e89a
	movs r0, #80	@ 0006e89a 5020
.org 0x6e89c
	str r0, [r5, #104]	@ 0006e89c a866
.org 0x6e89e
	b.n 0x6e906	@ 0006e89e 32e0
.org 0x6e8a0
	.byte 0x00,0x99,0x12,0x08	@ 0006e8a0 data
.org 0x6e8a4
	.byte 0xdc,0xc5,0x85,0x08	@ 0006e8a4 data
.org 0x6e8a8
	.byte 0x38,0xdc,0x02,0x02	@ 0006e8a8 data
.org 0x6e8ac
	.byte 0xfd,0x43,0x03,0x00	@ 0006e8ac data
.org 0x6e8b0
	.byte 0xc3,0x9e,0x26,0x00	@ 0006e8b0 data
.org 0x6e8b4
	.byte 0x2c,0xc6,0x85,0x08	@ 0006e8b4 data
.org 0x6e8b8
	.byte 0x01,0xc0,0xff,0xff	@ 0006e8b8 data
.org 0x6e8bc
	adds r1, r5, #0	@ 0006e8bc 291c
.org 0x6e8be
	adds r1, #200	@ 0006e8be c831
.org 0x6e8c0
	ldr r0, [r1, #0]	@ 0006e8c0 0868
.org 0x6e8c2
	cmp r0, #0	@ 0006e8c2 0028
.org 0x6e8c4
	beq.n 0x6e8d6	@ 0006e8c4 07d0
.org 0x6e8c6
	ldrb r0, [r0, #12]	@ 0006e8c6 007b
.org 0x6e8c8
	cmp r0, #1	@ 0006e8c8 0128
.org 0x6e8ca
	bls.n 0x6e8d0	@ 0006e8ca 01d9
.org 0x6e8cc
	movs r0, #0	@ 0006e8cc 0020
.org 0x6e8ce
	str r0, [r1, #0]	@ 0006e8ce 0860
.org 0x6e8d0
	ldr r0, [r1, #0]	@ 0006e8d0 0868
.org 0x6e8d2
	cmp r0, #0	@ 0006e8d2 0028
.org 0x6e8d4
	bne.n 0x6e906	@ 0006e8d4 17d1
.org 0x6e8d6
	ldr r0, [r5, #104]	@ 0006e8d6 a86e
.org 0x6e8d8
	subs r0, #1	@ 0006e8d8 0138
.org 0x6e8da
	str r0, [r5, #104]	@ 0006e8da a866
.org 0x6e8dc
	cmp r0, #0	@ 0006e8dc 0028
.org 0x6e8de
	bne.n 0x6e906	@ 0006e8de 12d1
.org 0x6e8e0
	ldrb r0, [r5, #18]	@ 0006e8e0 a87c
.org 0x6e8e2
	subs r0, #1	@ 0006e8e2 0138
.org 0x6e8e4
	strb r0, [r5, #18]	@ 0006e8e4 a874
.org 0x6e8e6
	lsls r0, r0, #24	@ 0006e8e6 0006
.org 0x6e8e8
	lsrs r1, r0, #24	@ 0006e8e8 010e
.org 0x6e8ea
	cmp r1, #0	@ 0006e8ea 0029
.org 0x6e8ec
	bne.n 0x6e8f6	@ 0006e8ec 03d1
.org 0x6e8ee
	movs r0, #1	@ 0006e8ee 0120
.org 0x6e8f0
	strb r0, [r5, #14]	@ 0006e8f0 a873
