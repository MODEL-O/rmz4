@ FUN_0806b92c  entry 0x0806b92c  size 136
.thumb
.org 0x6b92c
FUN_0806b92c:
	push {r4, r5, lr}	@ 0006b92c 30b5
.org 0x6b92e
	adds r4, r0, #0	@ 0006b92e 041c
.org 0x6b930
	ldrb r5, [r4, #14]	@ 0006b930 a57b
.org 0x6b932
	cmp r5, #0	@ 0006b932 002d
.org 0x6b934
	bne.n 0x6b94a	@ 0006b934 09d1
.org 0x6b936
	ldr r1, [pc, #72]	@ 0006b936 1249
.org 0x6b938
	bl 0x1cf00	@ 0006b938 b1f7e2fa
.org 0x6b93c
	movs r0, #198	@ 0006b93c c620
.org 0x6b93e
	bl 0x2b10	@ 0006b93e 97f7e7f8
.org 0x6b942
	strb r5, [r4, #15]	@ 0006b942 e573
.org 0x6b944
	ldrb r0, [r4, #14]	@ 0006b944 a07b
.org 0x6b946
	adds r0, #1	@ 0006b946 0130
.org 0x6b948
	strb r0, [r4, #14]	@ 0006b948 a073
.org 0x6b94a
	adds r0, r4, #0	@ 0006b94a 201c
.org 0x6b94c
	bl 0x1cff0	@ 0006b94c b1f750fb
.org 0x6b950
	ldrb r0, [r4, #15]	@ 0006b950 e07b
.org 0x6b952
	cmp r0, #0	@ 0006b952 0028
.org 0x6b954
	bne.n 0x6b9a0	@ 0006b954 24d1
.org 0x6b956
	adds r0, r4, #0	@ 0006b956 201c
.org 0x6b958
	adds r0, #113	@ 0006b958 7130
.org 0x6b95a
	ldrb r0, [r0, #0]	@ 0006b95a 0078
.org 0x6b95c
	lsls r0, r0, #24	@ 0006b95c 0006
.org 0x6b95e
	asrs r0, r0, #24	@ 0006b95e 0016
.org 0x6b960
	cmp r0, #1	@ 0006b960 0128
.org 0x6b962
	ble.n 0x6b9c0	@ 0006b962 2ddd
.org 0x6b964
	adds r0, r4, #0	@ 0006b964 201c
.org 0x6b966
	adds r0, #116	@ 0006b966 7430
.org 0x6b968
	ldr r1, [pc, #24]	@ 0006b968 0649
.org 0x6b96a
	bl 0x5784	@ 0006b96a 99f70bff
.org 0x6b96e
	ldrb r1, [r4, #10]	@ 0006b96e a17a
.org 0x6b970
	movs r0, #16	@ 0006b970 1020
.org 0x6b972
	ands r0, r1	@ 0006b972 0840
.org 0x6b974
	cmp r0, #0	@ 0006b974 0028
.org 0x6b976
	beq.n 0x6b988	@ 0006b976 07d0
.org 0x6b978
	movs r0, #160	@ 0006b978 a020
.org 0x6b97a
	lsls r0, r0, #1	@ 0006b97a 4000
.org 0x6b97c
	b.n 0x6b98a	@ 0006b97c 05e0
.org 0x6b97e
	.byte 0x00	@ 0006b97e data
.org 0x6b97f
	.byte 0x00	@ 0006b97f data
.org 0x6b980
	.byte 0x03,0xaa,0x00,0x00	@ 0006b980 data
.org 0x6b984
	.byte 0xdc,0xc1,0x85,0x08	@ 0006b984 data
.org 0x6b988
	ldr r0, [pc, #12]	@ 0006b988 0348
.org 0x6b98a
	str r0, [r4, #92]	@ 0006b98a e065
.org 0x6b98c
	ldr r0, [pc, #12]	@ 0006b98c 0348
.org 0x6b98e
	str r0, [r4, #96]	@ 0006b98e 2066
.org 0x6b990
	ldrb r0, [r4, #15]	@ 0006b990 e07b
.org 0x6b992
	adds r0, #1	@ 0006b992 0130
.org 0x6b994
	strb r0, [r4, #15]	@ 0006b994 e073
.org 0x6b996
	b.n 0x6b9c0	@ 0006b996 13e0
.org 0x6b998
	.byte 0xc0,0xfe,0xff,0xff	@ 0006b998 data
.org 0x6b99c
	.byte 0x00,0xfa,0xff,0xff	@ 0006b99c data
.org 0x6b9a0
	ldr r0, [r4, #84]	@ 0006b9a0 606d
.org 0x6b9a2
	ldr r1, [r4, #92]	@ 0006b9a2 e16d
.org 0x6b9a4
	adds r0, r0, r1	@ 0006b9a4 4018
.org 0x6b9a6
	str r0, [r4, #84]	@ 0006b9a6 6065
.org 0x6b9a8
	ldr r0, [r4, #88]	@ 0006b9a8 a06d
.org 0x6b9aa
	ldr r1, [r4, #96]	@ 0006b9aa 216e
.org 0x6b9ac
	adds r0, r0, r1	@ 0006b9ac 4018
.org 0x6b9ae
	str r0, [r4, #88]	@ 0006b9ae a065
.org 0x6b9b0
	adds r1, #64	@ 0006b9b0 4031
.org 0x6b9b2
	str r1, [r4, #96]	@ 0006b9b2 2166
