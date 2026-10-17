@ FUN_0805c7e8  entry 0x0805c7e8  size 214
.thumb
.org 0x5c7e8
FUN_0805c7e8:
	push {r4, r5, lr}	@ 0005c7e8 30b5
.org 0x5c7ea
	sub sp, #8	@ 0005c7ea 82b0
.org 0x5c7ec
	adds r5, r0, #0	@ 0005c7ec 051c
.org 0x5c7ee
	ldr r1, [pc, #208]	@ 0005c7ee 3449
.org 0x5c7f0
	mov r0, sp	@ 0005c7f0 6846
.org 0x5c7f2
	movs r2, #6	@ 0005c7f2 0622
.org 0x5c7f4
	bl 0x129258	@ 0005c7f4 ccf030fd
.org 0x5c7f8
	ldrb r2, [r5, #16]	@ 0005c7f8 2a7c
.org 0x5c7fa
	ldrb r4, [r5, #17]	@ 0005c7fa 6c7c
.org 0x5c7fc
	ldrb r0, [r5, #15]	@ 0005c7fc e87b
.org 0x5c7fe
	cmp r0, #0	@ 0005c7fe 0028
.org 0x5c800
	bne.n 0x5c850	@ 0005c800 26d1
.org 0x5c802
	ldrb r1, [r5, #10]	@ 0005c802 a97a
.org 0x5c804
	movs r0, #1	@ 0005c804 0120
.org 0x5c806
	orrs r0, r1	@ 0005c806 0843
.org 0x5c808
	strb r0, [r5, #10]	@ 0005c808 a872
.org 0x5c80a
	lsls r0, r2, #1	@ 0005c80a 5000
.org 0x5c80c
	add r0, sp	@ 0005c80c 6844
.org 0x5c80e
	ldrb r1, [r0, #0]	@ 0005c80e 0178
.org 0x5c810
	adds r0, r5, #0	@ 0005c810 281c
.org 0x5c812
	bl 0x5ee6c	@ 0005c812 02f02bfb
.org 0x5c816
	adds r1, r5, #0	@ 0005c816 291c
.org 0x5c818
	adds r1, #208	@ 0005c818 d031
.org 0x5c81a
	ldr r0, [pc, #168]	@ 0005c81a 2a48
.org 0x5c81c
	ldr r2, [r0, #56]	@ 0005c81c 826b
.org 0x5c81e
	str r2, [r1, #0]	@ 0005c81e 0a60
.org 0x5c820
	adds r3, r5, #0	@ 0005c820 2b1c
.org 0x5c822
	adds r3, #212	@ 0005c822 d433
.org 0x5c824
	movs r0, #1	@ 0005c824 0120
.org 0x5c826
	ands r4, r0	@ 0005c826 0440
.org 0x5c828
	lsls r1, r4, #1	@ 0005c828 6100
.org 0x5c82a
	subs r1, #1	@ 0005c82a 0139
.org 0x5c82c
	lsls r0, r1, #3	@ 0005c82c c800
.org 0x5c82e
	adds r0, r0, r1	@ 0005c82e 4018
.org 0x5c830
	lsls r0, r0, #11	@ 0005c830 c002
.org 0x5c832
	adds r2, r2, r0	@ 0005c832 1218
.org 0x5c834
	str r2, [r3, #0]	@ 0005c834 1a60
.org 0x5c836
	str r2, [r5, #84]	@ 0005c836 6a65
.org 0x5c838
	adds r0, r5, #0	@ 0005c838 281c
.org 0x5c83a
	adds r0, #180	@ 0005c83a b430
.org 0x5c83c
	ldr r0, [r0, #0]	@ 0005c83c 0068
.org 0x5c83e
	ldr r1, [pc, #136]	@ 0005c83e 2249
.org 0x5c840
	adds r0, r0, r1	@ 0005c840 4018
.org 0x5c842
	str r0, [r5, #88]	@ 0005c842 a865
.org 0x5c844
	movs r0, #160	@ 0005c844 a020
.org 0x5c846
	lsls r0, r0, #2	@ 0005c846 8000
.org 0x5c848
	str r0, [r5, #96]	@ 0005c848 2866
.org 0x5c84a
	ldrb r0, [r5, #15]	@ 0005c84a e87b
.org 0x5c84c
	adds r0, #1	@ 0005c84c 0130
.org 0x5c84e
	strb r0, [r5, #15]	@ 0005c84e e873
.org 0x5c850
	adds r0, r5, #0	@ 0005c850 281c
.org 0x5c852
	bl 0x1cff0	@ 0005c852 c0f7cdfb
.org 0x5c856
	adds r0, r5, #0	@ 0005c856 281c
.org 0x5c858
	adds r0, #116	@ 0005c858 7430
.org 0x5c85a
	ldr r4, [pc, #112]	@ 0005c85a 1c4c
.org 0x5c85c
	ldr r3, [pc, #112]	@ 0005c85c 1c4b
.org 0x5c85e
	adds r1, r5, #0	@ 0005c85e 291c
.org 0x5c860
	adds r1, #184	@ 0005c860 b831
.org 0x5c862
	ldrb r2, [r1, #0]	@ 0005c862 0a78
.org 0x5c864
	lsls r1, r2, #1	@ 0005c864 5100
.org 0x5c866
	adds r1, r1, r3	@ 0005c866 c918
.org 0x5c868
	ldrh r1, [r1, #0]	@ 0005c868 0988
.org 0x5c86a
	lsls r1, r1, #2	@ 0005c86a 8900
.org 0x5c86c
	adds r1, r1, r4	@ 0005c86c 0919
.org 0x5c86e
	adds r3, r5, #0	@ 0005c86e 2b1c
.org 0x5c870
	adds r3, #113	@ 0005c870 7133
.org 0x5c872
	movs r4, #0	@ 0005c872 0024
.org 0x5c874
	ldrsb r4, [r3, r4]	@ 0005c874 1c57
.org 0x5c876
	ldr r1, [r1, #0]	@ 0005c876 0968
.org 0x5c878
	lsls r3, r4, #2	@ 0005c878 a300
.org 0x5c87a
	adds r3, r3, r1	@ 0005c87a 5b18
.org 0x5c87c
	ldr r1, [pc, #84]	@ 0005c87c 1549
.org 0x5c87e
	lsls r2, r2, #2	@ 0005c87e 9200
.org 0x5c880
	adds r2, r2, r1	@ 0005c880 5218
.org 0x5c882
	ldr r1, [r2, #0]	@ 0005c882 1168
.org 0x5c884
	adds r1, r1, r4	@ 0005c884 0919
.org 0x5c886
	ldrb r1, [r1, #0]	@ 0005c886 0978
.org 0x5c888
	lsls r2, r1, #1	@ 0005c888 4a00
.org 0x5c88a
	adds r2, r2, r1	@ 0005c88a 5218
.org 0x5c88c
	lsls r2, r2, #3	@ 0005c88c d200
.org 0x5c88e
	ldr r1, [r3, #0]	@ 0005c88e 1968
.org 0x5c890
	adds r1, r1, r2	@ 0005c890 8918
.org 0x5c892
	bl 0x5784	@ 0005c892 a8f777ff
.org 0x5c896
	ldr r1, [r5, #88]	@ 0005c896 a96d
.org 0x5c898
	ldr r0, [r5, #96]	@ 0005c898 286e
.org 0x5c89a
	adds r1, r1, r0	@ 0005c89a 0918
.org 0x5c89c
	str r1, [r5, #88]	@ 0005c89c a965
.org 0x5c89e
	adds r0, r5, #0	@ 0005c89e 281c
.org 0x5c8a0
	adds r0, #180	@ 0005c8a0 b430
.org 0x5c8a2
	ldr r0, [r0, #0]	@ 0005c8a2 0068
.org 0x5c8a4
	ldr r2, [pc, #48]	@ 0005c8a4 0c4a
.org 0x5c8a6
	adds r0, r0, r2	@ 0005c8a6 8018
.org 0x5c8a8
	cmp r1, r0	@ 0005c8a8 8142
.org 0x5c8aa
	blt.n 0x5c8b6	@ 0005c8aa 04db
.org 0x5c8ac
	str r0, [r5, #88]	@ 0005c8ac a865
.org 0x5c8ae
	movs r1, #0	@ 0005c8ae 0021
.org 0x5c8b0
	movs r0, #2	@ 0005c8b0 0220
.org 0x5c8b2
	strb r0, [r5, #14]	@ 0005c8b2 a873
.org 0x5c8b4
	strb r1, [r5, #15]	@ 0005c8b4 e973
.org 0x5c8b6
	add sp, #8	@ 0005c8b6 02b0
.org 0x5c8b8
	pop {r4, r5}	@ 0005c8b8 30bc
.org 0x5c8ba
	pop {r0}	@ 0005c8ba 01bc
.org 0x5c8bc
	bx r0	@ 0005c8bc 0047
