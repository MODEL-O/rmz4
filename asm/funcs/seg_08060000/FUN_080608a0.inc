@ FUN_080608a0  entry 0x080608a0  size 212
.thumb
.org 0x608a0
FUN_080608a0:
	push {r4, lr}	@ 000608a0 10b5
.org 0x608a2
	adds r4, r0, #0	@ 000608a2 041c
.org 0x608a4
	ldrb r0, [r4, #14]	@ 000608a4 a07b
.org 0x608a6
	cmp r0, #0	@ 000608a6 0028
.org 0x608a8
	bne.n 0x60922	@ 000608a8 3bd1
.org 0x608aa
	adds r1, r4, #0	@ 000608aa 211c
.org 0x608ac
	adds r1, #180	@ 000608ac b431
.org 0x608ae
	movs r0, #14	@ 000608ae 0e20
.org 0x608b0
	strb r0, [r1, #28]	@ 000608b0 0877
.org 0x608b2
	ldr r1, [pc, #76]	@ 000608b2 1349
.org 0x608b4
	adds r0, r4, #0	@ 000608b4 201c
.org 0x608b6
	bl 0x1cf00	@ 000608b6 bcf723fb
.org 0x608ba
	movs r3, #0	@ 000608ba 0023
.org 0x608bc
	ldr r0, [pc, #68]	@ 000608bc 1148
.org 0x608be
	ldr r2, [r0, #0]	@ 000608be 0268
.org 0x608c0
	ldr r1, [r4, #84]	@ 000608c0 616d
.org 0x608c2
	ldr r0, [r2, #84]	@ 000608c2 506d
.org 0x608c4
	cmp r1, r0	@ 000608c4 8142
.org 0x608c6
	bge.n 0x608ca	@ 000608c6 00da
.org 0x608c8
	movs r3, #1	@ 000608c8 0123
.org 0x608ca
	adds r0, r4, #0	@ 000608ca 201c
.org 0x608cc
	adds r0, #76	@ 000608cc 4c30
.org 0x608ce
	strb r3, [r0, #0]	@ 000608ce 0370
.org 0x608d0
	movs r3, #0	@ 000608d0 0023
.org 0x608d2
	ldr r1, [r4, #84]	@ 000608d2 616d
.org 0x608d4
	ldr r0, [r2, #84]	@ 000608d4 506d
.org 0x608d6
	cmp r1, r0	@ 000608d6 8142
.org 0x608d8
	bge.n 0x608dc	@ 000608d8 00da
.org 0x608da
	movs r3, #1	@ 000608da 0123
.org 0x608dc
	movs r0, #74	@ 000608dc 4a20
.org 0x608de
	adds r0, r0, r4	@ 000608de 0019
.org 0x608e0
	mov ip, r0	@ 000608e0 8446
.org 0x608e2
	lsls r2, r3, #4	@ 000608e2 1a01
.org 0x608e4
	ldrb r1, [r0, #0]	@ 000608e4 0178
.org 0x608e6
	movs r0, #17	@ 000608e6 1120
.org 0x608e8
	negs r0, r0	@ 000608e8 4042
.org 0x608ea
	ands r0, r1	@ 000608ea 0840
.org 0x608ec
	orrs r0, r2	@ 000608ec 1043
.org 0x608ee
	mov r1, ip	@ 000608ee 6146
.org 0x608f0
	strb r0, [r1, #0]	@ 000608f0 0870
.org 0x608f2
	cmp r3, #0	@ 000608f2 002b
.org 0x608f4
	beq.n 0x60908	@ 000608f4 08d0
.org 0x608f6
	ldrb r0, [r4, #10]	@ 000608f6 a07a
.org 0x608f8
	movs r1, #16	@ 000608f8 1021
.org 0x608fa
	orrs r0, r1	@ 000608fa 0843
.org 0x608fc
	b.n 0x6090e	@ 000608fc 07e0
.org 0x608fe
	.byte 0x00	@ 000608fe data
.org 0x608ff
	.byte 0x00	@ 000608ff data
.org 0x60900
	.byte 0x0e,0xa5,0x00,0x00	@ 00060900 data
.org 0x60904
	.byte 0xf0,0xdb,0x02,0x02	@ 00060904 data
.org 0x60908
	ldrb r1, [r4, #10]	@ 00060908 a17a
.org 0x6090a
	movs r0, #239	@ 0006090a ef20
.org 0x6090c
	ands r0, r1	@ 0006090c 0840
.org 0x6090e
	strb r0, [r4, #10]	@ 0006090e a072
.org 0x60910
	ldr r0, [pc, #44]	@ 00060910 0b48
.org 0x60912
	bl 0x2b10	@ 00060912 a2f7fdf8
.org 0x60916
	movs r0, #0	@ 00060916 0020
.org 0x60918
	strb r0, [r4, #18]	@ 00060918 a074
.org 0x6091a
	strb r0, [r4, #15]	@ 0006091a e073
.org 0x6091c
	ldrb r0, [r4, #14]	@ 0006091c a07b
.org 0x6091e
	adds r0, #1	@ 0006091e 0130
.org 0x60920
	strb r0, [r4, #14]	@ 00060920 a073
.org 0x60922
	ldrb r1, [r4, #15]	@ 00060922 e17b
.org 0x60924
	adds r0, r1, #0	@ 00060924 081c
.org 0x60926
	cmp r0, #0	@ 00060926 0028
.org 0x60928
	bne.n 0x60944	@ 00060928 0cd1
.org 0x6092a
	adds r0, r4, #0	@ 0006092a 201c
.org 0x6092c
	adds r0, #115	@ 0006092c 7330
.org 0x6092e
	ldrb r0, [r0, #0]	@ 0006092e 0078
.org 0x60930
	cmp r0, #3	@ 00060930 0328
.org 0x60932
	bne.n 0x6097e	@ 00060932 24d1
.org 0x60934
	movs r0, #6	@ 00060934 0620
.org 0x60936
	strb r0, [r4, #18]	@ 00060936 a074
.org 0x60938
	adds r0, r1, #1	@ 00060938 481c
.org 0x6093a
	strb r0, [r4, #15]	@ 0006093a e073
.org 0x6093c
	b.n 0x6097e	@ 0006093c 1fe0
.org 0x6093e
	.byte 0x00	@ 0006093e data
.org 0x6093f
	.byte 0x00	@ 0006093f data
.org 0x60940
	.byte 0x17,0x01,0x00,0x00	@ 00060940 data
.org 0x60944
	cmp r0, #1	@ 00060944 0128
.org 0x60946
	bne.n 0x6096c	@ 00060946 11d1
.org 0x60948
	ldrb r0, [r4, #18]	@ 00060948 a07c
.org 0x6094a
	subs r0, #1	@ 0006094a 0138
.org 0x6094c
	strb r0, [r4, #18]	@ 0006094c a074
.org 0x6094e
	lsls r0, r0, #24	@ 0006094e 0006
.org 0x60950
	lsrs r0, r0, #24	@ 00060950 000e
.org 0x60952
	cmp r0, #255	@ 00060952 ff28
.org 0x60954
	bne.n 0x6097e	@ 00060954 13d1
.org 0x60956
	ldr r1, [pc, #16]	@ 00060956 0449
.org 0x60958
	adds r0, r4, #0	@ 00060958 201c
.org 0x6095a
	bl 0x1cf00	@ 0006095a bcf7d1fa
.org 0x6095e
	ldrb r0, [r4, #15]	@ 0006095e e07b
.org 0x60960
	adds r0, #1	@ 00060960 0130
.org 0x60962
	strb r0, [r4, #15]	@ 00060962 e073
.org 0x60964
	b.n 0x6097e	@ 00060964 0be0
.org 0x60966
	.byte 0x00	@ 00060966 data
.org 0x60967
	.byte 0x00	@ 00060967 data
.org 0x60968
	.byte 0x2d,0xa5,0x00,0x00	@ 00060968 data
.org 0x6096c
	adds r0, r4, #0	@ 0006096c 201c
.org 0x6096e
	adds r0, #115	@ 0006096e 7330
.org 0x60970
	ldrb r0, [r0, #0]	@ 00060970 0078
.org 0x60972
	cmp r0, #3	@ 00060972 0328
