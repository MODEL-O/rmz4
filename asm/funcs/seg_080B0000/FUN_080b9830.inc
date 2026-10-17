@ FUN_080b9830  entry 0x080b9830  size 132
.thumb
.org 0xb9830
FUN_080b9830:
	push {r4, r5, r6, r7, lr}	@ 000b9830 f0b5
.org 0xb9832
	adds r7, r0, #0	@ 000b9832 071c
.org 0xb9834
	bl 0x1cc9c	@ 000b9834 63f732fa
.org 0xb9838
	ldrb r0, [r7, #10]	@ 000b9838 b87a
.org 0xb983a
	movs r1, #1	@ 000b983a 0121
.org 0xb983c
	movs r2, #0	@ 000b983c 0022
.org 0xb983e
	movs r5, #0	@ 000b983e 0025
.org 0xb9840
	orrs r1, r0	@ 000b9840 0143
.org 0xb9842
	movs r0, #2	@ 000b9842 0220
.org 0xb9844
	orrs r1, r0	@ 000b9844 0143
.org 0xb9846
	orrs r1, r2	@ 000b9846 1143
.org 0xb9848
	strb r1, [r7, #10]	@ 000b9848 b972
.org 0xb984a
	ldr r2, [pc, #104]	@ 000b984a 1a4a
.org 0xb984c
	ldrb r0, [r7, #9]	@ 000b984c 787a
.org 0xb984e
	lsls r0, r0, #2	@ 000b984e 8000
.org 0xb9850
	adds r0, r0, r2	@ 000b9850 8018
.org 0xb9852
	movs r6, #1	@ 000b9852 0126
.org 0xb9854
	str r6, [r7, #12]	@ 000b9854 fe60
.org 0xb9856
	ldr r0, [r0, #0]	@ 000b9856 0068
.org 0xb9858
	ldr r0, [r0, #4]	@ 000b9858 4068
.org 0xb985a
	str r0, [r7, #20]	@ 000b985a 7861
.org 0xb985c
	movs r0, #4	@ 000b985c 0420
.org 0xb985e
	orrs r1, r0	@ 000b985e 0143
.org 0xb9860
	strb r1, [r7, #10]	@ 000b9860 b972
.org 0xb9862
	adds r4, r7, #0	@ 000b9862 3c1c
.org 0xb9864
	adds r4, #116	@ 000b9864 7434
.org 0xb9866
	ldr r1, [pc, #80]	@ 000b9866 1449
.org 0xb9868
	adds r2, r7, #0	@ 000b9868 3a1c
.org 0xb986a
	adds r2, #84	@ 000b986a 5432
.org 0xb986c
	adds r0, r4, #0	@ 000b986c 201c
.org 0xb986e
	movs r3, #5	@ 000b986e 0523
.org 0xb9870
	bl 0x5760	@ 000b9870 4bf776ff
.org 0xb9874
	str r7, [r4, #44]	@ 000b9874 e762
.org 0xb9876
	str r5, [r4, #36]	@ 000b9876 6562
.org 0xb9878
	movs r1, #198	@ 000b9878 c621
.org 0xb987a
	lsls r1, r1, #8	@ 000b987a 0902
.org 0xb987c
	adds r0, r7, #0	@ 000b987c 381c
.org 0xb987e
	bl 0x1cf00	@ 000b987e 63f73ffb
.org 0xb9882
	adds r0, r7, #0	@ 000b9882 381c
.org 0xb9884
	adds r0, #181	@ 000b9884 b530
.org 0xb9886
	strb r6, [r0, #0]	@ 000b9886 0670
.org 0xb9888
	adds r0, #2	@ 000b9888 0230
.org 0xb988a
	strb r5, [r0, #0]	@ 000b988a 0570
.org 0xb988c
	subs r0, #1	@ 000b988c 0138
.org 0xb988e
	strb r5, [r0, #0]	@ 000b988e 0570
.org 0xb9890
	subs r0, #2	@ 000b9890 0238
.org 0xb9892
	strb r5, [r0, #0]	@ 000b9892 0570
.org 0xb9894
	str r5, [r7, #40]	@ 000b9894 bd62
.org 0xb9896
	strb r5, [r7, #18]	@ 000b9896 bd74
.org 0xb9898
	strb r5, [r7, #15]	@ 000b9898 fd73
.org 0xb989a
	ldr r0, [r7, #84]	@ 000b989a 786d
.org 0xb989c
	ldr r1, [r7, #88]	@ 000b989c b96d
.org 0xb989e
	bl 0x8534	@ 000b989e 4ef749fe
.org 0xb98a2
	ldr r1, [pc, #24]	@ 000b98a2 0649
.org 0xb98a4
	adds r0, r0, r1	@ 000b98a4 4018
.org 0xb98a6
	str r0, [r7, #88]	@ 000b98a6 b865
.org 0xb98a8
	adds r0, r7, #0	@ 000b98a8 381c
.org 0xb98aa
	bl 0xb98c0	@ 000b98aa 00f009f8
.org 0xb98ae
	pop {r4, r5, r6, r7}	@ 000b98ae f0bc
.org 0xb98b0
	pop {r0}	@ 000b98b0 01bc
.org 0xb98b2
	bx r0	@ 000b98b2 0047
