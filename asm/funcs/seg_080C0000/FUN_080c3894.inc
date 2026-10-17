@ FUN_080c3894  entry 0x080c3894  size 174
.thumb
.org 0xc3894
FUN_080c3894:
	push {r4, r5, lr}	@ 000c3894 30b5
.org 0xc3896
	adds r4, r0, #0	@ 000c3896 041c
.org 0xc3898
	ldr r5, [r4, #40]	@ 000c3898 a56a
.org 0xc389a
	ldrb r1, [r4, #13]	@ 000c389a 617b
.org 0xc389c
	cmp r1, #0	@ 000c389c 0029
.org 0xc389e
	beq.n 0xc38dc	@ 000c389e 1dd0
.org 0xc38a0
	ldrb r1, [r4, #10]	@ 000c38a0 a17a
.org 0xc38a2
	movs r0, #254	@ 000c38a2 fe20
.org 0xc38a4
	ands r0, r1	@ 000c38a4 0840
.org 0xc38a6
	movs r2, #0	@ 000c38a6 0022
.org 0xc38a8
	movs r1, #253	@ 000c38a8 fd21
.org 0xc38aa
	ands r0, r1	@ 000c38aa 0840
.org 0xc38ac
	strb r0, [r4, #10]	@ 000c38ac a072
.org 0xc38ae
	adds r0, r4, #0	@ 000c38ae 201c
.org 0xc38b0
	adds r0, #140	@ 000c38b0 8c30
.org 0xc38b2
	str r2, [r0, #0]	@ 000c38b2 0260
.org 0xc38b4
	adds r0, #4	@ 000c38b4 0430
.org 0xc38b6
	str r2, [r0, #0]	@ 000c38b6 0260
.org 0xc38b8
	adds r0, #4	@ 000c38b8 0430
.org 0xc38ba
	strb r2, [r0, #0]	@ 000c38ba 0270
.org 0xc38bc
	ldrb r1, [r4, #10]	@ 000c38bc a17a
.org 0xc38be
	movs r0, #251	@ 000c38be fb20
.org 0xc38c0
	ands r0, r1	@ 000c38c0 0840
.org 0xc38c2
	strb r0, [r4, #10]	@ 000c38c2 a072
.org 0xc38c4
	ldr r1, [pc, #16]	@ 000c38c4 0449
.org 0xc38c6
	ldrb r0, [r4, #9]	@ 000c38c6 607a
.org 0xc38c8
	lsls r0, r0, #2	@ 000c38c8 8000
.org 0xc38ca
	adds r0, r0, r1	@ 000c38ca 4018
.org 0xc38cc
	movs r1, #3	@ 000c38cc 0321
.org 0xc38ce
	str r1, [r4, #12]	@ 000c38ce e160
.org 0xc38d0
	ldr r0, [r0, #0]	@ 000c38d0 0068
.org 0xc38d2
	ldr r0, [r0, #12]	@ 000c38d2 c068
.org 0xc38d4
	str r0, [r4, #20]	@ 000c38d4 6061
.org 0xc38d6
	b.n 0xc3940	@ 000c38d6 33e0
.org 0xc38d8
	.byte 0xf4,0x49,0x86,0x08	@ 000c38d8 data
.org 0xc38dc
	ldrb r0, [r5, #12]	@ 000c38dc 287b
.org 0xc38de
	cmp r0, #1	@ 000c38de 0128
.org 0xc38e0
	bls.n 0xc38e6	@ 000c38e0 01d9
.org 0xc38e2
	adds r0, r1, #1	@ 000c38e2 481c
.org 0xc38e4
	strb r0, [r4, #13]	@ 000c38e4 6073
.org 0xc38e6
	adds r0, r4, #0	@ 000c38e6 201c
.org 0xc38e8
	bl 0x1cff0	@ 000c38e8 59f782fb
.org 0xc38ec
	adds r1, r4, #0	@ 000c38ec 211c
.org 0xc38ee
	adds r1, #182	@ 000c38ee b631
.org 0xc38f0
	adds r2, r4, #0	@ 000c38f0 221c
.org 0xc38f2
	adds r2, #181	@ 000c38f2 b532
.org 0xc38f4
	ldrb r0, [r2, #0]	@ 000c38f4 1078
.org 0xc38f6
	strb r0, [r1, #0]	@ 000c38f6 0870
.org 0xc38f8
	adds r3, r4, #0	@ 000c38f8 231c
.org 0xc38fa
	adds r3, #180	@ 000c38fa b433
.org 0xc38fc
	ldrb r0, [r3, #0]	@ 000c38fc 1878
.org 0xc38fe
	strb r0, [r2, #0]	@ 000c38fe 1070
.org 0xc3900
	adds r0, r5, #0	@ 000c3900 281c
.org 0xc3902
	adds r0, #182	@ 000c3902 b630
.org 0xc3904
	ldrb r1, [r0, #0]	@ 000c3904 0178
.org 0xc3906
	strb r1, [r3, #0]	@ 000c3906 1970
.org 0xc3908
	lsls r0, r1, #24	@ 000c3908 0806
.org 0xc390a
	cmp r0, #0	@ 000c390a 0028
.org 0xc390c
	beq.n 0xc3940	@ 000c390c 18d0
.org 0xc390e
	ldr r2, [pc, #56]	@ 000c390e 0e4a
.org 0xc3910
	adds r0, r1, #0	@ 000c3910 081c
.org 0xc3912
	adds r0, #64	@ 000c3912 4030
.org 0xc3914
	lsls r0, r0, #24	@ 000c3914 0006
.org 0xc3916
	lsrs r0, r0, #23	@ 000c3916 c00d
.org 0xc3918
	adds r0, r0, r2	@ 000c3918 8018
.org 0xc391a
	movs r1, #0	@ 000c391a 0021
.org 0xc391c
	ldrsh r0, [r0, r1]	@ 000c391c 405e
.org 0xc391e
	lsls r1, r0, #3	@ 000c391e c100
.org 0xc3920
	subs r1, r1, r0	@ 000c3920 091a
.org 0xc3922
	asrs r1, r1, #1	@ 000c3922 4910
.org 0xc3924
	ldr r0, [r4, #84]	@ 000c3924 606d
.org 0xc3926
	adds r0, r0, r1	@ 000c3926 4018
.org 0xc3928
	str r0, [r4, #84]	@ 000c3928 6065
.org 0xc392a
	ldrb r0, [r3, #0]	@ 000c392a 1878
.org 0xc392c
	lsls r0, r0, #1	@ 000c392c 4000
.org 0xc392e
	adds r0, r0, r2	@ 000c392e 8018
.org 0xc3930
	movs r1, #0	@ 000c3930 0021
.org 0xc3932
	ldrsh r0, [r0, r1]	@ 000c3932 405e
.org 0xc3934
	lsls r1, r0, #3	@ 000c3934 c100
.org 0xc3936
	subs r1, r1, r0	@ 000c3936 091a
.org 0xc3938
	asrs r1, r1, #1	@ 000c3938 4910
.org 0xc393a
	ldr r0, [r4, #88]	@ 000c393a a06d
.org 0xc393c
	adds r0, r0, r1	@ 000c393c 4018
.org 0xc393e
	str r0, [r4, #88]	@ 000c393e a065
.org 0xc3940
	pop {r4, r5}	@ 000c3940 30bc
