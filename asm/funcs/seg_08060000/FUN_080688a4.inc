@ FUN_080688a4  entry 0x080688a4  size 238
.thumb
.org 0x688a4
FUN_080688a4:
	push {r4, r5, lr}	@ 000688a4 30b5
.org 0x688a6
	adds r4, r0, #0	@ 000688a6 041c
.org 0x688a8
	ldrb r5, [r4, #14]	@ 000688a8 a57b
.org 0x688aa
	cmp r5, #0	@ 000688aa 002d
.org 0x688ac
	bne.n 0x68942	@ 000688ac 49d1
.org 0x688ae
	ldr r1, [pc, #68]	@ 000688ae 1149
.org 0x688b0
	bl 0x1cf00	@ 000688b0 b4f726fb
.org 0x688b4
	movs r0, #104	@ 000688b4 6820
.org 0x688b6
	bl 0x2b10	@ 000688b6 9af72bf9
.org 0x688ba
	adds r0, r4, #0	@ 000688ba 201c
.org 0x688bc
	adds r0, #116	@ 000688bc 7430
.org 0x688be
	ldr r1, [pc, #56]	@ 000688be 0e49
.org 0x688c0
	bl 0x5784	@ 000688c0 9cf760ff
.org 0x688c4
	ldr r0, [pc, #52]	@ 000688c4 0d48
.org 0x688c6
	ldr r0, [r0, #0]	@ 000688c6 0068
.org 0x688c8
	ldr r1, [r4, #84]	@ 000688c8 616d
.org 0x688ca
	ldr r0, [r0, #84]	@ 000688ca 406d
.org 0x688cc
	cmp r1, r0	@ 000688cc 8142
.org 0x688ce
	ble.n 0x68900	@ 000688ce 17dd
.org 0x688d0
	movs r0, #224	@ 000688d0 e020
.org 0x688d2
	lsls r0, r0, #1	@ 000688d2 4000
.org 0x688d4
	str r0, [r4, #92]	@ 000688d4 e065
.org 0x688d6
	adds r0, r4, #0	@ 000688d6 201c
.org 0x688d8
	adds r0, #76	@ 000688d8 4c30
.org 0x688da
	strb r5, [r0, #0]	@ 000688da 0570
.org 0x688dc
	adds r2, r4, #0	@ 000688dc 221c
.org 0x688de
	adds r2, #74	@ 000688de 4a32
.org 0x688e0
	ldrb r1, [r2, #0]	@ 000688e0 1178
.org 0x688e2
	movs r0, #17	@ 000688e2 1120
.org 0x688e4
	negs r0, r0	@ 000688e4 4042
.org 0x688e6
	ands r0, r1	@ 000688e6 0840
.org 0x688e8
	strb r0, [r2, #0]	@ 000688e8 1070
.org 0x688ea
	ldrb r1, [r4, #10]	@ 000688ea a17a
.org 0x688ec
	movs r0, #239	@ 000688ec ef20
.org 0x688ee
	ands r0, r1	@ 000688ee 0840
.org 0x688f0
	strb r0, [r4, #10]	@ 000688f0 a072
.org 0x688f2
	b.n 0x6891e	@ 000688f2 14e0
.org 0x688f4
	.byte 0x18,0xa9,0x00,0x00	@ 000688f4 data
.org 0x688f8
	.byte 0xfc,0xb1,0x85,0x08	@ 000688f8 data
.org 0x688fc
	.byte 0xf0,0xdb,0x02,0x02	@ 000688fc data
.org 0x68900
	ldr r0, [pc, #124]	@ 00068900 1f48
.org 0x68902
	str r0, [r4, #92]	@ 00068902 e065
.org 0x68904
	adds r1, r4, #0	@ 00068904 211c
.org 0x68906
	adds r1, #76	@ 00068906 4c31
.org 0x68908
	movs r0, #1	@ 00068908 0120
.org 0x6890a
	strb r0, [r1, #0]	@ 0006890a 0870
.org 0x6890c
	adds r2, r4, #0	@ 0006890c 221c
.org 0x6890e
	adds r2, #74	@ 0006890e 4a32
.org 0x68910
	ldrb r0, [r2, #0]	@ 00068910 1078
.org 0x68912
	movs r1, #16	@ 00068912 1021
.org 0x68914
	orrs r0, r1	@ 00068914 0843
.org 0x68916
	strb r0, [r2, #0]	@ 00068916 1070
.org 0x68918
	ldrb r0, [r4, #10]	@ 00068918 a07a
.org 0x6891a
	orrs r1, r0	@ 0006891a 0143
.org 0x6891c
	strb r1, [r4, #10]	@ 0006891c a172
.org 0x6891e
	ldr r0, [pc, #100]	@ 0006891e 1948
.org 0x68920
	str r0, [r4, #96]	@ 00068920 2066
.org 0x68922
	adds r0, r4, #0	@ 00068922 201c
.org 0x68924
	adds r0, #180	@ 00068924 b430
.org 0x68926
	ldrh r0, [r0, #44]	@ 00068926 808d
.org 0x68928
	cmp r0, #0	@ 00068928 0028
.org 0x6892a
	beq.n 0x68932	@ 0006892a 02d0
.org 0x6892c
	movs r0, #97	@ 0006892c 6120
.org 0x6892e
	bl 0x2b5c	@ 0006892e 9af715f9
.org 0x68932
	adds r1, r4, #0	@ 00068932 211c
.org 0x68934
	adds r1, #218	@ 00068934 da31
.org 0x68936
	movs r0, #0	@ 00068936 0020
.org 0x68938
	strb r0, [r1, #0]	@ 00068938 0870
.org 0x6893a
	strb r0, [r4, #15]	@ 0006893a e073
.org 0x6893c
	ldrb r0, [r4, #14]	@ 0006893c a07b
.org 0x6893e
	adds r0, #1	@ 0006893e 0130
.org 0x68940
	strb r0, [r4, #14]	@ 00068940 a073
.org 0x68942
	ldrb r0, [r4, #15]	@ 00068942 e07b
.org 0x68944
	cmp r0, #0	@ 00068944 0028
.org 0x68946
	bne.n 0x6898c	@ 00068946 21d1
.org 0x68948
	ldr r0, [r4, #84]	@ 00068948 606d
.org 0x6894a
	ldr r1, [r4, #92]	@ 0006894a e16d
.org 0x6894c
	adds r0, r0, r1	@ 0006894c 4018
.org 0x6894e
	str r0, [r4, #84]	@ 0006894e 6065
.org 0x68950
	ldr r1, [r4, #88]	@ 00068950 a16d
.org 0x68952
	ldr r0, [r4, #96]	@ 00068952 206e
.org 0x68954
	adds r1, r1, r0	@ 00068954 0918
.org 0x68956
	str r1, [r4, #88]	@ 00068956 a165
.org 0x68958
	adds r0, #64	@ 00068958 4030
.org 0x6895a
	str r0, [r4, #96]	@ 0006895a 2066
.org 0x6895c
	adds r5, r4, #0	@ 0006895c 251c
.org 0x6895e
	adds r5, #180	@ 0006895e b435
.org 0x68960
	ldr r0, [r5, #4]	@ 00068960 6868
.org 0x68962
	cmp r1, r0	@ 00068962 8142
.org 0x68964
	ble.n 0x6899e	@ 00068964 1bdd
.org 0x68966
	ldr r1, [pc, #32]	@ 00068966 0849
.org 0x68968
	adds r0, r4, #0	@ 00068968 201c
.org 0x6896a
	bl 0x1cf00	@ 0006896a b4f7c9fa
.org 0x6896e
	movs r0, #95	@ 0006896e 5f20
.org 0x68970
	bl 0x2b10	@ 00068970 9af7cef8
.org 0x68974
	ldr r0, [r5, #4]	@ 00068974 6868
.org 0x68976
	str r0, [r4, #88]	@ 00068976 a065
.org 0x68978
	ldrb r0, [r4, #15]	@ 00068978 e07b
.org 0x6897a
	adds r0, #1	@ 0006897a 0130
.org 0x6897c
	strb r0, [r4, #15]	@ 0006897c e073
.org 0x6897e
	b.n 0x6899e	@ 0006897e 0ee0
.org 0x68980
	.byte 0x40,0xfe,0xff,0xff	@ 00068980 data
.org 0x68984
	.byte 0x00,0xfe,0xff,0xff	@ 00068984 data
.org 0x68988
	.byte 0x03,0xa9,0x00,0x00	@ 00068988 data
.org 0x6898c
	adds r0, r4, #0	@ 0006898c 201c
.org 0x6898e
	adds r0, #115	@ 0006898e 7330
.org 0x68990
	ldrb r0, [r0, #0]	@ 00068990 0078
