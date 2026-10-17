@ FUN_080a88e8  entry 0x080a88e8  size 98
.thumb
.org 0xa88e8
FUN_080a88e8:
	push {r4, r5, r6, r7, lr}	@ 000a88e8 f0b5
.org 0xa88ea
	adds r4, r0, #0	@ 000a88ea 041c
.org 0xa88ec
	adds r5, r1, #0	@ 000a88ec 0d1c
.org 0xa88ee
	adds r6, r2, #0	@ 000a88ee 161c
.org 0xa88f0
	lsls r3, r3, #24	@ 000a88f0 1b06
.org 0xa88f2
	lsrs r7, r3, #24	@ 000a88f2 1f0e
.org 0xa88f4
	ldr r0, [pc, #84]	@ 000a88f4 1548
.org 0xa88f6
	ldr r0, [r0, #0]	@ 000a88f6 0068
.org 0xa88f8
	bl 0x5500	@ 000a88f8 5cf702fe
.org 0xa88fc
	adds r3, r0, #0	@ 000a88fc 031c
.org 0xa88fe
	cmp r3, #0	@ 000a88fe 002b
.org 0xa8900
	beq.n 0xa8942	@ 000a8900 1fd0
.org 0xa8902
	adds r1, r3, #0	@ 000a8902 191c
.org 0xa8904
	adds r1, #37	@ 000a8904 2531
.org 0xa8906
	movs r2, #0	@ 000a8906 0022
.org 0xa8908
	movs r0, #24	@ 000a8908 1820
.org 0xa890a
	strb r0, [r1, #0]	@ 000a890a 0870
.org 0xa890c
	ldr r0, [pc, #64]	@ 000a890c 1048
.org 0xa890e
	movs r1, #67	@ 000a890e 4321
.org 0xa8910
	strb r1, [r3, #9]	@ 000a8910 5972
.org 0xa8912
	adds r1, #201	@ 000a8912 c931
.org 0xa8914
	adds r0, r0, r1	@ 000a8914 4018
.org 0xa8916
	ldr r0, [r0, #0]	@ 000a8916 0068
.org 0xa8918
	ldr r0, [r0, #0]	@ 000a8918 0068
.org 0xa891a
	str r0, [r3, #20]	@ 000a891a 5861
.org 0xa891c
	movs r0, #0	@ 000a891c 0020
.org 0xa891e
	strh r2, [r3, #32]	@ 000a891e 1a84
.org 0xa8920
	adds r1, r3, #0	@ 000a8920 191c
.org 0xa8922
	adds r1, #34	@ 000a8922 2231
.org 0xa8924
	strb r0, [r1, #0]	@ 000a8924 0870
.org 0xa8926
	ldrb r1, [r3, #11]	@ 000a8926 d97a
.org 0xa8928
	movs r0, #16	@ 000a8928 1020
.org 0xa892a
	orrs r0, r1	@ 000a892a 0843
.org 0xa892c
	strb r0, [r3, #11]	@ 000a892c d872
.org 0xa892e
	ldrb r0, [r3, #28]	@ 000a892e 187f
.org 0xa8930
	strb r0, [r3, #29]	@ 000a8930 5877
.org 0xa8932
	str r4, [r3, #40]	@ 000a8932 9c62
.org 0xa8934
	str r5, [r3, #44]	@ 000a8934 dd62
.org 0xa8936
	adds r0, r3, #0	@ 000a8936 181c
.org 0xa8938
	adds r0, #192	@ 000a8938 c030
.org 0xa893a
	str r6, [r0, #0]	@ 000a893a 0660
.org 0xa893c
	movs r0, #2	@ 000a893c 0220
.org 0xa893e
	strb r0, [r3, #16]	@ 000a893e 1874
.org 0xa8940
	strb r7, [r3, #17]	@ 000a8940 5f74
.org 0xa8942
	adds r0, r3, #0	@ 000a8942 181c
.org 0xa8944
	pop {r4, r5, r6, r7}	@ 000a8944 f0bc
.org 0xa8946
	pop {r1}	@ 000a8946 02bc
.org 0xa8948
	bx r1	@ 000a8948 0847
