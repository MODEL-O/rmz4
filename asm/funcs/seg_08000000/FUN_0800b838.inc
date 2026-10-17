@ FUN_0800b838  entry 0x0800b838  size 248
.thumb
.org 0xb838
FUN_0800b838:
	push {r4, r5, lr}	@ 0000b838 30b5
.org 0xb83a
	adds r5, r0, #0	@ 0000b83a 051c
.org 0xb83c
	ldr r0, [r5, #92]	@ 0000b83c e86d
.org 0xb83e
	lsls r1, r0, #16	@ 0000b83e 0104
.org 0xb840
	lsrs r4, r1, #16	@ 0000b840 0c0c
.org 0xb842
	ldrb r0, [r5, #14]	@ 0000b842 a87b
.org 0xb844
	cmp r0, #0	@ 0000b844 0028
.org 0xb846
	bne.n 0xb8b2	@ 0000b846 34d1
.org 0xb848
	lsrs r0, r1, #20	@ 0000b848 080d
.org 0xb84a
	lsls r0, r0, #1	@ 0000b84a 4000
.org 0xb84c
	ldr r1, [pc, #32]	@ 0000b84c 0849
.org 0xb84e
	adds r0, r0, r1	@ 0000b84e 4018
.org 0xb850
	ldr r2, [r5, #100]	@ 0000b850 6a6e
.org 0xb852
	movs r1, #71	@ 0000b852 4721
.org 0xb854
	orrs r2, r1	@ 0000b854 0a43
.org 0xb856
	strh r2, [r0, #0]	@ 0000b856 0280
.org 0xb858
	cmp r4, #18	@ 0000b858 122c
.org 0xb85a
	bne.n 0xb880	@ 0000b85a 11d1
.org 0xb85c
	ldr r0, [pc, #20]	@ 0000b85c 0548
.org 0xb85e
	ldr r0, [r0, #0]	@ 0000b85e 0068
.org 0xb860
	ldr r1, [pc, #20]	@ 0000b860 0549
.org 0xb862
	adds r0, r0, r1	@ 0000b862 4018
.org 0xb864
	ldr r1, [pc, #20]	@ 0000b864 0549
.org 0xb866
	movs r2, #128	@ 0000b866 8022
.org 0xb868
	lsls r2, r2, #2	@ 0000b868 9200
.org 0xb86a
	bl 0x128be0	@ 0000b86a 1df1b9f9
.org 0xb86e
	b.n 0xb89e	@ 0000b86e 16e0
.org 0xb870
	.byte 0x04,0x0a,0x00,0x02	@ 0000b870 data
.org 0xb874
	.byte 0xb4,0xc0,0xb2,0x08	@ 0000b874 data
.org 0xb878
	.byte 0xbc,0xc0,0xb2,0x08	@ 0000b878 data
.org 0xb87c
	.byte 0xd4,0xca,0x02,0x02	@ 0000b87c data
.org 0xb880
	ldr r0, [pc, #188]	@ 0000b880 2f48
.org 0xb882
	ldr r0, [r0, #0]	@ 0000b882 0068
.org 0xb884
	ldr r1, [pc, #188]	@ 0000b884 2f49
.org 0xb886
	adds r0, r0, r1	@ 0000b886 4018
.org 0xb888
	movs r1, #248	@ 0000b888 f821
.org 0xb88a
	lsls r1, r1, #5	@ 0000b88a 4901
.org 0xb88c
	ands r2, r1	@ 0000b88c 0a40
.org 0xb88e
	lsls r1, r2, #3	@ 0000b88e d100
.org 0xb890
	movs r2, #192	@ 0000b890 c022
.org 0xb892
	lsls r2, r2, #19	@ 0000b892 d204
.org 0xb894
	adds r1, r1, r2	@ 0000b894 8918
.org 0xb896
	movs r2, #128	@ 0000b896 8022
.org 0xb898
	lsls r2, r2, #2	@ 0000b898 9200
.org 0xb89a
	bl 0x128be0	@ 0000b89a 1df1a1f9
.org 0xb89e
	lsrs r0, r4, #4	@ 0000b89e 2009
.org 0xb8a0
	lsls r0, r0, #2	@ 0000b8a0 8000
.org 0xb8a2
	ldr r1, [pc, #164]	@ 0000b8a2 2949
.org 0xb8a4
	adds r0, r0, r1	@ 0000b8a4 4018
.org 0xb8a6
	movs r1, #0	@ 0000b8a6 0021
.org 0xb8a8
	str r1, [r0, #0]	@ 0000b8a8 0160
.org 0xb8aa
	strh r1, [r5, #16]	@ 0000b8aa 2982
.org 0xb8ac
	ldrb r0, [r5, #14]	@ 0000b8ac a87b
.org 0xb8ae
	adds r0, #1	@ 0000b8ae 0130
.org 0xb8b0
	strb r0, [r5, #14]	@ 0000b8b0 a873
.org 0xb8b2
	ldr r0, [pc, #152]	@ 0000b8b2 2648
.org 0xb8b4
	ldr r2, [pc, #152]	@ 0000b8b4 264a
.org 0xb8b6
	adds r1, r0, r2	@ 0000b8b6 8118
.org 0xb8b8
	ldrh r3, [r1, #0]	@ 0000b8b8 0b88
.org 0xb8ba
	adds r2, r3, #0	@ 0000b8ba 1a1c
.org 0xb8bc
	adds r4, r0, #0	@ 0000b8bc 041c
.org 0xb8be
	cmp r2, #0	@ 0000b8be 002a
.org 0xb8c0
	beq.n 0xb8ca	@ 0000b8c0 03d0
.org 0xb8c2
	cmp r2, #255	@ 0000b8c2 ff2a
.org 0xb8c4
	bhi.n 0xb8ca	@ 0000b8c4 01d8
.org 0xb8c6
	adds r0, r3, #1	@ 0000b8c6 581c
.org 0xb8c8
	strh r0, [r1, #0]	@ 0000b8c8 0880
.org 0xb8ca
	ldr r0, [pc, #136]	@ 0000b8ca 2248
.org 0xb8cc
	adds r1, r4, r0	@ 0000b8cc 2118
.org 0xb8ce
	ldrh r0, [r1, #0]	@ 0000b8ce 0888
.org 0xb8d0
	adds r0, #32	@ 0000b8d0 2030
.org 0xb8d2
	strh r0, [r1, #0]	@ 0000b8d2 0880
.org 0xb8d4
	ldr r2, [pc, #128]	@ 0000b8d4 204a
.org 0xb8d6
	adds r1, r4, r2	@ 0000b8d6 a118
.org 0xb8d8
	ldrh r0, [r1, #0]	@ 0000b8d8 0888
.org 0xb8da
	adds r0, #80	@ 0000b8da 5030
.org 0xb8dc
	strh r0, [r1, #0]	@ 0000b8dc 0880
.org 0xb8de
	ldr r0, [pc, #124]	@ 0000b8de 1f48
.org 0xb8e0
	adds r1, r4, r0	@ 0000b8e0 2118
.org 0xb8e2
	ldrh r0, [r1, #0]	@ 0000b8e2 0888
.org 0xb8e4
	adds r0, #160	@ 0000b8e4 a030
.org 0xb8e6
	strh r0, [r1, #0]	@ 0000b8e6 0880
.org 0xb8e8
	subs r2, #4	@ 0000b8e8 043a
.org 0xb8ea
	adds r1, r4, r2	@ 0000b8ea a118
.org 0xb8ec
	ldrh r0, [r1, #0]	@ 0000b8ec 0888
.org 0xb8ee
	adds r0, #240	@ 0000b8ee f030
.org 0xb8f0
	strh r0, [r1, #0]	@ 0000b8f0 0880
.org 0xb8f2
	ldr r0, [pc, #108]	@ 0000b8f2 1b48
.org 0xb8f4
	adds r1, r4, r0	@ 0000b8f4 2118
.org 0xb8f6
	movs r2, #200	@ 0000b8f6 c822
.org 0xb8f8
	lsls r2, r2, #1	@ 0000b8f8 5200
.org 0xb8fa
	adds r0, r2, #0	@ 0000b8fa 101c
.org 0xb8fc
	ldrh r2, [r1, #0]	@ 0000b8fc 0a88
.org 0xb8fe
	adds r0, r0, r2	@ 0000b8fe 8018
.org 0xb900
	strh r0, [r1, #0]	@ 0000b900 0880
.org 0xb902
	ldr r0, [pc, #96]	@ 0000b902 1848
.org 0xb904
	adds r1, r4, r0	@ 0000b904 2118
.org 0xb906
	movs r2, #160	@ 0000b906 a022
.org 0xb908
	lsls r2, r2, #2	@ 0000b908 9200
.org 0xb90a
	adds r0, r2, #0	@ 0000b90a 101c
.org 0xb90c
	ldrh r2, [r1, #0]	@ 0000b90c 0a88
.org 0xb90e
	adds r0, r0, r2	@ 0000b90e 8018
.org 0xb910
	strh r0, [r1, #0]	@ 0000b910 0880
.org 0xb912
	ldr r0, [pc, #84]	@ 0000b912 1548
.org 0xb914
	adds r1, r4, r0	@ 0000b914 2118
.org 0xb916
	movs r2, #196	@ 0000b916 c422
.org 0xb918
	lsls r2, r2, #3	@ 0000b918 d200
.org 0xb91a
	adds r0, r2, #0	@ 0000b91a 101c
.org 0xb91c
	ldrh r2, [r1, #0]	@ 0000b91c 0a88
.org 0xb91e
	adds r0, r0, r2	@ 0000b91e 8018
.org 0xb920
	strh r0, [r1, #0]	@ 0000b920 0880
.org 0xb922
	ldr r0, [pc, #72]	@ 0000b922 1248
.org 0xb924
	adds r1, r4, r0	@ 0000b924 2118
.org 0xb926
	movs r2, #128	@ 0000b926 8022
.org 0xb928
	lsls r2, r2, #4	@ 0000b928 1201
.org 0xb92a
	adds r0, r2, #0	@ 0000b92a 101c
.org 0xb92c
	ldrh r2, [r1, #0]	@ 0000b92c 0a88
.org 0xb92e
	adds r0, r0, r2	@ 0000b92e 8018
