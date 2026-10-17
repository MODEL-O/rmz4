@ FUN_080efb50  entry 0x080efb50  size 226
.thumb
.org 0xefb50
FUN_080efb50:
	push {r4, r5, r6, lr}	@ 000efb50 70b5
.org 0xefb52
	adds r6, r0, #0	@ 000efb52 061c
.org 0xefb54
	ldrb r0, [r6, #17]	@ 000efb54 707c
.org 0xefb56
	cmp r0, #1	@ 000efb56 0128
.org 0xefb58
	beq.n 0xefbcc	@ 000efb58 38d0
.org 0xefb5a
	cmp r0, #1	@ 000efb5a 0128
.org 0xefb5c
	bgt.n 0xefb64	@ 000efb5c 02dc
.org 0xefb5e
	cmp r0, #0	@ 000efb5e 0028
.org 0xefb60
	beq.n 0xefb6e	@ 000efb60 05d0
.org 0xefb62
	b.n 0xefc3a	@ 000efb62 6ae0
.org 0xefb64
	cmp r0, #2	@ 000efb64 0228
.org 0xefb66
	beq.n 0xefc10	@ 000efb66 53d0
.org 0xefb68
	cmp r0, #3	@ 000efb68 0328
.org 0xefb6a
	beq.n 0xefc30	@ 000efb6a 61d0
.org 0xefb6c
	b.n 0xefc3a	@ 000efb6c 65e0
.org 0xefb6e
	ldr r0, [pc, #144]	@ 000efb6e 2448
.org 0xefb70
	adds r0, #238	@ 000efb70 ee30
.org 0xefb72
	movs r5, #128	@ 000efb72 8025
.org 0xefb74
	lsls r5, r5, #2	@ 000efb74 ad00
.org 0xefb76
	strh r5, [r0, #0]	@ 000efb76 0580
.org 0xefb78
	ldr r4, [pc, #136]	@ 000efb78 224c
.org 0xefb7a
	adds r4, #238	@ 000efb7a ee34
.org 0xefb7c
	movs r0, #5	@ 000efb7c 0520
.org 0xefb7e
	strh r0, [r4, #0]	@ 000efb7e 2080
.org 0xefb80
	ldr r0, [pc, #132]	@ 000efb80 2148
.org 0xefb82
	ldrh r1, [r0, #6]	@ 000efb82 c188
.org 0xefb84
	lsrs r1, r1, #6	@ 000efb84 8909
.org 0xefb86
	subs r1, r5, r1	@ 000efb86 691a
.org 0xefb88
	lsls r1, r1, #5	@ 000efb88 4901
.org 0xefb8a
	movs r2, #128	@ 000efb8a 8022
.org 0xefb8c
	lsls r2, r2, #9	@ 000efb8c 5202
.org 0xefb8e
	adds r1, r1, r2	@ 000efb8e 8918
.org 0xefb90
	bl 0x1d30	@ 000efb90 12f7cef8
.org 0xefb94
	ldr r0, [pc, #116]	@ 000efb94 1d48
.org 0xefb96
	ldrh r1, [r4, #0]	@ 000efb96 2188
.org 0xefb98
	ldrb r2, [r0, #7]	@ 000efb98 c279
.org 0xefb9a
	subs r1, r1, r2	@ 000efb9a 891a
.org 0xefb9c
	lsls r1, r1, #5	@ 000efb9c 4901
.org 0xefb9e
	adds r1, r1, r5	@ 000efb9e 4919
.org 0xefba0
	bl 0x2208	@ 000efba0 12f732fb
.org 0xefba4
	movs r1, #238	@ 000efba4 ee21
.org 0xefba6
	lsls r1, r1, #7	@ 000efba6 c901
.org 0xefba8
	adds r0, r6, #0	@ 000efba8 301c
.org 0xefbaa
	bl 0x1cf00	@ 000efbaa 2df7a9f9
.org 0xefbae
	adds r2, r6, #0	@ 000efbae 321c
.org 0xefbb0
	adds r2, #73	@ 000efbb0 4932
.org 0xefbb2
	ldrb r1, [r2, #0]	@ 000efbb2 1178
.org 0xefbb4
	movs r0, #13	@ 000efbb4 0d20
.org 0xefbb6
	negs r0, r0	@ 000efbb6 4042
.org 0xefbb8
	ands r0, r1	@ 000efbb8 0840
.org 0xefbba
	strb r0, [r2, #0]	@ 000efbba 1070
.org 0xefbbc
	ldr r0, [r6, #84]	@ 000efbbc 706d
.org 0xefbbe
	ldr r1, [r6, #88]	@ 000efbbe b16d
.org 0xefbc0
	bl 0x8534	@ 000efbc0 18f7b8fc
.org 0xefbc4
	str r0, [r6, #88]	@ 000efbc4 b065
.org 0xefbc6
	ldrb r0, [r6, #17]	@ 000efbc6 707c
.org 0xefbc8
	adds r0, #1	@ 000efbc8 0130
.org 0xefbca
	strb r0, [r6, #17]	@ 000efbca 7074
.org 0xefbcc
	ldr r0, [r6, #24]	@ 000efbcc b069
.org 0xefbce
	ldrb r1, [r0, #9]	@ 000efbce 417a
.org 0xefbd0
	movs r2, #1	@ 000efbd0 0122
.org 0xefbd2
	adds r0, r2, #0	@ 000efbd2 101c
.org 0xefbd4
	ands r0, r1	@ 000efbd4 0840
.org 0xefbd6
	cmp r0, #0	@ 000efbd6 0028
.org 0xefbd8
	beq.n 0xefc3a	@ 000efbd8 2fd0
.org 0xefbda
	movs r0, #8	@ 000efbda 0820
.org 0xefbdc
	strb r0, [r6, #18]	@ 000efbdc b074
.org 0xefbde
	ldrb r1, [r6, #10]	@ 000efbde b17a
.org 0xefbe0
	movs r0, #16	@ 000efbe0 1020
.org 0xefbe2
	orrs r0, r1	@ 000efbe2 0843
.org 0xefbe4
	strb r0, [r6, #10]	@ 000efbe4 b072
.org 0xefbe6
	adds r0, r6, #0	@ 000efbe6 301c
.org 0xefbe8
	adds r0, #76	@ 000efbe8 4c30
.org 0xefbea
	strb r2, [r0, #0]	@ 000efbea 0270
.org 0xefbec
	adds r3, r6, #0	@ 000efbec 331c
.org 0xefbee
	adds r3, #74	@ 000efbee 4a33
.org 0xefbf0
	movs r2, #16	@ 000efbf0 1022
.org 0xefbf2
	ldrb r1, [r3, #0]	@ 000efbf2 1978
.org 0xefbf4
	movs r0, #17	@ 000efbf4 1120
.org 0xefbf6
	negs r0, r0	@ 000efbf6 4042
.org 0xefbf8
	ands r0, r1	@ 000efbf8 0840
.org 0xefbfa
	orrs r0, r2	@ 000efbfa 1043
.org 0xefbfc
	strb r0, [r3, #0]	@ 000efbfc 1870
.org 0xefbfe
	b.n 0xefc24	@ 000efbfe 11e0
.org 0xefc00
	.byte 0x40,0xe0,0x02,0x02	@ 000efc00 data
.org 0xefc04
	.byte 0x40,0xde,0x02,0x02	@ 000efc04 data
.org 0xefc08
	.byte 0x4c,0x49,0xc4,0x08	@ 000efc08 data
.org 0xefc0c
	.byte 0x58,0x49,0xc4,0x08	@ 000efc0c data
.org 0xefc10
	ldrb r0, [r6, #18]	@ 000efc10 b07c
.org 0xefc12
	subs r0, #1	@ 000efc12 0138
.org 0xefc14
	strb r0, [r6, #18]	@ 000efc14 b074
.org 0xefc16
	lsls r0, r0, #24	@ 000efc16 0006
.org 0xefc18
	cmp r0, #0	@ 000efc18 0028
.org 0xefc1a
	bne.n 0xefc3a	@ 000efc1a 0ed1
.org 0xefc1c
	ldr r1, [pc, #12]	@ 000efc1c 0349
.org 0xefc1e
	adds r0, r6, #0	@ 000efc1e 301c
.org 0xefc20
	bl 0x1cf00	@ 000efc20 2df76ef9
.org 0xefc24
	ldrb r0, [r6, #17]	@ 000efc24 707c
.org 0xefc26
	adds r0, #1	@ 000efc26 0130
.org 0xefc28
	strb r0, [r6, #17]	@ 000efc28 7074
.org 0xefc2a
	b.n 0xefc3a	@ 000efc2a 06e0
.org 0xefc2c
	.byte 0x01,0x77,0x00,0x00	@ 000efc2c data
.org 0xefc30
	ldr r0, [r6, #84]	@ 000efc30 706d
