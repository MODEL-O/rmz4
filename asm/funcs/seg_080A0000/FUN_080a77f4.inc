@ FUN_080a77f4  entry 0x080a77f4  size 232
.thumb
.org 0xa77f4
FUN_080a77f4:
	push {r4, r5, r6, lr}	@ 000a77f4 70b5
.org 0xa77f6
	sub sp, #8	@ 000a77f6 82b0
.org 0xa77f8
	adds r6, r0, #0	@ 000a77f8 061c
.org 0xa77fa
	ldrb r0, [r6, #15]	@ 000a77fa f07b
.org 0xa77fc
	cmp r0, #0	@ 000a77fc 0028
.org 0xa77fe
	bne.n 0xa7844	@ 000a77fe 21d1
.org 0xa7800
	ldr r1, [pc, #24]	@ 000a7800 0649
.org 0xa7802
	adds r0, r6, #0	@ 000a7802 301c
.org 0xa7804
	bl 0x1cf00	@ 000a7804 75f77cfb
.org 0xa7808
	ldrb r1, [r6, #10]	@ 000a7808 b17a
.org 0xa780a
	movs r2, #16	@ 000a780a 1022
.org 0xa780c
	adds r0, r2, #0	@ 000a780c 101c
.org 0xa780e
	ands r0, r1	@ 000a780e 0840
.org 0xa7810
	cmp r0, #0	@ 000a7810 0028
.org 0xa7812
	beq.n 0xa7820	@ 000a7812 05d0
.org 0xa7814
	movs r0, #16	@ 000a7814 1020
.org 0xa7816
	negs r0, r0	@ 000a7816 4042
.org 0xa7818
	str r0, [r6, #100]	@ 000a7818 7066
.org 0xa781a
	b.n 0xa7822	@ 000a781a 02e0
.org 0xa781c
	.byte 0x06,0x8b,0x00,0x00	@ 000a781c data
.org 0xa7820
	str r2, [r6, #100]	@ 000a7820 7266
.org 0xa7822
	ldr r0, [r6, #100]	@ 000a7822 706e
.org 0xa7824
	lsls r0, r0, #4	@ 000a7824 0001
.org 0xa7826
	negs r0, r0	@ 000a7826 4042
.org 0xa7828
	str r0, [r6, #92]	@ 000a7828 f065
.org 0xa782a
	adds r0, r6, #0	@ 000a782a 301c
.org 0xa782c
	adds r0, #84	@ 000a782c 5430
.org 0xa782e
	ldrb r3, [r6, #10]	@ 000a782e b37a
.org 0xa7830
	lsrs r3, r3, #4	@ 000a7830 1b09
.org 0xa7832
	movs r1, #1	@ 000a7832 0121
.org 0xa7834
	ands r3, r1	@ 000a7834 0b40
.org 0xa7836
	movs r1, #4	@ 000a7836 0421
.org 0xa7838
	movs r2, #0	@ 000a7838 0022
.org 0xa783a
	bl 0xdd574	@ 000a783a 35f09bfe
.org 0xa783e
	ldrb r0, [r6, #15]	@ 000a783e f07b
.org 0xa7840
	adds r0, #1	@ 000a7840 0130
.org 0xa7842
	strb r0, [r6, #15]	@ 000a7842 f073
.org 0xa7844
	adds r0, r6, #0	@ 000a7844 301c
.org 0xa7846
	bl 0x1cff0	@ 000a7846 75f7d3fb
.org 0xa784a
	ldr r0, [r6, #84]	@ 000a784a 706d
.org 0xa784c
	ldr r1, [r6, #92]	@ 000a784c f16d
.org 0xa784e
	adds r2, r0, r1	@ 000a784e 4218
.org 0xa7850
	str r2, [r6, #84]	@ 000a7850 7265
.org 0xa7852
	ldr r0, [r6, #100]	@ 000a7852 706e
.org 0xa7854
	adds r1, r1, r0	@ 000a7854 0918
.org 0xa7856
	str r1, [r6, #92]	@ 000a7856 f165
.org 0xa7858
	cmp r1, #0	@ 000a7858 0029
.org 0xa785a
	bne.n 0xa78d8	@ 000a785a 3dd1
.org 0xa785c
	str r2, [sp, #0]	@ 000a785c 0092
.org 0xa785e
	ldr r0, [r6, #88]	@ 000a785e b06d
.org 0xa7860
	ldr r1, [pc, #124]	@ 000a7860 1f49
.org 0xa7862
	adds r0, r0, r1	@ 000a7862 4018
.org 0xa7864
	str r0, [sp, #4]	@ 000a7864 0190
.org 0xa7866
	ldr r5, [pc, #124]	@ 000a7866 1f4d
.org 0xa7868
	ldrb r0, [r6, #10]	@ 000a7868 b07a
.org 0xa786a
	movs r4, #16	@ 000a786a 1024
.org 0xa786c
	adds r3, r4, #0	@ 000a786c 231c
.org 0xa786e
	ands r3, r0	@ 000a786e 0340
.org 0xa7870
	lsls r3, r3, #24	@ 000a7870 1b06
.org 0xa7872
	lsrs r3, r3, #24	@ 000a7872 1b0e
.org 0xa7874
	mov r0, sp	@ 000a7874 6846
.org 0xa7876
	adds r1, r5, #0	@ 000a7876 291c
.org 0xa7878
	movs r2, #0	@ 000a7878 0022
.org 0xa787a
	bl 0xd4c8c	@ 000a787a 2df007fa
.org 0xa787e
	adds r5, #84	@ 000a787e 5435
.org 0xa7880
	ldrb r0, [r6, #10]	@ 000a7880 b07a
.org 0xa7882
	ands r4, r0	@ 000a7882 0440
.org 0xa7884
	lsls r4, r4, #24	@ 000a7884 2406
.org 0xa7886
	lsrs r4, r4, #24	@ 000a7886 240e
.org 0xa7888
	mov r0, sp	@ 000a7888 6846
.org 0xa788a
	adds r1, r5, #0	@ 000a788a 291c
.org 0xa788c
	movs r2, #0	@ 000a788c 0022
.org 0xa788e
	adds r3, r4, #0	@ 000a788e 231c
.org 0xa7890
	bl 0xd4c8c	@ 000a7890 2df0fcf9
.org 0xa7894
	movs r0, #1	@ 000a7894 0120
.org 0xa7896
	mov r1, sp	@ 000a7896 6946
.org 0xa7898
	bl 0xd0c88	@ 000a7898 29f0f6f9
.org 0xa789c
	movs r0, #42	@ 000a789c 2a20
.org 0xa789e
	bl 0x2b10	@ 000a789e 5bf737f9
.org 0xa78a2
	adds r4, r6, #0	@ 000a78a2 341c
.org 0xa78a4
	adds r4, #84	@ 000a78a4 5434
.org 0xa78a6
	movs r0, #4	@ 000a78a6 0420
.org 0xa78a8
	movs r1, #45	@ 000a78a8 2d21
.org 0xa78aa
	adds r2, r4, #0	@ 000a78aa 221c
.org 0xa78ac
	bl 0x2ab88	@ 000a78ac 83f76cf9
.org 0xa78b0
	ldr r2, [pc, #52]	@ 000a78b0 0d4a
.org 0xa78b2
	ldrh r1, [r2, #12]	@ 000a78b2 9189
.org 0xa78b4
	ldr r0, [pc, #52]	@ 000a78b4 0d48
.org 0xa78b6
	cmp r1, r0	@ 000a78b6 8142
.org 0xa78b8
	bhi.n 0xa78be	@ 000a78b8 01d8
.org 0xa78ba
	adds r0, r1, #1	@ 000a78ba 481c
.org 0xa78bc
	strh r0, [r2, #12]	@ 000a78bc 9081
.org 0xa78be
	adds r0, r6, #0	@ 000a78be 301c
.org 0xa78c0
	adds r1, r4, #0	@ 000a78c0 211c
.org 0xa78c2
	bl 0x2abe0	@ 000a78c2 83f78df9
.org 0xa78c6
	ldr r1, [pc, #40]	@ 000a78c6 0a49
.org 0xa78c8
	ldrb r0, [r6, #9]	@ 000a78c8 707a
.org 0xa78ca
	lsls r0, r0, #2	@ 000a78ca 8000
.org 0xa78cc
	adds r0, r0, r1	@ 000a78cc 4018
.org 0xa78ce
	movs r1, #4	@ 000a78ce 0421
.org 0xa78d0
	str r1, [r6, #12]	@ 000a78d0 f160
.org 0xa78d2
	ldr r0, [r0, #0]	@ 000a78d2 0068
.org 0xa78d4
	ldr r0, [r0, #16]	@ 000a78d4 0069
.org 0xa78d6
	str r0, [r6, #20]	@ 000a78d6 7061
.org 0xa78d8
	add sp, #8	@ 000a78d8 02b0
.org 0xa78da
	pop {r4, r5, r6}	@ 000a78da 70bc
