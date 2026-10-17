@ FUN_08096800  entry 0x08096800  size 1066
.thumb
.org 0x96800
FUN_08096800:
	push {r4, r5, r6, lr}	@ 00096800 70b5
.org 0x96802
	adds r4, r0, #0	@ 00096802 041c
.org 0x96804
	adds r0, #140	@ 00096804 8c30
.org 0x96806
	ldr r0, [r0, #0]	@ 00096806 0068
.org 0x96808
	movs r1, #128	@ 00096808 8021
.org 0x9680a
	lsls r1, r1, #2	@ 0009680a 8900
.org 0x9680c
	ands r0, r1	@ 0009680c 0840
.org 0x9680e
	cmp r0, #0	@ 0009680e 0028
.org 0x96810
	bne.n 0x9682a	@ 00096810 0bd1
.org 0x96812
	ldr r2, [pc, #112]	@ 00096812 1c4a
.org 0x96814
	ldrh r1, [r2, #8]	@ 00096814 1189
.org 0x96816
	movs r0, #8	@ 00096816 0820
.org 0x96818
	ands r0, r1	@ 00096818 0840
.org 0x9681a
	cmp r0, #0	@ 0009681a 0028
.org 0x9681c
	bne.n 0x9682a	@ 0009681c 05d1
.org 0x9681e
	ldrb r1, [r2, #18]	@ 0009681e 917c
.org 0x96820
	movs r0, #1	@ 00096820 0120
.org 0x96822
	ands r0, r1	@ 00096822 0840
.org 0x96824
	cmp r0, #0	@ 00096824 0028
.org 0x96826
	beq.n 0x9682a	@ 00096826 00d0
.org 0x96828
	b.n 0x96b1c	@ 00096828 78e1
.org 0x9682a
	movs r1, #15	@ 0009682a 0f21
.org 0x9682c
	adds r6, r4, #0	@ 0009682c 261c
.org 0x9682e
	adds r6, #180	@ 0009682e b436
.org 0x96830
	adds r3, r6, #0	@ 00096830 331c
.org 0x96832
	adds r2, r3, r1	@ 00096832 5a18
.org 0x96834
	subs r1, #1	@ 00096834 0139
.org 0x96836
	adds r0, r3, r1	@ 00096836 5818
.org 0x96838
	ldrb r0, [r0, #0]	@ 00096838 0078
.org 0x9683a
	strb r0, [r2, #0]	@ 0009683a 1070
.org 0x9683c
	lsls r1, r1, #24	@ 0009683c 0906
.org 0x9683e
	lsrs r1, r1, #24	@ 0009683e 090e
.org 0x96840
	cmp r1, #0	@ 00096840 0029
.org 0x96842
	bne.n 0x96832	@ 00096842 f6d1
.org 0x96844
	ldrb r0, [r4, #17]	@ 00096844 607c
.org 0x96846
	cmp r0, #0	@ 00096846 0028
.org 0x96848
	beq.n 0x9684c	@ 00096848 00d0
.org 0x9684a
	b.n 0x96abc	@ 0009684a 37e1
.org 0x9684c
	adds r0, r4, #0	@ 0009684c 201c
.org 0x9684e
	adds r0, #140	@ 0009684e 8c30
.org 0x96850
	ldr r1, [r0, #0]	@ 00096850 0168
.org 0x96852
	movs r0, #128	@ 00096852 8020
.org 0x96854
	lsls r0, r0, #2	@ 00096854 8000
.org 0x96856
	ands r0, r1	@ 00096856 0840
.org 0x96858
	cmp r0, #0	@ 00096858 0028
.org 0x9685a
	beq.n 0x9688c	@ 0009685a 17d0
.org 0x9685c
	movs r0, #43	@ 0009685c 2b20
.org 0x9685e
	bl 0x6984	@ 0009685e 70f791f8
.org 0x96862
	movs r0, #1	@ 00096862 0120
.org 0x96864
	strb r0, [r4, #19]	@ 00096864 e074
.org 0x96866
	str r0, [r4, #96]	@ 00096866 2066
.org 0x96868
	ldr r1, [pc, #28]	@ 00096868 0749
.org 0x9686a
	ldrb r0, [r4, #9]	@ 0009686a 607a
.org 0x9686c
	lsls r0, r0, #2	@ 0009686c 8000
.org 0x9686e
	adds r0, r0, r1	@ 0009686e 4018
.org 0x96870
	movs r1, #2	@ 00096870 0221
.org 0x96872
	str r1, [r4, #12]	@ 00096872 e160
.org 0x96874
	ldr r0, [r0, #0]	@ 00096874 0068
.org 0x96876
	ldr r0, [r0, #8]	@ 00096876 8068
.org 0x96878
	str r0, [r4, #20]	@ 00096878 6061
.org 0x9687a
	adds r0, r4, #0	@ 0009687a 201c
.org 0x9687c
	bl 0x1cff0	@ 0009687c 86f7b8fb
.org 0x96880
	b.n 0x96c8a	@ 00096880 03e2
.org 0x96882
	.byte 0x00	@ 00096882 data
.org 0x96883
	.byte 0x00	@ 00096883 data
.org 0x96884
	.byte 0x10,0xe9,0x02,0x02	@ 00096884 data
.org 0x96888
	.byte 0x40,0xdb,0x85,0x08	@ 00096888 data
.org 0x9688c
	ldr r0, [r4, #44]	@ 0009688c e06a
.org 0x9688e
	cmp r0, #0	@ 0009688e 0028
.org 0x96890
	bne.n 0x968ba	@ 00096890 13d1
.org 0x96892
	movs r0, #1	@ 00096892 0120
.org 0x96894
	ands r1, r0	@ 00096894 0140
.org 0x96896
	cmp r1, #0	@ 00096896 0029
.org 0x96898
	beq.n 0x968b4	@ 00096898 0cd0
.org 0x9689a
	ldr r2, [pc, #72]	@ 0009689a 124a
.org 0x9689c
	movs r0, #0	@ 0009689c 0020
.org 0x9689e
	adds r1, r4, #0	@ 0009689e 211c
.org 0x968a0
	bl 0x2adac	@ 000968a0 94f784fa
.org 0x968a4
	str r0, [r4, #44]	@ 000968a4 e062
.org 0x968a6
	cmp r0, #0	@ 000968a6 0028
.org 0x968a8
	beq.n 0x968fa	@ 000968a8 27d0
.org 0x968aa
	adds r0, r4, #0	@ 000968aa 201c
.org 0x968ac
	adds r0, #116	@ 000968ac 7430
.org 0x968ae
	ldr r1, [pc, #56]	@ 000968ae 0e49
.org 0x968b0
	bl 0x5784	@ 000968b0 6ef768ff
.org 0x968b4
	ldr r0, [r4, #44]	@ 000968b4 e06a
.org 0x968b6
	cmp r0, #0	@ 000968b6 0028
.org 0x968b8
	beq.n 0x968fa	@ 000968b8 1fd0
.org 0x968ba
	bl 0x2b3e4	@ 000968ba 94f793fd
.org 0x968be
	cmp r0, #0	@ 000968be 0028
.org 0x968c0
	bne.n 0x968ec	@ 000968c0 14d1
.org 0x968c2
	ldrb r0, [r4, #30]	@ 000968c2 a07f
.org 0x968c4
	lsls r0, r0, #8	@ 000968c4 0002
.org 0x968c6
	adds r1, r4, #0	@ 000968c6 211c
.org 0x968c8
	adds r1, #112	@ 000968c8 7031
.org 0x968ca
	ldrb r1, [r1, #0]	@ 000968ca 0978
.org 0x968cc
	orrs r1, r0	@ 000968cc 0143
.org 0x968ce
	adds r0, r4, #0	@ 000968ce 201c
.org 0x968d0
	adds r0, #113	@ 000968d0 7130
.org 0x968d2
	movs r2, #0	@ 000968d2 0022
.org 0x968d4
	ldrsb r2, [r0, r2]	@ 000968d4 8256
.org 0x968d6
	lsls r2, r2, #16	@ 000968d6 1204
.org 0x968d8
	lsrs r2, r2, #16	@ 000968d8 120c
.org 0x968da
	adds r0, r4, #0	@ 000968da 201c
.org 0x968dc
	movs r3, #4	@ 000968dc 0423
.org 0x968de
	bl 0x1cfc8	@ 000968de 86f773fb
.org 0x968e2
	b.n 0x96b1c	@ 000968e2 1be1
.org 0x968e4
	.byte 0x3c,0x09,0x86,0x08	@ 000968e4 data
.org 0x968e8
	.byte 0xf4,0x08,0x86,0x08	@ 000968e8 data
.org 0x968ec
	adds r0, r4, #0	@ 000968ec 201c
.org 0x968ee
	adds r0, #116	@ 000968ee 7430
.org 0x968f0
	ldr r1, [pc, #36]	@ 000968f0 0949
.org 0x968f2
	bl 0x5784	@ 000968f2 6ef747ff
.org 0x968f6
	movs r0, #0	@ 000968f6 0020
.org 0x968f8
	str r0, [r4, #44]	@ 000968f8 e062
.org 0x968fa
	ldrb r5, [r4, #13]	@ 000968fa 657b
.org 0x968fc
	cmp r5, #0	@ 000968fc 002d
.org 0x968fe
	bne.n 0x96920	@ 000968fe 0fd1
.org 0x96900
	ldr r0, [pc, #24]	@ 00096900 0648
.org 0x96902
	adds r1, r4, #0	@ 00096902 211c
.org 0x96904
	adds r1, #84	@ 00096904 5431
.org 0x96906
	bl 0x1fb14	@ 00096906 89f705f9
.org 0x9690a
	cmp r0, #0	@ 0009690a 0028
.org 0x9690c
	beq.n 0x96910	@ 0009690c 00d0
.org 0x9690e
	b.n 0x96c9c	@ 0009690e c5e1
.org 0x96910
	ldrb r0, [r4, #13]	@ 00096910 607b
.org 0x96912
	adds r0, #1	@ 00096912 0130
.org 0x96914
	strb r0, [r4, #13]	@ 00096914 6073
.org 0x96916
	b.n 0x96c9c	@ 00096916 c1e1
.org 0x96918
	.byte 0xdc,0x08,0x86,0x08	@ 00096918 data
.org 0x9691c
	.byte 0xf8,0xe9,0x02,0x02	@ 0009691c data
.org 0x96920
	cmp r5, #1	@ 00096920 012d
.org 0x96922
	beq.n 0x96926	@ 00096922 00d0
.org 0x96924
	b.n 0x96c72	@ 00096924 a5e1
.org 0x96926
	ldr r1, [r4, #100]	@ 00096926 616e
.org 0x96928
	ldr r0, [pc, #32]	@ 00096928 0848
.org 0x9692a
	cmp r1, r0	@ 0009692a 8142
.org 0x9692c
	ble.n 0x96954	@ 0009692c 12dd
.org 0x9692e
	ldr r1, [pc, #32]	@ 0009692e 0849
.org 0x96930
	adds r0, r4, #0	@ 00096930 201c
.org 0x96932
	bl 0x1cf00	@ 00096932 86f7e5fa
.org 0x96936
	ldrb r0, [r6, #0]	@ 00096936 3078
.org 0x96938
	subs r0, #65	@ 00096938 4138
.org 0x9693a
	lsls r0, r0, #24	@ 0009693a 0006
.org 0x9693c
	lsrs r0, r0, #24	@ 0009693c 000e
.org 0x9693e
	cmp r0, #126	@ 0009693e 7e28
.org 0x96940
	bhi.n 0x96944	@ 00096940 00d8
.org 0x96942
	str r5, [r4, #92]	@ 00096942 e565
.org 0x96944
	ldrb r0, [r4, #13]	@ 00096944 607b
.org 0x96946
	adds r0, #1	@ 00096946 0130
.org 0x96948
	strb r0, [r4, #13]	@ 00096948 6073
.org 0x9694a
	b.n 0x969e0	@ 0009694a 49e0
.org 0x9694c
	.byte 0xa3,0x01,0x00,0x00	@ 0009694c data
.org 0x96950
	.byte 0x01,0x44,0x00,0x00	@ 00096950 data
.org 0x96954
	ldr r0, [pc, #20]	@ 00096954 0548
.org 0x96956
	cmp r1, r0	@ 00096956 8142
.org 0x96958
	ble.n 0x96984	@ 00096958 14dd
.org 0x9695a
	ldr r2, [pc, #20]	@ 0009695a 054a
.org 0x9695c
	adds r0, r1, r2	@ 0009695c 8818
.org 0x9695e
	movs r1, #3	@ 0009695e 0321
.org 0x96960
	ands r0, r1	@ 00096960 0840
.org 0x96962
	cmp r0, #1	@ 00096962 0128
.org 0x96964
	bgt.n 0x96978	@ 00096964 08dc
.org 0x96966
	ldr r1, [pc, #12]	@ 00096966 0349
.org 0x96968
	b.n 0x9697c	@ 00096968 08e0
.org 0x9696a
	.byte 0x00	@ 0009696a data
.org 0x9696b
	.byte 0x00	@ 0009696b data
.org 0x9696c
	.byte 0x8f,0x01,0x00,0x00	@ 0009696c data
.org 0x96970
	.byte 0x70,0xfe,0xff,0xff	@ 00096970 data
.org 0x96974
	.byte 0x01,0x44,0x00,0x00	@ 00096974 data
.org 0x96978
	movs r1, #136	@ 00096978 8821
.org 0x9697a
	lsls r1, r1, #7	@ 0009697a c901
.org 0x9697c
	adds r0, r4, #0	@ 0009697c 201c
.org 0x9697e
	bl 0x1cf00	@ 0009697e 86f7bffa
.org 0x96982
	b.n 0x969e0	@ 00096982 2de0
.org 0x96984
	ldr r0, [pc, #48]	@ 00096984 0c48
.org 0x96986
	cmp r1, r0	@ 00096986 8142
.org 0x96988
	ble.n 0x969e0	@ 00096988 2add
.org 0x9698a
	adds r0, r1, #0	@ 0009698a 081c
.org 0x9698c
	subs r0, #248	@ 0009698c f838
.org 0x9698e
	movs r1, #7	@ 0009698e 0721
.org 0x96990
	ands r0, r1	@ 00096990 0840
.org 0x96992
	cmp r0, #1	@ 00096992 0128
.org 0x96994
	bgt.n 0x969c0	@ 00096994 14dc
.org 0x96996
	ldr r1, [pc, #36]	@ 00096996 0949
.org 0x96998
	adds r0, r4, #0	@ 00096998 201c
.org 0x9699a
	adds r0, #113	@ 0009699a 7130
.org 0x9699c
	movs r2, #0	@ 0009699c 0022
.org 0x9699e
	ldrsb r2, [r0, r2]	@ 0009699e 8256
.org 0x969a0
	lsls r2, r2, #16	@ 000969a0 1204
.org 0x969a2
	lsrs r2, r2, #16	@ 000969a2 120c
.org 0x969a4
	adds r0, #1	@ 000969a4 0130
.org 0x969a6
	movs r3, #0	@ 000969a6 0023
.org 0x969a8
	ldrsb r3, [r0, r3]	@ 000969a8 c356
.org 0x969aa
	lsls r3, r3, #16	@ 000969aa 1b04
.org 0x969ac
	lsrs r3, r3, #16	@ 000969ac 1b0c
.org 0x969ae
	adds r0, r4, #0	@ 000969ae 201c
.org 0x969b0
	bl 0x1cfc8	@ 000969b0 86f70afb
.org 0x969b4
	b.n 0x969e0	@ 000969b4 14e0
.org 0x969b6
	.byte 0x00	@ 000969b6 data
.org 0x969b7
	.byte 0x00	@ 000969b7 data
.org 0x969b8
	.byte 0x35,0x01,0x00,0x00	@ 000969b8 data
.org 0x969bc
	.byte 0x01,0x44,0x00,0x00	@ 000969bc data
.org 0x969c0
	movs r1, #136	@ 000969c0 8821
.org 0x969c2
	lsls r1, r1, #7	@ 000969c2 c901
.org 0x969c4
	adds r0, r4, #0	@ 000969c4 201c
.org 0x969c6
	adds r0, #113	@ 000969c6 7130
.org 0x969c8
	movs r2, #0	@ 000969c8 0022
.org 0x969ca
	ldrsb r2, [r0, r2]	@ 000969ca 8256
.org 0x969cc
	lsls r2, r2, #16	@ 000969cc 1204
.org 0x969ce
	lsrs r2, r2, #16	@ 000969ce 120c
.org 0x969d0
	adds r0, #1	@ 000969d0 0130
.org 0x969d2
	movs r3, #0	@ 000969d2 0023
.org 0x969d4
	ldrsb r3, [r0, r3]	@ 000969d4 c356
.org 0x969d6
	lsls r3, r3, #16	@ 000969d6 1b04
.org 0x969d8
	lsrs r3, r3, #16	@ 000969d8 1b0c
.org 0x969da
	adds r0, r4, #0	@ 000969da 201c
.org 0x969dc
	bl 0x1cfc8	@ 000969dc 86f7f4fa
.org 0x969e0
	movs r0, #0	@ 000969e0 0020
.org 0x969e2
	str r0, [r4, #92]	@ 000969e2 e065
.org 0x969e4
	ldr r0, [r4, #100]	@ 000969e4 606e
.org 0x969e6
	subs r0, #121	@ 000969e6 7938
.org 0x969e8
	cmp r0, #126	@ 000969e8 7e28
.org 0x969ea
	bhi.n 0x969f6	@ 000969ea 04d8
.org 0x969ec
	ldr r0, [r4, #104]	@ 000969ec a06e
.org 0x969ee
	lsls r0, r0, #1	@ 000969ee 4000
.org 0x969f0
	ldrb r3, [r6, #0]	@ 000969f0 3378
.org 0x969f2
	adds r0, r0, r3	@ 000969f2 c018
.org 0x969f4
	b.n 0x96a58	@ 000969f4 30e0
.org 0x969f6
	ldr r0, [pc, #64]	@ 000969f6 1048
.org 0x969f8
	ldr r2, [r0, #0]	@ 000969f8 0268
.org 0x969fa
	ldr r0, [r4, #84]	@ 000969fa 606d
.org 0x969fc
	ldr r1, [r2, #84]	@ 000969fc 516d
.org 0x969fe
	subs r0, r0, r1	@ 000969fe 401a
.org 0x96a00
	lsls r0, r0, #8	@ 00096a00 0002
.org 0x96a02
	asrs r0, r0, #16	@ 00096a02 0014
.org 0x96a04
	ldr r1, [r4, #88]	@ 00096a04 a16d
.org 0x96a06
	movs r3, #128	@ 00096a06 8023
.org 0x96a08
	lsls r3, r3, #6	@ 00096a08 9b01
.org 0x96a0a
	adds r1, r1, r3	@ 00096a0a c918
.org 0x96a0c
	ldr r2, [r2, #88]	@ 00096a0c 926d
.org 0x96a0e
	subs r1, r1, r2	@ 00096a0e 891a
.org 0x96a10
	lsls r1, r1, #8	@ 00096a10 0902
.org 0x96a12
	asrs r1, r1, #16	@ 00096a12 0914
.org 0x96a14
	bl 0x128bdc	@ 00096a14 92f0e2f8
.org 0x96a18
	lsls r0, r0, #16	@ 00096a18 0004
.org 0x96a1a
	lsrs r2, r0, #24	@ 00096a1a 020e
.org 0x96a1c
	ldrb r1, [r6, #0]	@ 00096a1c 3178
.org 0x96a1e
	cmp r2, r1	@ 00096a1e 8a42
.org 0x96a20
	beq.n 0x96a5a	@ 00096a20 1bd0
.org 0x96a22
	lsls r0, r2, #24	@ 00096a22 1006
.org 0x96a24
	cmp r0, #0	@ 00096a24 0028
.org 0x96a26
	bge.n 0x96a42	@ 00096a26 0cda
.org 0x96a28
	cmp r2, r1	@ 00096a28 8a42
.org 0x96a2a
	bls.n 0x96a3c	@ 00096a2a 07d9
.org 0x96a2c
	adds r0, r2, #0	@ 00096a2c 101c
.org 0x96a2e
	subs r0, #128	@ 00096a2e 8038
.org 0x96a30
	cmp r0, r1	@ 00096a30 8842
.org 0x96a32
	bge.n 0x96a3c	@ 00096a32 03da
.org 0x96a34
	adds r0, r1, #1	@ 00096a34 481c
.org 0x96a36
	b.n 0x96a58	@ 00096a36 0fe0
.org 0x96a38
	.byte 0xf0,0xdb,0x02,0x02	@ 00096a38 data
.org 0x96a3c
	ldrb r0, [r6, #0]	@ 00096a3c 3078
.org 0x96a3e
	subs r0, #1	@ 00096a3e 0138
.org 0x96a40
	b.n 0x96a58	@ 00096a40 0ae0
.org 0x96a42
	cmp r2, r1	@ 00096a42 8a42
.org 0x96a44
	bcs.n 0x96a54	@ 00096a44 06d2
.org 0x96a46
	adds r0, r2, #0	@ 00096a46 101c
.org 0x96a48
	adds r0, #128	@ 00096a48 8030
.org 0x96a4a
	ldrb r1, [r6, #0]	@ 00096a4a 3178
.org 0x96a4c
	cmp r0, r1	@ 00096a4c 8842
.org 0x96a4e
	ble.n 0x96a54	@ 00096a4e 01dd
.org 0x96a50
	subs r0, r1, #1	@ 00096a50 481e
.org 0x96a52
	b.n 0x96a58	@ 00096a52 01e0
.org 0x96a54
	ldrb r0, [r6, #0]	@ 00096a54 3078
.org 0x96a56
	adds r0, #1	@ 00096a56 0130
.org 0x96a58
	strb r0, [r6, #0]	@ 00096a58 3070
.org 0x96a5a
	ldr r1, [r4, #100]	@ 00096a5a 616e
.org 0x96a5c
	ldr r0, [pc, #84]	@ 00096a5c 1548
.org 0x96a5e
	cmp r1, r0	@ 00096a5e 8142
.org 0x96a60
	bgt.n 0x96aa0	@ 00096a60 1edc
.org 0x96a62
	ldr r2, [pc, #84]	@ 00096a62 154a
.org 0x96a64
	ldrb r0, [r6, #0]	@ 00096a64 3078
.org 0x96a66
	adds r0, #192	@ 00096a66 c030
.org 0x96a68
	lsls r0, r0, #24	@ 00096a68 0006
.org 0x96a6a
	lsrs r0, r0, #23	@ 00096a6a c00d
.org 0x96a6c
	adds r0, r0, r2	@ 00096a6c 8018
.org 0x96a6e
	movs r1, #0	@ 00096a6e 0021
.org 0x96a70
	ldrsh r0, [r0, r1]	@ 00096a70 405e
.org 0x96a72
	lsls r1, r0, #1	@ 00096a72 4100
.org 0x96a74
	adds r1, r1, r0	@ 00096a74 0918
.org 0x96a76
	asrs r1, r1, #2	@ 00096a76 8910
.org 0x96a78
	ldr r0, [r4, #84]	@ 00096a78 606d
.org 0x96a7a
	adds r0, r0, r1	@ 00096a7a 4018
.org 0x96a7c
	str r0, [r4, #84]	@ 00096a7c 6065
.org 0x96a7e
	ldrb r0, [r6, #0]	@ 00096a7e 3078
.org 0x96a80
	adds r0, #128	@ 00096a80 8030
.org 0x96a82
	lsls r0, r0, #24	@ 00096a82 0006
.org 0x96a84
	lsrs r0, r0, #23	@ 00096a84 c00d
.org 0x96a86
	adds r0, r0, r2	@ 00096a86 8018
.org 0x96a88
	movs r2, #0	@ 00096a88 0022
.org 0x96a8a
	ldrsh r0, [r0, r2]	@ 00096a8a 805e
.org 0x96a8c
	lsls r1, r0, #1	@ 00096a8c 4100
.org 0x96a8e
	adds r1, r1, r0	@ 00096a8e 0918
.org 0x96a90
	asrs r1, r1, #2	@ 00096a90 8910
.org 0x96a92
	ldr r0, [r4, #88]	@ 00096a92 a06d
.org 0x96a94
	adds r0, r0, r1	@ 00096a94 4018
.org 0x96a96
	str r0, [r4, #88]	@ 00096a96 a065
.org 0x96a98
	ldrb r1, [r6, #0]	@ 00096a98 3178
.org 0x96a9a
	adds r0, r4, #0	@ 00096a9a 201c
.org 0x96a9c
	adds r0, #36	@ 00096a9c 2430
.org 0x96a9e
	strb r1, [r0, #0]	@ 00096a9e 0170
.org 0x96aa0
	ldrb r0, [r4, #18]	@ 00096aa0 a07c
.org 0x96aa2
	cmp r0, #15	@ 00096aa2 0f28
.org 0x96aa4
	bhi.n 0x96aaa	@ 00096aa4 01d8
.org 0x96aa6
	adds r0, #1	@ 00096aa6 0130
.org 0x96aa8
	strb r0, [r4, #18]	@ 00096aa8 a074
.org 0x96aaa
	ldr r0, [r4, #100]	@ 00096aaa 606e
.org 0x96aac
	adds r0, #1	@ 00096aac 0130
.org 0x96aae
	str r0, [r4, #100]	@ 00096aae 6066
.org 0x96ab0
	b.n 0x96c9c	@ 00096ab0 f4e0
.org 0x96ab2
	.byte 0x00	@ 00096ab2 data
.org 0x96ab3
	.byte 0x00	@ 00096ab3 data
.org 0x96ab4
	.byte 0x8f,0x01,0x00,0x00	@ 00096ab4 data
.org 0x96ab8
	.byte 0x0c,0x93,0x12,0x08	@ 00096ab8 data
.org 0x96abc
	ldr r5, [r4, #40]	@ 00096abc a56a
.org 0x96abe
	ldr r2, [r5, #96]	@ 00096abe 2a6e
.org 0x96ac0
	cmp r2, #0	@ 00096ac0 002a
.org 0x96ac2
	bne.n 0x96b04	@ 00096ac2 1fd1
.org 0x96ac4
	ldrb r0, [r5, #12]	@ 00096ac4 287b
.org 0x96ac6
	cmp r0, #2	@ 00096ac6 0228
.org 0x96ac8
	bls.n 0x96b04	@ 00096ac8 1cd9
.org 0x96aca
	ldrb r1, [r4, #10]	@ 00096aca a17a
.org 0x96acc
	movs r0, #254	@ 00096acc fe20
.org 0x96ace
	ands r0, r1	@ 00096ace 0840
.org 0x96ad0
	movs r1, #253	@ 00096ad0 fd21
.org 0x96ad2
	ands r0, r1	@ 00096ad2 0840
.org 0x96ad4
	strb r0, [r4, #10]	@ 00096ad4 a072
.org 0x96ad6
	adds r0, r4, #0	@ 00096ad6 201c
.org 0x96ad8
	adds r0, #140	@ 00096ad8 8c30
.org 0x96ada
	str r2, [r0, #0]	@ 00096ada 0260
.org 0x96adc
	adds r0, #4	@ 00096adc 0430
.org 0x96ade
	str r2, [r0, #0]	@ 00096ade 0260
.org 0x96ae0
	adds r0, #4	@ 00096ae0 0430
.org 0x96ae2
	strb r2, [r0, #0]	@ 00096ae2 0270
.org 0x96ae4
	ldrb r1, [r4, #10]	@ 00096ae4 a17a
.org 0x96ae6
	movs r0, #251	@ 00096ae6 fb20
.org 0x96ae8
	ands r0, r1	@ 00096ae8 0840
.org 0x96aea
	strb r0, [r4, #10]	@ 00096aea a072
.org 0x96aec
	ldr r1, [pc, #16]	@ 00096aec 0449
.org 0x96aee
	ldrb r0, [r4, #9]	@ 00096aee 607a
.org 0x96af0
	lsls r0, r0, #2	@ 00096af0 8000
.org 0x96af2
	adds r0, r0, r1	@ 00096af2 4018
.org 0x96af4
	movs r1, #3	@ 00096af4 0321
.org 0x96af6
	str r1, [r4, #12]	@ 00096af6 e160
.org 0x96af8
	ldr r0, [r0, #0]	@ 00096af8 0068
.org 0x96afa
	ldr r0, [r0, #12]	@ 00096afa c068
.org 0x96afc
	str r0, [r4, #20]	@ 00096afc 6061
.org 0x96afe
	b.n 0x96ca2	@ 00096afe d0e0
.org 0x96b00
	.byte 0x40,0xdb,0x85,0x08	@ 00096b00 data
.org 0x96b04
	ldrb r0, [r5, #12]	@ 00096b04 287b
.org 0x96b06
	cmp r0, #1	@ 00096b06 0128
.org 0x96b08
	bhi.n 0x96b32	@ 00096b08 13d8
.org 0x96b0a
	ldr r0, [r5, #44]	@ 00096b0a e86a
.org 0x96b0c
	str r0, [r4, #44]	@ 00096b0c e062
.org 0x96b0e
	cmp r0, #0	@ 00096b0e 0028
.org 0x96b10
	beq.n 0x96b28	@ 00096b10 0ad0
.org 0x96b12
	adds r0, r4, #0	@ 00096b12 201c
.org 0x96b14
	adds r0, #116	@ 00096b14 7430
.org 0x96b16
	ldr r1, [pc, #12]	@ 00096b16 0349
.org 0x96b18
	bl 0x5784	@ 00096b18 6ef734fe
.org 0x96b1c
	adds r0, r4, #0	@ 00096b1c 201c
.org 0x96b1e
	bl 0x1cff0	@ 00096b1e 86f767fa
.org 0x96b22
	b.n 0x96ca2	@ 00096b22 bee0
.org 0x96b24
	.byte 0x24,0x09,0x86,0x08	@ 00096b24 data
.org 0x96b28
	adds r0, r4, #0	@ 00096b28 201c
.org 0x96b2a
	adds r0, #116	@ 00096b2a 7430
.org 0x96b2c
	ldr r1, [pc, #52]	@ 00096b2c 0d49
.org 0x96b2e
	bl 0x5784	@ 00096b2e 6ef729fe
.org 0x96b32
	ldr r0, [r5, #100]	@ 00096b32 686e
.org 0x96b34
	str r0, [r4, #100]	@ 00096b34 6066
.org 0x96b36
	ldrb r0, [r4, #13]	@ 00096b36 607b
.org 0x96b38
	cmp r0, #0	@ 00096b38 0028
.org 0x96b3a
	bne.n 0x96be8	@ 00096b3a 55d1
.org 0x96b3c
	ldrb r0, [r5, #13]	@ 00096b3c 687b
.org 0x96b3e
	cmp r0, #1	@ 00096b3e 0128
.org 0x96b40
	bls.n 0x96b4a	@ 00096b40 03d9
.org 0x96b42
	ldr r0, [r5, #92]	@ 00096b42 e86d
.org 0x96b44
	str r0, [r4, #92]	@ 00096b44 e065
.org 0x96b46
	movs r0, #2	@ 00096b46 0220
.org 0x96b48
	strb r0, [r4, #13]	@ 00096b48 6073
.org 0x96b4a
	adds r0, r5, #0	@ 00096b4a 281c
.org 0x96b4c
	adds r0, #112	@ 00096b4c 7030
.org 0x96b4e
	ldrb r0, [r0, #0]	@ 00096b4e 0078
.org 0x96b50
	movs r1, #1	@ 00096b50 0121
.org 0x96b52
	ands r0, r1	@ 00096b52 0840
.org 0x96b54
	cmp r0, #0	@ 00096b54 0028
.org 0x96b56
	beq.n 0x96b6c	@ 00096b56 09d0
.org 0x96b58
	ldr r1, [pc, #12]	@ 00096b58 0349
.org 0x96b5a
	adds r0, r4, #0	@ 00096b5a 201c
.org 0x96b5c
	bl 0x1cf00	@ 00096b5c 86f7d0f9
.org 0x96b60
	b.n 0x96b74	@ 00096b60 08e0
.org 0x96b62
	.byte 0x00	@ 00096b62 data
.org 0x96b63
	.byte 0x00	@ 00096b63 data
.org 0x96b64
	.byte 0x0c,0x09,0x86,0x08	@ 00096b64 data
.org 0x96b68
	.byte 0x03,0x44,0x00,0x00	@ 00096b68 data
.org 0x96b6c
	ldr r1, [pc, #20]	@ 00096b6c 0549
.org 0x96b6e
	adds r0, r4, #0	@ 00096b6e 201c
.org 0x96b70
	bl 0x1cf00	@ 00096b70 86f7c6f9
.org 0x96b74
	ldrb r0, [r5, #12]	@ 00096b74 287b
.org 0x96b76
	cmp r0, #1	@ 00096b76 0128
.org 0x96b78
	bls.n 0x96b88	@ 00096b78 06d9
.org 0x96b7a
	ldrb r0, [r5, #19]	@ 00096b7a e87c
.org 0x96b7c
	adds r0, #4	@ 00096b7c 0430
.org 0x96b7e
	strb r0, [r4, #19]	@ 00096b7e e074
.org 0x96b80
	movs r0, #1	@ 00096b80 0120
.org 0x96b82
	b.n 0x96c76	@ 00096b82 78e0
.org 0x96b84
	.byte 0x02,0x44,0x00,0x00	@ 00096b84 data
.org 0x96b88
	ldrb r0, [r5, #18]	@ 00096b88 a87c
.org 0x96b8a
	cmp r0, #16	@ 00096b8a 1028
.org 0x96b8c
	beq.n 0x96b90	@ 00096b8c 00d0
.org 0x96b8e
	b.n 0x96c9c	@ 00096b8e 85e0
.org 0x96b90
	ldr r1, [r4, #100]	@ 00096b90 616e
.org 0x96b92
	ldr r0, [pc, #76]	@ 00096b92 1348
.org 0x96b94
	cmp r1, r0	@ 00096b94 8142
.org 0x96b96
	bgt.n 0x96bd4	@ 00096b96 1ddc
.org 0x96b98
	adds r0, r5, #0	@ 00096b98 281c
.org 0x96b9a
	adds r0, #180	@ 00096b9a b430
.org 0x96b9c
	ldrb r0, [r0, #15]	@ 00096b9c c07b
.org 0x96b9e
	strb r0, [r6, #0]	@ 00096b9e 3070
.org 0x96ba0
	ldr r2, [pc, #64]	@ 00096ba0 104a
.org 0x96ba2
	adds r0, #192	@ 00096ba2 c030
.org 0x96ba4
	lsls r0, r0, #24	@ 00096ba4 0006
.org 0x96ba6
	lsrs r0, r0, #23	@ 00096ba6 c00d
.org 0x96ba8
	adds r0, r0, r2	@ 00096ba8 8018
.org 0x96baa
	movs r3, #0	@ 00096baa 0023
.org 0x96bac
	ldrsh r0, [r0, r3]	@ 00096bac c05e
.org 0x96bae
	lsls r1, r0, #1	@ 00096bae 4100
.org 0x96bb0
	adds r1, r1, r0	@ 00096bb0 0918
.org 0x96bb2
	asrs r1, r1, #2	@ 00096bb2 8910
.org 0x96bb4
	ldr r0, [r4, #84]	@ 00096bb4 606d
.org 0x96bb6
	adds r0, r0, r1	@ 00096bb6 4018
.org 0x96bb8
	str r0, [r4, #84]	@ 00096bb8 6065
.org 0x96bba
	ldrb r0, [r6, #0]	@ 00096bba 3078
.org 0x96bbc
	adds r0, #128	@ 00096bbc 8030
.org 0x96bbe
	lsls r0, r0, #24	@ 00096bbe 0006
.org 0x96bc0
	lsrs r0, r0, #23	@ 00096bc0 c00d
.org 0x96bc2
	adds r0, r0, r2	@ 00096bc2 8018
.org 0x96bc4
	movs r1, #0	@ 00096bc4 0021
.org 0x96bc6
	ldrsh r0, [r0, r1]	@ 00096bc6 405e
.org 0x96bc8
	lsls r1, r0, #1	@ 00096bc8 4100
.org 0x96bca
	adds r1, r1, r0	@ 00096bca 0918
.org 0x96bcc
	asrs r1, r1, #2	@ 00096bcc 8910
.org 0x96bce
	ldr r0, [r4, #88]	@ 00096bce a06d
.org 0x96bd0
	adds r0, r0, r1	@ 00096bd0 4018
.org 0x96bd2
	str r0, [r4, #88]	@ 00096bd2 a065
.org 0x96bd4
	ldrb r0, [r4, #18]	@ 00096bd4 a07c
.org 0x96bd6
	cmp r0, #15	@ 00096bd6 0f28
.org 0x96bd8
	bhi.n 0x96c9c	@ 00096bd8 60d8
.org 0x96bda
	adds r0, #1	@ 00096bda 0130
.org 0x96bdc
	strb r0, [r4, #18]	@ 00096bdc a074
.org 0x96bde
	b.n 0x96c9c	@ 00096bde 5de0
.org 0x96be0
	.byte 0x8f,0x01,0x00,0x00	@ 00096be0 data
.org 0x96be4
	.byte 0x0c,0x93,0x12,0x08	@ 00096be4 data
.org 0x96be8
	ldrb r1, [r4, #18]	@ 00096be8 a17c
.org 0x96bea
	movs r0, #1	@ 00096bea 0120
.org 0x96bec
	ands r0, r1	@ 00096bec 0840
.org 0x96bee
	cmp r0, #0	@ 00096bee 0028
.org 0x96bf0
	beq.n 0x96c00	@ 00096bf0 06d0
.org 0x96bf2
	ldr r1, [pc, #8]	@ 00096bf2 0249
.org 0x96bf4
	adds r0, r4, #0	@ 00096bf4 201c
.org 0x96bf6
	bl 0x1cf00	@ 00096bf6 86f783f9
.org 0x96bfa
	b.n 0x96c08	@ 00096bfa 05e0
.org 0x96bfc
	.byte 0x03,0x44,0x00,0x00	@ 00096bfc data
.org 0x96c00
	ldr r1, [pc, #32]	@ 00096c00 0849
.org 0x96c02
	adds r0, r4, #0	@ 00096c02 201c
.org 0x96c04
	bl 0x1cf00	@ 00096c04 86f77cf9
.org 0x96c08
	ldrb r0, [r4, #17]	@ 00096c08 607c
.org 0x96c0a
	ldr r1, [r4, #92]	@ 00096c0a e16d
.org 0x96c0c
	adds r1, r0, r1	@ 00096c0c 4118
.org 0x96c0e
	movs r2, #1	@ 00096c0e 0122
.org 0x96c10
	ands r1, r2	@ 00096c10 1140
.org 0x96c12
	adds r2, r0, #0	@ 00096c12 021c
.org 0x96c14
	cmp r1, #0	@ 00096c14 0029
.org 0x96c16
	beq.n 0x96c28	@ 00096c16 07d0
.org 0x96c18
	ldr r0, [r4, #84]	@ 00096c18 606d
.org 0x96c1a
	movs r3, #160	@ 00096c1a a023
.org 0x96c1c
	lsls r3, r3, #2	@ 00096c1c 9b00
.org 0x96c1e
	adds r0, r0, r3	@ 00096c1e c018
.org 0x96c20
	b.n 0x96c2e	@ 00096c20 05e0
.org 0x96c22
	.byte 0x00	@ 00096c22 data
.org 0x96c23
	.byte 0x00	@ 00096c23 data
.org 0x96c24
	.byte 0x02,0x44,0x00,0x00	@ 00096c24 data
.org 0x96c28
	ldr r0, [r4, #84]	@ 00096c28 606d
