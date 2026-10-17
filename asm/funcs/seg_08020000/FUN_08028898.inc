@ FUN_08028898  entry 0x08028898  size 376
.thumb
.org 0x28898
FUN_08028898:
	push {r4, r5, r6, lr}	@ 00028898 70b5
.org 0x2889a
	sub sp, #4	@ 0002889a 81b0
.org 0x2889c
	adds r4, r0, #0	@ 0002889c 041c
.org 0x2889e
	ldr r0, [r4, #12]	@ 0002889e e068
.org 0x288a0
	ldrb r3, [r0, #1]	@ 000288a0 4378
.org 0x288a2
	cmp r3, #1	@ 000288a2 012b
.org 0x288a4
	beq.n 0x288d4	@ 000288a4 16d0
.org 0x288a6
	cmp r3, #1	@ 000288a6 012b
.org 0x288a8
	bgt.n 0x288b0	@ 000288a8 02dc
.org 0x288aa
	cmp r3, #0	@ 000288aa 002b
.org 0x288ac
	beq.n 0x288ba	@ 000288ac 05d0
.org 0x288ae
	b.n 0x28a38	@ 000288ae c3e0
.org 0x288b0
	cmp r3, #2	@ 000288b0 022b
.org 0x288b2
	beq.n 0x2890c	@ 000288b2 2bd0
.org 0x288b4
	cmp r3, #4	@ 000288b4 042b
.org 0x288b6
	beq.n 0x28990	@ 000288b6 6bd0
.org 0x288b8
	b.n 0x28a38	@ 000288b8 bee0
.org 0x288ba
	ldr r0, [pc, #20]	@ 000288ba 0548
.org 0x288bc
	ldrh r2, [r0, #0]	@ 000288bc 0288
.org 0x288be
	movs r5, #128	@ 000288be 8025
.org 0x288c0
	lsls r5, r5, #1	@ 000288c0 6d00
.org 0x288c2
	adds r1, r5, #0	@ 000288c2 291c
.org 0x288c4
	orrs r1, r2	@ 000288c4 1143
.org 0x288c6
	strh r1, [r0, #0]	@ 000288c6 0180
.org 0x288c8
	strh r3, [r0, #12]	@ 000288c8 8381
.org 0x288ca
	strh r3, [r0, #14]	@ 000288ca c381
.org 0x288cc
	strh r3, [r4, #6]	@ 000288cc e380
.org 0x288ce
	b.n 0x28a38	@ 000288ce b3e0
.org 0x288d0
	.byte 0x00,0x0a,0x00,0x02	@ 000288d0 data
.org 0x288d4
	adds r0, r4, #0	@ 000288d4 201c
.org 0x288d6
	adds r0, #208	@ 000288d6 d030
.org 0x288d8
	ldr r0, [r0, #0]	@ 000288d8 0068
.org 0x288da
	movs r1, #3	@ 000288da 0321
.org 0x288dc
	ands r0, r1	@ 000288dc 0840
.org 0x288de
	cmp r0, #0	@ 000288de 0028
.org 0x288e0
	bne.n 0x288e8	@ 000288e0 02d1
.org 0x288e2
	ldrh r0, [r4, #6]	@ 000288e2 e088
.org 0x288e4
	adds r0, #1	@ 000288e4 0130
.org 0x288e6
	strh r0, [r4, #6]	@ 000288e6 e080
.org 0x288e8
	ldr r3, [pc, #28]	@ 000288e8 074b
.org 0x288ea
	ldrh r0, [r4, #6]	@ 000288ea e088
.org 0x288ec
	movs r1, #15	@ 000288ec 0f21
.org 0x288ee
	ands r1, r0	@ 000288ee 0140
.org 0x288f0
	strh r1, [r3, #0]	@ 000288f0 1980
.org 0x288f2
	ldrh r1, [r4, #6]	@ 000288f2 e188
.org 0x288f4
	ldr r2, [r4, #12]	@ 000288f4 e268
.org 0x288f6
	ldr r0, [r2, #4]	@ 000288f6 5068
.org 0x288f8
	cmp r1, r0	@ 000288f8 8142
.org 0x288fa
	bcc.n 0x288fe	@ 000288fa 00d3
.org 0x288fc
	b.n 0x28a28	@ 000288fc 94e0
.org 0x288fe
	lsrs r5, r1, #4	@ 000288fe 0d09
.org 0x28900
	adds r3, r5, #0	@ 00028900 2b1c
.org 0x28902
	cmp r3, #9	@ 00028902 092b
.org 0x28904
	bls.n 0x289c0	@ 00028904 5cd9
.org 0x28906
	b.n 0x289f0	@ 00028906 73e0
.org 0x28908
	.byte 0x0e,0x0a,0x00,0x02	@ 00028908 data
.org 0x2890c
	adds r0, r4, #0	@ 0002890c 201c
.org 0x2890e
	adds r0, #208	@ 0002890e d030
.org 0x28910
	ldr r0, [r0, #0]	@ 00028910 0068
.org 0x28912
	movs r1, #1	@ 00028912 0121
.org 0x28914
	ands r0, r1	@ 00028914 0840
.org 0x28916
	cmp r0, #0	@ 00028916 0028
.org 0x28918
	bne.n 0x28920	@ 00028918 02d1
.org 0x2891a
	ldrh r0, [r4, #6]	@ 0002891a e088
.org 0x2891c
	adds r0, #1	@ 0002891c 0130
.org 0x2891e
	strh r0, [r4, #6]	@ 0002891e e080
.org 0x28920
	ldr r3, [pc, #56]	@ 00028920 0e4b
.org 0x28922
	ldrh r0, [r4, #6]	@ 00028922 e088
.org 0x28924
	movs r1, #15	@ 00028924 0f21
.org 0x28926
	ands r1, r0	@ 00028926 0140
.org 0x28928
	strh r1, [r3, #0]	@ 00028928 1980
.org 0x2892a
	ldrh r1, [r4, #6]	@ 0002892a e188
.org 0x2892c
	ldr r2, [r4, #12]	@ 0002892c e268
.org 0x2892e
	ldr r0, [r2, #4]	@ 0002892e 5068
.org 0x28930
	cmp r1, r0	@ 00028930 8142
.org 0x28932
	bcc.n 0x28936	@ 00028932 00d3
.org 0x28934
	b.n 0x28a28	@ 00028934 78e0
.org 0x28936
	lsrs r5, r1, #4	@ 00028936 0d09
.org 0x28938
	adds r3, r5, #0	@ 00028938 2b1c
.org 0x2893a
	cmp r3, #9	@ 0002893a 092b
.org 0x2893c
	bhi.n 0x28968	@ 0002893c 14d8
.org 0x2893e
	ldr r1, [pc, #32]	@ 0002893e 0849
.org 0x28940
	movs r6, #2	@ 00028940 0226
.org 0x28942
	ldrsh r0, [r2, r6]	@ 00028942 905f
.org 0x28944
	lsls r0, r0, #1	@ 00028944 4000
.org 0x28946
	adds r0, r0, r1	@ 00028946 4018
.org 0x28948
	ldrh r0, [r0, #0]	@ 00028948 0088
.org 0x2894a
	ldr r1, [pc, #24]	@ 0002894a 0649
.org 0x2894c
	adds r0, r0, r1	@ 0002894c 4018
.org 0x2894e
	movs r2, #10	@ 0002894e 0a22
.org 0x28950
	subs r2, r2, r3	@ 00028950 d21a
.org 0x28952
	lsls r2, r2, #1	@ 00028952 5200
.org 0x28954
	adds r1, r5, #1	@ 00028954 691c
.org 0x28956
	str r1, [sp, #0]	@ 00028956 0091
.org 0x28958
	movs r1, #6	@ 00028958 0621
.org 0x2895a
	b.n 0x289dc	@ 0002895a 3fe0
.org 0x2895c
	.byte 0x0e,0x0a,0x00,0x02	@ 0002895c data
.org 0x28960
	.byte 0xf8,0xcf,0x86,0x08	@ 00028960 data
.org 0x28964
	.byte 0x5f,0x0e,0x01,0x09	@ 00028964 data
.org 0x28968
	ldr r1, [pc, #28]	@ 00028968 0749
.org 0x2896a
	movs r3, #2	@ 0002896a 0223
.org 0x2896c
	ldrsh r0, [r2, r3]	@ 0002896c d05e
.org 0x2896e
	lsls r0, r0, #1	@ 0002896e 4000
.org 0x28970
	adds r0, r0, r1	@ 00028970 4018
.org 0x28972
	ldrh r0, [r0, #0]	@ 00028972 0088
.org 0x28974
	ldr r1, [pc, #20]	@ 00028974 0549
.org 0x28976
	adds r0, r0, r1	@ 00028976 4018
.org 0x28978
	adds r3, r5, #0	@ 00028978 2b1c
.org 0x2897a
	subs r3, #10	@ 0002897a 0a3b
.org 0x2897c
	lsls r3, r3, #16	@ 0002897c 1b04
.org 0x2897e
	lsrs r3, r3, #16	@ 0002897e 1b0c
.org 0x28980
	adds r1, r5, #1	@ 00028980 691c
.org 0x28982
	str r1, [sp, #0]	@ 00028982 0091
.org 0x28984
	movs r1, #6	@ 00028984 0621
.org 0x28986
	b.n 0x28a0e	@ 00028986 42e0
.org 0x28988
	.byte 0xf8,0xcf,0x86,0x08	@ 00028988 data
.org 0x2898c
	.byte 0x5f,0x0e,0x01,0x09	@ 0002898c data
.org 0x28990
	adds r0, r4, #0	@ 00028990 201c
.org 0x28992
	adds r0, #208	@ 00028992 d030
.org 0x28994
	ldr r0, [r0, #0]	@ 00028994 0068
.org 0x28996
	movs r1, #3	@ 00028996 0321
.org 0x28998
	ands r0, r1	@ 00028998 0840
.org 0x2899a
	cmp r0, #0	@ 0002899a 0028
.org 0x2899c
	bne.n 0x289a4	@ 0002899c 02d1
.org 0x2899e
	ldrh r0, [r4, #6]	@ 0002899e e088
.org 0x289a0
	adds r0, #1	@ 000289a0 0130
.org 0x289a2
	strh r0, [r4, #6]	@ 000289a2 e080
.org 0x289a4
	ldr r3, [pc, #60]	@ 000289a4 0f4b
.org 0x289a6
	ldrh r0, [r4, #6]	@ 000289a6 e088
.org 0x289a8
	movs r1, #15	@ 000289a8 0f21
.org 0x289aa
	ands r1, r0	@ 000289aa 0140
.org 0x289ac
	strh r1, [r3, #0]	@ 000289ac 1980
.org 0x289ae
	ldrh r1, [r4, #6]	@ 000289ae e188
.org 0x289b0
	ldr r2, [r4, #12]	@ 000289b0 e268
.org 0x289b2
	ldr r0, [r2, #4]	@ 000289b2 5068
.org 0x289b4
	cmp r1, r0	@ 000289b4 8142
.org 0x289b6
	bcs.n 0x28a28	@ 000289b6 37d2
.org 0x289b8
	lsrs r5, r1, #4	@ 000289b8 0d09
.org 0x289ba
	adds r3, r5, #0	@ 000289ba 2b1c
.org 0x289bc
	cmp r3, #9	@ 000289bc 092b
.org 0x289be
	bhi.n 0x289f0	@ 000289be 17d8
.org 0x289c0
	ldr r1, [pc, #36]	@ 000289c0 0949
.org 0x289c2
	movs r6, #2	@ 000289c2 0226
.org 0x289c4
	ldrsh r0, [r2, r6]	@ 000289c4 905f
.org 0x289c6
	lsls r0, r0, #1	@ 000289c6 4000
.org 0x289c8
	adds r0, r0, r1	@ 000289c8 4018
.org 0x289ca
	ldrh r0, [r0, #0]	@ 000289ca 0088
.org 0x289cc
	ldr r1, [pc, #28]	@ 000289cc 0749
.org 0x289ce
	adds r0, r0, r1	@ 000289ce 4018
.org 0x289d0
	movs r2, #10	@ 000289d0 0a22
.org 0x289d2
	subs r2, r2, r3	@ 000289d2 d21a
.org 0x289d4
	lsls r2, r2, #1	@ 000289d4 5200
.org 0x289d6
	adds r1, r5, #1	@ 000289d6 691c
.org 0x289d8
	str r1, [sp, #0]	@ 000289d8 0091
.org 0x289da
	movs r1, #0	@ 000289da 0021
.org 0x289dc
	movs r3, #0	@ 000289dc 0023
.org 0x289de
	bl 0x10d91c	@ 000289de e4f09dff
.org 0x289e2
	b.n 0x28a14	@ 000289e2 17e0
.org 0x289e4
	.byte 0x0e,0x0a,0x00,0x02	@ 000289e4 data
.org 0x289e8
	.byte 0xf8,0xcf,0x86,0x08	@ 000289e8 data
.org 0x289ec
	.byte 0x5f,0x0e,0x01,0x09	@ 000289ec data
.org 0x289f0
	ldr r1, [pc, #44]	@ 000289f0 0b49
.org 0x289f2
	movs r3, #2	@ 000289f2 0223
.org 0x289f4
	ldrsh r0, [r2, r3]	@ 000289f4 d05e
.org 0x289f6
	lsls r0, r0, #1	@ 000289f6 4000
.org 0x289f8
	adds r0, r0, r1	@ 000289f8 4018
.org 0x289fa
	ldrh r0, [r0, #0]	@ 000289fa 0088
.org 0x289fc
	ldr r1, [pc, #36]	@ 000289fc 0949
.org 0x289fe
	adds r0, r0, r1	@ 000289fe 4018
.org 0x28a00
	adds r3, r5, #0	@ 00028a00 2b1c
.org 0x28a02
	subs r3, #10	@ 00028a02 0a3b
.org 0x28a04
	lsls r3, r3, #16	@ 00028a04 1b04
.org 0x28a06
	lsrs r3, r3, #16	@ 00028a06 1b0c
.org 0x28a08
	adds r1, r5, #1	@ 00028a08 691c
.org 0x28a0a
	str r1, [sp, #0]	@ 00028a0a 0091
.org 0x28a0c
	movs r1, #0	@ 00028a0c 0021
.org 0x28a0e
	movs r2, #0	@ 00028a0e 0022
