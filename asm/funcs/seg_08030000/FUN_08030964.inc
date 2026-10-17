@ FUN_08030964  entry 0x08030964  size 196
.thumb
.org 0x30964
FUN_08030964:
	push {r4, r5, lr}	@ 00030964 30b5
.org 0x30966
	adds r4, r0, #0	@ 00030966 041c
.org 0x30968
	movs r5, #1	@ 00030968 0125
.org 0x3096a
	ldrb r1, [r4, #30]	@ 0003096a a17f
.org 0x3096c
	lsls r1, r1, #8	@ 0003096c 0902
.org 0x3096e
	adds r0, #112	@ 0003096e 7030
.org 0x30970
	ldrb r0, [r0, #0]	@ 00030970 0078
.org 0x30972
	orrs r0, r1	@ 00030972 0843
.org 0x30974
	ldr r1, [pc, #32]	@ 00030974 0849
.org 0x30976
	cmp r0, r1	@ 00030976 8842
.org 0x30978
	bne.n 0x3099e	@ 00030978 11d1
.org 0x3097a
	adds r0, r4, #0	@ 0003097a 201c
.org 0x3097c
	adds r0, #115	@ 0003097c 7330
.org 0x3097e
	ldrb r0, [r0, #0]	@ 0003097e 0078
.org 0x30980
	cmp r0, #3	@ 00030980 0328
.org 0x30982
	bne.n 0x3099c	@ 00030982 0bd1
.org 0x30984
	adds r0, r4, #0	@ 00030984 201c
.org 0x30986
	bl 0x2b7d8	@ 00030986 faf727ff
.org 0x3098a
	adds r1, r0, #0	@ 0003098a 011c
.org 0x3098c
	lsls r1, r1, #16	@ 0003098c 0904
.org 0x3098e
	lsrs r1, r1, #16	@ 0003098e 090c
.org 0x30990
	adds r0, r4, #0	@ 00030990 201c
.org 0x30992
	bl 0x1cf00	@ 00030992 ecf7b5fa
.org 0x30996
	b.n 0x3099e	@ 00030996 02e0
.org 0x30998
	.byte 0x01,0x03,0x00,0x00	@ 00030998 data
.org 0x3099c
	movs r5, #0	@ 0003099c 0025
.org 0x3099e
	cmp r5, #0	@ 0003099e 002d
.org 0x309a0
	beq.n 0x309f2	@ 000309a0 27d0
.org 0x309a2
	adds r1, r4, #0	@ 000309a2 211c
.org 0x309a4
	adds r1, #233	@ 000309a4 e931
.org 0x309a6
	ldrb r0, [r1, #0]	@ 000309a6 0878
.org 0x309a8
	cmp r0, #0	@ 000309a8 0028
.org 0x309aa
	beq.n 0x309d0	@ 000309aa 11d0
.org 0x309ac
	adds r0, r4, #0	@ 000309ac 201c
.org 0x309ae
	adds r0, #164	@ 000309ae a430
.org 0x309b0
	movs r2, #0	@ 000309b0 0022
.org 0x309b2
	ldrsh r0, [r0, r2]	@ 000309b2 805e
.org 0x309b4
	cmp r0, #7	@ 000309b4 0728
.org 0x309b6
	ble.n 0x309f2	@ 000309b6 1cdd
.org 0x309b8
	movs r0, #0	@ 000309b8 0020
.org 0x309ba
	strb r0, [r1, #0]	@ 000309ba 0870
.org 0x309bc
	adds r0, r4, #0	@ 000309bc 201c
.org 0x309be
	bl 0x2b7d8	@ 000309be faf70bff
.org 0x309c2
	adds r1, r0, #0	@ 000309c2 011c
.org 0x309c4
	lsls r1, r1, #16	@ 000309c4 0904
.org 0x309c6
	lsrs r1, r1, #16	@ 000309c6 090c
.org 0x309c8
	adds r0, r4, #0	@ 000309c8 201c
.org 0x309ca
	bl 0x1cf00	@ 000309ca ecf799fa
.org 0x309ce
	b.n 0x309f2	@ 000309ce 10e0
.org 0x309d0
	adds r0, r4, #0	@ 000309d0 201c
.org 0x309d2
	adds r0, #164	@ 000309d2 a430
.org 0x309d4
	movs r2, #0	@ 000309d4 0022
.org 0x309d6
	ldrsh r0, [r0, r2]	@ 000309d6 805e
.org 0x309d8
	cmp r0, #2	@ 000309d8 0228
.org 0x309da
	bgt.n 0x309f2	@ 000309da 0adc
.org 0x309dc
	movs r0, #1	@ 000309dc 0120
.org 0x309de
	strb r0, [r1, #0]	@ 000309de 0870
.org 0x309e0
	adds r0, r4, #0	@ 000309e0 201c
.org 0x309e2
	bl 0x2b7d8	@ 000309e2 faf7f9fe
.org 0x309e6
	adds r1, r0, #0	@ 000309e6 011c
.org 0x309e8
	lsls r1, r1, #16	@ 000309e8 0904
.org 0x309ea
	lsrs r1, r1, #16	@ 000309ea 090c
.org 0x309ec
	adds r0, r4, #0	@ 000309ec 201c
.org 0x309ee
	bl 0x1cf00	@ 000309ee ecf787fa
.org 0x309f2
	movs r1, #161	@ 000309f2 a121
.org 0x309f4
	lsls r1, r1, #1	@ 000309f4 4900
.org 0x309f6
	adds r0, r4, r1	@ 000309f6 6018
.org 0x309f8
	ldrb r1, [r0, #0]	@ 000309f8 0178
.org 0x309fa
	movs r0, #32	@ 000309fa 2020
.org 0x309fc
	ands r0, r1	@ 000309fc 0840
.org 0x309fe
	lsls r0, r0, #24	@ 000309fe 0006
.org 0x30a00
	lsrs r0, r0, #24	@ 00030a00 000e
.org 0x30a02
	cmp r0, #0	@ 00030a02 0028
.org 0x30a04
	beq.n 0x30a24	@ 00030a04 0ed0
.org 0x30a06
	ldr r0, [r4, #92]	@ 00030a06 e06d
.org 0x30a08
	cmp r0, #0	@ 00030a08 0028
.org 0x30a0a
	ble.n 0x30a16	@ 00030a0a 04dd
.org 0x30a0c
	subs r0, #25	@ 00030a0c 1938
.org 0x30a0e
	str r0, [r4, #92]	@ 00030a0e e065
.org 0x30a10
	cmp r0, #0	@ 00030a10 0028
.org 0x30a12
	bge.n 0x30a26	@ 00030a12 08da
.org 0x30a14
	b.n 0x30a22	@ 00030a14 05e0
.org 0x30a16
	cmp r0, #0	@ 00030a16 0028
.org 0x30a18
	bge.n 0x30a26	@ 00030a18 05da
.org 0x30a1a
	adds r0, #25	@ 00030a1a 1930
.org 0x30a1c
	str r0, [r4, #92]	@ 00030a1c e065
.org 0x30a1e
	cmp r0, #0	@ 00030a1e 0028
.org 0x30a20
	ble.n 0x30a26	@ 00030a20 01dd
.org 0x30a22
	movs r0, #0	@ 00030a22 0020
.org 0x30a24
	str r0, [r4, #92]	@ 00030a24 e065
.org 0x30a26
	pop {r4, r5}	@ 00030a26 30bc
