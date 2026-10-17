@ FUN_0800f974  entry 0x0800f974  size 746
.thumb
.org 0xf974
FUN_0800f974:
	push {lr}	@ 0000f974 00b5
.org 0xf976
	ldr r2, [pc, #108]	@ 0000f976 1b4a
.org 0xf978
	ldr r0, [pc, #108]	@ 0000f978 1b48
.org 0xf97a
	adds r1, r2, r0	@ 0000f97a 1118
.org 0xf97c
	ldr r0, [r1, #0]	@ 0000f97c 0868
.org 0xf97e
	adds r0, #1	@ 0000f97e 0130
.org 0xf980
	str r0, [r1, #0]	@ 0000f980 0860
.org 0xf982
	ldr r1, [pc, #104]	@ 0000f982 1a49
.org 0xf984
	adds r0, r2, r1	@ 0000f984 5018
.org 0xf986
	ldrb r1, [r0, #0]	@ 0000f986 0178
.org 0xf988
	movs r0, #15	@ 0000f988 0f20
.org 0xf98a
	ands r0, r1	@ 0000f98a 0840
.org 0xf98c
	cmp r0, #3	@ 0000f98c 0328
.org 0xf98e
	bne.n 0xfa2c	@ 0000f98e 4dd1
.org 0xf990
	ldr r1, [pc, #92]	@ 0000f990 1749
.org 0xf992
	adds r0, r2, r1	@ 0000f992 5018
.org 0xf994
	ldrh r1, [r0, #0]	@ 0000f994 0188
.org 0xf996
	lsrs r0, r1, #8	@ 0000f996 080a
.org 0xf998
	cmp r0, #5	@ 0000f998 0528
.org 0xf99a
	bne.n 0xf9f8	@ 0000f99a 2dd1
.org 0xf99c
	movs r0, #255	@ 0000f99c ff20
.org 0xf99e
	ands r0, r1	@ 0000f99e 0840
.org 0xf9a0
	cmp r0, #0	@ 0000f9a0 0028
.org 0xf9a2
	bne.n 0xf9f8	@ 0000f9a2 29d1
.org 0xf9a4
	ldr r0, [pc, #76]	@ 0000f9a4 1348
.org 0xf9a6
	adds r1, r2, r0	@ 0000f9a6 1118
.org 0xf9a8
	ldrb r2, [r1, #0]	@ 0000f9a8 0a78
.org 0xf9aa
	movs r0, #1	@ 0000f9aa 0120
.org 0xf9ac
	ands r0, r2	@ 0000f9ac 1040
.org 0xf9ae
	cmp r0, #0	@ 0000f9ae 0028
.org 0xf9b0
	bne.n 0xf9d0	@ 0000f9b0 0ed1
.org 0xf9b2
	movs r0, #1	@ 0000f9b2 0120
.org 0xf9b4
	orrs r0, r2	@ 0000f9b4 1043
.org 0xf9b6
	strb r0, [r1, #0]	@ 0000f9b6 0870
.org 0xf9b8
	movs r0, #52	@ 0000f9b8 3420
.org 0xf9ba
	movs r1, #0	@ 0000f9ba 0021
.org 0xf9bc
	bl 0x249c	@ 0000f9bc f2f76efd
.org 0xf9c0
	movs r0, #53	@ 0000f9c0 3520
.org 0xf9c2
	movs r1, #0	@ 0000f9c2 0021
.org 0xf9c4
	bl 0x249c	@ 0000f9c4 f2f76afd
.org 0xf9c8
	movs r0, #174	@ 0000f9c8 ae20
.org 0xf9ca
	movs r1, #0	@ 0000f9ca 0021
.org 0xf9cc
	bl 0x249c	@ 0000f9cc f2f766fd
.org 0xf9d0
	movs r0, #52	@ 0000f9d0 3420
.org 0xf9d2
	bl 0x25d8	@ 0000f9d2 f2f701fe
.org 0xf9d6
	movs r0, #53	@ 0000f9d6 3520
.org 0xf9d8
	bl 0x25d8	@ 0000f9d8 f2f7fefd
.org 0xf9dc
	movs r0, #174	@ 0000f9dc ae20
.org 0xf9de
	bl 0x25d8	@ 0000f9de f2f7fbfd
.org 0xf9e2
	b.n 0xfab0	@ 0000f9e2 65e0
.org 0xf9e4
	.byte 0xb0,0x0a,0x00,0x02	@ 0000f9e4 data
.org 0xf9e8
	.byte 0x30,0xd0,0x02,0x00	@ 0000f9e8 data
.org 0xf9ec
	.byte 0x10,0xc0,0x02,0x00	@ 0000f9ec data
.org 0xf9f0
	.byte 0xd4,0x07,0x00,0x00	@ 0000f9f0 data
.org 0xf9f4
	.byte 0x28,0xd0,0x02,0x00	@ 0000f9f4 data
.org 0xf9f8
	ldr r0, [pc, #40]	@ 0000f9f8 0a48
.org 0xf9fa
	ldr r1, [pc, #44]	@ 0000f9fa 0b49
.org 0xf9fc
	adds r2, r0, r1	@ 0000f9fc 4218
.org 0xf9fe
	ldrb r1, [r2, #0]	@ 0000f9fe 1178
.org 0xfa00
	movs r0, #1	@ 0000fa00 0120
.org 0xfa02
	ands r0, r1	@ 0000fa02 0840
.org 0xfa04
	cmp r0, #0	@ 0000fa04 0028
.org 0xfa06
	beq.n 0xfab0	@ 0000fa06 53d0
.org 0xfa08
	movs r0, #1	@ 0000fa08 0120
.org 0xfa0a
	eors r0, r1	@ 0000fa0a 4840
.org 0xfa0c
	strb r0, [r2, #0]	@ 0000fa0c 1070
.org 0xfa0e
	movs r0, #52	@ 0000fa0e 3420
.org 0xfa10
	bl 0x2624	@ 0000fa10 f2f708fe
.org 0xfa14
	movs r0, #53	@ 0000fa14 3520
.org 0xfa16
	bl 0x2624	@ 0000fa16 f2f705fe
.org 0xfa1a
	movs r0, #174	@ 0000fa1a ae20
.org 0xfa1c
	bl 0x2624	@ 0000fa1c f2f702fe
.org 0xfa20
	b.n 0xfab0	@ 0000fa20 46e0
.org 0xfa22
	.byte 0x00	@ 0000fa22 data
.org 0xfa23
	.byte 0x00	@ 0000fa23 data
.org 0xfa24
	.byte 0xb0,0x0a,0x00,0x02	@ 0000fa24 data
.org 0xfa28
	.byte 0x28,0xd0,0x02,0x00	@ 0000fa28 data
.org 0xfa2c
	ldr r1, [pc, #80]	@ 0000fa2c 1449
.org 0xfa2e
	adds r0, r2, r1	@ 0000fa2e 5018
.org 0xfa30
	ldrh r1, [r0, #0]	@ 0000fa30 0188
.org 0xfa32
	lsrs r0, r1, #8	@ 0000fa32 080a
.org 0xfa34
	cmp r0, #5	@ 0000fa34 0528
.org 0xfa36
	bne.n 0xfa88	@ 0000fa36 27d1
.org 0xfa38
	movs r0, #255	@ 0000fa38 ff20
.org 0xfa3a
	ands r0, r1	@ 0000fa3a 0840
.org 0xfa3c
	cmp r0, #0	@ 0000fa3c 0028
.org 0xfa3e
	bne.n 0xfa88	@ 0000fa3e 23d1
.org 0xfa40
	ldr r0, [pc, #64]	@ 0000fa40 1048
.org 0xfa42
	adds r1, r2, r0	@ 0000fa42 1118
.org 0xfa44
	ldrb r2, [r1, #0]	@ 0000fa44 0a78
.org 0xfa46
	movs r0, #1	@ 0000fa46 0120
.org 0xfa48
	ands r0, r2	@ 0000fa48 1040
.org 0xfa4a
	cmp r0, #0	@ 0000fa4a 0028
.org 0xfa4c
	bne.n 0xfa6c	@ 0000fa4c 0ed1
.org 0xfa4e
	movs r0, #1	@ 0000fa4e 0120
.org 0xfa50
	orrs r0, r2	@ 0000fa50 1043
.org 0xfa52
	strb r0, [r1, #0]	@ 0000fa52 0870
.org 0xfa54
	movs r0, #52	@ 0000fa54 3420
.org 0xfa56
	movs r1, #0	@ 0000fa56 0021
.org 0xfa58
	bl 0x249c	@ 0000fa58 f2f720fd
.org 0xfa5c
	movs r0, #53	@ 0000fa5c 3520
.org 0xfa5e
	movs r1, #0	@ 0000fa5e 0021
.org 0xfa60
	bl 0x249c	@ 0000fa60 f2f71cfd
.org 0xfa64
	movs r0, #173	@ 0000fa64 ad20
.org 0xfa66
	movs r1, #0	@ 0000fa66 0021
.org 0xfa68
	bl 0x249c	@ 0000fa68 f2f718fd
.org 0xfa6c
	movs r0, #52	@ 0000fa6c 3420
.org 0xfa6e
	bl 0x25d8	@ 0000fa6e f2f7b3fd
.org 0xfa72
	movs r0, #53	@ 0000fa72 3520
.org 0xfa74
	bl 0x25d8	@ 0000fa74 f2f7b0fd
.org 0xfa78
	movs r0, #173	@ 0000fa78 ad20
.org 0xfa7a
	bl 0x25d8	@ 0000fa7a f2f7adfd
.org 0xfa7e
	b.n 0xfab0	@ 0000fa7e 17e0
.org 0xfa80
	.byte 0xd4,0x07,0x00,0x00	@ 0000fa80 data
.org 0xfa84
	.byte 0x28,0xd0,0x02,0x00	@ 0000fa84 data
.org 0xfa88
	ldr r0, [pc, #108]	@ 0000fa88 1b48
.org 0xfa8a
	ldr r1, [pc, #112]	@ 0000fa8a 1c49
.org 0xfa8c
	adds r2, r0, r1	@ 0000fa8c 4218
.org 0xfa8e
	ldrb r1, [r2, #0]	@ 0000fa8e 1178
.org 0xfa90
	movs r0, #1	@ 0000fa90 0120
.org 0xfa92
	ands r0, r1	@ 0000fa92 0840
.org 0xfa94
	cmp r0, #0	@ 0000fa94 0028
.org 0xfa96
	beq.n 0xfab0	@ 0000fa96 0bd0
.org 0xfa98
	movs r0, #1	@ 0000fa98 0120
.org 0xfa9a
	eors r0, r1	@ 0000fa9a 4840
.org 0xfa9c
	strb r0, [r2, #0]	@ 0000fa9c 1070
.org 0xfa9e
	movs r0, #52	@ 0000fa9e 3420
.org 0xfaa0
	bl 0x2624	@ 0000faa0 f2f7c0fd
.org 0xfaa4
	movs r0, #53	@ 0000faa4 3520
.org 0xfaa6
	bl 0x2624	@ 0000faa6 f2f7bdfd
.org 0xfaaa
	movs r0, #173	@ 0000faaa ad20
.org 0xfaac
	bl 0x2624	@ 0000faac f2f7bafd
.org 0xfab0
	ldr r2, [pc, #68]	@ 0000fab0 114a
.org 0xfab2
	ldr r1, [pc, #76]	@ 0000fab2 1349
.org 0xfab4
	adds r0, r2, r1	@ 0000fab4 5018
.org 0xfab6
	ldrh r1, [r0, #0]	@ 0000fab6 0188
.org 0xfab8
	lsrs r0, r1, #8	@ 0000fab8 080a
.org 0xfaba
	cmp r0, #5	@ 0000faba 0528
.org 0xfabc
	bne.n 0xfb04	@ 0000fabc 22d1
.org 0xfabe
	movs r0, #255	@ 0000fabe ff20
.org 0xfac0
	ands r0, r1	@ 0000fac0 0840
.org 0xfac2
	cmp r0, #1	@ 0000fac2 0128
.org 0xfac4
	bne.n 0xfb04	@ 0000fac4 1ed1
.org 0xfac6
	ldr r0, [pc, #52]	@ 0000fac6 0d48
.org 0xfac8
	adds r2, r2, r0	@ 0000fac8 1218
.org 0xfaca
	ldrb r1, [r2, #0]	@ 0000faca 1178
.org 0xfacc
	movs r0, #2	@ 0000facc 0220
.org 0xface
	ands r0, r1	@ 0000face 0840
.org 0xfad0
	cmp r0, #0	@ 0000fad0 0028
.org 0xfad2
	bne.n 0xfaea	@ 0000fad2 0ad1
.org 0xfad4
	movs r0, #2	@ 0000fad4 0220
.org 0xfad6
	orrs r0, r1	@ 0000fad6 0843
.org 0xfad8
	strb r0, [r2, #0]	@ 0000fad8 1070
.org 0xfada
	movs r0, #55	@ 0000fada 3720
.org 0xfadc
	movs r1, #0	@ 0000fadc 0021
.org 0xfade
	bl 0x249c	@ 0000fade f2f7ddfc
.org 0xfae2
	movs r0, #56	@ 0000fae2 3820
.org 0xfae4
	movs r1, #0	@ 0000fae4 0021
.org 0xfae6
	bl 0x249c	@ 0000fae6 f2f7d9fc
.org 0xfaea
	movs r0, #55	@ 0000faea 3720
.org 0xfaec
	bl 0x25d8	@ 0000faec f2f774fd
.org 0xfaf0
	movs r0, #56	@ 0000faf0 3820
.org 0xfaf2
	bl 0x25d8	@ 0000faf2 f2f771fd
.org 0xfaf6
	b.n 0xfb26	@ 0000faf6 16e0
.org 0xfaf8
	.byte 0xb0,0x0a,0x00,0x02	@ 0000faf8 data
.org 0xfafc
	.byte 0x28,0xd0,0x02,0x00	@ 0000fafc data
.org 0xfb00
	.byte 0xd6,0x07,0x00,0x00	@ 0000fb00 data
.org 0xfb04
	ldr r0, [pc, #104]	@ 0000fb04 1a48
.org 0xfb06
	ldr r1, [pc, #108]	@ 0000fb06 1b49
.org 0xfb08
	adds r2, r0, r1	@ 0000fb08 4218
.org 0xfb0a
	ldrb r1, [r2, #0]	@ 0000fb0a 1178
.org 0xfb0c
	movs r0, #2	@ 0000fb0c 0220
.org 0xfb0e
	ands r0, r1	@ 0000fb0e 0840
.org 0xfb10
	cmp r0, #0	@ 0000fb10 0028
.org 0xfb12
	beq.n 0xfb26	@ 0000fb12 08d0
.org 0xfb14
	movs r0, #2	@ 0000fb14 0220
.org 0xfb16
	eors r0, r1	@ 0000fb16 4840
.org 0xfb18
	strb r0, [r2, #0]	@ 0000fb18 1070
.org 0xfb1a
	movs r0, #55	@ 0000fb1a 3720
.org 0xfb1c
	bl 0x2624	@ 0000fb1c f2f782fd
.org 0xfb20
	movs r0, #56	@ 0000fb20 3820
.org 0xfb22
	bl 0x2624	@ 0000fb22 f2f77ffd
.org 0xfb26
	ldr r2, [pc, #72]	@ 0000fb26 124a
.org 0xfb28
	ldr r1, [pc, #76]	@ 0000fb28 1349
.org 0xfb2a
	adds r0, r2, r1	@ 0000fb2a 5018
.org 0xfb2c
	ldrh r1, [r0, #0]	@ 0000fb2c 0188
.org 0xfb2e
	lsrs r0, r1, #8	@ 0000fb2e 080a
.org 0xfb30
	cmp r0, #5	@ 0000fb30 0528
.org 0xfb32
	bne.n 0xfb7c	@ 0000fb32 23d1
.org 0xfb34
	movs r0, #255	@ 0000fb34 ff20
.org 0xfb36
	ands r0, r1	@ 0000fb36 0840
.org 0xfb38
	cmp r0, #2	@ 0000fb38 0228
.org 0xfb3a
	bne.n 0xfb7c	@ 0000fb3a 1fd1
.org 0xfb3c
	ldr r0, [pc, #52]	@ 0000fb3c 0d48
.org 0xfb3e
	adds r2, r2, r0	@ 0000fb3e 1218
.org 0xfb40
	ldrb r1, [r2, #0]	@ 0000fb40 1178
.org 0xfb42
	movs r0, #4	@ 0000fb42 0420
.org 0xfb44
	ands r0, r1	@ 0000fb44 0840
.org 0xfb46
	cmp r0, #0	@ 0000fb46 0028
.org 0xfb48
	bne.n 0xfb60	@ 0000fb48 0ad1
.org 0xfb4a
	movs r0, #4	@ 0000fb4a 0420
.org 0xfb4c
	orrs r0, r1	@ 0000fb4c 0843
.org 0xfb4e
	strb r0, [r2, #0]	@ 0000fb4e 1070
.org 0xfb50
	movs r0, #57	@ 0000fb50 3920
.org 0xfb52
	movs r1, #0	@ 0000fb52 0021
.org 0xfb54
	bl 0x249c	@ 0000fb54 f2f7a2fc
.org 0xfb58
	movs r0, #86	@ 0000fb58 5620
.org 0xfb5a
	movs r1, #0	@ 0000fb5a 0021
.org 0xfb5c
	bl 0x249c	@ 0000fb5c f2f79efc
.org 0xfb60
	movs r0, #57	@ 0000fb60 3920
.org 0xfb62
	bl 0x25d8	@ 0000fb62 f2f739fd
.org 0xfb66
	movs r0, #86	@ 0000fb66 5620
.org 0xfb68
	bl 0x25d8	@ 0000fb68 f2f736fd
.org 0xfb6c
	b.n 0xfb9e	@ 0000fb6c 17e0
.org 0xfb6e
	.byte 0x00	@ 0000fb6e data
.org 0xfb6f
	.byte 0x00	@ 0000fb6f data
.org 0xfb70
	.byte 0xb0,0x0a,0x00,0x02	@ 0000fb70 data
.org 0xfb74
	.byte 0x28,0xd0,0x02,0x00	@ 0000fb74 data
.org 0xfb78
	.byte 0xd6,0x07,0x00,0x00	@ 0000fb78 data
.org 0xfb7c
	ldr r0, [pc, #88]	@ 0000fb7c 1648
.org 0xfb7e
	ldr r1, [pc, #92]	@ 0000fb7e 1749
.org 0xfb80
	adds r2, r0, r1	@ 0000fb80 4218
.org 0xfb82
	ldrb r1, [r2, #0]	@ 0000fb82 1178
.org 0xfb84
	movs r0, #4	@ 0000fb84 0420
.org 0xfb86
	ands r0, r1	@ 0000fb86 0840
.org 0xfb88
	cmp r0, #0	@ 0000fb88 0028
.org 0xfb8a
	beq.n 0xfb9e	@ 0000fb8a 08d0
.org 0xfb8c
	movs r0, #4	@ 0000fb8c 0420
.org 0xfb8e
	eors r0, r1	@ 0000fb8e 4840
.org 0xfb90
	strb r0, [r2, #0]	@ 0000fb90 1070
.org 0xfb92
	movs r0, #57	@ 0000fb92 3920
.org 0xfb94
	bl 0x2624	@ 0000fb94 f2f746fd
.org 0xfb98
	movs r0, #86	@ 0000fb98 5620
.org 0xfb9a
	bl 0x2624	@ 0000fb9a f2f743fd
.org 0xfb9e
	ldr r2, [pc, #56]	@ 0000fb9e 0e4a
.org 0xfba0
	ldr r1, [pc, #60]	@ 0000fba0 0f49
.org 0xfba2
	adds r0, r2, r1	@ 0000fba2 5018
.org 0xfba4
	ldrh r1, [r0, #0]	@ 0000fba4 0188
.org 0xfba6
	lsrs r0, r1, #8	@ 0000fba6 080a
.org 0xfba8
	cmp r0, #5	@ 0000fba8 0528
.org 0xfbaa
	bne.n 0xfbe4	@ 0000fbaa 1bd1
.org 0xfbac
	movs r0, #255	@ 0000fbac ff20
.org 0xfbae
	ands r0, r1	@ 0000fbae 0840
.org 0xfbb0
	cmp r0, #3	@ 0000fbb0 0328
.org 0xfbb2
	bne.n 0xfbe4	@ 0000fbb2 17d1
.org 0xfbb4
	ldr r0, [pc, #36]	@ 0000fbb4 0948
.org 0xfbb6
	adds r2, r2, r0	@ 0000fbb6 1218
.org 0xfbb8
	ldrb r1, [r2, #0]	@ 0000fbb8 1178
.org 0xfbba
	movs r0, #8	@ 0000fbba 0820
.org 0xfbbc
	ands r0, r1	@ 0000fbbc 0840
.org 0xfbbe
	cmp r0, #0	@ 0000fbbe 0028
.org 0xfbc0
	bne.n 0xfbd0	@ 0000fbc0 06d1
.org 0xfbc2
	movs r0, #8	@ 0000fbc2 0820
.org 0xfbc4
	orrs r0, r1	@ 0000fbc4 0843
.org 0xfbc6
	strb r0, [r2, #0]	@ 0000fbc6 1070
.org 0xfbc8
	movs r0, #87	@ 0000fbc8 5720
.org 0xfbca
	movs r1, #0	@ 0000fbca 0021
.org 0xfbcc
	bl 0x249c	@ 0000fbcc f2f766fc
.org 0xfbd0
	movs r0, #87	@ 0000fbd0 5720
.org 0xfbd2
	bl 0x25d8	@ 0000fbd2 f2f701fd
.org 0xfbd6
	b.n 0xfc00	@ 0000fbd6 13e0
.org 0xfbd8
	.byte 0xb0,0x0a,0x00,0x02	@ 0000fbd8 data
.org 0xfbdc
	.byte 0x28,0xd0,0x02,0x00	@ 0000fbdc data
.org 0xfbe0
	.byte 0xd6,0x07,0x00,0x00	@ 0000fbe0 data
.org 0xfbe4
	ldr r0, [pc, #140]	@ 0000fbe4 2348
.org 0xfbe6
	ldr r1, [pc, #144]	@ 0000fbe6 2449
.org 0xfbe8
	adds r2, r0, r1	@ 0000fbe8 4218
.org 0xfbea
	ldrb r1, [r2, #0]	@ 0000fbea 1178
.org 0xfbec
	movs r0, #8	@ 0000fbec 0820
.org 0xfbee
	ands r0, r1	@ 0000fbee 0840
.org 0xfbf0
	cmp r0, #0	@ 0000fbf0 0028
.org 0xfbf2
	beq.n 0xfc00	@ 0000fbf2 05d0
.org 0xfbf4
	movs r0, #8	@ 0000fbf4 0820
.org 0xfbf6
	eors r0, r1	@ 0000fbf6 4840
.org 0xfbf8
	strb r0, [r2, #0]	@ 0000fbf8 1070
.org 0xfbfa
	movs r0, #87	@ 0000fbfa 5720
.org 0xfbfc
	bl 0x2624	@ 0000fbfc f2f712fd
.org 0xfc00
	ldr r0, [pc, #112]	@ 0000fc00 1c48
.org 0xfc02
	ldr r2, [pc, #120]	@ 0000fc02 1e4a
.org 0xfc04
	adds r1, r0, r2	@ 0000fc04 8118
.org 0xfc06
	ldrh r2, [r1, #0]	@ 0000fc06 0a88
.org 0xfc08
	lsrs r1, r2, #8	@ 0000fc08 110a
.org 0xfc0a
	adds r3, r0, #0	@ 0000fc0a 031c
.org 0xfc0c
	cmp r1, #5	@ 0000fc0c 0529
.org 0xfc0e
	bne.n 0xfc80	@ 0000fc0e 37d1
.org 0xfc10
	movs r0, #255	@ 0000fc10 ff20
.org 0xfc12
	ands r0, r2	@ 0000fc12 1040
.org 0xfc14
	cmp r0, #4	@ 0000fc14 0428
.org 0xfc16
	bne.n 0xfc80	@ 0000fc16 33d1
.org 0xfc18
	ldr r0, [pc, #92]	@ 0000fc18 1748
.org 0xfc1a
	adds r2, r3, r0	@ 0000fc1a 1a18
.org 0xfc1c
	ldrb r1, [r2, #0]	@ 0000fc1c 1178
.org 0xfc1e
	movs r0, #16	@ 0000fc1e 1020
.org 0xfc20
	ands r0, r1	@ 0000fc20 0840
.org 0xfc22
	cmp r0, #0	@ 0000fc22 0028
.org 0xfc24
	bne.n 0xfc54	@ 0000fc24 16d1
.org 0xfc26
	movs r0, #16	@ 0000fc26 1020
.org 0xfc28
	orrs r0, r1	@ 0000fc28 0843
.org 0xfc2a
	strb r0, [r2, #0]	@ 0000fc2a 1070
.org 0xfc2c
	movs r0, #88	@ 0000fc2c 5820
.org 0xfc2e
	movs r1, #0	@ 0000fc2e 0021
.org 0xfc30
	bl 0x249c	@ 0000fc30 f2f734fc
.org 0xfc34
	movs r0, #89	@ 0000fc34 5920
.org 0xfc36
	movs r1, #0	@ 0000fc36 0021
.org 0xfc38
	bl 0x249c	@ 0000fc38 f2f730fc
.org 0xfc3c
	movs r0, #90	@ 0000fc3c 5a20
.org 0xfc3e
	movs r1, #0	@ 0000fc3e 0021
.org 0xfc40
	bl 0x249c	@ 0000fc40 f2f72cfc
.org 0xfc44
	movs r0, #91	@ 0000fc44 5b20
.org 0xfc46
	movs r1, #0	@ 0000fc46 0021
.org 0xfc48
	bl 0x249c	@ 0000fc48 f2f728fc
.org 0xfc4c
	movs r0, #93	@ 0000fc4c 5d20
.org 0xfc4e
	movs r1, #0	@ 0000fc4e 0021
.org 0xfc50
	bl 0x249c	@ 0000fc50 f2f724fc
.org 0xfc54
	movs r0, #88	@ 0000fc54 5820
.org 0xfc56
	bl 0x25d8	@ 0000fc56 f2f7bffc
.org 0xfc5a
	movs r0, #89	@ 0000fc5a 5920
.org 0xfc5c
	bl 0x25d8	@ 0000fc5c f2f7bcfc
