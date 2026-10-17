@ FUN_08103fe4  entry 0x08103fe4  size 182
.thumb
.org 0x103fe4
FUN_08103fe4:
	push {r4, r5, lr}	@ 00103fe4 30b5
.org 0x103fe6
	adds r4, r0, #0	@ 00103fe6 041c
.org 0x103fe8
	ldrb r0, [r4, #14]	@ 00103fe8 a07b
.org 0x103fea
	cmp r0, #0	@ 00103fea 0028
.org 0x103fec
	bne.n 0x104036	@ 00103fec 23d1
.org 0x103fee
	ldr r1, [pc, #32]	@ 00103fee 0849
.org 0x103ff0
	ldr r0, [pc, #32]	@ 00103ff0 0848
.org 0x103ff2
	adds r2, r1, r0	@ 00103ff2 0a18
.org 0x103ff4
	ldr r0, [pc, #32]	@ 00103ff4 0848
.org 0x103ff6
	str r0, [r2, #0]	@ 00103ff6 1060
.org 0x103ff8
	ldr r0, [pc, #32]	@ 00103ff8 0848
.org 0x103ffa
	adds r1, r1, r0	@ 00103ffa 0918
.org 0x103ffc
	ldr r0, [pc, #32]	@ 00103ffc 0848
.org 0x103ffe
	str r0, [r1, #0]	@ 00103ffe 0860
.org 0x104000
	ldr r0, [r4, #96]	@ 00104000 206e
.org 0x104002
	cmp r0, #0	@ 00104002 0028
.org 0x104004
	ble.n 0x104028	@ 00104004 10dd
.org 0x104006
	ldr r1, [pc, #28]	@ 00104006 0749
.org 0x104008
	adds r0, r4, #0	@ 00104008 201c
.org 0x10400a
	bl 0x1cf00	@ 0010400a 18f779ff
.org 0x10400e
	b.n 0x104030	@ 0010400e 0fe0
.org 0x104010
	.byte 0xb0,0x0a,0x00,0x02	@ 00104010 data
.org 0x104014
	.byte 0x14,0xc0,0x02,0x00	@ 00104014 data
.org 0x104018
	.byte 0x00,0xb8,0x0a,0x00	@ 00104018 data
.org 0x10401c
	.byte 0x1c,0xc0,0x02,0x00	@ 0010401c data
.org 0x104020
	.byte 0x00,0xd8,0x0a,0x00	@ 00104020 data
.org 0x104024
	.byte 0x03,0xde,0x00,0x00	@ 00104024 data
.org 0x104028
	ldr r1, [pc, #84]	@ 00104028 1549
.org 0x10402a
	adds r0, r4, #0	@ 0010402a 201c
.org 0x10402c
	bl 0x1cf00	@ 0010402c 18f768ff
.org 0x104030
	ldrb r0, [r4, #14]	@ 00104030 a07b
.org 0x104032
	adds r0, #1	@ 00104032 0130
.org 0x104034
	strb r0, [r4, #14]	@ 00104034 a073
.org 0x104036
	adds r0, r4, #0	@ 00104036 201c
.org 0x104038
	bl 0x1cff0	@ 00104038 18f7daff
.org 0x10403c
	ldr r0, [r4, #88]	@ 0010403c a06d
.org 0x10403e
	ldr r1, [r4, #96]	@ 0010403e 216e
.org 0x104040
	adds r0, r0, r1	@ 00104040 4018
.org 0x104042
	str r0, [r4, #88]	@ 00104042 a065
.org 0x104044
	movs r5, #215	@ 00104044 d725
.org 0x104046
	lsls r5, r5, #1	@ 00104046 6d00
.org 0x104048
	adds r0, r5, #0	@ 00104048 281c
.org 0x10404a
	bl 0x2bb4	@ 0010404a fef6b3fd
.org 0x10404e
	cmp r0, #0	@ 0010404e 0028
.org 0x104050
	bne.n 0x10405e	@ 00104050 05d1
.org 0x104052
	adds r0, r5, #0	@ 00104052 281c
.org 0x104054
	bl 0x2b10	@ 00104054 fef65cfd
.org 0x104058
	adds r0, r4, #0	@ 00104058 201c
.org 0x10405a
	adds r0, #180	@ 0010405a b430
.org 0x10405c
	strh r5, [r0, #0]	@ 0010405c 0580
.org 0x10405e
	ldr r0, [r4, #96]	@ 0010405e 206e
.org 0x104060
	cmp r0, #0	@ 00104060 0028
.org 0x104062
	ble.n 0x104088	@ 00104062 11dd
.org 0x104064
	ldr r5, [pc, #28]	@ 00104064 074d
.org 0x104066
	ldrb r0, [r4, #17]	@ 00104066 607c
.org 0x104068
	adds r2, r0, #1	@ 00104068 421c
.org 0x10406a
	lsls r0, r2, #1	@ 0010406a 5000
.org 0x10406c
	adds r0, r0, r5	@ 0010406c 4019
.org 0x10406e
	ldrh r0, [r0, #0]	@ 0010406e 0088
.org 0x104070
	lsls r0, r0, #8	@ 00104070 0002
.org 0x104072
	ldr r3, [r4, #104]	@ 00104072 a36e
.org 0x104074
	adds r0, r3, r0	@ 00104074 1818
.org 0x104076
	ldr r1, [r4, #88]	@ 00104076 a16d
.org 0x104078
	cmp r1, r0	@ 00104078 8142
.org 0x10407a
	blt.n 0x1040b6	@ 0010407a 1cdb
.org 0x10407c
	b.n 0x1040a0	@ 0010407c 10e0
.org 0x10407e
	.byte 0x00	@ 0010407e data
.org 0x10407f
	.byte 0x00	@ 0010407f data
.org 0x104080
	.byte 0x02,0xde,0x00,0x00	@ 00104080 data
.org 0x104084
	.byte 0x80,0xc0,0x86,0x08	@ 00104084 data
.org 0x104088
	ldr r5, [pc, #48]	@ 00104088 0c4d
.org 0x10408a
	ldrb r0, [r4, #17]	@ 0010408a 607c
.org 0x10408c
	subs r2, r0, #1	@ 0010408c 421e
.org 0x10408e
	lsls r0, r2, #1	@ 0010408e 5000
.org 0x104090
	adds r0, r0, r5	@ 00104090 4019
.org 0x104092
	ldrh r0, [r0, #0]	@ 00104092 0088
.org 0x104094
	lsls r0, r0, #8	@ 00104094 0002
.org 0x104096
	ldr r3, [r4, #104]	@ 00104096 a36e
.org 0x104098
	adds r0, r3, r0	@ 00104098 1818
