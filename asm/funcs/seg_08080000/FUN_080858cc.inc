@ FUN_080858cc  entry 0x080858cc  size 288
.thumb
.org 0x858cc
FUN_080858cc:
	push {r4, r5, r6, lr}	@ 000858cc 70b5
.org 0x858ce
	adds r4, r0, #0	@ 000858ce 041c
.org 0x858d0
	ldrb r0, [r4, #14]	@ 000858d0 a07b
.org 0x858d2
	cmp r0, #0	@ 000858d2 0028
.org 0x858d4
	beq.n 0x858dc	@ 000858d4 02d0
.org 0x858d6
	cmp r0, #1	@ 000858d6 0128
.org 0x858d8
	beq.n 0x85966	@ 000858d8 45d0
.org 0x858da
	b.n 0x85a06	@ 000858da 94e0
.org 0x858dc
	movs r2, #0	@ 000858dc 0022
.org 0x858de
	ldr r0, [pc, #28]	@ 000858de 0748
.org 0x858e0
	ldr r0, [r0, #0]	@ 000858e0 0068
.org 0x858e2
	ldr r0, [r0, #84]	@ 000858e2 406d
.org 0x858e4
	ldr r1, [r4, #84]	@ 000858e4 616d
.org 0x858e6
	subs r0, r0, r1	@ 000858e6 401a
.org 0x858e8
	cmp r0, #0	@ 000858e8 0028
.org 0x858ea
	ble.n 0x858ee	@ 000858ea 00dd
.org 0x858ec
	movs r2, #1	@ 000858ec 0122
.org 0x858ee
	adds r5, r2, #0	@ 000858ee 151c
.org 0x858f0
	cmp r5, #0	@ 000858f0 002d
.org 0x858f2
	beq.n 0x85900	@ 000858f2 05d0
.org 0x858f4
	ldrb r1, [r4, #10]	@ 000858f4 a17a
.org 0x858f6
	movs r0, #16	@ 000858f6 1020
.org 0x858f8
	orrs r0, r1	@ 000858f8 0843
.org 0x858fa
	b.n 0x85906	@ 000858fa 04e0
.org 0x858fc
	.byte 0xf0,0xdb,0x02,0x02	@ 000858fc data
.org 0x85900
	ldrb r1, [r4, #10]	@ 00085900 a17a
.org 0x85902
	movs r0, #239	@ 00085902 ef20
.org 0x85904
	ands r0, r1	@ 00085904 0840
.org 0x85906
	strb r0, [r4, #10]	@ 00085906 a072
.org 0x85908
	adds r1, r2, #0	@ 00085908 111c
.org 0x8590a
	adds r0, r4, #0	@ 0008590a 201c
.org 0x8590c
	adds r0, #76	@ 0008590c 4c30
.org 0x8590e
	movs r6, #0	@ 0008590e 0026
.org 0x85910
	strb r1, [r0, #0]	@ 00085910 0170
.org 0x85912
	adds r3, r4, #0	@ 00085912 231c
.org 0x85914
	adds r3, #74	@ 00085914 4a33
.org 0x85916
	lsls r1, r1, #4	@ 00085916 0901
.org 0x85918
	ldrb r2, [r3, #0]	@ 00085918 1a78
.org 0x8591a
	movs r0, #17	@ 0008591a 1120
.org 0x8591c
	negs r0, r0	@ 0008591c 4042
.org 0x8591e
	ands r0, r2	@ 0008591e 1040
.org 0x85920
	orrs r0, r1	@ 00085920 0843
.org 0x85922
	strb r0, [r3, #0]	@ 00085922 1870
.org 0x85924
	lsls r1, r5, #2	@ 00085924 a900
.org 0x85926
	adds r1, r1, r5	@ 00085926 4919
.org 0x85928
	lsls r1, r1, #10	@ 00085928 8902
.org 0x8592a
	ldr r0, [pc, #36]	@ 0008592a 0948
.org 0x8592c
	adds r1, r1, r0	@ 0008592c 0918
.org 0x8592e
	ldr r0, [r4, #84]	@ 0008592e 606d
.org 0x85930
	adds r0, r0, r1	@ 00085930 4018
.org 0x85932
	ldr r1, [r4, #88]	@ 00085932 a16d
.org 0x85934
	ldr r2, [pc, #28]	@ 00085934 074a
.org 0x85936
	adds r1, r1, r2	@ 00085936 8918
.org 0x85938
	bl 0x7c7c	@ 00085938 82f7a0f9
.org 0x8593c
	lsls r0, r0, #16	@ 0008593c 0004
.org 0x8593e
	cmp r0, #0	@ 0008593e 0028
.org 0x85940
	beq.n 0x85958	@ 00085940 0ad0
.org 0x85942
	strb r6, [r4, #13]	@ 00085942 6673
.org 0x85944
	strb r6, [r4, #14]	@ 00085944 a673
.org 0x85946
	adds r0, r4, #0	@ 00085946 201c
.org 0x85948
	bl 0x8582c	@ 00085948 fff770ff
.org 0x8594c
	b.n 0x85a06	@ 0008594c 5be0
.org 0x8594e
	.byte 0x00	@ 0008594e data
.org 0x8594f
	.byte 0x00	@ 0008594f data
.org 0x85950
	.byte 0x00,0xf6,0xff,0xff	@ 00085950 data
.org 0x85954
	.byte 0x00,0xf8,0xff,0xff	@ 00085954 data
.org 0x85958
	ldr r1, [pc, #56]	@ 00085958 0e49
.org 0x8595a
	adds r0, r4, #0	@ 0008595a 201c
.org 0x8595c
	bl 0x1cf00	@ 0008595c 97f7d0fa
.org 0x85960
	ldrb r0, [r4, #14]	@ 00085960 a07b
.org 0x85962
	adds r0, #1	@ 00085962 0130
.org 0x85964
	strb r0, [r4, #14]	@ 00085964 a073
.org 0x85966
	adds r0, r4, #0	@ 00085966 201c
.org 0x85968
	bl 0x1cff0	@ 00085968 97f742fb
.org 0x8596c
	adds r0, r4, #0	@ 0008596c 201c
.org 0x8596e
	adds r0, #115	@ 0008596e 7330
.org 0x85970
	ldrb r0, [r0, #0]	@ 00085970 0078
.org 0x85972
	cmp r0, #3	@ 00085972 0328
.org 0x85974
	bne.n 0x859ec	@ 00085974 3ad1
.org 0x85976
	adds r0, r4, #0	@ 00085976 201c
.org 0x85978
	adds r0, #184	@ 00085978 b830
.org 0x8597a
	ldr r1, [r4, #84]	@ 0008597a 616d
.org 0x8597c
	ldr r0, [r0, #0]	@ 0008597c 0068
.org 0x8597e
	subs r3, r1, r0	@ 0008597e 0b1a
.org 0x85980
	lsrs r2, r3, #31	@ 00085980 da0f
.org 0x85982
	ldrb r1, [r4, #10]	@ 00085982 a17a
.org 0x85984
	movs r0, #16	@ 00085984 1020
.org 0x85986
	ands r0, r1	@ 00085986 0840
.org 0x85988
	cmp r0, #0	@ 00085988 0028
.org 0x8598a
	beq.n 0x85998	@ 0008598a 05d0
.org 0x8598c
	cmp r2, #0	@ 0008598c 002a
.org 0x8598e
	beq.n 0x8599c	@ 0008598e 05d0
.org 0x85990
	b.n 0x859b6	@ 00085990 11e0
.org 0x85992
	.byte 0x00	@ 00085992 data
.org 0x85993
	.byte 0x00	@ 00085993 data
.org 0x85994
	.byte 0x03,0x1b,0x00,0x00	@ 00085994 data
.org 0x85998
	cmp r2, #0	@ 00085998 002a
.org 0x8599a
	beq.n 0x859b6	@ 0008599a 0cd0
.org 0x8599c
	adds r1, r3, #0	@ 0008599c 191c
.org 0x8599e
	cmp r1, #0	@ 0008599e 0029
.org 0x859a0
	bge.n 0x859a4	@ 000859a0 00da
.org 0x859a2
	negs r1, r1	@ 000859a2 4942
.org 0x859a4
	movs r0, #224	@ 000859a4 e020
.org 0x859a6
	lsls r0, r0, #7	@ 000859a6 c001
.org 0x859a8
	cmp r1, r0	@ 000859a8 8142
.org 0x859aa
	ble.n 0x859b6	@ 000859aa 04dd
.org 0x859ac
	movs r1, #0	@ 000859ac 0021
.org 0x859ae
	movs r0, #4	@ 000859ae 0420
.org 0x859b0
	strb r0, [r4, #13]	@ 000859b0 6073
.org 0x859b2
	strb r1, [r4, #14]	@ 000859b2 a173
.org 0x859b4
	b.n 0x85a06	@ 000859b4 27e0
.org 0x859b6
	ldr r2, [pc, #32]	@ 000859b6 084a
.org 0x859b8
	ldr r1, [r2, #0]	@ 000859b8 1168
.org 0x859ba
	ldr r0, [pc, #32]	@ 000859ba 0848
.org 0x859bc
	muls r0, r1	@ 000859bc 4843
.org 0x859be
	ldr r1, [pc, #32]	@ 000859be 0849
.org 0x859c0
	adds r0, r0, r1	@ 000859c0 4018
.org 0x859c2
	lsls r0, r0, #1	@ 000859c2 4000
.org 0x859c4
	lsrs r1, r0, #1	@ 000859c4 4108
.org 0x859c6
	str r1, [r2, #0]	@ 000859c6 1160
.org 0x859c8
	lsrs r0, r0, #17	@ 000859c8 400c
.org 0x859ca
	movs r1, #15	@ 000859ca 0f21
.org 0x859cc
	ands r0, r1	@ 000859cc 0840
.org 0x859ce
	cmp r0, #9	@ 000859ce 0928
.org 0x859d0
	bhi.n 0x859e4	@ 000859d0 08d8
.org 0x859d2
	movs r1, #0	@ 000859d2 0021
.org 0x859d4
	movs r0, #3	@ 000859d4 0320
.org 0x859d6
	b.n 0x859e8	@ 000859d6 07e0
.org 0x859d8
	.byte 0x38,0xdc,0x02,0x02	@ 000859d8 data
.org 0x859dc
	.byte 0xfd,0x43,0x03,0x00	@ 000859dc data
.org 0x859e0
	.byte 0xc3,0x9e,0x26,0x00	@ 000859e0 data
.org 0x859e4
	movs r1, #0	@ 000859e4 0021
.org 0x859e6
	movs r0, #4	@ 000859e6 0420
.org 0x859e8
	strb r0, [r4, #13]	@ 000859e8 6073
.org 0x859ea
	strb r1, [r4, #14]	@ 000859ea a173
