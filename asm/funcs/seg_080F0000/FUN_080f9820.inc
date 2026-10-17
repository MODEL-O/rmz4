@ FUN_080f9820  entry 0x080f9820  size 144
.thumb
.org 0xf9820
FUN_080f9820:
	push {r4, r5, r6, r7, lr}	@ 000f9820 f0b5
.org 0xf9822
	adds r7, r0, #0	@ 000f9822 071c
.org 0xf9824
	ldrb r1, [r7, #15]	@ 000f9824 f97b
.org 0xf9826
	cmp r1, #0	@ 000f9826 0029
.org 0xf9828
	bne.n 0xf9832	@ 000f9828 03d1
.org 0xf982a
	movs r0, #128	@ 000f982a 8020
.org 0xf982c
	strb r0, [r7, #18]	@ 000f982c b874
.org 0xf982e
	adds r0, r1, #1	@ 000f982e 481c
.org 0xf9830
	strb r0, [r7, #15]	@ 000f9830 f873
.org 0xf9832
	adds r0, r7, #0	@ 000f9832 381c
.org 0xf9834
	bl 0x1cff0	@ 000f9834 23f7dcfb
.org 0xf9838
	adds r0, r7, #0	@ 000f9838 381c
.org 0xf983a
	adds r0, #116	@ 000f983a 7430
.org 0xf983c
	ldr r4, [pc, #112]	@ 000f983c 1c4c
.org 0xf983e
	ldr r2, [pc, #116]	@ 000f983e 1d4a
.org 0xf9840
	ldrb r3, [r7, #30]	@ 000f9840 bb7f
.org 0xf9842
	lsls r3, r3, #8	@ 000f9842 1b02
.org 0xf9844
	adds r1, r7, #0	@ 000f9844 391c
.org 0xf9846
	adds r1, #112	@ 000f9846 7031
.org 0xf9848
	ldrb r1, [r1, #0]	@ 000f9848 0978
.org 0xf984a
	orrs r3, r1	@ 000f984a 0b43
.org 0xf984c
	ldr r5, [pc, #104]	@ 000f984c 1a4d
.org 0xf984e
	adds r1, r3, r5	@ 000f984e 5919
.org 0xf9850
	lsls r1, r1, #1	@ 000f9850 4900
.org 0xf9852
	adds r1, r1, r2	@ 000f9852 8918
.org 0xf9854
	ldrh r1, [r1, #0]	@ 000f9854 0988
.org 0xf9856
	lsls r1, r1, #2	@ 000f9856 8900
.org 0xf9858
	adds r1, r1, r4	@ 000f9858 0919
.org 0xf985a
	adds r2, r7, #0	@ 000f985a 3a1c
.org 0xf985c
	adds r2, #113	@ 000f985c 7132
.org 0xf985e
	movs r6, #0	@ 000f985e 0026
.org 0xf9860
	ldrsb r6, [r2, r6]	@ 000f9860 9657
.org 0xf9862
	ldr r1, [r1, #0]	@ 000f9862 0968
.org 0xf9864
	lsls r4, r6, #2	@ 000f9864 b400
.org 0xf9866
	adds r4, r4, r1	@ 000f9866 6418
.org 0xf9868
	ldr r5, [pc, #80]	@ 000f9868 144d
.org 0xf986a
	ldr r2, [r7, #44]	@ 000f986a fa6a
.org 0xf986c
	negs r1, r2	@ 000f986c 5142
.org 0xf986e
	orrs r1, r2	@ 000f986e 1143
.org 0xf9870
	asrs r1, r1, #31	@ 000f9870 c917
.org 0xf9872
	movs r2, #4	@ 000f9872 0422
.org 0xf9874
	ands r1, r2	@ 000f9874 1140
.org 0xf9876
	adds r1, r1, r5	@ 000f9876 4919
.org 0xf9878
	ldr r1, [r1, #0]	@ 000f9878 0968
.org 0xf987a
	lsls r3, r3, #2	@ 000f987a 9b00
.org 0xf987c
	adds r3, r3, r1	@ 000f987c 5b18
.org 0xf987e
	ldr r1, [pc, #64]	@ 000f987e 1049
.org 0xf9880
	adds r3, r3, r1	@ 000f9880 5b18
.org 0xf9882
	ldr r1, [r3, #0]	@ 000f9882 1968
.org 0xf9884
	adds r1, r1, r6	@ 000f9884 8919
.org 0xf9886
	ldrb r1, [r1, #0]	@ 000f9886 0978
.org 0xf9888
	lsls r2, r1, #1	@ 000f9888 4a00
.org 0xf988a
	adds r2, r2, r1	@ 000f988a 5218
.org 0xf988c
	lsls r2, r2, #3	@ 000f988c d200
.org 0xf988e
	ldr r1, [r4, #0]	@ 000f988e 2168
.org 0xf9890
	adds r1, r1, r2	@ 000f9890 8918
.org 0xf9892
	bl 0x5784	@ 000f9892 0bf777ff
.org 0xf9896
	ldrb r0, [r7, #18]	@ 000f9896 b87c
.org 0xf9898
	subs r0, #1	@ 000f9898 0138
.org 0xf989a
	strb r0, [r7, #18]	@ 000f989a b874
.org 0xf989c
	lsls r0, r0, #24	@ 000f989c 0006
.org 0xf989e
	lsrs r1, r0, #24	@ 000f989e 010e
.org 0xf98a0
	cmp r1, #0	@ 000f98a0 0029
.org 0xf98a2
	bne.n 0xf98aa	@ 000f98a2 02d1
.org 0xf98a4
	movs r0, #2	@ 000f98a4 0220
.org 0xf98a6
	strb r0, [r7, #14]	@ 000f98a6 b873
.org 0xf98a8
	strb r1, [r7, #15]	@ 000f98a8 f973
.org 0xf98aa
	pop {r4, r5, r6, r7}	@ 000f98aa f0bc
.org 0xf98ac
	pop {r0}	@ 000f98ac 01bc
.org 0xf98ae
	bx r0	@ 000f98ae 0047
