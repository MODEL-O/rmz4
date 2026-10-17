@ FUN_080058cc  entry 0x080058cc  size 254
.thumb
.org 0x58cc
FUN_080058cc:
	push {r4, r5, r6, r7, lr}	@ 000058cc f0b5
.org 0x58ce
	mov r7, r9	@ 000058ce 4f46
.org 0x58d0
	mov r6, r8	@ 000058d0 4646
.org 0x58d2
	push {r6, r7}	@ 000058d2 c0b4
.org 0x58d4
	adds r4, r0, #0	@ 000058d4 041c
.org 0x58d6
	lsls r1, r1, #24	@ 000058d6 0906
.org 0x58d8
	lsrs r1, r1, #24	@ 000058d8 090e
.org 0x58da
	mov ip, r1	@ 000058da 8c46
.org 0x58dc
	ldr r3, [r4, #0]	@ 000058dc 2368
.org 0x58de
	ldr r5, [r4, #8]	@ 000058de a568
.org 0x58e0
	adds r6, r4, #0	@ 000058e0 261c
.org 0x58e2
	adds r6, #32	@ 000058e2 2036
.org 0x58e4
	ldrb r2, [r6, #0]	@ 000058e4 3278
.org 0x58e6
	movs r1, #127	@ 000058e6 7f21
.org 0x58e8
	ands r1, r2	@ 000058e8 1140
.org 0x58ea
	cmp r1, #0	@ 000058ea 0029
.org 0x58ec
	beq.n 0x58f8	@ 000058ec 04d0
.org 0x58ee
	movs r0, #128	@ 000058ee 8020
.org 0x58f0
	ands r0, r2	@ 000058f0 1040
.org 0x58f2
	subs r1, #1	@ 000058f2 0139
.org 0x58f4
	orrs r0, r1	@ 000058f4 0843
.org 0x58f6
	strb r0, [r6, #0]	@ 000058f6 3070
.org 0x58f8
	cmp r3, #0	@ 000058f8 002b
.org 0x58fa
	beq.n 0x59c6	@ 000058fa 64d0
.org 0x58fc
	ldrb r0, [r3, #3]	@ 000058fc d878
.org 0x58fe
	cmp r0, #0	@ 000058fe 0028
.org 0x5900
	bne.n 0x5910	@ 00005900 06d1
.org 0x5902
	ldrb r1, [r3, #8]	@ 00005902 197a
.org 0x5904
	cmp r1, #0	@ 00005904 0029
.org 0x5906
	bne.n 0x5910	@ 00005906 03d1
.org 0x5908
	ldr r0, [r4, #24]	@ 00005908 a069
.org 0x590a
	str r0, [r4, #28]	@ 0000590a e061
.org 0x590c
	str r1, [r4, #24]	@ 0000590c a161
.org 0x590e
	b.n 0x59c6	@ 0000590e 5ae0
.org 0x5910
	ldr r0, [pc, #68]	@ 00005910 1148
.org 0x5912
	ldrb r1, [r0, #3]	@ 00005912 c178
.org 0x5914
	mov r9, r0	@ 00005914 8146
.org 0x5916
	cmp r1, #63	@ 00005916 3f29
.org 0x5918
	bhi.n 0x59be	@ 00005918 51d8
.org 0x591a
	mov r6, r9	@ 0000591a 4e46
.org 0x591c
	movs r0, #1	@ 0000591c 0120
.org 0x591e
	mov r1, ip	@ 0000591e 6146
.org 0x5920
	ands r1, r0	@ 00005920 0140
.org 0x5922
	mov r8, r1	@ 00005922 8846
.org 0x5924
	ldr r7, [pc, #52]	@ 00005924 0d4f
.org 0x5926
	add r7, r9	@ 00005926 4f44
.org 0x5928
	movs r0, #2	@ 00005928 0220
.org 0x592a
	mov r1, ip	@ 0000592a 6146
.org 0x592c
	ands r0, r1	@ 0000592c 0840
.org 0x592e
	lsls r0, r0, #24	@ 0000592e 0006
.org 0x5930
	lsrs r0, r0, #24	@ 00005930 000e
.org 0x5932
	mov ip, r0	@ 00005932 8446
.org 0x5934
	ldrb r0, [r6, #3]	@ 00005934 f078
.org 0x5936
	lsls r1, r0, #1	@ 00005936 4100
.org 0x5938
	adds r1, r1, r0	@ 00005938 0918
.org 0x593a
	lsls r1, r1, #3	@ 0000593a c900
.org 0x593c
	adds r2, r6, #4	@ 0000593c 321d
.org 0x593e
	adds r2, r1, r2	@ 0000593e 8a18
.org 0x5940
	adds r0, #1	@ 00005940 0130
.org 0x5942
	strb r0, [r6, #3]	@ 00005942 f070
.org 0x5944
	str r4, [r2, #8]	@ 00005944 9460
.org 0x5946
	str r3, [r2, #4]	@ 00005946 5360
.org 0x5948
	mov r0, r8	@ 00005948 4046
.org 0x594a
	cmp r0, #0	@ 0000594a 0028
.org 0x594c
	beq.n 0x5960	@ 0000594c 08d0
.org 0x594e
	movs r0, #16	@ 0000594e 1020
.org 0x5950
	ldrsh r1, [r3, r0]	@ 00005950 195e
.org 0x5952
	ldr r0, [r5, #0]	@ 00005952 2868
.org 0x5954
	subs r0, r0, r1	@ 00005954 401a
.org 0x5956
	b.n 0x5968	@ 00005956 07e0
.org 0x5958
	.byte 0xe0,0x32,0x00,0x03	@ 00005958 data
.org 0x595c
	.byte 0x04,0x06,0x00,0x00	@ 0000595c data
.org 0x5960
	movs r0, #16	@ 00005960 1020
.org 0x5962
	ldrsh r1, [r3, r0]	@ 00005962 195e
.org 0x5964
	ldr r0, [r5, #0]	@ 00005964 2868
.org 0x5966
	adds r0, r0, r1	@ 00005966 4018
.org 0x5968
	str r0, [r2, #12]	@ 00005968 d060
.org 0x596a
	mov r1, ip	@ 0000596a 6146
.org 0x596c
	cmp r1, #0	@ 0000596c 0029
.org 0x596e
	beq.n 0x597a	@ 0000596e 04d0
.org 0x5970
	movs r0, #18	@ 00005970 1220
.org 0x5972
	ldrsh r1, [r3, r0]	@ 00005972 195e
.org 0x5974
	ldr r0, [r5, #4]	@ 00005974 6868
.org 0x5976
	subs r0, r0, r1	@ 00005976 401a
.org 0x5978
	b.n 0x5982	@ 00005978 03e0
.org 0x597a
	movs r0, #18	@ 0000597a 1220
.org 0x597c
	ldrsh r1, [r3, r0]	@ 0000597c 195e
.org 0x597e
	ldr r0, [r5, #4]	@ 0000597e 6868
.org 0x5980
	adds r0, r0, r1	@ 00005980 4018
.org 0x5982
	str r0, [r2, #16]	@ 00005982 1061
.org 0x5984
	ldrh r0, [r3, #20]	@ 00005984 988a
.org 0x5986
	strh r0, [r2, #20]	@ 00005986 9082
.org 0x5988
	ldrh r0, [r3, #22]	@ 00005988 d88a
.org 0x598a
	strh r0, [r2, #22]	@ 0000598a d082
.org 0x598c
	ldrb r1, [r3, #0]	@ 0000598c 1978
.org 0x598e
	lsls r0, r1, #1	@ 0000598e 4800
.org 0x5990
	adds r0, r0, r1	@ 00005990 4018
.org 0x5992
	ldrb r1, [r3, #1]	@ 00005992 5978
.org 0x5994
	adds r0, r0, r1	@ 00005994 4018
.org 0x5996
	lsls r0, r0, #2	@ 00005996 8000
.org 0x5998
	adds r0, r0, r7	@ 00005998 c019
.org 0x599a
	ldr r0, [r0, #0]	@ 0000599a 0068
.org 0x599c
	str r0, [r2, #0]	@ 0000599c 1060
.org 0x599e
	ldrb r1, [r3, #0]	@ 0000599e 1978
.org 0x59a0
	lsls r0, r1, #1	@ 000059a0 4800
.org 0x59a2
	adds r0, r0, r1	@ 000059a2 4018
.org 0x59a4
	ldrb r1, [r3, #1]	@ 000059a4 5978
.org 0x59a6
	adds r0, r0, r1	@ 000059a6 4018
.org 0x59a8
	lsls r0, r0, #2	@ 000059a8 8000
.org 0x59aa
	adds r0, r0, r7	@ 000059aa c019
.org 0x59ac
	str r2, [r0, #0]	@ 000059ac 0260
.org 0x59ae
	ldrb r0, [r3, #11]	@ 000059ae d87a
.org 0x59b0
	cmp r0, #0	@ 000059b0 0028
.org 0x59b2
	beq.n 0x59be	@ 000059b2 04d0
.org 0x59b4
	adds r3, #24	@ 000059b4 1833
.org 0x59b6
	mov r1, r9	@ 000059b6 4946
.org 0x59b8
	ldrb r0, [r1, #3]	@ 000059b8 c878
.org 0x59ba
	cmp r0, #63	@ 000059ba 3f28
.org 0x59bc
	bls.n 0x5934	@ 000059bc bad9
.org 0x59be
	ldr r0, [r4, #24]	@ 000059be a069
.org 0x59c0
	str r0, [r4, #28]	@ 000059c0 e061
.org 0x59c2
	movs r0, #0	@ 000059c2 0020
.org 0x59c4
	str r0, [r4, #24]	@ 000059c4 a061
.org 0x59c6
	pop {r3, r4}	@ 000059c6 18bc
.org 0x59c8
	mov r8, r3	@ 000059c8 9846
