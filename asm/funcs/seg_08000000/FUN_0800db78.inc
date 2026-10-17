@ FUN_0800db78  entry 0x0800db78  size 216
.thumb
.org 0xdb78
FUN_0800db78:
	push {r4, r5, r6, lr}	@ 0000db78 70b5
.org 0xdb7a
	adds r5, r0, #0	@ 0000db7a 051c
.org 0xdb7c
	ldrb r4, [r5, #14]	@ 0000db7c ac7b
.org 0xdb7e
	cmp r4, #0	@ 0000db7e 002c
.org 0xdb80
	bne.n 0xdc36	@ 0000db80 59d1
.org 0xdb82
	ldr r1, [r5, #92]	@ 0000db82 e96d
.org 0xdb84
	lsls r1, r1, #16	@ 0000db84 0904
.org 0xdb86
	lsrs r1, r1, #20	@ 0000db86 090d
.org 0xdb88
	lsls r0, r1, #1	@ 0000db88 4800
.org 0xdb8a
	ldr r3, [pc, #112]	@ 0000db8a 1c4b
.org 0xdb8c
	adds r6, r0, r3	@ 0000db8c c618
.org 0xdb8e
	ldr r0, [r5, #96]	@ 0000db8e 286e
.org 0xdb90
	ldr r2, [r5, #100]	@ 0000db90 6a6e
.org 0xdb92
	orrs r0, r2	@ 0000db92 1043
.org 0xdb94
	movs r2, #68	@ 0000db94 4422
.org 0xdb96
	orrs r0, r2	@ 0000db96 1043
.org 0xdb98
	strh r0, [r6, #0]	@ 0000db98 3080
.org 0xdb9a
	lsls r1, r1, #2	@ 0000db9a 8900
.org 0xdb9c
	adds r3, #8	@ 0000db9c 0833
.org 0xdb9e
	adds r1, r1, r3	@ 0000db9e c918
.org 0xdba0
	str r4, [r1, #0]	@ 0000dba0 0c60
.org 0xdba2
	adds r0, r5, #0	@ 0000dba2 281c
.org 0xdba4
	adds r0, #112	@ 0000dba4 7030
.org 0xdba6
	strh r4, [r0, #0]	@ 0000dba6 0480
.org 0xdba8
	subs r0, #2	@ 0000dba8 0238
.org 0xdbaa
	strh r4, [r0, #0]	@ 0000dbaa 0480
.org 0xdbac
	subs r0, #2	@ 0000dbac 0238
.org 0xdbae
	strh r4, [r0, #0]	@ 0000dbae 0480
.org 0xdbb0
	subs r0, #2	@ 0000dbb0 0238
.org 0xdbb2
	strh r4, [r0, #0]	@ 0000dbb2 0480
.org 0xdbb4
	subs r0, #2	@ 0000dbb4 0238
.org 0xdbb6
	strh r4, [r0, #0]	@ 0000dbb6 0480
.org 0xdbb8
	adds r1, r5, #0	@ 0000dbb8 291c
.org 0xdbba
	adds r1, #128	@ 0000dbba 8031
.org 0xdbbc
	adds r0, #28	@ 0000dbbc 1c30
.org 0xdbbe
	str r4, [r0, #0]	@ 0000dbbe 0460
.org 0xdbc0
	str r4, [r1, #0]	@ 0000dbc0 0c60
.org 0xdbc2
	str r4, [r5, #124]	@ 0000dbc2 ec67
.org 0xdbc4
	str r4, [r5, #120]	@ 0000dbc4 ac67
.org 0xdbc6
	str r4, [r5, #116]	@ 0000dbc6 6c67
.org 0xdbc8
	ldr r0, [pc, #52]	@ 0000dbc8 0d48
.org 0xdbca
	ldr r1, [pc, #56]	@ 0000dbca 0e49
.org 0xdbcc
	adds r0, r0, r1	@ 0000dbcc 4018
.org 0xdbce
	ldrb r1, [r0, #0]	@ 0000dbce 0178
.org 0xdbd0
	movs r0, #15	@ 0000dbd0 0f20
.org 0xdbd2
	ands r0, r1	@ 0000dbd2 0840
.org 0xdbd4
	cmp r0, #3	@ 0000dbd4 0328
.org 0xdbd6
	bne.n 0xdc10	@ 0000dbd6 1bd1
.org 0xdbd8
	ldr r0, [pc, #44]	@ 0000dbd8 0b48
.org 0xdbda
	ldr r0, [r0, #0]	@ 0000dbda 0068
.org 0xdbdc
	ldr r1, [pc, #44]	@ 0000dbdc 0b49
.org 0xdbde
	adds r0, r0, r1	@ 0000dbde 4018
.org 0xdbe0
	ldrh r2, [r6, #0]	@ 0000dbe0 3288
.org 0xdbe2
	movs r1, #248	@ 0000dbe2 f821
.org 0xdbe4
	lsls r1, r1, #5	@ 0000dbe4 4901
.org 0xdbe6
	ands r1, r2	@ 0000dbe6 1140
.org 0xdbe8
	lsls r1, r1, #3	@ 0000dbe8 c900
.org 0xdbea
	movs r2, #192	@ 0000dbea c022
.org 0xdbec
	lsls r2, r2, #19	@ 0000dbec d204
.org 0xdbee
	adds r1, r1, r2	@ 0000dbee 8918
.org 0xdbf0
	movs r2, #128	@ 0000dbf0 8022
.org 0xdbf2
	lsls r2, r2, #2	@ 0000dbf2 9200
.org 0xdbf4
	bl 0x128be0	@ 0000dbf4 1af1f4ff
.org 0xdbf8
	b.n 0xdc30	@ 0000dbf8 1ae0
.org 0xdbfa
	.byte 0x00	@ 0000dbfa data
.org 0xdbfb
	.byte 0x00	@ 0000dbfb data
.org 0xdbfc
	.byte 0x04,0x0a,0x00,0x02	@ 0000dbfc data
.org 0xdc00
	.byte 0xb0,0x0a,0x00,0x02	@ 0000dc00 data
.org 0xdc04
	.byte 0x10,0xc0,0x02,0x00	@ 0000dc04 data
.org 0xdc08
	.byte 0xdc,0xc0,0xb2,0x08	@ 0000dc08 data
.org 0xdc0c
	.byte 0xe4,0xc0,0xb2,0x08	@ 0000dc0c data
.org 0xdc10
	ldr r0, [pc, #84]	@ 0000dc10 1548
.org 0xdc12
	ldr r0, [r0, #0]	@ 0000dc12 0068
.org 0xdc14
	ldr r1, [pc, #84]	@ 0000dc14 1549
.org 0xdc16
	adds r0, r0, r1	@ 0000dc16 4018
.org 0xdc18
	ldrh r2, [r6, #0]	@ 0000dc18 3288
.org 0xdc1a
	movs r1, #248	@ 0000dc1a f821
.org 0xdc1c
	lsls r1, r1, #5	@ 0000dc1c 4901
.org 0xdc1e
	ands r1, r2	@ 0000dc1e 1140
.org 0xdc20
	lsls r1, r1, #3	@ 0000dc20 c900
.org 0xdc22
	movs r2, #192	@ 0000dc22 c022
.org 0xdc24
	lsls r2, r2, #19	@ 0000dc24 d204
.org 0xdc26
	adds r1, r1, r2	@ 0000dc26 8918
.org 0xdc28
	movs r2, #128	@ 0000dc28 8022
.org 0xdc2a
	lsls r2, r2, #2	@ 0000dc2a 9200
.org 0xdc2c
	bl 0x128be0	@ 0000dc2c 1af1d8ff
.org 0xdc30
	ldrb r0, [r5, #14]	@ 0000dc30 a87b
.org 0xdc32
	adds r0, #1	@ 0000dc32 0130
.org 0xdc34
	strb r0, [r5, #14]	@ 0000dc34 a873
.org 0xdc36
	adds r1, r5, #0	@ 0000dc36 291c
.org 0xdc38
	adds r1, #104	@ 0000dc38 6831
.org 0xdc3a
	ldrh r0, [r1, #0]	@ 0000dc3a 0888
.org 0xdc3c
	adds r0, #12	@ 0000dc3c 0c30
.org 0xdc3e
	strh r0, [r1, #0]	@ 0000dc3e 0880
.org 0xdc40
	adds r1, #2	@ 0000dc40 0231
.org 0xdc42
	ldrh r0, [r1, #0]	@ 0000dc42 0888
.org 0xdc44
	adds r0, #9	@ 0000dc44 0930
.org 0xdc46
	strh r0, [r1, #0]	@ 0000dc46 0880
.org 0xdc48
	adds r1, #2	@ 0000dc48 0231
.org 0xdc4a
	ldrh r0, [r1, #0]	@ 0000dc4a 0888
.org 0xdc4c
	adds r0, #5	@ 0000dc4c 0530
.org 0xdc4e
	strh r0, [r1, #0]	@ 0000dc4e 0880
