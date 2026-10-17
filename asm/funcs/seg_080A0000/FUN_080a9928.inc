@ FUN_080a9928  entry 0x080a9928  size 156
.thumb
.org 0xa9928
FUN_080a9928:
	push {r4, r5, lr}	@ 000a9928 30b5
.org 0xa992a
	adds r5, r0, #0	@ 000a992a 051c
.org 0xa992c
	adds r0, #180	@ 000a992c b430
.org 0xa992e
	ldrb r0, [r0, #0]	@ 000a992e 0078
.org 0xa9930
	cmp r0, #0	@ 000a9930 0028
.org 0xa9932
	bne.n 0xa9964	@ 000a9932 17d1
.org 0xa9934
	adds r0, r5, #0	@ 000a9934 281c
.org 0xa9936
	adds r0, #140	@ 000a9936 8c30
.org 0xa9938
	ldr r0, [r0, #0]	@ 000a9938 0068
.org 0xa993a
	movs r1, #128	@ 000a993a 8021
.org 0xa993c
	lsls r1, r1, #9	@ 000a993c 4902
.org 0xa993e
	ands r0, r1	@ 000a993e 0840
.org 0xa9940
	cmp r0, #0	@ 000a9940 0028
.org 0xa9942
	beq.n 0xa994c	@ 000a9942 03d0
.org 0xa9944
	adds r4, r5, #0	@ 000a9944 2c1c
.org 0xa9946
	adds r4, #84	@ 000a9946 5434
.org 0xa9948
	ldrb r1, [r5, #16]	@ 000a9948 297c
.org 0xa994a
	b.n 0xa9954	@ 000a994a 03e0
.org 0xa994c
	adds r4, r5, #0	@ 000a994c 2c1c
.org 0xa994e
	adds r4, #84	@ 000a994e 5434
.org 0xa9950
	movs r1, #128	@ 000a9950 8021
.org 0xa9952
	lsls r1, r1, #2	@ 000a9952 8900
.org 0xa9954
	ldrb r2, [r5, #10]	@ 000a9954 aa7a
.org 0xa9956
	lsrs r2, r2, #4	@ 000a9956 1209
.org 0xa9958
	movs r0, #1	@ 000a9958 0120
.org 0xa995a
	ands r2, r0	@ 000a995a 0240
.org 0xa995c
	adds r0, r4, #0	@ 000a995c 201c
.org 0xa995e
	bl 0xe37a0	@ 000a995e 39f01fff
.org 0xa9962
	b.n 0xa997a	@ 000a9962 0ae0
.org 0xa9964
	adds r4, r5, #0	@ 000a9964 2c1c
.org 0xa9966
	adds r4, #84	@ 000a9966 5434
.org 0xa9968
	movs r1, #128	@ 000a9968 8021
.org 0xa996a
	lsls r1, r1, #1	@ 000a996a 4900
.org 0xa996c
	ldrb r2, [r5, #10]	@ 000a996c aa7a
.org 0xa996e
	lsrs r2, r2, #4	@ 000a996e 1209
.org 0xa9970
	movs r0, #1	@ 000a9970 0120
.org 0xa9972
	ands r2, r0	@ 000a9972 0240
.org 0xa9974
	adds r0, r4, #0	@ 000a9974 201c
.org 0xa9976
	bl 0xe37a0	@ 000a9976 39f013ff
.org 0xa997a
	ldr r2, [pc, #40]	@ 000a997a 0a4a
.org 0xa997c
	ldrh r1, [r2, #12]	@ 000a997c 9189
.org 0xa997e
	ldr r0, [pc, #40]	@ 000a997e 0a48
.org 0xa9980
	cmp r1, r0	@ 000a9980 8142
.org 0xa9982
	bhi.n 0xa9988	@ 000a9982 01d8
.org 0xa9984
	adds r0, r1, #1	@ 000a9984 481c
.org 0xa9986
	strh r0, [r2, #12]	@ 000a9986 9081
.org 0xa9988
	adds r0, r5, #0	@ 000a9988 281c
.org 0xa998a
	adds r1, r4, #0	@ 000a998a 211c
.org 0xa998c
	bl 0x2abe0	@ 000a998c 81f728f9
.org 0xa9990
	ldrb r0, [r5, #16]	@ 000a9990 287c
.org 0xa9992
	cmp r0, #0	@ 000a9992 0028
.org 0xa9994
	bne.n 0xa99ac	@ 000a9994 0ad1
.org 0xa9996
	movs r0, #2	@ 000a9996 0220
.org 0xa9998
	movs r1, #38	@ 000a9998 2621
.org 0xa999a
	adds r2, r4, #0	@ 000a999a 221c
.org 0xa999c
	bl 0x2ab88	@ 000a999c 81f7f4f8
.org 0xa99a0
	b.n 0xa99b6	@ 000a99a0 09e0
.org 0xa99a2
	.byte 0x00	@ 000a99a2 data
.org 0xa99a3
	.byte 0x00	@ 000a99a3 data
.org 0xa99a4
	.byte 0xe0,0xe8,0x02,0x02	@ 000a99a4 data
.org 0xa99a8
	.byte 0x0e,0x27,0x00,0x00	@ 000a99a8 data
.org 0xa99ac
	movs r0, #2	@ 000a99ac 0220
.org 0xa99ae
	movs r1, #39	@ 000a99ae 2721
.org 0xa99b0
	adds r2, r4, #0	@ 000a99b0 221c
.org 0xa99b2
	bl 0x2ab88	@ 000a99b2 81f7e9f8
.org 0xa99b6
	ldr r1, [pc, #24]	@ 000a99b6 0649
.org 0xa99b8
	ldrb r0, [r5, #9]	@ 000a99b8 687a
.org 0xa99ba
	lsls r0, r0, #2	@ 000a99ba 8000
.org 0xa99bc
	adds r0, r0, r1	@ 000a99bc 4018
.org 0xa99be
	movs r1, #4	@ 000a99be 0421
.org 0xa99c0
	str r1, [r5, #12]	@ 000a99c0 e960
.org 0xa99c2
	ldr r0, [r0, #0]	@ 000a99c2 0068
