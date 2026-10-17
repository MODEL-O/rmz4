@ FUN_080618bc  entry 0x080618bc  size 418
.thumb
.org 0x618bc
FUN_080618bc:
	push {r4, r5, r6, r7, lr}	@ 000618bc f0b5
.org 0x618be
	mov r7, r9	@ 000618be 4f46
.org 0x618c0
	mov r6, r8	@ 000618c0 4646
.org 0x618c2
	push {r6, r7}	@ 000618c2 c0b4
.org 0x618c4
	adds r4, r0, #0	@ 000618c4 041c
.org 0x618c6
	ldrb r5, [r4, #14]	@ 000618c6 a57b
.org 0x618c8
	cmp r5, #0	@ 000618c8 002d
.org 0x618ca
	bne.n 0x6190c	@ 000618ca 1fd1
.org 0x618cc
	adds r0, #84	@ 000618cc 5430
.org 0x618ce
	movs r1, #0	@ 000618ce 0021
.org 0x618d0
	movs r2, #193	@ 000618d0 c122
.org 0x618d2
	bl 0xdad0c	@ 000618d2 79f01bfa
.org 0x618d6
	adds r2, r4, #0	@ 000618d6 221c
.org 0x618d8
	adds r2, #180	@ 000618d8 b432
.org 0x618da
	str r0, [r2, #12]	@ 000618da d060
.org 0x618dc
	cmp r0, #0	@ 000618dc 0028
.org 0x618de
	bne.n 0x618e2	@ 000618de 00d1
.org 0x618e0
	b.n 0x61a68	@ 000618e0 c2e0
.org 0x618e2
	adds r1, r0, #0	@ 000618e2 011c
.org 0x618e4
	adds r1, #116	@ 000618e4 7431
.org 0x618e6
	movs r0, #255	@ 000618e6 ff20
.org 0x618e8
	strb r0, [r1, #0]	@ 000618e8 0870
.org 0x618ea
	ldr r0, [r2, #12]	@ 000618ea d068
.org 0x618ec
	adds r0, #117	@ 000618ec 7530
.org 0x618ee
	strb r5, [r0, #0]	@ 000618ee 0570
.org 0x618f0
	ldr r0, [r2, #12]	@ 000618f0 d068
.org 0x618f2
	adds r0, #118	@ 000618f2 7630
.org 0x618f4
	strb r5, [r0, #0]	@ 000618f4 0570
.org 0x618f6
	ldr r0, [r4, #96]	@ 000618f6 206e
.org 0x618f8
	lsrs r1, r0, #31	@ 000618f8 c10f
.org 0x618fa
	adds r0, r0, r1	@ 000618fa 4018
.org 0x618fc
	asrs r0, r0, #1	@ 000618fc 4010
.org 0x618fe
	str r0, [r4, #96]	@ 000618fe 2066
.org 0x61900
	movs r0, #8	@ 00061900 0820
.org 0x61902
	strb r0, [r4, #18]	@ 00061902 a074
.org 0x61904
	strb r5, [r4, #15]	@ 00061904 e573
.org 0x61906
	ldrb r0, [r4, #14]	@ 00061906 a07b
.org 0x61908
	adds r0, #1	@ 00061908 0130
.org 0x6190a
	strb r0, [r4, #14]	@ 0006190a a073
.org 0x6190c
	adds r0, r4, #0	@ 0006190c 201c
.org 0x6190e
	bl 0x1cff0	@ 0006190e bbf76ffb
.org 0x61912
	ldr r0, [r4, #88]	@ 00061912 a06d
.org 0x61914
	ldr r1, [r4, #96]	@ 00061914 216e
.org 0x61916
	adds r0, r0, r1	@ 00061916 4018
.org 0x61918
	str r0, [r4, #88]	@ 00061918 a065
.org 0x6191a
	subs r1, #64	@ 0006191a 4039
.org 0x6191c
	str r1, [r4, #96]	@ 0006191c 2166
.org 0x6191e
	cmp r1, #0	@ 0006191e 0029
.org 0x61920
	bge.n 0x61926	@ 00061920 01da
.org 0x61922
	movs r0, #0	@ 00061922 0020
.org 0x61924
	str r0, [r4, #96]	@ 00061924 2066
.org 0x61926
	adds r0, r4, #0	@ 00061926 201c
.org 0x61928
	adds r0, #180	@ 00061928 b430
.org 0x6192a
	ldr r2, [r0, #12]	@ 0006192a c268
.org 0x6192c
	adds r3, r0, #0	@ 0006192c 031c
.org 0x6192e
	cmp r2, #0	@ 0006192e 002a
.org 0x61930
	bne.n 0x61934	@ 00061930 00d1
.org 0x61932
	b.n 0x61a44	@ 00061932 87e0
.org 0x61934
	ldr r1, [pc, #68]	@ 00061934 1149
.org 0x61936
	ldr r0, [pc, #72]	@ 00061936 1248
.org 0x61938
	mov r8, r0	@ 00061938 8046
.org 0x6193a
	ldr r0, [r0, #0]	@ 0006193a 0068
.org 0x6193c
	movs r5, #186	@ 0006193c ba25
.org 0x6193e
	lsls r5, r5, #1	@ 0006193e 6d00
.org 0x61940
	adds r0, r0, r5	@ 00061940 4019
.org 0x61942
	ldrb r0, [r0, #0]	@ 00061942 0078
.org 0x61944
	lsls r0, r0, #3	@ 00061944 c000
.org 0x61946
	adds r0, r0, r1	@ 00061946 4018
.org 0x61948
	ldr r6, [r0, #0]	@ 00061948 0668
.org 0x6194a
	ldr r7, [r0, #4]	@ 0006194a 4768
.org 0x6194c
	adds r5, r2, #0	@ 0006194c 151c
.org 0x6194e
	ldr r0, [r4, #88]	@ 0006194e a06d
.org 0x61950
	movs r2, #128	@ 00061950 8022
.org 0x61952
	lsls r2, r2, #1	@ 00061952 5200
.org 0x61954
	adds r0, r0, r2	@ 00061954 8018
.org 0x61956
	str r0, [r5, #96]	@ 00061956 2866
.org 0x61958
	adds r1, r5, #0	@ 00061958 291c
.org 0x6195a
	adds r1, #128	@ 0006195a 8031
.org 0x6195c
	ldr r0, [r4, #88]	@ 0006195c a06d
.org 0x6195e
	adds r0, r0, r2	@ 0006195e 8018
.org 0x61960
	str r0, [r1, #0]	@ 00061960 0860
.org 0x61962
	ldrb r1, [r4, #10]	@ 00061962 a17a
.org 0x61964
	movs r0, #16	@ 00061964 1020
.org 0x61966
	ands r0, r1	@ 00061966 0840
.org 0x61968
	cmp r0, #0	@ 00061968 0028
.org 0x6196a
	beq.n 0x6198c	@ 0006196a 0fd0
.org 0x6196c
	ldr r0, [r4, #84]	@ 0006196c 606d
.org 0x6196e
	ldr r2, [pc, #20]	@ 0006196e 054a
.org 0x61970
	adds r0, r0, r2	@ 00061970 8018
.org 0x61972
	str r0, [r5, #84]	@ 00061972 6865
.org 0x61974
	ldr r0, [r4, #84]	@ 00061974 606d
.org 0x61976
	ldr r1, [pc, #16]	@ 00061976 0449
.org 0x61978
	b.n 0x6199c	@ 00061978 10e0
.org 0x6197a
	.byte 0x00	@ 0006197a data
.org 0x6197b
	.byte 0x00	@ 0006197b data
.org 0x6197c
	.byte 0x6c,0x33,0x85,0x08	@ 0006197c data
.org 0x61980
	.byte 0xf0,0xdb,0x02,0x02	@ 00061980 data
.org 0x61984
	.byte 0x00,0xfb,0xff,0xff	@ 00061984 data
.org 0x61988
	.byte 0x00,0xf9,0xff,0xff	@ 00061988 data
.org 0x6198c
	ldr r0, [r4, #84]	@ 0006198c 606d
.org 0x6198e
	movs r2, #224	@ 0006198e e022
.org 0x61990
	lsls r2, r2, #3	@ 00061990 d200
.org 0x61992
	adds r0, r0, r2	@ 00061992 8018
.org 0x61994
	str r0, [r5, #84]	@ 00061994 6865
.org 0x61996
	ldr r0, [r4, #84]	@ 00061996 606d
.org 0x61998
	movs r1, #160	@ 00061998 a021
.org 0x6199a
	lsls r1, r1, #3	@ 0006199a c900
.org 0x6199c
	adds r0, r0, r1	@ 0006199c 4018
.org 0x6199e
	str r0, [r5, #100]	@ 0006199e 6866
.org 0x619a0
	ldr r0, [r4, #84]	@ 000619a0 606d
.org 0x619a2
	adds r0, r0, r1	@ 000619a2 4018
.org 0x619a4
	str r0, [r5, #92]	@ 000619a4 e865
.org 0x619a6
	ldr r0, [r4, #84]	@ 000619a6 606d
.org 0x619a8
	adds r0, r0, r2	@ 000619a8 8018
.org 0x619aa
	str r0, [r5, #124]	@ 000619aa e867
.org 0x619ac
	ldr r0, [r5, #84]	@ 000619ac 686d
.org 0x619ae
	mov ip, r0	@ 000619ae 8446
.org 0x619b0
	ldr r2, [pc, #56]	@ 000619b0 0e4a
.org 0x619b2
	ldrh r1, [r2, #8]	@ 000619b2 1189
.org 0x619b4
	movs r0, #8	@ 000619b4 0820
.org 0x619b6
	ands r0, r1	@ 000619b6 0840
.org 0x619b8
	mov r9, r2	@ 000619b8 9146
.org 0x619ba
	cmp r0, #0	@ 000619ba 0028
.org 0x619bc
	bne.n 0x619f0	@ 000619bc 18d1
.org 0x619be
	mov r1, r8	@ 000619be 4146
.org 0x619c0
	ldr r1, [r1, #0]	@ 000619c0 0968
.org 0x619c2
	mov r8, r1	@ 000619c2 8846
.org 0x619c4
	lsls r0, r7, #16	@ 000619c4 3804
.org 0x619c6
	asrs r2, r0, #17	@ 000619c6 4214
.org 0x619c8
	ldr r1, [r1, #88]	@ 000619c8 896d
.org 0x619ca
	adds r0, r1, r2	@ 000619ca 8818
.org 0x619cc
	cmp ip, r0	@ 000619cc 8445
.org 0x619ce
	bge.n 0x619f0	@ 000619ce 0fda
.org 0x619d0
	subs r0, r1, r2	@ 000619d0 881a
.org 0x619d2
	cmp ip, r0	@ 000619d2 8445
.org 0x619d4
	ble.n 0x619f0	@ 000619d4 0cdd
.org 0x619d6
	asrs r2, r6, #16	@ 000619d6 3214
.org 0x619d8
	adds r0, r1, r2	@ 000619d8 8818
.org 0x619da
	asrs r1, r7, #17	@ 000619da 7914
.org 0x619dc
	subs r0, r0, r1	@ 000619dc 401a
.org 0x619de
	str r0, [r5, #84]	@ 000619de 6865
.org 0x619e0
	mov r6, r8	@ 000619e0 4646
.org 0x619e2
	ldr r0, [r6, #88]	@ 000619e2 b06d
.org 0x619e4
	adds r0, r0, r2	@ 000619e4 8018
.org 0x619e6
	subs r0, r0, r1	@ 000619e6 401a
.org 0x619e8
	str r0, [r5, #100]	@ 000619e8 6866
.org 0x619ea
	b.n 0x61a00	@ 000619ea 09e0
.org 0x619ec
	.byte 0x10,0xe9,0x02,0x02	@ 000619ec data
.org 0x619f0
	ldr r0, [r3, #4]	@ 000619f0 5868
.org 0x619f2
	movs r1, #128	@ 000619f2 8021
.org 0x619f4
	lsls r1, r1, #3	@ 000619f4 c900
.org 0x619f6
	adds r0, r0, r1	@ 000619f6 4018
.org 0x619f8
	str r0, [r5, #88]	@ 000619f8 a865
.org 0x619fa
	ldr r0, [r3, #4]	@ 000619fa 5868
.org 0x619fc
	adds r0, r0, r1	@ 000619fc 4018
.org 0x619fe
	str r0, [r5, #104]	@ 000619fe a866
.org 0x61a00
	ldrb r0, [r4, #18]	@ 00061a00 a07c
.org 0x61a02
	movs r2, #1	@ 00061a02 0122
.org 0x61a04
	ands r2, r0	@ 00061a04 0240
.org 0x61a06
	cmp r2, #0	@ 00061a06 002a
.org 0x61a08
	beq.n 0x61a36	@ 00061a08 15d0
.org 0x61a0a
	mov r1, r9	@ 00061a0a 4946
.org 0x61a0c
	ldrh r0, [r1, #0]	@ 00061a0c 0888
.org 0x61a0e
	cmp r0, #11	@ 00061a0e 0b28
.org 0x61a10
	bne.n 0x61a24	@ 00061a10 08d1
.org 0x61a12
	ldr r0, [r3, #12]	@ 00061a12 d868
.org 0x61a14
	adds r0, #120	@ 00061a14 7830
.org 0x61a16
	movs r1, #57	@ 00061a16 3921
.org 0x61a18
	strb r1, [r0, #0]	@ 00061a18 0170
.org 0x61a1a
	ldr r0, [r3, #12]	@ 00061a1a d868
.org 0x61a1c
	adds r0, #121	@ 00061a1c 7930
.org 0x61a1e
	movs r1, #6	@ 00061a1e 0621
.org 0x61a20
	strb r1, [r0, #0]	@ 00061a20 0170
.org 0x61a22
	b.n 0x61a44	@ 00061a22 0fe0
.org 0x61a24
	ldr r0, [r3, #12]	@ 00061a24 d868
.org 0x61a26
	adds r0, #120	@ 00061a26 7830
.org 0x61a28
	movs r1, #53	@ 00061a28 3521
.org 0x61a2a
	strb r1, [r0, #0]	@ 00061a2a 0170
.org 0x61a2c
	ldr r0, [r3, #12]	@ 00061a2c d868
.org 0x61a2e
	adds r0, #121	@ 00061a2e 7930
.org 0x61a30
	movs r1, #10	@ 00061a30 0a21
.org 0x61a32
	strb r1, [r0, #0]	@ 00061a32 0170
.org 0x61a34
	b.n 0x61a44	@ 00061a34 06e0
.org 0x61a36
	ldr r0, [r3, #12]	@ 00061a36 d868
.org 0x61a38
	adds r0, #120	@ 00061a38 7830
.org 0x61a3a
	movs r1, #255	@ 00061a3a ff21
.org 0x61a3c
	strb r1, [r0, #0]	@ 00061a3c 0170
.org 0x61a3e
	ldr r0, [r3, #12]	@ 00061a3e d868
.org 0x61a40
	adds r0, #121	@ 00061a40 7930
.org 0x61a42
	strb r2, [r0, #0]	@ 00061a42 0270
.org 0x61a44
	ldrb r0, [r4, #18]	@ 00061a44 a07c
.org 0x61a46
	subs r0, #1	@ 00061a46 0138
.org 0x61a48
	movs r2, #0	@ 00061a48 0022
.org 0x61a4a
	strb r0, [r4, #18]	@ 00061a4a a074
.org 0x61a4c
	lsls r0, r0, #24	@ 00061a4c 0006
.org 0x61a4e
	lsrs r0, r0, #24	@ 00061a4e 000e
.org 0x61a50
	cmp r0, #255	@ 00061a50 ff28
.org 0x61a52
	bne.n 0x61a68	@ 00061a52 09d1
.org 0x61a54
	ldr r1, [r3, #12]	@ 00061a54 d968
.org 0x61a56
	cmp r1, #0	@ 00061a56 0029
.org 0x61a58
	beq.n 0x61a62	@ 00061a58 03d0
.org 0x61a5a
	adds r1, #119	@ 00061a5a 7731
.org 0x61a5c
	movs r0, #1	@ 00061a5c 0120
