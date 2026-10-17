@ FUN_080b7824  entry 0x080b7824  size 138
.thumb
.org 0xb7824
FUN_080b7824:
	push {r4, r5, lr}	@ 000b7824 30b5
.org 0xb7826
	adds r4, r0, #0	@ 000b7826 041c
.org 0xb7828
	adds r0, #115	@ 000b7828 7330
.org 0xb782a
	ldrb r0, [r0, #0]	@ 000b782a 0078
.org 0xb782c
	cmp r0, #3	@ 000b782c 0328
.org 0xb782e
	beq.n 0xb7836	@ 000b782e 02d0
.org 0xb7830
	ldrb r0, [r4, #18]	@ 000b7830 a07c
.org 0xb7832
	cmp r0, #0	@ 000b7832 0028
.org 0xb7834
	bne.n 0xb7884	@ 000b7834 26d1
.org 0xb7836
	ldrb r0, [r4, #14]	@ 000b7836 a07b
.org 0xb7838
	cmp r0, #1	@ 000b7838 0128
.org 0xb783a
	bhi.n 0xb7868	@ 000b783a 15d8
.org 0xb783c
	ldr r2, [pc, #36]	@ 000b783c 094a
.org 0xb783e
	adds r0, r4, #0	@ 000b783e 201c
.org 0xb7840
	adds r0, #180	@ 000b7840 b430
.org 0xb7842
	ldrb r0, [r0, #0]	@ 000b7842 0078
.org 0xb7844
	lsls r0, r0, #1	@ 000b7844 4000
.org 0xb7846
	ldrb r1, [r4, #14]	@ 000b7846 a17b
.org 0xb7848
	lsls r1, r1, #2	@ 000b7848 8900
.org 0xb784a
	adds r0, r0, r1	@ 000b784a 4018
.org 0xb784c
	adds r0, r0, r2	@ 000b784c 8018
.org 0xb784e
	ldrh r1, [r0, #0]	@ 000b784e 0188
.org 0xb7850
	adds r0, r4, #0	@ 000b7850 201c
.org 0xb7852
	bl 0x1cf00	@ 000b7852 65f755fb
.org 0xb7856
	movs r0, #48	@ 000b7856 3020
.org 0xb7858
	strb r0, [r4, #18]	@ 000b7858 a074
.org 0xb785a
	ldrb r0, [r4, #14]	@ 000b785a a07b
.org 0xb785c
	adds r0, #1	@ 000b785c 0130
.org 0xb785e
	strb r0, [r4, #14]	@ 000b785e a073
.org 0xb7860
	b.n 0xb7884	@ 000b7860 10e0
.org 0xb7862
	.byte 0x00	@ 000b7862 data
.org 0xb7863
	.byte 0x00	@ 000b7863 data
.org 0xb7864
	.byte 0xe4,0x3f,0x86,0x08	@ 000b7864 data
.org 0xb7868
	movs r2, #0	@ 000b7868 0022
.org 0xb786a
	strb r2, [r4, #13]	@ 000b786a 6273
.org 0xb786c
	strb r2, [r4, #14]	@ 000b786c a273
.org 0xb786e
	adds r1, r4, #0	@ 000b786e 211c
.org 0xb7870
	adds r1, #180	@ 000b7870 b431
.org 0xb7872
	ldrb r0, [r1, #0]	@ 000b7872 0878
.org 0xb7874
	cmp r0, #0	@ 000b7874 0028
.org 0xb7876
	bne.n 0xb7880	@ 000b7876 03d1
.org 0xb7878
	ldrb r0, [r4, #19]	@ 000b7878 e07c
.org 0xb787a
	adds r0, #1	@ 000b787a 0130
.org 0xb787c
	strb r0, [r4, #19]	@ 000b787c e074
.org 0xb787e
	b.n 0xb78ae	@ 000b787e 16e0
.org 0xb7880
	strb r2, [r1, #0]	@ 000b7880 0a70
.org 0xb7882
	b.n 0xb78ae	@ 000b7882 14e0
.org 0xb7884
	ldrb r5, [r4, #14]	@ 000b7884 a57b
.org 0xb7886
	cmp r5, #1	@ 000b7886 012d
.org 0xb7888
	bne.n 0xb78a8	@ 000b7888 0ed1
.org 0xb788a
	ldrb r0, [r4, #18]	@ 000b788a a07c
.org 0xb788c
	cmp r0, #0	@ 000b788c 0028
.org 0xb788e
	beq.n 0xb78a8	@ 000b788e 0bd0
.org 0xb7890
	adds r1, r4, #0	@ 000b7890 211c
.org 0xb7892
	adds r1, #84	@ 000b7892 5431
.org 0xb7894
	movs r0, #2	@ 000b7894 0220
.org 0xb7896
	bl 0x1fe64	@ 000b7896 68f7e5fa
.org 0xb789a
	ldrb r0, [r4, #18]	@ 000b789a a07c
.org 0xb789c
	ands r0, r5	@ 000b789c 2840
.org 0xb789e
	cmp r0, #0	@ 000b789e 0028
.org 0xb78a0
	bne.n 0xb78a8	@ 000b78a0 02d1
.org 0xb78a2
	adds r0, r4, #0	@ 000b78a2 201c
.org 0xb78a4
	bl 0xb793c	@ 000b78a4 00f04af8
.org 0xb78a8
	ldrb r0, [r4, #18]	@ 000b78a8 a07c
.org 0xb78aa
	subs r0, #1	@ 000b78aa 0138
.org 0xb78ac
	strb r0, [r4, #18]	@ 000b78ac a074
