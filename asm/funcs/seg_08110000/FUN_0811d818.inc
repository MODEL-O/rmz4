@ FUN_0811d818  entry 0x0811d818  size 160
.thumb
.org 0x11d818
FUN_0811d818:
	push {r4, r5, r6, r7, lr}	@ 0011d818 f0b5
.org 0x11d81a
	mov r7, r8	@ 0011d81a 4746
.org 0x11d81c
	push {r7}	@ 0011d81c 80b4
.org 0x11d81e
	lsls r0, r0, #24	@ 0011d81e 0006
.org 0x11d820
	lsrs r6, r0, #24	@ 0011d820 060e
.org 0x11d822
	movs r5, #0	@ 0011d822 0025
.org 0x11d824
	ldr r0, [pc, #116]	@ 0011d824 1d48
.org 0x11d826
	mov r8, r0	@ 0011d826 8046
.org 0x11d828
	ldr r1, [pc, #116]	@ 0011d828 1d49
.org 0x11d82a
	mov ip, r1	@ 0011d82a 8c46
.org 0x11d82c
	movs r7, #15	@ 0011d82c 0f27
.org 0x11d82e
	lsls r0, r6, #2	@ 0011d82e b000
.org 0x11d830
	adds r0, r5, r0	@ 0011d830 2818
.org 0x11d832
	mov r2, ip	@ 0011d832 6246
.org 0x11d834
	adds r1, r0, r2	@ 0011d834 8118
.org 0x11d836
	ldrb r0, [r1, #0]	@ 0011d836 0878
.org 0x11d838
	cmp r0, #255	@ 0011d838 ff28
.org 0x11d83a
	beq.n 0x11d862	@ 0011d83a 12d0
.org 0x11d83c
	adds r2, r0, #0	@ 0011d83c 021c
.org 0x11d83e
	ldr r0, [pc, #100]	@ 0011d83e 1948
.org 0x11d840
	ldr r4, [r0, #0]	@ 0011d840 0468
.org 0x11d842
	lsrs r0, r2, #1	@ 0011d842 5008
.org 0x11d844
	adds r4, r4, r0	@ 0011d844 2418
.org 0x11d846
	ldrb r3, [r4, #0]	@ 0011d846 2378
.org 0x11d848
	movs r0, #1	@ 0011d848 0120
.org 0x11d84a
	ands r2, r0	@ 0011d84a 0240
.org 0x11d84c
	lsls r2, r2, #2	@ 0011d84c 9200
.org 0x11d84e
	adds r1, r3, #0	@ 0011d84e 191c
.org 0x11d850
	asrs r1, r2	@ 0011d850 1141
.org 0x11d852
	ands r1, r7	@ 0011d852 3940
.org 0x11d854
	subs r1, #1	@ 0011d854 0139
.org 0x11d856
	lsls r1, r2	@ 0011d856 9140
.org 0x11d858
	adds r0, r7, #0	@ 0011d858 381c
.org 0x11d85a
	lsls r0, r2	@ 0011d85a 9040
.org 0x11d85c
	bics r3, r0	@ 0011d85c 8343
.org 0x11d85e
	orrs r1, r3	@ 0011d85e 1943
.org 0x11d860
	strb r1, [r4, #0]	@ 0011d860 2170
.org 0x11d862
	adds r0, r5, #1	@ 0011d862 681c
.org 0x11d864
	lsls r0, r0, #24	@ 0011d864 0006
.org 0x11d866
	lsrs r5, r0, #24	@ 0011d866 050e
.org 0x11d868
	cmp r5, #3	@ 0011d868 032d
.org 0x11d86a
	bls.n 0x11d82e	@ 0011d86a e0d9
.org 0x11d86c
	mov r1, r8	@ 0011d86c 4146
.org 0x11d86e
	ldr r0, [r1, #0]	@ 0011d86e 0868
.org 0x11d870
	lsrs r5, r6, #2	@ 0011d870 b508
.org 0x11d872
	adds r4, r0, r5	@ 0011d872 4419
.org 0x11d874
	ldrb r3, [r4, #0]	@ 0011d874 2378
.org 0x11d876
	movs r0, #15	@ 0011d876 0f20
.org 0x11d878
	ands r0, r3	@ 0011d878 1840
.org 0x11d87a
	movs r2, #3	@ 0011d87a 0322
.org 0x11d87c
	ands r2, r6	@ 0011d87c 3240
.org 0x11d87e
	asrs r0, r2	@ 0011d87e 1041
.org 0x11d880
	movs r1, #1	@ 0011d880 0121
.org 0x11d882
	ands r0, r1	@ 0011d882 0840
.org 0x11d884
	cmp r0, #0	@ 0011d884 0028
.org 0x11d886
	bne.n 0x11d890	@ 0011d886 03d1
.org 0x11d888
	adds r0, r1, #0	@ 0011d888 081c
.org 0x11d88a
	lsls r0, r2	@ 0011d88a 9040
.org 0x11d88c
	orrs r0, r3	@ 0011d88c 1843
.org 0x11d88e
	strb r0, [r4, #0]	@ 0011d88e 2070
.org 0x11d890
	cmp r6, #27	@ 0011d890 1b2e
.org 0x11d892
	bne.n 0x11d8a8	@ 0011d892 09d1
.org 0x11d894
	movs r0, #4	@ 0011d894 0420
.org 0x11d896
	bl 0x108ed4	@ 0011d896 ebf71dfb
.org 0x11d89a
	b.n 0x11d8b8	@ 0011d89a 0de0
.org 0x11d89c
	.byte 0xac,0xed,0x02,0x02	@ 0011d89c data
.org 0x11d8a0
	.byte 0x40,0xc8,0x86,0x08	@ 0011d8a0 data
.org 0x11d8a4
	.byte 0xa8,0xed,0x02,0x02	@ 0011d8a4 data
.org 0x11d8a8
	mov r1, r8	@ 0011d8a8 4146
.org 0x11d8aa
	ldr r0, [r1, #0]	@ 0011d8aa 0868
.org 0x11d8ac
	adds r0, r0, r5	@ 0011d8ac 4019
.org 0x11d8ae
	movs r1, #16	@ 0011d8ae 1021
.org 0x11d8b0
	lsls r1, r2	@ 0011d8b0 9140
.org 0x11d8b2
	ldrb r2, [r0, #0]	@ 0011d8b2 0278
.org 0x11d8b4
	orrs r1, r2	@ 0011d8b4 1143
.org 0x11d8b6
	strb r1, [r0, #0]	@ 0011d8b6 0170
