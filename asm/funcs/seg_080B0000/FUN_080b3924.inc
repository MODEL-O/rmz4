@ FUN_080b3924  entry 0x080b3924  size 152
.thumb
.org 0xb3924
FUN_080b3924:
	push {r4, r5, lr}	@ 000b3924 30b5
.org 0xb3926
	adds r5, r0, #0	@ 000b3926 051c
.org 0xb3928
	adds r0, #180	@ 000b3928 b430
.org 0xb392a
	ldrb r0, [r0, #0]	@ 000b392a 0078
.org 0xb392c
	cmp r0, #0	@ 000b392c 0028
.org 0xb392e
	bne.n 0xb396e	@ 000b392e 1ed1
.org 0xb3930
	adds r0, r5, #0	@ 000b3930 281c
.org 0xb3932
	adds r0, #140	@ 000b3932 8c30
.org 0xb3934
	ldr r0, [r0, #0]	@ 000b3934 0068
.org 0xb3936
	movs r1, #128	@ 000b3936 8021
.org 0xb3938
	lsls r1, r1, #9	@ 000b3938 4902
.org 0xb393a
	ands r0, r1	@ 000b393a 0840
.org 0xb393c
	cmp r0, #0	@ 000b393c 0028
.org 0xb393e
	beq.n 0xb3956	@ 000b393e 0ad0
.org 0xb3940
	adds r4, r5, #0	@ 000b3940 2c1c
.org 0xb3942
	adds r4, #84	@ 000b3942 5434
.org 0xb3944
	ldrb r2, [r5, #10]	@ 000b3944 aa7a
.org 0xb3946
	lsrs r2, r2, #4	@ 000b3946 1209
.org 0xb3948
	movs r0, #1	@ 000b3948 0120
.org 0xb394a
	ands r2, r0	@ 000b394a 0240
.org 0xb394c
	adds r0, r4, #0	@ 000b394c 201c
.org 0xb394e
	movs r1, #0	@ 000b394e 0021
.org 0xb3950
	bl 0xe6b5c	@ 000b3950 33f004f9
.org 0xb3954
	b.n 0xb3984	@ 000b3954 16e0
.org 0xb3956
	adds r4, r5, #0	@ 000b3956 2c1c
.org 0xb3958
	adds r4, #84	@ 000b3958 5434
.org 0xb395a
	movs r1, #128	@ 000b395a 8021
.org 0xb395c
	lsls r1, r1, #1	@ 000b395c 4900
.org 0xb395e
	ldrb r2, [r5, #10]	@ 000b395e aa7a
.org 0xb3960
	lsrs r2, r2, #4	@ 000b3960 1209
.org 0xb3962
	movs r0, #1	@ 000b3962 0120
.org 0xb3964
	ands r2, r0	@ 000b3964 0240
.org 0xb3966
	adds r0, r4, #0	@ 000b3966 201c
.org 0xb3968
	bl 0xe6b5c	@ 000b3968 33f0f8f8
.org 0xb396c
	b.n 0xb3984	@ 000b396c 0ae0
.org 0xb396e
	adds r4, r5, #0	@ 000b396e 2c1c
.org 0xb3970
	adds r4, #84	@ 000b3970 5434
.org 0xb3972
	movs r1, #128	@ 000b3972 8021
.org 0xb3974
	lsls r1, r1, #2	@ 000b3974 8900
.org 0xb3976
	ldrb r2, [r5, #10]	@ 000b3976 aa7a
.org 0xb3978
	lsrs r2, r2, #4	@ 000b3978 1209
.org 0xb397a
	movs r0, #1	@ 000b397a 0120
.org 0xb397c
	ands r2, r0	@ 000b397c 0240
.org 0xb397e
	adds r0, r4, #0	@ 000b397e 201c
.org 0xb3980
	bl 0xe6b5c	@ 000b3980 33f0ecf8
.org 0xb3984
	ldr r2, [pc, #52]	@ 000b3984 0d4a
.org 0xb3986
	ldrh r1, [r2, #12]	@ 000b3986 9189
.org 0xb3988
	ldr r0, [pc, #52]	@ 000b3988 0d48
.org 0xb398a
	cmp r1, r0	@ 000b398a 8142
.org 0xb398c
	bhi.n 0xb3992	@ 000b398c 01d8
.org 0xb398e
	adds r0, r1, #1	@ 000b398e 481c
.org 0xb3990
	strh r0, [r2, #12]	@ 000b3990 9081
.org 0xb3992
	adds r0, r5, #0	@ 000b3992 281c
.org 0xb3994
	adds r1, r4, #0	@ 000b3994 211c
.org 0xb3996
	bl 0x2abe0	@ 000b3996 77f723f9
.org 0xb399a
	movs r0, #0	@ 000b399a 0020
.org 0xb399c
	movs r1, #27	@ 000b399c 1b21
.org 0xb399e
	adds r2, r4, #0	@ 000b399e 221c
.org 0xb39a0
	bl 0x2ab88	@ 000b39a0 77f7f2f8
.org 0xb39a4
	ldr r1, [pc, #28]	@ 000b39a4 0749
.org 0xb39a6
	ldrb r0, [r5, #9]	@ 000b39a6 687a
.org 0xb39a8
	lsls r0, r0, #2	@ 000b39a8 8000
.org 0xb39aa
	adds r0, r0, r1	@ 000b39aa 4018
.org 0xb39ac
	movs r1, #4	@ 000b39ac 0421
.org 0xb39ae
	str r1, [r5, #12]	@ 000b39ae e960
.org 0xb39b0
	ldr r0, [r0, #0]	@ 000b39b0 0068
.org 0xb39b2
	ldr r0, [r0, #16]	@ 000b39b2 0069
.org 0xb39b4
	str r0, [r5, #20]	@ 000b39b4 6861
.org 0xb39b6
	pop {r4, r5}	@ 000b39b6 30bc
.org 0xb39b8
	pop {r0}	@ 000b39b8 01bc
.org 0xb39ba
	bx r0	@ 000b39ba 0047
