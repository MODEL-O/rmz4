@ FUN_0811187c  entry 0x0811187c  size 180
.thumb
.org 0x11187c
FUN_0811187c:
	push {r4, lr}	@ 0011187c 10b5
.org 0x11187e
	adds r4, r0, #0	@ 0011187e 041c
.org 0x111880
	ldr r1, [pc, #76]	@ 00111880 1349
.org 0x111882
	movs r0, #0	@ 00111882 0020
.org 0x111884
	strh r0, [r1, #0]	@ 00111884 0880
.org 0x111886
	ldr r1, [pc, #76]	@ 00111886 1349
.org 0x111888
	ldr r2, [pc, #76]	@ 00111888 134a
.org 0x11188a
	adds r0, r1, r2	@ 0011188a 8818
.org 0x11188c
	movs r2, #32	@ 0011188c 2022
.org 0x11188e
	strb r2, [r0, #0]	@ 0011188e 0270
.org 0x111890
	ldr r3, [pc, #72]	@ 00111890 124b
.org 0x111892
	adds r0, r1, r3	@ 00111892 c818
.org 0x111894
	strb r2, [r0, #0]	@ 00111894 0270
.org 0x111896
	movs r0, #128	@ 00111896 8020
.org 0x111898
	lsls r0, r0, #3	@ 00111898 c000
.org 0x11189a
	adds r1, r1, r0	@ 0011189a 0918
.org 0x11189c
	strb r2, [r1, #0]	@ 0011189c 0a70
.org 0x11189e
	ldr r1, [pc, #64]	@ 0011189e 1049
.org 0x1118a0
	ldrh r2, [r1, #0]	@ 001118a0 0a88
.org 0x1118a2
	ldr r0, [pc, #64]	@ 001118a2 1048
.org 0x1118a4
	ands r0, r2	@ 001118a4 1040
.org 0x1118a6
	strh r0, [r1, #0]	@ 001118a6 0880
.org 0x1118a8
	ldr r2, [pc, #60]	@ 001118a8 0f4a
.org 0x1118aa
	adds r0, r2, #0	@ 001118aa 101c
.org 0x1118ac
	strh r0, [r1, #4]	@ 001118ac 8880
.org 0x1118ae
	movs r0, #137	@ 001118ae 8920
.org 0x1118b0
	bl 0x2624	@ 001118b0 f0f6b8fe
.org 0x1118b4
	bl 0x10d568	@ 001118b4 fbf758fe
.org 0x1118b8
	movs r3, #149	@ 001118b8 9523
.org 0x1118ba
	lsls r3, r3, #2	@ 001118ba 9b00
.org 0x1118bc
	adds r0, r4, r3	@ 001118bc e018
.org 0x1118be
	ldrb r0, [r0, #0]	@ 001118be 0078
.org 0x1118c0
	cmp r0, #1	@ 001118c0 0128
.org 0x1118c2
	beq.n 0x111910	@ 001118c2 25d0
.org 0x1118c4
	cmp r0, #1	@ 001118c4 0128
.org 0x1118c6
	bgt.n 0x1118ec	@ 001118c6 11dc
.org 0x1118c8
	cmp r0, #0	@ 001118c8 0028
.org 0x1118ca
	beq.n 0x1118f6	@ 001118ca 14d0
.org 0x1118cc
	b.n 0x11193e	@ 001118cc 37e0
.org 0x1118ce
	.byte 0x00	@ 001118ce data
.org 0x1118cf
	.byte 0x00	@ 001118cf data
.org 0x1118d0
	.byte 0x40,0x0a,0x00,0x02	@ 001118d0 data
.org 0x1118d4
	.byte 0xc0,0x2a,0x00,0x03	@ 001118d4 data
.org 0x1118d8
	.byte 0x02,0x04,0x00,0x00	@ 001118d8 data
.org 0x1118dc
	.byte 0x01,0x04,0x00,0x00	@ 001118dc data
.org 0x1118e0
	.byte 0x00,0x0a,0x00,0x02	@ 001118e0 data
.org 0x1118e4
	.byte 0xff,0xb0,0x00,0x00	@ 001118e4 data
.org 0x1118e8
	.byte 0x08,0x40,0x00,0x00	@ 001118e8 data
.org 0x1118ec
	cmp r0, #2	@ 001118ec 0228
.org 0x1118ee
	beq.n 0x11191c	@ 001118ee 15d0
.org 0x1118f0
	cmp r0, #3	@ 001118f0 0328
.org 0x1118f2
	beq.n 0x111934	@ 001118f2 1fd0
.org 0x1118f4
	b.n 0x11193e	@ 001118f4 23e0
.org 0x1118f6
	ldr r0, [pc, #16]	@ 001118f6 0448
.org 0x1118f8
	movs r1, #0	@ 001118f8 0021
.org 0x1118fa
	bl 0x1126ac	@ 001118fa 00f0d7fe
.org 0x1118fe
	ldr r1, [pc, #12]	@ 001118fe 0349
.org 0x111900
	adds r0, r4, #0	@ 00111900 201c
.org 0x111902
	bl 0x10f6f8	@ 00111902 fdf7f9fe
.org 0x111906
	b.n 0x11195a	@ 00111906 28e0
.org 0x111908
	.byte 0x10,0xf6,0x02,0x02	@ 00111908 data
.org 0x11190c
	.byte 0x02,0x00,0x00,0x01	@ 0011190c data
.org 0x111910
	ldr r0, [pc, #4]	@ 00111910 0148
.org 0x111912
	movs r1, #128	@ 00111912 8021
.org 0x111914
	lsls r1, r1, #1	@ 00111914 4900
.org 0x111916
	b.n 0x111920	@ 00111916 03e0
.org 0x111918
	.byte 0x10,0xf6,0x02,0x02	@ 00111918 data
.org 0x11191c
	ldr r0, [pc, #16]	@ 0011191c 0448
.org 0x11191e
	movs r1, #6	@ 0011191e 0621
.org 0x111920
	bl 0x1126ac	@ 00111920 00f0c4fe
.org 0x111924
	adds r0, r4, #0	@ 00111924 201c
.org 0x111926
	movs r1, #5	@ 00111926 0521
.org 0x111928
	bl 0x10f6f8	@ 00111928 fdf7e6fe
.org 0x11192c
	b.n 0x11195a	@ 0011192c 15e0
.org 0x11192e
	.byte 0x00	@ 0011192e data
.org 0x11192f
	.byte 0x00	@ 0011192f data
