@ FUN_080158a8  entry 0x080158a8  size 1594
.thumb
.org 0x158a8
FUN_080158a8:
	push {r4, r5, r6, lr}	@ 000158a8 70b5
.org 0x158aa
	ldr r2, [pc, #184]	@ 000158aa 2e4a
.org 0x158ac
	ldr r0, [pc, #184]	@ 000158ac 2e48
.org 0x158ae
	adds r1, r2, r0	@ 000158ae 1118
.org 0x158b0
	ldr r0, [r1, #0]	@ 000158b0 0868
.org 0x158b2
	adds r0, #1	@ 000158b2 0130
.org 0x158b4
	str r0, [r1, #0]	@ 000158b4 0860
.org 0x158b6
	ldr r1, [pc, #180]	@ 000158b6 2d49
.org 0x158b8
	adds r0, r2, r1	@ 000158b8 5018
.org 0x158ba
	ldrb r1, [r0, #0]	@ 000158ba 0178
.org 0x158bc
	movs r0, #1	@ 000158bc 0120
.org 0x158be
	ands r0, r1	@ 000158be 0840
.org 0x158c0
	cmp r0, #0	@ 000158c0 0028
.org 0x158c2
	beq.n 0x158d8	@ 000158c2 09d0
.org 0x158c4
	ldr r4, [pc, #168]	@ 000158c4 2a4c
.org 0x158c6
	adds r1, r2, r4	@ 000158c6 1119
.org 0x158c8
	ldrh r3, [r1, #0]	@ 000158c8 0b88
.org 0x158ca
	movs r4, #0	@ 000158ca 0024
.org 0x158cc
	ldrsh r0, [r1, r4]	@ 000158cc 085f
.org 0x158ce
	cmp r0, #0	@ 000158ce 0028
.org 0x158d0
	beq.n 0x158d8	@ 000158d0 02d0
.org 0x158d2
	adds r0, r3, #0	@ 000158d2 181c
.org 0x158d4
	subs r0, #16	@ 000158d4 1038
.org 0x158d6
	strh r0, [r1, #0]	@ 000158d6 0880
.org 0x158d8
	ldr r1, [pc, #152]	@ 000158d8 2649
.org 0x158da
	adds r0, r2, r1	@ 000158da 5018
.org 0x158dc
	ldrh r1, [r0, #0]	@ 000158dc 0188
.org 0x158de
	lsrs r0, r1, #8	@ 000158de 080a
.org 0x158e0
	cmp r0, #10	@ 000158e0 0a28
.org 0x158e2
	bne.n 0x15900	@ 000158e2 0dd1
.org 0x158e4
	movs r3, #255	@ 000158e4 ff23
.org 0x158e6
	ands r3, r1	@ 000158e6 0b40
.org 0x158e8
	cmp r3, #0	@ 000158e8 002b
.org 0x158ea
	bne.n 0x15900	@ 000158ea 09d1
.org 0x158ec
	ldr r4, [pc, #136]	@ 000158ec 224c
.org 0x158ee
	adds r1, r2, r4	@ 000158ee 1119
.org 0x158f0
	ldrb r0, [r1, #0]	@ 000158f0 0878
.org 0x158f2
	adds r0, #1	@ 000158f2 0130
.org 0x158f4
	strb r0, [r1, #0]	@ 000158f4 0870
.org 0x158f6
	lsls r0, r0, #24	@ 000158f6 0006
.org 0x158f8
	lsrs r0, r0, #24	@ 000158f8 000e
.org 0x158fa
	cmp r0, #16	@ 000158fa 1028
.org 0x158fc
	bne.n 0x15900	@ 000158fc 00d1
.org 0x158fe
	strb r3, [r1, #0]	@ 000158fe 0b70
.org 0x15900
	ldr r1, [pc, #120]	@ 00015900 1e49
.org 0x15902
	adds r0, r2, r1	@ 00015902 5018
.org 0x15904
	ldrb r1, [r0, #0]	@ 00015904 0178
.org 0x15906
	movs r0, #15	@ 00015906 0f20
.org 0x15908
	ands r0, r1	@ 00015908 0840
.org 0x1590a
	cmp r0, #2	@ 0001590a 0228
.org 0x1590c
	beq.n 0x15910	@ 0001590c 00d0
.org 0x1590e
	b.n 0x15a1c	@ 0001590e 85e0
.org 0x15910
	ldr r4, [pc, #96]	@ 00015910 184c
.org 0x15912
	adds r0, r2, r4	@ 00015912 1019
.org 0x15914
	ldrh r1, [r0, #0]	@ 00015914 0188
.org 0x15916
	lsrs r0, r1, #8	@ 00015916 080a
.org 0x15918
	cmp r0, #10	@ 00015918 0a28
.org 0x1591a
	bne.n 0x15984	@ 0001591a 33d1
.org 0x1591c
	movs r0, #255	@ 0001591c ff20
.org 0x1591e
	ands r0, r1	@ 0001591e 0840
.org 0x15920
	cmp r0, #0	@ 00015920 0028
.org 0x15922
	bne.n 0x15984	@ 00015922 2fd1
.org 0x15924
	ldr r0, [pc, #88]	@ 00015924 1648
.org 0x15926
	adds r2, r2, r0	@ 00015926 1218
.org 0x15928
	ldrb r1, [r2, #0]	@ 00015928 1178
.org 0x1592a
	movs r0, #1	@ 0001592a 0120
.org 0x1592c
	ands r0, r1	@ 0001592c 0840
.org 0x1592e
	cmp r0, #0	@ 0001592e 0028
.org 0x15930
	bne.n 0x15950	@ 00015930 0ed1
.org 0x15932
	movs r0, #1	@ 00015932 0120
.org 0x15934
	orrs r0, r1	@ 00015934 0843
.org 0x15936
	strb r0, [r2, #0]	@ 00015936 1070
.org 0x15938
	movs r0, #97	@ 00015938 6120
.org 0x1593a
	movs r1, #0	@ 0001593a 0021
.org 0x1593c
	bl 0x249c	@ 0001593c ecf7aefd
.org 0x15940
	movs r0, #99	@ 00015940 6320
.org 0x15942
	movs r1, #0	@ 00015942 0021
.org 0x15944
	bl 0x249c	@ 00015944 ecf7aafd
.org 0x15948
	movs r0, #101	@ 00015948 6520
.org 0x1594a
	movs r1, #0	@ 0001594a 0021
.org 0x1594c
	bl 0x249c	@ 0001594c ecf7a6fd
.org 0x15950
	movs r0, #97	@ 00015950 6120
.org 0x15952
	bl 0x25d8	@ 00015952 ecf741fe
.org 0x15956
	movs r0, #99	@ 00015956 6320
.org 0x15958
	bl 0x25d8	@ 00015958 ecf73efe
.org 0x1595c
	movs r0, #101	@ 0001595c 6520
.org 0x1595e
	bl 0x25d8	@ 0001595e ecf73bfe
.org 0x15962
	b.n 0x159ac	@ 00015962 23e0
.org 0x15964
	.byte 0xb0,0x0a,0x00,0x02	@ 00015964 data
.org 0x15968
	.byte 0x30,0xd0,0x02,0x00	@ 00015968 data
.org 0x1596c
	.byte 0x2a,0xd0,0x02,0x00	@ 0001596c data
.org 0x15970
	.byte 0x2c,0xd0,0x02,0x00	@ 00015970 data
.org 0x15974
	.byte 0xd4,0x07,0x00,0x00	@ 00015974 data
.org 0x15978
	.byte 0x34,0xd0,0x02,0x00	@ 00015978 data
.org 0x1597c
	.byte 0x10,0xc0,0x02,0x00	@ 0001597c data
.org 0x15980
	.byte 0x28,0xd0,0x02,0x00	@ 00015980 data
.org 0x15984
	ldr r0, [pc, #96]	@ 00015984 1848
.org 0x15986
	ldr r1, [pc, #100]	@ 00015986 1949
.org 0x15988
	adds r2, r0, r1	@ 00015988 4218
.org 0x1598a
	ldrb r1, [r2, #0]	@ 0001598a 1178
.org 0x1598c
	movs r0, #1	@ 0001598c 0120
.org 0x1598e
	ands r0, r1	@ 0001598e 0840
.org 0x15990
	cmp r0, #0	@ 00015990 0028
.org 0x15992
	beq.n 0x159ac	@ 00015992 0bd0
.org 0x15994
	movs r0, #1	@ 00015994 0120
.org 0x15996
	eors r0, r1	@ 00015996 4840
.org 0x15998
	strb r0, [r2, #0]	@ 00015998 1070
.org 0x1599a
	movs r0, #97	@ 0001599a 6120
.org 0x1599c
	bl 0x2624	@ 0001599c ecf742fe
.org 0x159a0
	movs r0, #99	@ 000159a0 6320
.org 0x159a2
	bl 0x2624	@ 000159a2 ecf73ffe
.org 0x159a6
	movs r0, #101	@ 000159a6 6520
.org 0x159a8
	bl 0x2624	@ 000159a8 ecf73cfe
.org 0x159ac
	ldr r2, [pc, #56]	@ 000159ac 0e4a
.org 0x159ae
	ldr r4, [pc, #64]	@ 000159ae 104c
.org 0x159b0
	adds r0, r2, r4	@ 000159b0 1019
.org 0x159b2
	ldrh r1, [r0, #0]	@ 000159b2 0188
.org 0x159b4
	lsrs r0, r1, #8	@ 000159b4 080a
.org 0x159b6
	cmp r0, #10	@ 000159b6 0a28
.org 0x159b8
	bne.n 0x159f4	@ 000159b8 1cd1
.org 0x159ba
	movs r0, #255	@ 000159ba ff20
.org 0x159bc
	ands r0, r1	@ 000159bc 0840
.org 0x159be
	cmp r0, #2	@ 000159be 0228
.org 0x159c0
	bne.n 0x159f4	@ 000159c0 18d1
.org 0x159c2
	ldr r0, [pc, #40]	@ 000159c2 0a48
.org 0x159c4
	adds r2, r2, r0	@ 000159c4 1218
.org 0x159c6
	ldrb r1, [r2, #0]	@ 000159c6 1178
.org 0x159c8
	movs r0, #16	@ 000159c8 1020
.org 0x159ca
	ands r0, r1	@ 000159ca 0840
.org 0x159cc
	cmp r0, #0	@ 000159cc 0028
.org 0x159ce
	bne.n 0x159de	@ 000159ce 06d1
.org 0x159d0
	movs r0, #16	@ 000159d0 1020
.org 0x159d2
	orrs r0, r1	@ 000159d2 0843
.org 0x159d4
	strb r0, [r2, #0]	@ 000159d4 1070
.org 0x159d6
	movs r0, #101	@ 000159d6 6520
.org 0x159d8
	movs r1, #0	@ 000159d8 0021
.org 0x159da
	bl 0x249c	@ 000159da ecf75ffd
.org 0x159de
	movs r0, #101	@ 000159de 6520
.org 0x159e0
	bl 0x25d8	@ 000159e0 ecf7fafd
.org 0x159e4
	b.n 0x15b18	@ 000159e4 98e0
.org 0x159e6
	.byte 0x00	@ 000159e6 data
.org 0x159e7
	.byte 0x00	@ 000159e7 data
.org 0x159e8
	.byte 0xb0,0x0a,0x00,0x02	@ 000159e8 data
.org 0x159ec
	.byte 0x28,0xd0,0x02,0x00	@ 000159ec data
.org 0x159f0
	.byte 0xd4,0x07,0x00,0x00	@ 000159f0 data
.org 0x159f4
	ldr r0, [pc, #28]	@ 000159f4 0748
.org 0x159f6
	ldr r1, [pc, #32]	@ 000159f6 0849
.org 0x159f8
	adds r2, r0, r1	@ 000159f8 4218
.org 0x159fa
	ldrb r1, [r2, #0]	@ 000159fa 1178
.org 0x159fc
	movs r0, #16	@ 000159fc 1020
.org 0x159fe
	ands r0, r1	@ 000159fe 0840
.org 0x15a00
	cmp r0, #0	@ 00015a00 0028
.org 0x15a02
	bne.n 0x15a06	@ 00015a02 00d1
.org 0x15a04
	b.n 0x15b18	@ 00015a04 88e0
.org 0x15a06
	movs r0, #16	@ 00015a06 1020
.org 0x15a08
	eors r0, r1	@ 00015a08 4840
.org 0x15a0a
	strb r0, [r2, #0]	@ 00015a0a 1070
.org 0x15a0c
	movs r0, #101	@ 00015a0c 6520
.org 0x15a0e
	bl 0x2624	@ 00015a0e ecf709fe
.org 0x15a12
	b.n 0x15b18	@ 00015a12 81e0
.org 0x15a14
	.byte 0xb0,0x0a,0x00,0x02	@ 00015a14 data
.org 0x15a18
	.byte 0x28,0xd0,0x02,0x00	@ 00015a18 data
.org 0x15a1c
	ldr r4, [pc, #96]	@ 00015a1c 184c
.org 0x15a1e
	adds r0, r2, r4	@ 00015a1e 1019
.org 0x15a20
	ldrh r1, [r0, #0]	@ 00015a20 0188
.org 0x15a22
	lsrs r0, r1, #8	@ 00015a22 080a
.org 0x15a24
	cmp r0, #10	@ 00015a24 0a28
.org 0x15a26
	bne.n 0x15a88	@ 00015a26 2fd1
.org 0x15a28
	movs r0, #255	@ 00015a28 ff20
.org 0x15a2a
	ands r0, r1	@ 00015a2a 0840
.org 0x15a2c
	cmp r0, #0	@ 00015a2c 0028
.org 0x15a2e
	bne.n 0x15a88	@ 00015a2e 2bd1
.org 0x15a30
	ldr r0, [pc, #80]	@ 00015a30 1448
.org 0x15a32
	adds r2, r2, r0	@ 00015a32 1218
.org 0x15a34
	ldrb r1, [r2, #0]	@ 00015a34 1178
.org 0x15a36
	movs r0, #1	@ 00015a36 0120
.org 0x15a38
	ands r0, r1	@ 00015a38 0840
.org 0x15a3a
	cmp r0, #0	@ 00015a3a 0028
.org 0x15a3c
	bne.n 0x15a64	@ 00015a3c 12d1
.org 0x15a3e
	movs r0, #1	@ 00015a3e 0120
.org 0x15a40
	orrs r0, r1	@ 00015a40 0843
.org 0x15a42
	strb r0, [r2, #0]	@ 00015a42 1070
.org 0x15a44
	movs r0, #96	@ 00015a44 6020
.org 0x15a46
	movs r1, #0	@ 00015a46 0021
.org 0x15a48
	bl 0x249c	@ 00015a48 ecf728fd
.org 0x15a4c
	movs r0, #97	@ 00015a4c 6120
.org 0x15a4e
	movs r1, #0	@ 00015a4e 0021
.org 0x15a50
	bl 0x249c	@ 00015a50 ecf724fd
.org 0x15a54
	movs r0, #98	@ 00015a54 6220
.org 0x15a56
	movs r1, #0	@ 00015a56 0021
.org 0x15a58
	bl 0x249c	@ 00015a58 ecf720fd
.org 0x15a5c
	movs r0, #100	@ 00015a5c 6420
.org 0x15a5e
	movs r1, #0	@ 00015a5e 0021
.org 0x15a60
	bl 0x249c	@ 00015a60 ecf71cfd
.org 0x15a64
	movs r0, #96	@ 00015a64 6020
.org 0x15a66
	bl 0x25d8	@ 00015a66 ecf7b7fd
.org 0x15a6a
	movs r0, #97	@ 00015a6a 6120
.org 0x15a6c
	bl 0x25d8	@ 00015a6c ecf7b4fd
.org 0x15a70
	movs r0, #98	@ 00015a70 6220
.org 0x15a72
	bl 0x25d8	@ 00015a72 ecf7b1fd
.org 0x15a76
	movs r0, #100	@ 00015a76 6420
.org 0x15a78
	bl 0x25d8	@ 00015a78 ecf7aefd
.org 0x15a7c
	b.n 0x15ab6	@ 00015a7c 1be0
.org 0x15a7e
	.byte 0x00	@ 00015a7e data
.org 0x15a7f
	.byte 0x00	@ 00015a7f data
.org 0x15a80
	.byte 0xd4,0x07,0x00,0x00	@ 00015a80 data
.org 0x15a84
	.byte 0x28,0xd0,0x02,0x00	@ 00015a84 data
.org 0x15a88
	ldr r0, [pc, #100]	@ 00015a88 1948
.org 0x15a8a
	ldr r1, [pc, #104]	@ 00015a8a 1a49
.org 0x15a8c
	adds r2, r0, r1	@ 00015a8c 4218
.org 0x15a8e
	ldrb r1, [r2, #0]	@ 00015a8e 1178
.org 0x15a90
	movs r0, #1	@ 00015a90 0120
.org 0x15a92
	ands r0, r1	@ 00015a92 0840
.org 0x15a94
	cmp r0, #0	@ 00015a94 0028
.org 0x15a96
	beq.n 0x15ab6	@ 00015a96 0ed0
.org 0x15a98
	movs r0, #1	@ 00015a98 0120
.org 0x15a9a
	eors r0, r1	@ 00015a9a 4840
.org 0x15a9c
	strb r0, [r2, #0]	@ 00015a9c 1070
.org 0x15a9e
	movs r0, #96	@ 00015a9e 6020
.org 0x15aa0
	bl 0x2624	@ 00015aa0 ecf7c0fd
.org 0x15aa4
	movs r0, #97	@ 00015aa4 6120
.org 0x15aa6
	bl 0x2624	@ 00015aa6 ecf7bdfd
.org 0x15aaa
	movs r0, #98	@ 00015aaa 6220
.org 0x15aac
	bl 0x2624	@ 00015aac ecf7bafd
.org 0x15ab0
	movs r0, #100	@ 00015ab0 6420
.org 0x15ab2
	bl 0x2624	@ 00015ab2 ecf7b7fd
.org 0x15ab6
	ldr r2, [pc, #56]	@ 00015ab6 0e4a
.org 0x15ab8
	ldr r4, [pc, #60]	@ 00015ab8 0f4c
.org 0x15aba
	adds r0, r2, r4	@ 00015aba 1019
.org 0x15abc
	ldrh r1, [r0, #0]	@ 00015abc 0188
.org 0x15abe
	lsrs r0, r1, #8	@ 00015abe 080a
.org 0x15ac0
	cmp r0, #10	@ 00015ac0 0a28
.org 0x15ac2
	bne.n 0x15afc	@ 00015ac2 1bd1
.org 0x15ac4
	movs r0, #255	@ 00015ac4 ff20
.org 0x15ac6
	ands r0, r1	@ 00015ac6 0840
.org 0x15ac8
	cmp r0, #2	@ 00015ac8 0228
.org 0x15aca
	bne.n 0x15afc	@ 00015aca 17d1
.org 0x15acc
	ldr r0, [pc, #36]	@ 00015acc 0948
.org 0x15ace
	adds r2, r2, r0	@ 00015ace 1218
.org 0x15ad0
	ldrb r1, [r2, #0]	@ 00015ad0 1178
.org 0x15ad2
	movs r0, #16	@ 00015ad2 1020
.org 0x15ad4
	ands r0, r1	@ 00015ad4 0840
.org 0x15ad6
	cmp r0, #0	@ 00015ad6 0028
.org 0x15ad8
	bne.n 0x15ae8	@ 00015ad8 06d1
.org 0x15ada
	movs r0, #16	@ 00015ada 1020
.org 0x15adc
	orrs r0, r1	@ 00015adc 0843
.org 0x15ade
	strb r0, [r2, #0]	@ 00015ade 1070
.org 0x15ae0
	movs r0, #100	@ 00015ae0 6420
.org 0x15ae2
	movs r1, #0	@ 00015ae2 0021
.org 0x15ae4
	bl 0x249c	@ 00015ae4 ecf7dafc
.org 0x15ae8
	movs r0, #100	@ 00015ae8 6420
.org 0x15aea
	bl 0x25d8	@ 00015aea ecf775fd
.org 0x15aee
	b.n 0x15b18	@ 00015aee 13e0
.org 0x15af0
	.byte 0xb0,0x0a,0x00,0x02	@ 00015af0 data
.org 0x15af4
	.byte 0x28,0xd0,0x02,0x00	@ 00015af4 data
.org 0x15af8
	.byte 0xd4,0x07,0x00,0x00	@ 00015af8 data
.org 0x15afc
	ldr r0, [pc, #116]	@ 00015afc 1d48
.org 0x15afe
	ldr r1, [pc, #120]	@ 00015afe 1e49
.org 0x15b00
	adds r2, r0, r1	@ 00015b00 4218
.org 0x15b02
	ldrb r1, [r2, #0]	@ 00015b02 1178
.org 0x15b04
	movs r0, #16	@ 00015b04 1020
.org 0x15b06
	ands r0, r1	@ 00015b06 0840
.org 0x15b08
	cmp r0, #0	@ 00015b08 0028
.org 0x15b0a
	beq.n 0x15b18	@ 00015b0a 05d0
.org 0x15b0c
	movs r0, #16	@ 00015b0c 1020
.org 0x15b0e
	eors r0, r1	@ 00015b0e 4840
.org 0x15b10
	strb r0, [r2, #0]	@ 00015b10 1070
.org 0x15b12
	movs r0, #100	@ 00015b12 6420
.org 0x15b14
	bl 0x2624	@ 00015b14 ecf786fd
.org 0x15b18
	ldr r2, [pc, #88]	@ 00015b18 164a
.org 0x15b1a
	ldr r4, [pc, #96]	@ 00015b1a 184c
.org 0x15b1c
	adds r0, r2, r4	@ 00015b1c 1019
.org 0x15b1e
	ldrh r1, [r0, #0]	@ 00015b1e 0188
.org 0x15b20
	lsrs r0, r1, #8	@ 00015b20 080a
.org 0x15b22
	cmp r0, #10	@ 00015b22 0a28
.org 0x15b24
	bne.n 0x15b80	@ 00015b24 2cd1
.org 0x15b26
	movs r0, #255	@ 00015b26 ff20
.org 0x15b28
	ands r0, r1	@ 00015b28 0840
.org 0x15b2a
	cmp r0, #1	@ 00015b2a 0128
.org 0x15b2c
	bne.n 0x15b80	@ 00015b2c 28d1
.org 0x15b2e
	ldr r0, [pc, #72]	@ 00015b2e 1248
.org 0x15b30
	adds r2, r2, r0	@ 00015b30 1218
.org 0x15b32
	ldrb r1, [r2, #0]	@ 00015b32 1178
.org 0x15b34
	movs r0, #2	@ 00015b34 0220
.org 0x15b36
	ands r0, r1	@ 00015b36 0840
.org 0x15b38
	cmp r0, #0	@ 00015b38 0028
.org 0x15b3a
	bne.n 0x15b52	@ 00015b3a 0ad1
.org 0x15b3c
	movs r0, #2	@ 00015b3c 0220
.org 0x15b3e
	orrs r0, r1	@ 00015b3e 0843
.org 0x15b40
	strb r0, [r2, #0]	@ 00015b40 1070
.org 0x15b42
	movs r0, #102	@ 00015b42 6620
.org 0x15b44
	movs r1, #0	@ 00015b44 0021
.org 0x15b46
	bl 0x249c	@ 00015b46 ecf7a9fc
.org 0x15b4a
	movs r0, #103	@ 00015b4a 6720
.org 0x15b4c
	movs r1, #0	@ 00015b4c 0021
.org 0x15b4e
	bl 0x249c	@ 00015b4e ecf7a5fc
.org 0x15b52
	movs r0, #102	@ 00015b52 6620
.org 0x15b54
	bl 0x25d8	@ 00015b54 ecf740fd
.org 0x15b58
	movs r0, #103	@ 00015b58 6720
.org 0x15b5a
	bl 0x25d8	@ 00015b5a ecf73dfd
.org 0x15b5e
	movs r0, #103	@ 00015b5e 6720
.org 0x15b60
	bl 0x25d8	@ 00015b60 ecf73afd
.org 0x15b64
	movs r0, #103	@ 00015b64 6720
.org 0x15b66
	bl 0x25d8	@ 00015b66 ecf737fd
.org 0x15b6a
	movs r0, #103	@ 00015b6a 6720
.org 0x15b6c
	bl 0x25d8	@ 00015b6c ecf734fd
.org 0x15b70
	b.n 0x15ba2	@ 00015b70 17e0
.org 0x15b72
	.byte 0x00	@ 00015b72 data
.org 0x15b73
	.byte 0x00	@ 00015b73 data
.org 0x15b74
	.byte 0xb0,0x0a,0x00,0x02	@ 00015b74 data
.org 0x15b78
	.byte 0x28,0xd0,0x02,0x00	@ 00015b78 data
.org 0x15b7c
	.byte 0xd6,0x07,0x00,0x00	@ 00015b7c data
.org 0x15b80
	ldr r0, [pc, #88]	@ 00015b80 1648
.org 0x15b82
	ldr r1, [pc, #92]	@ 00015b82 1749
.org 0x15b84
	adds r2, r0, r1	@ 00015b84 4218
.org 0x15b86
	ldrb r1, [r2, #0]	@ 00015b86 1178
.org 0x15b88
	movs r0, #2	@ 00015b88 0220
.org 0x15b8a
	ands r0, r1	@ 00015b8a 0840
.org 0x15b8c
	cmp r0, #0	@ 00015b8c 0028
.org 0x15b8e
	beq.n 0x15ba2	@ 00015b8e 08d0
.org 0x15b90
	movs r0, #2	@ 00015b90 0220
.org 0x15b92
	eors r0, r1	@ 00015b92 4840
.org 0x15b94
	strb r0, [r2, #0]	@ 00015b94 1070
.org 0x15b96
	movs r0, #102	@ 00015b96 6620
.org 0x15b98
	bl 0x2624	@ 00015b98 ecf744fd
.org 0x15b9c
	movs r0, #103	@ 00015b9c 6720
.org 0x15b9e
	bl 0x2624	@ 00015b9e ecf741fd
.org 0x15ba2
	ldr r2, [pc, #56]	@ 00015ba2 0e4a
.org 0x15ba4
	ldr r4, [pc, #60]	@ 00015ba4 0f4c
.org 0x15ba6
	adds r0, r2, r4	@ 00015ba6 1019
.org 0x15ba8
	ldrh r1, [r0, #0]	@ 00015ba8 0188
.org 0x15baa
	lsrs r0, r1, #8	@ 00015baa 080a
.org 0x15bac
	cmp r0, #10	@ 00015bac 0a28
.org 0x15bae
	bne.n 0x15be8	@ 00015bae 1bd1
.org 0x15bb0
	movs r0, #255	@ 00015bb0 ff20
.org 0x15bb2
	ands r0, r1	@ 00015bb2 0840
.org 0x15bb4
	cmp r0, #3	@ 00015bb4 0328
.org 0x15bb6
	bne.n 0x15be8	@ 00015bb6 17d1
.org 0x15bb8
	ldr r0, [pc, #36]	@ 00015bb8 0948
.org 0x15bba
	adds r2, r2, r0	@ 00015bba 1218
.org 0x15bbc
	ldrb r1, [r2, #0]	@ 00015bbc 1178
.org 0x15bbe
	movs r0, #4	@ 00015bbe 0420
.org 0x15bc0
	ands r0, r1	@ 00015bc0 0840
.org 0x15bc2
	cmp r0, #0	@ 00015bc2 0028
.org 0x15bc4
	bne.n 0x15bd4	@ 00015bc4 06d1
.org 0x15bc6
	movs r0, #4	@ 00015bc6 0420
.org 0x15bc8
	orrs r0, r1	@ 00015bc8 0843
.org 0x15bca
	strb r0, [r2, #0]	@ 00015bca 1070
.org 0x15bcc
	movs r0, #111	@ 00015bcc 6f20
.org 0x15bce
	movs r1, #0	@ 00015bce 0021
.org 0x15bd0
	bl 0x249c	@ 00015bd0 ecf764fc
.org 0x15bd4
	movs r0, #111	@ 00015bd4 6f20
.org 0x15bd6
	bl 0x25d8	@ 00015bd6 ecf7fffc
.org 0x15bda
	b.n 0x15c04	@ 00015bda 13e0
.org 0x15bdc
	.byte 0xb0,0x0a,0x00,0x02	@ 00015bdc data
.org 0x15be0
	.byte 0x28,0xd0,0x02,0x00	@ 00015be0 data
.org 0x15be4
	.byte 0xd6,0x07,0x00,0x00	@ 00015be4 data
.org 0x15be8
	ldr r0, [pc, #116]	@ 00015be8 1d48
.org 0x15bea
	ldr r1, [pc, #120]	@ 00015bea 1e49
.org 0x15bec
	adds r2, r0, r1	@ 00015bec 4218
.org 0x15bee
	ldrb r1, [r2, #0]	@ 00015bee 1178
.org 0x15bf0
	movs r0, #4	@ 00015bf0 0420
.org 0x15bf2
	ands r0, r1	@ 00015bf2 0840
.org 0x15bf4
	cmp r0, #0	@ 00015bf4 0028
.org 0x15bf6
	beq.n 0x15c04	@ 00015bf6 05d0
.org 0x15bf8
	movs r0, #4	@ 00015bf8 0420
.org 0x15bfa
	eors r0, r1	@ 00015bfa 4840
.org 0x15bfc
	strb r0, [r2, #0]	@ 00015bfc 1070
.org 0x15bfe
	movs r0, #111	@ 00015bfe 6f20
.org 0x15c00
	bl 0x2624	@ 00015c00 ecf710fd
.org 0x15c04
	ldr r2, [pc, #88]	@ 00015c04 164a
.org 0x15c06
	ldr r4, [pc, #96]	@ 00015c06 184c
.org 0x15c08
	adds r0, r2, r4	@ 00015c08 1019
.org 0x15c0a
	ldrh r1, [r0, #0]	@ 00015c0a 0188
.org 0x15c0c
	lsrs r0, r1, #8	@ 00015c0c 080a
.org 0x15c0e
	cmp r0, #10	@ 00015c0e 0a28
.org 0x15c10
	bne.n 0x15c6c	@ 00015c10 2cd1
.org 0x15c12
	movs r0, #255	@ 00015c12 ff20
.org 0x15c14
	ands r0, r1	@ 00015c14 0840
.org 0x15c16
	cmp r0, #4	@ 00015c16 0428
.org 0x15c18
	bne.n 0x15c6c	@ 00015c18 28d1
.org 0x15c1a
	ldr r0, [pc, #72]	@ 00015c1a 1248
.org 0x15c1c
	adds r2, r2, r0	@ 00015c1c 1218
.org 0x15c1e
	ldrb r1, [r2, #0]	@ 00015c1e 1178
.org 0x15c20
	movs r0, #8	@ 00015c20 0820
.org 0x15c22
	ands r0, r1	@ 00015c22 0840
.org 0x15c24
	cmp r0, #0	@ 00015c24 0028
.org 0x15c26
	bne.n 0x15c3e	@ 00015c26 0ad1
.org 0x15c28
	movs r0, #8	@ 00015c28 0820
.org 0x15c2a
	orrs r0, r1	@ 00015c2a 0843
.org 0x15c2c
	strb r0, [r2, #0]	@ 00015c2c 1070
.org 0x15c2e
	movs r0, #103	@ 00015c2e 6720
.org 0x15c30
	movs r1, #0	@ 00015c30 0021
.org 0x15c32
	bl 0x249c	@ 00015c32 ecf733fc
.org 0x15c36
	movs r0, #112	@ 00015c36 7020
.org 0x15c38
	movs r1, #0	@ 00015c38 0021
.org 0x15c3a
	bl 0x249c	@ 00015c3a ecf72ffc
.org 0x15c3e
	movs r0, #103	@ 00015c3e 6720
.org 0x15c40
	bl 0x25d8	@ 00015c40 ecf7cafc
.org 0x15c44
	movs r0, #103	@ 00015c44 6720
.org 0x15c46
	bl 0x25d8	@ 00015c46 ecf7c7fc
.org 0x15c4a
	movs r0, #103	@ 00015c4a 6720
.org 0x15c4c
	bl 0x25d8	@ 00015c4c ecf7c4fc
.org 0x15c50
	movs r0, #103	@ 00015c50 6720
.org 0x15c52
	bl 0x25d8	@ 00015c52 ecf7c1fc
.org 0x15c56
	movs r0, #112	@ 00015c56 7020
.org 0x15c58
	bl 0x25d8	@ 00015c58 ecf7befc
.org 0x15c5c
	b.n 0x15c8e	@ 00015c5c 17e0
.org 0x15c5e
	.byte 0x00	@ 00015c5e data
.org 0x15c5f
	.byte 0x00	@ 00015c5f data
.org 0x15c60
	.byte 0xb0,0x0a,0x00,0x02	@ 00015c60 data
.org 0x15c64
	.byte 0x28,0xd0,0x02,0x00	@ 00015c64 data
.org 0x15c68
	.byte 0xd4,0x07,0x00,0x00	@ 00015c68 data
.org 0x15c6c
	ldr r0, [pc, #148]	@ 00015c6c 2548
.org 0x15c6e
	ldr r1, [pc, #152]	@ 00015c6e 2649
.org 0x15c70
	adds r2, r0, r1	@ 00015c70 4218
.org 0x15c72
	ldrb r1, [r2, #0]	@ 00015c72 1178
.org 0x15c74
	movs r0, #8	@ 00015c74 0820
.org 0x15c76
	ands r0, r1	@ 00015c76 0840
.org 0x15c78
	cmp r0, #0	@ 00015c78 0028
.org 0x15c7a
	beq.n 0x15c8e	@ 00015c7a 08d0
.org 0x15c7c
	movs r0, #8	@ 00015c7c 0820
.org 0x15c7e
	eors r0, r1	@ 00015c7e 4840
.org 0x15c80
	strb r0, [r2, #0]	@ 00015c80 1070
.org 0x15c82
	movs r0, #103	@ 00015c82 6720
.org 0x15c84
	bl 0x2624	@ 00015c84 ecf7cefc
.org 0x15c88
	movs r0, #112	@ 00015c88 7020
.org 0x15c8a
	bl 0x2624	@ 00015c8a ecf7cbfc
.org 0x15c8e
	ldr r0, [pc, #116]	@ 00015c8e 1d48
.org 0x15c90
	ldr r2, [pc, #120]	@ 00015c90 1e4a
.org 0x15c92
	adds r1, r0, r2	@ 00015c92 8118
.org 0x15c94
	ldrh r3, [r1, #0]	@ 00015c94 0b88
.org 0x15c96
	lsrs r1, r3, #8	@ 00015c96 190a
.org 0x15c98
	adds r2, r0, #0	@ 00015c98 021c
.org 0x15c9a
	cmp r1, #10	@ 00015c9a 0a29
.org 0x15c9c
	beq.n 0x15ca0	@ 00015c9c 00d0
.org 0x15c9e
	b.n 0x15eec	@ 00015c9e 25e1
.org 0x15ca0
	movs r5, #255	@ 00015ca0 ff25
.org 0x15ca2
	adds r4, r5, #0	@ 00015ca2 2c1c
.org 0x15ca4
	ands r4, r3	@ 00015ca4 1c40
.org 0x15ca6
	cmp r4, #2	@ 00015ca6 022c
.org 0x15ca8
	beq.n 0x15cac	@ 00015ca8 00d0
.org 0x15caa
	b.n 0x15eec	@ 00015caa 1fe1
.org 0x15cac
	ldr r1, [pc, #96]	@ 00015cac 1849
.org 0x15cae
	adds r0, r2, r1	@ 00015cae 5018
.org 0x15cb0
	ldrh r1, [r0, #0]	@ 00015cb0 0188
.org 0x15cb2
	lsrs r0, r1, #8	@ 00015cb2 080a
.org 0x15cb4
	cmp r0, #10	@ 00015cb4 0a28
.org 0x15cb6
	beq.n 0x15cba	@ 00015cb6 00d0
.org 0x15cb8
	b.n 0x15eec	@ 00015cb8 18e1
.org 0x15cba
	adds r0, r5, #0	@ 00015cba 281c
.org 0x15cbc
	ands r0, r1	@ 00015cbc 0840
.org 0x15cbe
	cmp r0, #3	@ 00015cbe 0328
.org 0x15cc0
	beq.n 0x15cc4	@ 00015cc0 00d0
.org 0x15cc2
	b.n 0x15eec	@ 00015cc2 13e1
.org 0x15cc4
	ldr r1, [pc, #76]	@ 00015cc4 1349
.org 0x15cc6
	adds r0, r2, r1	@ 00015cc6 5018
.org 0x15cc8
	ldrb r0, [r0, #0]	@ 00015cc8 0078
.org 0x15cca
	adds r1, r0, #0	@ 00015cca 011c
.org 0x15ccc
	cmp r1, #0	@ 00015ccc 0029
.org 0x15cce
	bne.n 0x15d1c	@ 00015cce 25d1
.org 0x15cd0
	ldr r4, [pc, #68]	@ 00015cd0 114c
.org 0x15cd2
	adds r2, r2, r4	@ 00015cd2 1219
.org 0x15cd4
	ldrb r1, [r2, #0]	@ 00015cd4 1178
.org 0x15cd6
	movs r0, #1	@ 00015cd6 0120
.org 0x15cd8
	ands r0, r1	@ 00015cd8 0840
.org 0x15cda
	cmp r0, #0	@ 00015cda 0028
.org 0x15cdc
	bne.n 0x15cf4	@ 00015cdc 0ad1
.org 0x15cde
	movs r0, #1	@ 00015cde 0120
.org 0x15ce0
	orrs r0, r1	@ 00015ce0 0843
.org 0x15ce2
	strb r0, [r2, #0]	@ 00015ce2 1070
.org 0x15ce4
	movs r0, #104	@ 00015ce4 6820
.org 0x15ce6
	movs r1, #0	@ 00015ce6 0021
.org 0x15ce8
	bl 0x249c	@ 00015ce8 ecf7d8fb
.org 0x15cec
	movs r0, #107	@ 00015cec 6b20
.org 0x15cee
	movs r1, #0	@ 00015cee 0021
.org 0x15cf0
	bl 0x249c	@ 00015cf0 ecf7d4fb
.org 0x15cf4
	movs r0, #104	@ 00015cf4 6820
.org 0x15cf6
	bl 0x25d8	@ 00015cf6 ecf76ffc
.org 0x15cfa
	movs r0, #107	@ 00015cfa 6b20
.org 0x15cfc
	bl 0x25d8	@ 00015cfc ecf76cfc
.org 0x15d00
	b.n 0x15f7c	@ 00015d00 3ce1
.org 0x15d02
	.byte 0x00	@ 00015d02 data
.org 0x15d03
	.byte 0x00	@ 00015d03 data
.org 0x15d04
	.byte 0xb0,0x0a,0x00,0x02	@ 00015d04 data
.org 0x15d08
	.byte 0x28,0xd0,0x02,0x00	@ 00015d08 data
.org 0x15d0c
	.byte 0xd4,0x07,0x00,0x00	@ 00015d0c data
.org 0x15d10
	.byte 0xd6,0x07,0x00,0x00	@ 00015d10 data
.org 0x15d14
	.byte 0x24,0xd0,0x02,0x00	@ 00015d14 data
.org 0x15d18
	.byte 0x29,0xd0,0x02,0x00	@ 00015d18 data
.org 0x15d1c
	cmp r1, #16	@ 00015d1c 1029
.org 0x15d1e
	bne.n 0x15d6e	@ 00015d1e 26d1
.org 0x15d20
	ldr r0, [pc, #28]	@ 00015d20 0748
.org 0x15d22
	adds r5, r2, r0	@ 00015d22 1518
.org 0x15d24
	ldrb r1, [r5, #0]	@ 00015d24 2978
.org 0x15d26
	movs r0, #1	@ 00015d26 0120
.org 0x15d28
	ands r0, r1	@ 00015d28 0840
.org 0x15d2a
	cmp r0, #0	@ 00015d2a 0028
.org 0x15d2c
	beq.n 0x15d44	@ 00015d2c 0ad0
.org 0x15d2e
	movs r0, #104	@ 00015d2e 6820
.org 0x15d30
	bl 0x2624	@ 00015d30 ecf778fc
.org 0x15d34
	movs r0, #107	@ 00015d34 6b20
.org 0x15d36
	bl 0x2624	@ 00015d36 ecf775fc
.org 0x15d3a
	ldrb r0, [r5, #0]	@ 00015d3a 2878
.org 0x15d3c
	movs r1, #1	@ 00015d3c 0121
.org 0x15d3e
	b.n 0x15ee0	@ 00015d3e cfe0
.org 0x15d40
	.byte 0x29,0xd0,0x02,0x00	@ 00015d40 data
.org 0x15d44
	ands r4, r1	@ 00015d44 0c40
.org 0x15d46
	cmp r4, #0	@ 00015d46 002c
.org 0x15d48
	bne.n 0x15d60	@ 00015d48 0ad1
.org 0x15d4a
	movs r0, #2	@ 00015d4a 0220
.org 0x15d4c
	orrs r0, r1	@ 00015d4c 0843
.org 0x15d4e
	strb r0, [r5, #0]	@ 00015d4e 2870
.org 0x15d50
	movs r0, #105	@ 00015d50 6920
.org 0x15d52
	movs r1, #0	@ 00015d52 0021
.org 0x15d54
	bl 0x249c	@ 00015d54 ecf7a2fb
.org 0x15d58
	movs r0, #108	@ 00015d58 6c20
.org 0x15d5a
	movs r1, #0	@ 00015d5a 0021
.org 0x15d5c
	bl 0x249c	@ 00015d5c ecf79efb
.org 0x15d60
	movs r0, #105	@ 00015d60 6920
.org 0x15d62
	bl 0x25d8	@ 00015d62 ecf739fc
.org 0x15d66
	movs r0, #108	@ 00015d66 6c20
.org 0x15d68
	bl 0x25d8	@ 00015d68 ecf736fc
.org 0x15d6c
	b.n 0x15f7c	@ 00015d6c 06e1
.org 0x15d6e
	subs r0, #32	@ 00015d6e 2038
.org 0x15d70
	lsls r0, r0, #24	@ 00015d70 0006
.org 0x15d72
	lsrs r0, r0, #24	@ 00015d72 000e
.org 0x15d74
	cmp r0, #15	@ 00015d74 0f28
.org 0x15d76
	bhi.n 0x15dbc	@ 00015d76 21d8
.org 0x15d78
	ldr r1, [pc, #24]	@ 00015d78 0649
.org 0x15d7a
	adds r5, r2, r1	@ 00015d7a 5518
.org 0x15d7c
	ldrb r1, [r5, #0]	@ 00015d7c 2978
.org 0x15d7e
	ands r4, r1	@ 00015d7e 0c40
.org 0x15d80
	cmp r4, #0	@ 00015d80 002c
.org 0x15d82
	beq.n 0x15d98	@ 00015d82 09d0
.org 0x15d84
	movs r0, #108	@ 00015d84 6c20
.org 0x15d86
	bl 0x2624	@ 00015d86 ecf74dfc
.org 0x15d8a
	ldrb r0, [r5, #0]	@ 00015d8a 2878
.org 0x15d8c
	movs r1, #2	@ 00015d8c 0221
.org 0x15d8e
	eors r0, r1	@ 00015d8e 4840
.org 0x15d90
	strb r0, [r5, #0]	@ 00015d90 2870
.org 0x15d92
	b.n 0x15db4	@ 00015d92 0fe0
.org 0x15d94
	.byte 0x29,0xd0,0x02,0x00	@ 00015d94 data
.org 0x15d98
	movs r0, #4	@ 00015d98 0420
.org 0x15d9a
	ands r0, r1	@ 00015d9a 0840
.org 0x15d9c
	cmp r0, #0	@ 00015d9c 0028
.org 0x15d9e
	bne.n 0x15dae	@ 00015d9e 06d1
.org 0x15da0
	movs r0, #4	@ 00015da0 0420
.org 0x15da2
	orrs r0, r1	@ 00015da2 0843
.org 0x15da4
	strb r0, [r5, #0]	@ 00015da4 2870
.org 0x15da6
	movs r0, #109	@ 00015da6 6d20
.org 0x15da8
	movs r1, #0	@ 00015da8 0021
.org 0x15daa
	bl 0x249c	@ 00015daa ecf777fb
.org 0x15dae
	movs r0, #109	@ 00015dae 6d20
.org 0x15db0
	bl 0x25d8	@ 00015db0 ecf712fc
.org 0x15db4
	movs r0, #105	@ 00015db4 6920
.org 0x15db6
	bl 0x25d8	@ 00015db6 ecf70ffc
.org 0x15dba
	b.n 0x15f7c	@ 00015dba dfe0
.org 0x15dbc
	cmp r1, #48	@ 00015dbc 3029
.org 0x15dbe
	bne.n 0x15e54	@ 00015dbe 49d1
.org 0x15dc0
	ldr r4, [pc, #32]	@ 00015dc0 084c
.org 0x15dc2
	adds r6, r2, r4	@ 00015dc2 1619
.org 0x15dc4
	ldrb r1, [r6, #0]	@ 00015dc4 3178
.org 0x15dc6
	movs r0, #4	@ 00015dc6 0420
.org 0x15dc8
	ands r0, r1	@ 00015dc8 0840
.org 0x15dca
	cmp r0, #0	@ 00015dca 0028
.org 0x15dcc
	beq.n 0x15de8	@ 00015dcc 0cd0
.org 0x15dce
	movs r0, #105	@ 00015dce 6920
.org 0x15dd0
	bl 0x2624	@ 00015dd0 ecf728fc
.org 0x15dd4
	movs r0, #109	@ 00015dd4 6d20
.org 0x15dd6
	bl 0x2624	@ 00015dd6 ecf725fc
.org 0x15dda
	ldrb r0, [r6, #0]	@ 00015dda 3078
.org 0x15ddc
	movs r1, #4	@ 00015ddc 0421
.org 0x15dde
	eors r0, r1	@ 00015dde 4840
.org 0x15de0
	strb r0, [r6, #0]	@ 00015de0 3070
.org 0x15de2
	b.n 0x15f7c	@ 00015de2 cbe0
.org 0x15de4
	.byte 0x29,0xd0,0x02,0x00	@ 00015de4 data
.org 0x15de8
	movs r0, #24	@ 00015de8 1820
.org 0x15dea
	ands r0, r1	@ 00015dea 0840
.org 0x15dec
	cmp r0, #0	@ 00015dec 0028
.org 0x15dee
	bne.n 0x15e06	@ 00015dee 0ad1
.org 0x15df0
	movs r0, #8	@ 00015df0 0820
.org 0x15df2
	orrs r0, r1	@ 00015df2 0843
.org 0x15df4
	strb r0, [r6, #0]	@ 00015df4 3070
.org 0x15df6
	movs r0, #106	@ 00015df6 6a20
.org 0x15df8
	movs r1, #0	@ 00015df8 0021
.org 0x15dfa
	bl 0x249c	@ 00015dfa ecf74ffb
.org 0x15dfe
	movs r0, #110	@ 00015dfe 6e20
.org 0x15e00
	movs r1, #0	@ 00015e00 0021
.org 0x15e02
	bl 0x249c	@ 00015e02 ecf74bfb
.org 0x15e06
	ldrb r1, [r6, #0]	@ 00015e06 3178
.org 0x15e08
	movs r0, #16	@ 00015e08 1020
.org 0x15e0a
	ands r0, r1	@ 00015e0a 0840
.org 0x15e0c
	cmp r0, #0	@ 00015e0c 0028
.org 0x15e0e
	beq.n 0x15e12	@ 00015e0e 00d0
.org 0x15e10
	b.n 0x15f7c	@ 00015e10 b4e0
.org 0x15e12
	movs r0, #106	@ 00015e12 6a20
.org 0x15e14
	bl 0x25d8	@ 00015e14 ecf7e0fb
.org 0x15e18
	lsls r0, r0, #24	@ 00015e18 0006
.org 0x15e1a
	lsrs r5, r0, #24	@ 00015e1a 050e
.org 0x15e1c
	movs r0, #110	@ 00015e1c 6e20
.org 0x15e1e
	bl 0x25d8	@ 00015e1e ecf7dbfb
.org 0x15e22
	lsls r0, r0, #24	@ 00015e22 0006
.org 0x15e24
	lsrs r4, r0, #24	@ 00015e24 040e
.org 0x15e26
	cmp r5, #3	@ 00015e26 032d
.org 0x15e28
	bne.n 0x15e30	@ 00015e28 02d1
.org 0x15e2a
	movs r0, #106	@ 00015e2a 6a20
.org 0x15e2c
	bl 0x2624	@ 00015e2c ecf7fafb
.org 0x15e30
	cmp r4, #3	@ 00015e30 032c
.org 0x15e32
	bne.n 0x15e3a	@ 00015e32 02d1
.org 0x15e34
	movs r0, #110	@ 00015e34 6e20
.org 0x15e36
	bl 0x2624	@ 00015e36 ecf7f5fb
.org 0x15e3a
	cmp r5, #3	@ 00015e3a 032d
.org 0x15e3c
	beq.n 0x15e40	@ 00015e3c 00d0
.org 0x15e3e
	b.n 0x15f7c	@ 00015e3e 9de0
.org 0x15e40
	cmp r4, #3	@ 00015e40 032c
.org 0x15e42
	beq.n 0x15e46	@ 00015e42 00d0
.org 0x15e44
	b.n 0x15f7c	@ 00015e44 9ae0
.org 0x15e46
	ldrb r0, [r6, #0]	@ 00015e46 3078
.org 0x15e48
	movs r1, #8	@ 00015e48 0821
.org 0x15e4a
	eors r0, r1	@ 00015e4a 4840
.org 0x15e4c
	movs r1, #16	@ 00015e4c 1021
.org 0x15e4e
	orrs r0, r1	@ 00015e4e 0843
.org 0x15e50
	strb r0, [r6, #0]	@ 00015e50 3070
.org 0x15e52
	b.n 0x15f7c	@ 00015e52 93e0
.org 0x15e54
	ldr r0, [pc, #144]	@ 00015e54 2448
.org 0x15e56
	adds r5, r2, r0	@ 00015e56 1518
.org 0x15e58
	ldrb r1, [r5, #0]	@ 00015e58 2978
.org 0x15e5a
	cmp r1, #0	@ 00015e5a 0029
.org 0x15e5c
	bne.n 0x15e60	@ 00015e5c 00d1
.org 0x15e5e
	b.n 0x15f7c	@ 00015e5e 8de0
.org 0x15e60
	movs r0, #1	@ 00015e60 0120
.org 0x15e62
	ands r0, r1	@ 00015e62 0840
.org 0x15e64
	cmp r0, #0	@ 00015e64 0028
.org 0x15e66
	beq.n 0x15e7c	@ 00015e66 09d0
.org 0x15e68
	movs r0, #104	@ 00015e68 6820
.org 0x15e6a
	bl 0x2624	@ 00015e6a ecf7dbfb
.org 0x15e6e
	movs r0, #107	@ 00015e6e 6b20
.org 0x15e70
	bl 0x2624	@ 00015e70 ecf7d8fb
.org 0x15e74
	ldrb r0, [r5, #0]	@ 00015e74 2878
.org 0x15e76
	movs r1, #1	@ 00015e76 0121
.org 0x15e78
	eors r0, r1	@ 00015e78 4840
.org 0x15e7a
	strb r0, [r5, #0]	@ 00015e7a 2870
.org 0x15e7c
	ldrb r0, [r5, #0]	@ 00015e7c 2878
.org 0x15e7e
	ands r4, r0	@ 00015e7e 0440
.org 0x15e80
	cmp r4, #0	@ 00015e80 002c
.org 0x15e82
	beq.n 0x15e98	@ 00015e82 09d0
.org 0x15e84
	movs r0, #105	@ 00015e84 6920
.org 0x15e86
	bl 0x2624	@ 00015e86 ecf7cdfb
.org 0x15e8a
	movs r0, #108	@ 00015e8a 6c20
.org 0x15e8c
	bl 0x2624	@ 00015e8c ecf7cafb
.org 0x15e90
	ldrb r0, [r5, #0]	@ 00015e90 2878
.org 0x15e92
	movs r1, #2	@ 00015e92 0221
.org 0x15e94
	eors r0, r1	@ 00015e94 4840
.org 0x15e96
	strb r0, [r5, #0]	@ 00015e96 2870
.org 0x15e98
	ldrb r1, [r5, #0]	@ 00015e98 2978
.org 0x15e9a
	movs r0, #4	@ 00015e9a 0420
.org 0x15e9c
	ands r0, r1	@ 00015e9c 0840
.org 0x15e9e
	cmp r0, #0	@ 00015e9e 0028
.org 0x15ea0
	beq.n 0x15eb6	@ 00015ea0 09d0
.org 0x15ea2
	movs r0, #105	@ 00015ea2 6920
.org 0x15ea4
	bl 0x2624	@ 00015ea4 ecf7befb
.org 0x15ea8
	movs r0, #109	@ 00015ea8 6d20
.org 0x15eaa
	bl 0x2624	@ 00015eaa ecf7bbfb
.org 0x15eae
	ldrb r0, [r5, #0]	@ 00015eae 2878
.org 0x15eb0
	movs r1, #4	@ 00015eb0 0421
.org 0x15eb2
	eors r0, r1	@ 00015eb2 4840
.org 0x15eb4
	strb r0, [r5, #0]	@ 00015eb4 2870
.org 0x15eb6
	ldrb r1, [r5, #0]	@ 00015eb6 2978
.org 0x15eb8
	movs r0, #8	@ 00015eb8 0820
.org 0x15eba
	ands r0, r1	@ 00015eba 0840
.org 0x15ebc
	cmp r0, #0	@ 00015ebc 0028
.org 0x15ebe
	beq.n 0x15ed4	@ 00015ebe 09d0
.org 0x15ec0
	movs r0, #106	@ 00015ec0 6a20
.org 0x15ec2
	bl 0x2624	@ 00015ec2 ecf7affb
.org 0x15ec6
	movs r0, #110	@ 00015ec6 6e20
.org 0x15ec8
	bl 0x2624	@ 00015ec8 ecf7acfb
.org 0x15ecc
	ldrb r0, [r5, #0]	@ 00015ecc 2878
.org 0x15ece
	movs r1, #8	@ 00015ece 0821
.org 0x15ed0
	eors r0, r1	@ 00015ed0 4840
.org 0x15ed2
	strb r0, [r5, #0]	@ 00015ed2 2870
.org 0x15ed4
	ldrb r1, [r5, #0]	@ 00015ed4 2978
.org 0x15ed6
	movs r0, #16	@ 00015ed6 1020
.org 0x15ed8
	ands r0, r1	@ 00015ed8 0840
.org 0x15eda
	cmp r0, #0	@ 00015eda 0028
.org 0x15edc
	beq.n 0x15f7c	@ 00015edc 4ed0
.org 0x15ede
	movs r0, #16	@ 00015ede 1020
.org 0x15ee0
	eors r0, r1	@ 00015ee0 4840
