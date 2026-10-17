@ FUN_0800c774  entry 0x0800c774  size 866
.thumb
.org 0xc774
FUN_0800c774:
	push {r4, lr}	@ 0000c774 10b5
.org 0xc776
	ldr r0, [pc, #116]	@ 0000c776 1d48
.org 0xc778
	ldr r2, [pc, #116]	@ 0000c778 1d4a
.org 0xc77a
	adds r1, r0, r2	@ 0000c77a 8118
.org 0xc77c
	ldrh r2, [r1, #0]	@ 0000c77c 0a88
.org 0xc77e
	lsrs r1, r2, #8	@ 0000c77e 110a
.org 0xc780
	adds r3, r0, #0	@ 0000c780 031c
.org 0xc782
	cmp r1, #2	@ 0000c782 0229
.org 0xc784
	bne.n 0xc7a4	@ 0000c784 0ed1
.org 0xc786
	movs r0, #255	@ 0000c786 ff20
.org 0xc788
	ands r0, r2	@ 0000c788 1040
.org 0xc78a
	cmp r0, #3	@ 0000c78a 0328
.org 0xc78c
	bne.n 0xc7a4	@ 0000c78c 0ad1
.org 0xc78e
	ldr r0, [pc, #100]	@ 0000c78e 1948
.org 0xc790
	adds r1, r3, r0	@ 0000c790 1918
.org 0xc792
	ldrb r0, [r1, #0]	@ 0000c792 0878
.org 0xc794
	adds r0, #1	@ 0000c794 0130
.org 0xc796
	strb r0, [r1, #0]	@ 0000c796 0870
.org 0xc798
	lsls r0, r0, #24	@ 0000c798 0006
.org 0xc79a
	lsrs r0, r0, #24	@ 0000c79a 000e
.org 0xc79c
	cmp r0, #12	@ 0000c79c 0c28
.org 0xc79e
	bne.n 0xc7a4	@ 0000c79e 01d1
.org 0xc7a0
	movs r0, #0	@ 0000c7a0 0020
.org 0xc7a2
	strb r0, [r1, #0]	@ 0000c7a2 0870
.org 0xc7a4
	ldr r1, [pc, #72]	@ 0000c7a4 1249
.org 0xc7a6
	adds r0, r3, r1	@ 0000c7a6 5818
.org 0xc7a8
	ldrh r1, [r0, #0]	@ 0000c7a8 0188
.org 0xc7aa
	lsrs r0, r1, #8	@ 0000c7aa 080a
.org 0xc7ac
	cmp r0, #2	@ 0000c7ac 0228
.org 0xc7ae
	bne.n 0xc7fc	@ 0000c7ae 25d1
.org 0xc7b0
	movs r0, #255	@ 0000c7b0 ff20
.org 0xc7b2
	ands r0, r1	@ 0000c7b2 0840
.org 0xc7b4
	cmp r0, #3	@ 0000c7b4 0328
.org 0xc7b6
	bne.n 0xc7fc	@ 0000c7b6 21d1
.org 0xc7b8
	ldr r0, [pc, #60]	@ 0000c7b8 0f48
.org 0xc7ba
	adds r2, r3, r0	@ 0000c7ba 1a18
.org 0xc7bc
	ldrb r1, [r2, #0]	@ 0000c7bc 1178
.org 0xc7be
	movs r0, #1	@ 0000c7be 0120
.org 0xc7c0
	ands r0, r1	@ 0000c7c0 0840
.org 0xc7c2
	cmp r0, #0	@ 0000c7c2 0028
.org 0xc7c4
	bne.n 0xc7dc	@ 0000c7c4 0ad1
.org 0xc7c6
	movs r0, #1	@ 0000c7c6 0120
.org 0xc7c8
	orrs r0, r1	@ 0000c7c8 0843
.org 0xc7ca
	strb r0, [r2, #0]	@ 0000c7ca 1070
.org 0xc7cc
	movs r0, #2	@ 0000c7cc 0220
.org 0xc7ce
	movs r1, #96	@ 0000c7ce 6021
.org 0xc7d0
	bl 0x249c	@ 0000c7d0 f5f764fe
.org 0xc7d4
	movs r0, #3	@ 0000c7d4 0320
.org 0xc7d6
	movs r1, #96	@ 0000c7d6 6021
.org 0xc7d8
	bl 0x249c	@ 0000c7d8 f5f760fe
.org 0xc7dc
	movs r0, #2	@ 0000c7dc 0220
.org 0xc7de
	bl 0x25d8	@ 0000c7de f5f7fbfe
.org 0xc7e2
	movs r0, #3	@ 0000c7e2 0320
.org 0xc7e4
	bl 0x25d8	@ 0000c7e4 f5f7f8fe
.org 0xc7e8
	b.n 0xc81e	@ 0000c7e8 19e0
.org 0xc7ea
	.byte 0x00	@ 0000c7ea data
.org 0xc7eb
	.byte 0x00	@ 0000c7eb data
.org 0xc7ec
	.byte 0xb0,0x0a,0x00,0x02	@ 0000c7ec data
.org 0xc7f0
	.byte 0xd4,0x07,0x00,0x00	@ 0000c7f0 data
.org 0xc7f4
	.byte 0x2c,0xd0,0x02,0x00	@ 0000c7f4 data
.org 0xc7f8
	.byte 0x28,0xd0,0x02,0x00	@ 0000c7f8 data
.org 0xc7fc
	ldr r0, [pc, #88]	@ 0000c7fc 1648
.org 0xc7fe
	ldr r1, [pc, #92]	@ 0000c7fe 1749
.org 0xc800
	adds r2, r0, r1	@ 0000c800 4218
.org 0xc802
	ldrb r1, [r2, #0]	@ 0000c802 1178
.org 0xc804
	movs r0, #1	@ 0000c804 0120
.org 0xc806
	ands r0, r1	@ 0000c806 0840
.org 0xc808
	cmp r0, #0	@ 0000c808 0028
.org 0xc80a
	beq.n 0xc81e	@ 0000c80a 08d0
.org 0xc80c
	movs r0, #1	@ 0000c80c 0120
.org 0xc80e
	eors r0, r1	@ 0000c80e 4840
.org 0xc810
	strb r0, [r2, #0]	@ 0000c810 1070
.org 0xc812
	movs r0, #2	@ 0000c812 0220
.org 0xc814
	bl 0x2624	@ 0000c814 f5f706ff
.org 0xc818
	movs r0, #3	@ 0000c818 0320
.org 0xc81a
	bl 0x2624	@ 0000c81a f5f703ff
.org 0xc81e
	ldr r3, [pc, #56]	@ 0000c81e 0e4b
.org 0xc820
	ldr r2, [pc, #60]	@ 0000c820 0f4a
.org 0xc822
	adds r0, r3, r2	@ 0000c822 9818
.org 0xc824
	ldrh r2, [r0, #0]	@ 0000c824 0288
.org 0xc826
	lsrs r1, r2, #8	@ 0000c826 110a
.org 0xc828
	cmp r1, #2	@ 0000c828 0229
.org 0xc82a
	bne.n 0xc864	@ 0000c82a 1bd1
.org 0xc82c
	movs r0, #255	@ 0000c82c ff20
.org 0xc82e
	ands r0, r2	@ 0000c82e 1040
.org 0xc830
	cmp r0, #5	@ 0000c830 0528
.org 0xc832
	bne.n 0xc864	@ 0000c832 17d1
.org 0xc834
	ldr r0, [pc, #36]	@ 0000c834 0948
.org 0xc836
	adds r3, r3, r0	@ 0000c836 1b18
.org 0xc838
	ldrb r2, [r3, #0]	@ 0000c838 1a78
.org 0xc83a
	ands r1, r2	@ 0000c83a 1140
.org 0xc83c
	cmp r1, #0	@ 0000c83c 0029
.org 0xc83e
	bne.n 0xc84e	@ 0000c83e 06d1
.org 0xc840
	movs r0, #2	@ 0000c840 0220
.org 0xc842
	orrs r0, r2	@ 0000c842 1043
.org 0xc844
	strb r0, [r3, #0]	@ 0000c844 1870
.org 0xc846
	movs r0, #4	@ 0000c846 0420
.org 0xc848
	movs r1, #96	@ 0000c848 6021
.org 0xc84a
	bl 0x249c	@ 0000c84a f5f727fe
.org 0xc84e
	movs r0, #4	@ 0000c84e 0420
.org 0xc850
	bl 0x25d8	@ 0000c850 f5f7c2fe
.org 0xc854
	b.n 0xc880	@ 0000c854 14e0
.org 0xc856
	.byte 0x00	@ 0000c856 data
.org 0xc857
	.byte 0x00	@ 0000c857 data
.org 0xc858
	.byte 0xb0,0x0a,0x00,0x02	@ 0000c858 data
.org 0xc85c
	.byte 0x28,0xd0,0x02,0x00	@ 0000c85c data
.org 0xc860
	.byte 0xd4,0x07,0x00,0x00	@ 0000c860 data
.org 0xc864
	ldr r0, [pc, #84]	@ 0000c864 1548
.org 0xc866
	ldr r1, [pc, #88]	@ 0000c866 1649
.org 0xc868
	adds r2, r0, r1	@ 0000c868 4218
.org 0xc86a
	ldrb r1, [r2, #0]	@ 0000c86a 1178
.org 0xc86c
	movs r0, #2	@ 0000c86c 0220
.org 0xc86e
	ands r0, r1	@ 0000c86e 0840
.org 0xc870
	cmp r0, #0	@ 0000c870 0028
.org 0xc872
	beq.n 0xc880	@ 0000c872 05d0
.org 0xc874
	movs r0, #2	@ 0000c874 0220
.org 0xc876
	eors r0, r1	@ 0000c876 4840
.org 0xc878
	strb r0, [r2, #0]	@ 0000c878 1070
.org 0xc87a
	movs r0, #4	@ 0000c87a 0420
.org 0xc87c
	bl 0x2624	@ 0000c87c f5f7d2fe
.org 0xc880
	ldr r2, [pc, #56]	@ 0000c880 0e4a
.org 0xc882
	ldr r1, [pc, #64]	@ 0000c882 1049
.org 0xc884
	adds r0, r2, r1	@ 0000c884 5018
.org 0xc886
	ldrh r1, [r0, #0]	@ 0000c886 0188
.org 0xc888
	lsrs r0, r1, #8	@ 0000c888 080a
.org 0xc88a
	cmp r0, #2	@ 0000c88a 0228
.org 0xc88c
	bne.n 0xc8c8	@ 0000c88c 1cd1
.org 0xc88e
	movs r0, #255	@ 0000c88e ff20
.org 0xc890
	ands r0, r1	@ 0000c890 0840
.org 0xc892
	cmp r0, #2	@ 0000c892 0228
.org 0xc894
	bne.n 0xc8c8	@ 0000c894 18d1
.org 0xc896
	ldr r0, [pc, #40]	@ 0000c896 0a48
.org 0xc898
	adds r2, r2, r0	@ 0000c898 1218
.org 0xc89a
	ldrb r1, [r2, #0]	@ 0000c89a 1178
.org 0xc89c
	movs r0, #4	@ 0000c89c 0420
.org 0xc89e
	ands r0, r1	@ 0000c89e 0840
.org 0xc8a0
	cmp r0, #0	@ 0000c8a0 0028
.org 0xc8a2
	bne.n 0xc8b2	@ 0000c8a2 06d1
.org 0xc8a4
	movs r0, #4	@ 0000c8a4 0420
.org 0xc8a6
	orrs r0, r1	@ 0000c8a6 0843
.org 0xc8a8
	strb r0, [r2, #0]	@ 0000c8a8 1070
.org 0xc8aa
	movs r0, #11	@ 0000c8aa 0b20
.org 0xc8ac
	movs r1, #0	@ 0000c8ac 0021
.org 0xc8ae
	bl 0x249c	@ 0000c8ae f5f7f5fd
.org 0xc8b2
	movs r0, #11	@ 0000c8b2 0b20
.org 0xc8b4
	bl 0x25d8	@ 0000c8b4 f5f790fe
.org 0xc8b8
	b.n 0xc8e4	@ 0000c8b8 14e0
.org 0xc8ba
	.byte 0x00	@ 0000c8ba data
.org 0xc8bb
	.byte 0x00	@ 0000c8bb data
.org 0xc8bc
	.byte 0xb0,0x0a,0x00,0x02	@ 0000c8bc data
.org 0xc8c0
	.byte 0x28,0xd0,0x02,0x00	@ 0000c8c0 data
.org 0xc8c4
	.byte 0xd4,0x07,0x00,0x00	@ 0000c8c4 data
.org 0xc8c8
	ldr r0, [pc, #100]	@ 0000c8c8 1948
.org 0xc8ca
	ldr r1, [pc, #104]	@ 0000c8ca 1a49
.org 0xc8cc
	adds r2, r0, r1	@ 0000c8cc 4218
.org 0xc8ce
	ldrb r1, [r2, #0]	@ 0000c8ce 1178
.org 0xc8d0
	movs r0, #4	@ 0000c8d0 0420
.org 0xc8d2
	ands r0, r1	@ 0000c8d2 0840
.org 0xc8d4
	cmp r0, #0	@ 0000c8d4 0028
.org 0xc8d6
	beq.n 0xc8e4	@ 0000c8d6 05d0
.org 0xc8d8
	movs r0, #4	@ 0000c8d8 0420
.org 0xc8da
	eors r0, r1	@ 0000c8da 4840
.org 0xc8dc
	strb r0, [r2, #0]	@ 0000c8dc 1070
.org 0xc8de
	movs r0, #11	@ 0000c8de 0b20
.org 0xc8e0
	bl 0x2624	@ 0000c8e0 f5f7a0fe
.org 0xc8e4
	ldr r2, [pc, #72]	@ 0000c8e4 124a
.org 0xc8e6
	ldr r1, [pc, #80]	@ 0000c8e6 1449
.org 0xc8e8
	adds r0, r2, r1	@ 0000c8e8 5018
.org 0xc8ea
	ldrh r1, [r0, #0]	@ 0000c8ea 0188
.org 0xc8ec
	lsrs r0, r1, #8	@ 0000c8ec 080a
.org 0xc8ee
	cmp r0, #2	@ 0000c8ee 0228
.org 0xc8f0
	bne.n 0xc93c	@ 0000c8f0 24d1
.org 0xc8f2
	movs r0, #255	@ 0000c8f2 ff20
.org 0xc8f4
	ands r0, r1	@ 0000c8f4 0840
.org 0xc8f6
	cmp r0, #1	@ 0000c8f6 0128
.org 0xc8f8
	bne.n 0xc93c	@ 0000c8f8 20d1
.org 0xc8fa
	ldr r0, [pc, #56]	@ 0000c8fa 0e48
.org 0xc8fc
	adds r2, r2, r0	@ 0000c8fc 1218
.org 0xc8fe
	ldrb r1, [r2, #0]	@ 0000c8fe 1178
.org 0xc900
	movs r0, #8	@ 0000c900 0820
.org 0xc902
	ands r0, r1	@ 0000c902 0840
.org 0xc904
	cmp r0, #0	@ 0000c904 0028
.org 0xc906
	bne.n 0xc922	@ 0000c906 0cd1
.org 0xc908
	movs r0, #8	@ 0000c908 0820
.org 0xc90a
	orrs r0, r1	@ 0000c90a 0843
.org 0xc90c
	strb r0, [r2, #0]	@ 0000c90c 1070
.org 0xc90e
	movs r1, #176	@ 0000c90e b021
.org 0xc910
	lsls r1, r1, #1	@ 0000c910 4900
.org 0xc912
	movs r0, #14	@ 0000c912 0e20
.org 0xc914
	bl 0x249c	@ 0000c914 f5f7c2fd
.org 0xc918
	movs r1, #208	@ 0000c918 d021
.org 0xc91a
	lsls r1, r1, #1	@ 0000c91a 4900
.org 0xc91c
	movs r0, #25	@ 0000c91c 1920
.org 0xc91e
	bl 0x249c	@ 0000c91e f5f7bdfd
.org 0xc922
	movs r0, #14	@ 0000c922 0e20
.org 0xc924
	bl 0x25d8	@ 0000c924 f5f758fe
.org 0xc928
	movs r0, #25	@ 0000c928 1920
.org 0xc92a
	bl 0x25d8	@ 0000c92a f5f755fe
.org 0xc92e
	b.n 0xc95e	@ 0000c92e 16e0
.org 0xc930
	.byte 0xb0,0x0a,0x00,0x02	@ 0000c930 data
.org 0xc934
	.byte 0x28,0xd0,0x02,0x00	@ 0000c934 data
.org 0xc938
	.byte 0xd6,0x07,0x00,0x00	@ 0000c938 data
.org 0xc93c
	ldr r0, [pc, #120]	@ 0000c93c 1e48
.org 0xc93e
	ldr r1, [pc, #124]	@ 0000c93e 1f49
.org 0xc940
	adds r2, r0, r1	@ 0000c940 4218
.org 0xc942
	ldrb r1, [r2, #0]	@ 0000c942 1178
.org 0xc944
	movs r0, #8	@ 0000c944 0820
.org 0xc946
	ands r0, r1	@ 0000c946 0840
.org 0xc948
	cmp r0, #0	@ 0000c948 0028
.org 0xc94a
	beq.n 0xc95e	@ 0000c94a 08d0
.org 0xc94c
	movs r0, #8	@ 0000c94c 0820
.org 0xc94e
	eors r0, r1	@ 0000c94e 4840
.org 0xc950
	strb r0, [r2, #0]	@ 0000c950 1070
.org 0xc952
	movs r0, #14	@ 0000c952 0e20
.org 0xc954
	bl 0x2624	@ 0000c954 f5f766fe
.org 0xc958
	movs r0, #25	@ 0000c958 1920
.org 0xc95a
	bl 0x2624	@ 0000c95a f5f763fe
.org 0xc95e
	ldr r2, [pc, #88]	@ 0000c95e 164a
.org 0xc960
	ldr r1, [pc, #92]	@ 0000c960 1749
.org 0xc962
	adds r0, r2, r1	@ 0000c962 5018
.org 0xc964
	ldrh r1, [r0, #0]	@ 0000c964 0188
.org 0xc966
	lsrs r0, r1, #8	@ 0000c966 080a
.org 0xc968
	cmp r0, #2	@ 0000c968 0228
.org 0xc96a
	bne.n 0xc9c4	@ 0000c96a 2bd1
.org 0xc96c
	movs r0, #255	@ 0000c96c ff20
.org 0xc96e
	ands r0, r1	@ 0000c96e 0840
.org 0xc970
	cmp r0, #3	@ 0000c970 0328
.org 0xc972
	bne.n 0xc9c4	@ 0000c972 27d1
.org 0xc974
	ldr r0, [pc, #68]	@ 0000c974 1148
.org 0xc976
	adds r2, r2, r0	@ 0000c976 1218
.org 0xc978
	ldrb r1, [r2, #0]	@ 0000c978 1178
.org 0xc97a
	movs r0, #16	@ 0000c97a 1020
.org 0xc97c
	ands r0, r1	@ 0000c97c 0840
.org 0xc97e
	cmp r0, #0	@ 0000c97e 0028
.org 0xc980
	bne.n 0xc9a4	@ 0000c980 10d1
.org 0xc982
	movs r0, #16	@ 0000c982 1020
.org 0xc984
	orrs r0, r1	@ 0000c984 0843
.org 0xc986
	strb r0, [r2, #0]	@ 0000c986 1070
.org 0xc988
	movs r0, #15	@ 0000c988 0f20
.org 0xc98a
	movs r1, #160	@ 0000c98a a021
.org 0xc98c
	bl 0x249c	@ 0000c98c f5f786fd
.org 0xc990
	movs r4, #192	@ 0000c990 c024
.org 0xc992
	lsls r4, r4, #1	@ 0000c992 6400
.org 0xc994
	movs r0, #16	@ 0000c994 1020
.org 0xc996
	adds r1, r4, #0	@ 0000c996 211c
.org 0xc998
	bl 0x249c	@ 0000c998 f5f780fd
.org 0xc99c
	movs r0, #17	@ 0000c99c 1120
.org 0xc99e
	adds r1, r4, #0	@ 0000c99e 211c
.org 0xc9a0
	bl 0x249c	@ 0000c9a0 f5f77cfd
.org 0xc9a4
	movs r0, #15	@ 0000c9a4 0f20
.org 0xc9a6
	bl 0x25d8	@ 0000c9a6 f5f717fe
.org 0xc9aa
	movs r0, #16	@ 0000c9aa 1020
.org 0xc9ac
	bl 0x25d8	@ 0000c9ac f5f714fe
.org 0xc9b0
	movs r0, #17	@ 0000c9b0 1120
.org 0xc9b2
	bl 0x25d8	@ 0000c9b2 f5f711fe
.org 0xc9b6
	b.n 0xc9ec	@ 0000c9b6 19e0
.org 0xc9b8
	.byte 0xb0,0x0a,0x00,0x02	@ 0000c9b8 data
.org 0xc9bc
	.byte 0x28,0xd0,0x02,0x00	@ 0000c9bc data
.org 0xc9c0
	.byte 0xd4,0x07,0x00,0x00	@ 0000c9c0 data
.org 0xc9c4
	ldr r0, [pc, #96]	@ 0000c9c4 1848
.org 0xc9c6
	ldr r1, [pc, #100]	@ 0000c9c6 1949
.org 0xc9c8
	adds r2, r0, r1	@ 0000c9c8 4218
.org 0xc9ca
	ldrb r1, [r2, #0]	@ 0000c9ca 1178
.org 0xc9cc
	movs r0, #16	@ 0000c9cc 1020
.org 0xc9ce
	ands r0, r1	@ 0000c9ce 0840
.org 0xc9d0
	cmp r0, #0	@ 0000c9d0 0028
.org 0xc9d2
	beq.n 0xc9ec	@ 0000c9d2 0bd0
.org 0xc9d4
	movs r0, #16	@ 0000c9d4 1020
.org 0xc9d6
	eors r0, r1	@ 0000c9d6 4840
.org 0xc9d8
	strb r0, [r2, #0]	@ 0000c9d8 1070
.org 0xc9da
	movs r0, #15	@ 0000c9da 0f20
.org 0xc9dc
	bl 0x2624	@ 0000c9dc f5f722fe
.org 0xc9e0
	movs r0, #16	@ 0000c9e0 1020
.org 0xc9e2
	bl 0x2624	@ 0000c9e2 f5f71ffe
.org 0xc9e6
	movs r0, #17	@ 0000c9e6 1120
.org 0xc9e8
	bl 0x2624	@ 0000c9e8 f5f71cfe
.org 0xc9ec
	ldr r2, [pc, #56]	@ 0000c9ec 0e4a
.org 0xc9ee
	ldr r1, [pc, #64]	@ 0000c9ee 1049
.org 0xc9f0
	adds r0, r2, r1	@ 0000c9f0 5018
.org 0xc9f2
	ldrh r1, [r0, #0]	@ 0000c9f2 0188
.org 0xc9f4
	lsrs r0, r1, #8	@ 0000c9f4 080a
.org 0xc9f6
	cmp r0, #2	@ 0000c9f6 0228
.org 0xc9f8
	bne.n 0xca34	@ 0000c9f8 1cd1
.org 0xc9fa
	movs r0, #255	@ 0000c9fa ff20
.org 0xc9fc
	ands r0, r1	@ 0000c9fc 0840
.org 0xc9fe
	cmp r0, #5	@ 0000c9fe 0528
.org 0xca00
	bne.n 0xca34	@ 0000ca00 18d1
.org 0xca02
	ldr r0, [pc, #40]	@ 0000ca02 0a48
.org 0xca04
	adds r2, r2, r0	@ 0000ca04 1218
.org 0xca06
	ldrb r1, [r2, #0]	@ 0000ca06 1178
.org 0xca08
	movs r0, #32	@ 0000ca08 2020
.org 0xca0a
	ands r0, r1	@ 0000ca0a 0840
.org 0xca0c
	cmp r0, #0	@ 0000ca0c 0028
.org 0xca0e
	bne.n 0xca1e	@ 0000ca0e 06d1
.org 0xca10
	movs r0, #32	@ 0000ca10 2020
.org 0xca12
	orrs r0, r1	@ 0000ca12 0843
.org 0xca14
	strb r0, [r2, #0]	@ 0000ca14 1070
.org 0xca16
	movs r0, #24	@ 0000ca16 1820
.org 0xca18
	movs r1, #160	@ 0000ca18 a021
.org 0xca1a
	bl 0x249c	@ 0000ca1a f5f73ffd
.org 0xca1e
	movs r0, #24	@ 0000ca1e 1820
.org 0xca20
	bl 0x25d8	@ 0000ca20 f5f7dafd
.org 0xca24
	b.n 0xca50	@ 0000ca24 14e0
.org 0xca26
	.byte 0x00	@ 0000ca26 data
.org 0xca27
	.byte 0x00	@ 0000ca27 data
.org 0xca28
	.byte 0xb0,0x0a,0x00,0x02	@ 0000ca28 data
.org 0xca2c
	.byte 0x28,0xd0,0x02,0x00	@ 0000ca2c data
.org 0xca30
	.byte 0xd4,0x07,0x00,0x00	@ 0000ca30 data
.org 0xca34
	ldr r0, [pc, #96]	@ 0000ca34 1848
.org 0xca36
	ldr r1, [pc, #100]	@ 0000ca36 1949
.org 0xca38
	adds r2, r0, r1	@ 0000ca38 4218
.org 0xca3a
	ldrb r1, [r2, #0]	@ 0000ca3a 1178
.org 0xca3c
	movs r0, #32	@ 0000ca3c 2020
.org 0xca3e
	ands r0, r1	@ 0000ca3e 0840
.org 0xca40
	cmp r0, #0	@ 0000ca40 0028
.org 0xca42
	beq.n 0xca50	@ 0000ca42 05d0
.org 0xca44
	movs r0, #32	@ 0000ca44 2020
.org 0xca46
	eors r0, r1	@ 0000ca46 4840
.org 0xca48
	strb r0, [r2, #0]	@ 0000ca48 1070
.org 0xca4a
	movs r0, #24	@ 0000ca4a 1820
.org 0xca4c
	bl 0x2624	@ 0000ca4c f5f7eafd
.org 0xca50
	ldr r2, [pc, #68]	@ 0000ca50 114a
.org 0xca52
	ldr r1, [pc, #76]	@ 0000ca52 1349
.org 0xca54
	adds r0, r2, r1	@ 0000ca54 5018
.org 0xca56
	ldrh r1, [r0, #0]	@ 0000ca56 0188
.org 0xca58
	lsrs r0, r1, #8	@ 0000ca58 080a
.org 0xca5a
	cmp r0, #2	@ 0000ca5a 0228
.org 0xca5c
	bne.n 0xcaa4	@ 0000ca5c 22d1
.org 0xca5e
	movs r0, #255	@ 0000ca5e ff20
.org 0xca60
	ands r0, r1	@ 0000ca60 0840
.org 0xca62
	cmp r0, #8	@ 0000ca62 0828
.org 0xca64
	bne.n 0xcaa4	@ 0000ca64 1ed1
.org 0xca66
	ldr r0, [pc, #52]	@ 0000ca66 0d48
.org 0xca68
	adds r2, r2, r0	@ 0000ca68 1218
.org 0xca6a
	ldrb r1, [r2, #0]	@ 0000ca6a 1178
.org 0xca6c
	movs r0, #64	@ 0000ca6c 4020
.org 0xca6e
	ands r0, r1	@ 0000ca6e 0840
.org 0xca70
	cmp r0, #0	@ 0000ca70 0028
.org 0xca72
	bne.n 0xca8a	@ 0000ca72 0ad1
.org 0xca74
	movs r0, #64	@ 0000ca74 4020
.org 0xca76
	orrs r0, r1	@ 0000ca76 0843
.org 0xca78
	strb r0, [r2, #0]	@ 0000ca78 1070
.org 0xca7a
	movs r0, #26	@ 0000ca7a 1a20
.org 0xca7c
	movs r1, #0	@ 0000ca7c 0021
.org 0xca7e
	bl 0x249c	@ 0000ca7e f5f70dfd
.org 0xca82
	movs r0, #27	@ 0000ca82 1b20
.org 0xca84
	movs r1, #0	@ 0000ca84 0021
.org 0xca86
	bl 0x249c	@ 0000ca86 f5f709fd
.org 0xca8a
	movs r0, #26	@ 0000ca8a 1a20
.org 0xca8c
	bl 0x25d8	@ 0000ca8c f5f7a4fd
.org 0xca90
	movs r0, #27	@ 0000ca90 1b20
.org 0xca92
	bl 0x25d8	@ 0000ca92 f5f7a1fd
.org 0xca96
	b.n 0xcac6	@ 0000ca96 16e0
.org 0xca98
	.byte 0xb0,0x0a,0x00,0x02	@ 0000ca98 data
.org 0xca9c
	.byte 0x28,0xd0,0x02,0x00	@ 0000ca9c data
.org 0xcaa0
	.byte 0xd4,0x07,0x00,0x00	@ 0000caa0 data
.org 0xcaa4
	ldr r0, [pc, #104]	@ 0000caa4 1a48
.org 0xcaa6
	ldr r1, [pc, #108]	@ 0000caa6 1b49
.org 0xcaa8
	adds r2, r0, r1	@ 0000caa8 4218
.org 0xcaaa
	ldrb r1, [r2, #0]	@ 0000caaa 1178
.org 0xcaac
	movs r0, #64	@ 0000caac 4020
.org 0xcaae
	ands r0, r1	@ 0000caae 0840
.org 0xcab0
	cmp r0, #0	@ 0000cab0 0028
.org 0xcab2
	beq.n 0xcac6	@ 0000cab2 08d0
.org 0xcab4
	movs r0, #64	@ 0000cab4 4020
.org 0xcab6
	eors r0, r1	@ 0000cab6 4840
.org 0xcab8
	strb r0, [r2, #0]	@ 0000cab8 1070
.org 0xcaba
	movs r0, #26	@ 0000caba 1a20
.org 0xcabc
	bl 0x2624	@ 0000cabc f5f7b2fd
.org 0xcac0
	movs r0, #27	@ 0000cac0 1b20
.org 0xcac2
	bl 0x2624	@ 0000cac2 f5f7affd
.org 0xcac6
	ldr r0, [pc, #72]	@ 0000cac6 1248
.org 0xcac8
	ldr r2, [pc, #76]	@ 0000cac8 134a
.org 0xcaca
	adds r1, r0, r2	@ 0000caca 8118
.org 0xcacc
	ldrh r2, [r1, #0]	@ 0000cacc 0a88
.org 0xcace
	lsrs r1, r2, #8	@ 0000cace 110a
.org 0xcad0
	adds r3, r0, #0	@ 0000cad0 031c
.org 0xcad2
	cmp r1, #2	@ 0000cad2 0229
.org 0xcad4
	bne.n 0xcb1c	@ 0000cad4 22d1
