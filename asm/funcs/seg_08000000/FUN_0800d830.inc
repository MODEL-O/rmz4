@ FUN_0800d830  entry 0x0800d830  size 582
.thumb
.org 0xd830
FUN_0800d830:
	push {lr}	@ 0000d830 00b5
.org 0xd832
	ldr r2, [pc, #72]	@ 0000d832 124a
.org 0xd834
	ldr r1, [pc, #72]	@ 0000d834 1249
.org 0xd836
	adds r0, r2, r1	@ 0000d836 5018
.org 0xd838
	ldrb r1, [r0, #0]	@ 0000d838 0178
.org 0xd83a
	movs r0, #15	@ 0000d83a 0f20
.org 0xd83c
	ands r0, r1	@ 0000d83c 0840
.org 0xd83e
	cmp r0, #0	@ 0000d83e 0028
.org 0xd840
	bne.n 0xd91e	@ 0000d840 6dd1
.org 0xd842
	ldr r1, [pc, #64]	@ 0000d842 1049
.org 0xd844
	adds r0, r2, r1	@ 0000d844 5018
.org 0xd846
	ldrh r1, [r0, #0]	@ 0000d846 0188
.org 0xd848
	lsrs r0, r1, #8	@ 0000d848 080a
.org 0xd84a
	cmp r0, #3	@ 0000d84a 0328
.org 0xd84c
	bne.n 0xd88c	@ 0000d84c 1ed1
.org 0xd84e
	movs r0, #255	@ 0000d84e ff20
.org 0xd850
	ands r0, r1	@ 0000d850 0840
.org 0xd852
	cmp r0, #0	@ 0000d852 0028
.org 0xd854
	bne.n 0xd88c	@ 0000d854 1ad1
.org 0xd856
	ldr r0, [pc, #48]	@ 0000d856 0c48
.org 0xd858
	adds r2, r2, r0	@ 0000d858 1218
.org 0xd85a
	ldrb r1, [r2, #0]	@ 0000d85a 1178
.org 0xd85c
	movs r0, #16	@ 0000d85c 1020
.org 0xd85e
	ands r0, r1	@ 0000d85e 0840
.org 0xd860
	cmp r0, #0	@ 0000d860 0028
.org 0xd862
	bne.n 0xd872	@ 0000d862 06d1
.org 0xd864
	movs r0, #16	@ 0000d864 1020
.org 0xd866
	orrs r0, r1	@ 0000d866 0843
.org 0xd868
	strb r0, [r2, #0]	@ 0000d868 1070
.org 0xd86a
	movs r0, #171	@ 0000d86a ab20
.org 0xd86c
	movs r1, #0	@ 0000d86c 0021
.org 0xd86e
	bl 0x249c	@ 0000d86e f4f715fe
.org 0xd872
	movs r0, #171	@ 0000d872 ab20
.org 0xd874
	bl 0x25d8	@ 0000d874 f4f7b0fe
.org 0xd878
	b.n 0xd8a8	@ 0000d878 16e0
.org 0xd87a
	.byte 0x00	@ 0000d87a data
.org 0xd87b
	.byte 0x00	@ 0000d87b data
.org 0xd87c
	.byte 0xb0,0x0a,0x00,0x02	@ 0000d87c data
.org 0xd880
	.byte 0x10,0xc0,0x02,0x00	@ 0000d880 data
.org 0xd884
	.byte 0xd4,0x07,0x00,0x00	@ 0000d884 data
.org 0xd888
	.byte 0x28,0xd0,0x02,0x00	@ 0000d888 data
.org 0xd88c
	ldr r0, [pc, #96]	@ 0000d88c 1848
.org 0xd88e
	ldr r1, [pc, #100]	@ 0000d88e 1949
.org 0xd890
	adds r2, r0, r1	@ 0000d890 4218
.org 0xd892
	ldrb r1, [r2, #0]	@ 0000d892 1178
.org 0xd894
	movs r0, #16	@ 0000d894 1020
.org 0xd896
	ands r0, r1	@ 0000d896 0840
.org 0xd898
	cmp r0, #0	@ 0000d898 0028
.org 0xd89a
	beq.n 0xd8a8	@ 0000d89a 05d0
.org 0xd89c
	movs r0, #16	@ 0000d89c 1020
.org 0xd89e
	eors r0, r1	@ 0000d89e 4840
.org 0xd8a0
	strb r0, [r2, #0]	@ 0000d8a0 1070
.org 0xd8a2
	movs r0, #171	@ 0000d8a2 ab20
.org 0xd8a4
	bl 0x2624	@ 0000d8a4 f4f7befe
.org 0xd8a8
	ldr r2, [pc, #68]	@ 0000d8a8 114a
.org 0xd8aa
	ldr r1, [pc, #76]	@ 0000d8aa 1349
.org 0xd8ac
	adds r0, r2, r1	@ 0000d8ac 5018
.org 0xd8ae
	ldrh r1, [r0, #0]	@ 0000d8ae 0188
.org 0xd8b0
	lsrs r0, r1, #8	@ 0000d8b0 080a
.org 0xd8b2
	cmp r0, #3	@ 0000d8b2 0328
.org 0xd8b4
	bne.n 0xd8fc	@ 0000d8b4 22d1
.org 0xd8b6
	movs r0, #255	@ 0000d8b6 ff20
.org 0xd8b8
	ands r0, r1	@ 0000d8b8 0840
.org 0xd8ba
	cmp r0, #1	@ 0000d8ba 0128
.org 0xd8bc
	bne.n 0xd8fc	@ 0000d8bc 1ed1
.org 0xd8be
	ldr r1, [pc, #52]	@ 0000d8be 0d49
.org 0xd8c0
	adds r2, r2, r1	@ 0000d8c0 5218
.org 0xd8c2
	ldrb r1, [r2, #0]	@ 0000d8c2 1178
.org 0xd8c4
	ands r0, r1	@ 0000d8c4 0840
.org 0xd8c6
	cmp r0, #0	@ 0000d8c6 0028
.org 0xd8c8
	bne.n 0xd8e0	@ 0000d8c8 0ad1
.org 0xd8ca
	movs r0, #1	@ 0000d8ca 0120
.org 0xd8cc
	orrs r0, r1	@ 0000d8cc 0843
.org 0xd8ce
	strb r0, [r2, #0]	@ 0000d8ce 1070
.org 0xd8d0
	movs r0, #28	@ 0000d8d0 1c20
.org 0xd8d2
	movs r1, #0	@ 0000d8d2 0021
.org 0xd8d4
	bl 0x249c	@ 0000d8d4 f4f7e2fd
.org 0xd8d8
	movs r0, #170	@ 0000d8d8 aa20
.org 0xd8da
	movs r1, #0	@ 0000d8da 0021
.org 0xd8dc
	bl 0x249c	@ 0000d8dc f4f7defd
.org 0xd8e0
	movs r0, #28	@ 0000d8e0 1c20
.org 0xd8e2
	bl 0x25d8	@ 0000d8e2 f4f779fe
.org 0xd8e6
	movs r0, #170	@ 0000d8e6 aa20
.org 0xd8e8
	bl 0x25d8	@ 0000d8e8 f4f776fe
.org 0xd8ec
	b.n 0xd91e	@ 0000d8ec 17e0
.org 0xd8ee
	.byte 0x00	@ 0000d8ee data
.org 0xd8ef
	.byte 0x00	@ 0000d8ef data
.org 0xd8f0
	.byte 0xb0,0x0a,0x00,0x02	@ 0000d8f0 data
.org 0xd8f4
	.byte 0x28,0xd0,0x02,0x00	@ 0000d8f4 data
.org 0xd8f8
	.byte 0xd6,0x07,0x00,0x00	@ 0000d8f8 data
.org 0xd8fc
	ldr r0, [pc, #104]	@ 0000d8fc 1a48
.org 0xd8fe
	ldr r1, [pc, #108]	@ 0000d8fe 1b49
.org 0xd900
	adds r2, r0, r1	@ 0000d900 4218
.org 0xd902
	ldrb r1, [r2, #0]	@ 0000d902 1178
.org 0xd904
	movs r0, #1	@ 0000d904 0120
.org 0xd906
	ands r0, r1	@ 0000d906 0840
.org 0xd908
	cmp r0, #0	@ 0000d908 0028
.org 0xd90a
	beq.n 0xd91e	@ 0000d90a 08d0
.org 0xd90c
	movs r0, #1	@ 0000d90c 0120
.org 0xd90e
	eors r0, r1	@ 0000d90e 4840
.org 0xd910
	strb r0, [r2, #0]	@ 0000d910 1070
.org 0xd912
	movs r0, #28	@ 0000d912 1c20
.org 0xd914
	bl 0x2624	@ 0000d914 f4f786fe
.org 0xd918
	movs r0, #170	@ 0000d918 aa20
.org 0xd91a
	bl 0x2624	@ 0000d91a f4f783fe
.org 0xd91e
	ldr r2, [pc, #72]	@ 0000d91e 124a
.org 0xd920
	ldr r1, [pc, #76]	@ 0000d920 1349
.org 0xd922
	adds r0, r2, r1	@ 0000d922 5018
.org 0xd924
	ldrh r1, [r0, #0]	@ 0000d924 0188
.org 0xd926
	lsrs r0, r1, #8	@ 0000d926 080a
.org 0xd928
	cmp r0, #3	@ 0000d928 0328
.org 0xd92a
	bne.n 0xd974	@ 0000d92a 23d1
.org 0xd92c
	movs r0, #255	@ 0000d92c ff20
.org 0xd92e
	ands r0, r1	@ 0000d92e 0840
.org 0xd930
	cmp r0, #3	@ 0000d930 0328
.org 0xd932
	bne.n 0xd974	@ 0000d932 1fd1
.org 0xd934
	ldr r0, [pc, #52]	@ 0000d934 0d48
.org 0xd936
	adds r2, r2, r0	@ 0000d936 1218
.org 0xd938
	ldrb r1, [r2, #0]	@ 0000d938 1178
.org 0xd93a
	movs r0, #2	@ 0000d93a 0220
.org 0xd93c
	ands r0, r1	@ 0000d93c 0840
.org 0xd93e
	cmp r0, #0	@ 0000d93e 0028
.org 0xd940
	bne.n 0xd958	@ 0000d940 0ad1
.org 0xd942
	movs r0, #2	@ 0000d942 0220
.org 0xd944
	orrs r0, r1	@ 0000d944 0843
.org 0xd946
	strb r0, [r2, #0]	@ 0000d946 1070
.org 0xd948
	movs r0, #29	@ 0000d948 1d20
.org 0xd94a
	movs r1, #0	@ 0000d94a 0021
.org 0xd94c
	bl 0x249c	@ 0000d94c f4f7a6fd
.org 0xd950
	movs r0, #30	@ 0000d950 1e20
.org 0xd952
	movs r1, #0	@ 0000d952 0021
.org 0xd954
	bl 0x249c	@ 0000d954 f4f7a2fd
.org 0xd958
	movs r0, #29	@ 0000d958 1d20
.org 0xd95a
	bl 0x25d8	@ 0000d95a f4f73dfe
.org 0xd95e
	movs r0, #30	@ 0000d95e 1e20
.org 0xd960
	bl 0x25d8	@ 0000d960 f4f73afe
.org 0xd964
	b.n 0xd996	@ 0000d964 17e0
.org 0xd966
	.byte 0x00	@ 0000d966 data
.org 0xd967
	.byte 0x00	@ 0000d967 data
.org 0xd968
	.byte 0xb0,0x0a,0x00,0x02	@ 0000d968 data
.org 0xd96c
	.byte 0x28,0xd0,0x02,0x00	@ 0000d96c data
.org 0xd970
	.byte 0xd6,0x07,0x00,0x00	@ 0000d970 data
.org 0xd974
	ldr r0, [pc, #116]	@ 0000d974 1d48
.org 0xd976
	ldr r1, [pc, #120]	@ 0000d976 1e49
.org 0xd978
	adds r2, r0, r1	@ 0000d978 4218
.org 0xd97a
	ldrb r1, [r2, #0]	@ 0000d97a 1178
.org 0xd97c
	movs r0, #2	@ 0000d97c 0220
.org 0xd97e
	ands r0, r1	@ 0000d97e 0840
.org 0xd980
	cmp r0, #0	@ 0000d980 0028
.org 0xd982
	beq.n 0xd996	@ 0000d982 08d0
.org 0xd984
	movs r0, #2	@ 0000d984 0220
.org 0xd986
	eors r0, r1	@ 0000d986 4840
.org 0xd988
	strb r0, [r2, #0]	@ 0000d988 1070
.org 0xd98a
	movs r0, #29	@ 0000d98a 1d20
.org 0xd98c
	bl 0x2624	@ 0000d98c f4f74afe
.org 0xd990
	movs r0, #30	@ 0000d990 1e20
.org 0xd992
	bl 0x2624	@ 0000d992 f4f747fe
.org 0xd996
	ldr r2, [pc, #84]	@ 0000d996 154a
.org 0xd998
	ldr r1, [pc, #88]	@ 0000d998 1649
.org 0xd99a
	adds r0, r2, r1	@ 0000d99a 5018
.org 0xd99c
	ldrh r1, [r0, #0]	@ 0000d99c 0188
.org 0xd99e
	lsrs r0, r1, #8	@ 0000d99e 080a
.org 0xd9a0
	cmp r0, #3	@ 0000d9a0 0328
.org 0xd9a2
	bne.n 0xd9f8	@ 0000d9a2 29d1
.org 0xd9a4
	movs r0, #255	@ 0000d9a4 ff20
.org 0xd9a6
	ands r0, r1	@ 0000d9a6 0840
.org 0xd9a8
	cmp r0, #4	@ 0000d9a8 0428
.org 0xd9aa
	bne.n 0xd9f8	@ 0000d9aa 25d1
.org 0xd9ac
	ldr r1, [pc, #64]	@ 0000d9ac 1049
.org 0xd9ae
	adds r2, r2, r1	@ 0000d9ae 5218
.org 0xd9b0
	ldrb r1, [r2, #0]	@ 0000d9b0 1178
.org 0xd9b2
	ands r0, r1	@ 0000d9b2 0840
.org 0xd9b4
	cmp r0, #0	@ 0000d9b4 0028
.org 0xd9b6
	bne.n 0xd9d6	@ 0000d9b6 0ed1
.org 0xd9b8
	movs r0, #4	@ 0000d9b8 0420
.org 0xd9ba
	orrs r0, r1	@ 0000d9ba 0843
.org 0xd9bc
	strb r0, [r2, #0]	@ 0000d9bc 1070
.org 0xd9be
	movs r0, #31	@ 0000d9be 1f20
.org 0xd9c0
	movs r1, #0	@ 0000d9c0 0021
.org 0xd9c2
	bl 0x249c	@ 0000d9c2 f4f76bfd
.org 0xd9c6
	movs r0, #32	@ 0000d9c6 2020
.org 0xd9c8
	movs r1, #0	@ 0000d9c8 0021
.org 0xd9ca
	bl 0x249c	@ 0000d9ca f4f767fd
.org 0xd9ce
	movs r0, #33	@ 0000d9ce 2120
.org 0xd9d0
	movs r1, #0	@ 0000d9d0 0021
.org 0xd9d2
	bl 0x249c	@ 0000d9d2 f4f763fd
.org 0xd9d6
	movs r0, #31	@ 0000d9d6 1f20
.org 0xd9d8
	bl 0x25d8	@ 0000d9d8 f4f7fefd
.org 0xd9dc
	movs r0, #32	@ 0000d9dc 2020
.org 0xd9de
	bl 0x25d8	@ 0000d9de f4f7fbfd
.org 0xd9e2
	movs r0, #33	@ 0000d9e2 2120
.org 0xd9e4
	bl 0x25d8	@ 0000d9e4 f4f7f8fd
.org 0xd9e8
	b.n 0xda20	@ 0000d9e8 1ae0
.org 0xd9ea
	.byte 0x00	@ 0000d9ea data
.org 0xd9eb
	.byte 0x00	@ 0000d9eb data
.org 0xd9ec
	.byte 0xb0,0x0a,0x00,0x02	@ 0000d9ec data
.org 0xd9f0
	.byte 0x28,0xd0,0x02,0x00	@ 0000d9f0 data
.org 0xd9f4
	.byte 0xd6,0x07,0x00,0x00	@ 0000d9f4 data
.org 0xd9f8
	ldr r0, [pc, #108]	@ 0000d9f8 1b48
.org 0xd9fa
	ldr r1, [pc, #112]	@ 0000d9fa 1c49
.org 0xd9fc
	adds r2, r0, r1	@ 0000d9fc 4218
.org 0xd9fe
	ldrb r1, [r2, #0]	@ 0000d9fe 1178
.org 0xda00
	movs r0, #4	@ 0000da00 0420
.org 0xda02
	ands r0, r1	@ 0000da02 0840
.org 0xda04
	cmp r0, #0	@ 0000da04 0028
.org 0xda06
	beq.n 0xda20	@ 0000da06 0bd0
.org 0xda08
	movs r0, #4	@ 0000da08 0420
.org 0xda0a
	eors r0, r1	@ 0000da0a 4840
.org 0xda0c
	strb r0, [r2, #0]	@ 0000da0c 1070
.org 0xda0e
	movs r0, #31	@ 0000da0e 1f20
.org 0xda10
	bl 0x2624	@ 0000da10 f4f708fe
.org 0xda14
	movs r0, #32	@ 0000da14 2020
.org 0xda16
	bl 0x2624	@ 0000da16 f4f705fe
.org 0xda1a
	movs r0, #33	@ 0000da1a 2120
.org 0xda1c
	bl 0x2624	@ 0000da1c f4f702fe
.org 0xda20
	ldr r2, [pc, #68]	@ 0000da20 114a
.org 0xda22
	ldr r1, [pc, #76]	@ 0000da22 1349
.org 0xda24
	adds r0, r2, r1	@ 0000da24 5018
.org 0xda26
	ldrh r1, [r0, #0]	@ 0000da26 0188
.org 0xda28
	lsrs r0, r1, #8	@ 0000da28 080a
.org 0xda2a
	cmp r0, #3	@ 0000da2a 0328
.org 0xda2c
	bne.n 0xda74	@ 0000da2c 22d1
.org 0xda2e
	movs r0, #255	@ 0000da2e ff20
.org 0xda30
	ands r0, r1	@ 0000da30 0840
.org 0xda32
	cmp r0, #5	@ 0000da32 0528
.org 0xda34
	bne.n 0xda74	@ 0000da34 1ed1
.org 0xda36
	ldr r0, [pc, #52]	@ 0000da36 0d48
.org 0xda38
	adds r2, r2, r0	@ 0000da38 1218
.org 0xda3a
	ldrb r1, [r2, #0]	@ 0000da3a 1178
.org 0xda3c
	movs r0, #8	@ 0000da3c 0820
.org 0xda3e
	ands r0, r1	@ 0000da3e 0840
.org 0xda40
	cmp r0, #0	@ 0000da40 0028
.org 0xda42
	bne.n 0xda5a	@ 0000da42 0ad1
.org 0xda44
	movs r0, #8	@ 0000da44 0820
.org 0xda46
	orrs r0, r1	@ 0000da46 0843
.org 0xda48
	strb r0, [r2, #0]	@ 0000da48 1070
.org 0xda4a
	movs r0, #34	@ 0000da4a 2220
.org 0xda4c
	movs r1, #0	@ 0000da4c 0021
.org 0xda4e
	bl 0x249c	@ 0000da4e f4f725fd
.org 0xda52
	movs r0, #35	@ 0000da52 2320
.org 0xda54
	movs r1, #0	@ 0000da54 0021
.org 0xda56
	bl 0x249c	@ 0000da56 f4f721fd
.org 0xda5a
	movs r0, #34	@ 0000da5a 2220
.org 0xda5c
	bl 0x25d8	@ 0000da5c f4f7bcfd
.org 0xda60
	movs r0, #35	@ 0000da60 2320
.org 0xda62
	bl 0x25d8	@ 0000da62 f4f7b9fd
.org 0xda66
	b.n 0xda96	@ 0000da66 16e0
.org 0xda68
	.byte 0xb0,0x0a,0x00,0x02	@ 0000da68 data
.org 0xda6c
	.byte 0x28,0xd0,0x02,0x00	@ 0000da6c data
.org 0xda70
	.byte 0xd4,0x07,0x00,0x00	@ 0000da70 data
.org 0xda74
	ldr r0, [pc, #72]	@ 0000da74 1248
