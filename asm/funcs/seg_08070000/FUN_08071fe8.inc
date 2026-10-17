@ FUN_08071fe8  entry 0x08071fe8  size 218
.thumb
.org 0x71fe8
FUN_08071fe8:
	push {r4, r5, r6, lr}	@ 00071fe8 70b5
.org 0x71fea
	adds r6, r0, #0	@ 00071fea 061c
.org 0x71fec
	ldrb r0, [r6, #15]	@ 00071fec f07b
.org 0x71fee
	cmp r0, #0	@ 00071fee 0028
.org 0x71ff0
	bne.n 0x72008	@ 00071ff0 0ad1
.org 0x71ff2
	adds r0, r6, #0	@ 00071ff2 301c
.org 0x71ff4
	movs r1, #14	@ 00071ff4 0e21
.org 0x71ff6
	bl 0x736c4	@ 00071ff6 01f065fb
.org 0x71ffa
	movs r0, #16	@ 00071ffa 1020
.org 0x71ffc
	strb r0, [r6, #18]	@ 00071ffc b074
.org 0x71ffe
	movs r0, #1	@ 00071ffe 0120
.org 0x72000
	strb r0, [r6, #19]	@ 00072000 f074
.org 0x72002
	ldrb r0, [r6, #15]	@ 00072002 f07b
.org 0x72004
	adds r0, #1	@ 00072004 0130
.org 0x72006
	strb r0, [r6, #15]	@ 00072006 f073
.org 0x72008
	adds r0, r6, #0	@ 00072008 301c
.org 0x7200a
	bl 0x1cff0	@ 0007200a aaf7f1ff
.org 0x7200e
	adds r0, r6, #0	@ 0007200e 301c
.org 0x72010
	adds r0, #116	@ 00072010 7430
.org 0x72012
	ldr r4, [pc, #116]	@ 00072012 1d4c
.org 0x72014
	ldr r3, [pc, #116]	@ 00072014 1d4b
.org 0x72016
	adds r1, r6, #0	@ 00072016 311c
.org 0x72018
	adds r1, #184	@ 00072018 b831
.org 0x7201a
	ldrb r2, [r1, #0]	@ 0007201a 0a78
.org 0x7201c
	lsls r1, r2, #1	@ 0007201c 5100
.org 0x7201e
	adds r1, r1, r3	@ 0007201e c918
.org 0x72020
	ldrh r1, [r1, #0]	@ 00072020 0988
.org 0x72022
	lsls r1, r1, #2	@ 00072022 8900
.org 0x72024
	adds r1, r1, r4	@ 00072024 0919
.org 0x72026
	adds r3, r6, #0	@ 00072026 331c
.org 0x72028
	adds r3, #113	@ 00072028 7133
.org 0x7202a
	movs r5, #0	@ 0007202a 0025
.org 0x7202c
	ldrsb r5, [r3, r5]	@ 0007202c 5d57
.org 0x7202e
	ldr r1, [r1, #0]	@ 0007202e 0968
.org 0x72030
	lsls r3, r5, #2	@ 00072030 ab00
.org 0x72032
	adds r3, r3, r1	@ 00072032 5b18
.org 0x72034
	ldr r4, [pc, #88]	@ 00072034 164c
.org 0x72036
	adds r1, r6, #0	@ 00072036 311c
.org 0x72038
	adds r1, #185	@ 00072038 b931
.org 0x7203a
	ldrb r1, [r1, #0]	@ 0007203a 0978
.org 0x7203c
	lsls r1, r1, #2	@ 0007203c 8900
.org 0x7203e
	adds r1, r1, r4	@ 0007203e 0919
.org 0x72040
	ldr r1, [r1, #0]	@ 00072040 0968
.org 0x72042
	lsls r2, r2, #2	@ 00072042 9200
.org 0x72044
	adds r2, r2, r1	@ 00072044 5218
.org 0x72046
	ldr r1, [r2, #0]	@ 00072046 1168
.org 0x72048
	adds r1, r1, r5	@ 00072048 4919
.org 0x7204a
	ldrb r1, [r1, #0]	@ 0007204a 0978
.org 0x7204c
	lsls r2, r1, #1	@ 0007204c 4a00
.org 0x7204e
	adds r2, r2, r1	@ 0007204e 5218
.org 0x72050
	lsls r2, r2, #3	@ 00072050 d200
.org 0x72052
	ldr r1, [r3, #0]	@ 00072052 1968
.org 0x72054
	adds r1, r1, r2	@ 00072054 8918
.org 0x72056
	bl 0x5784	@ 00072056 93f795fb
.org 0x7205a
	ldrb r0, [r6, #18]	@ 0007205a b07c
.org 0x7205c
	cmp r0, #0	@ 0007205c 0028
.org 0x7205e
	beq.n 0x72064	@ 0007205e 01d0
.org 0x72060
	subs r0, #1	@ 00072060 0138
.org 0x72062
	strb r0, [r6, #18]	@ 00072062 b074
.org 0x72064
	ldrb r0, [r6, #19]	@ 00072064 f07c
.org 0x72066
	cmp r0, #0	@ 00072066 0028
.org 0x72068
	beq.n 0x720b0	@ 00072068 22d0
.org 0x7206a
	ldr r0, [r6, #88]	@ 0007206a b06d
.org 0x7206c
	ldr r1, [r6, #96]	@ 0007206c 316e
.org 0x7206e
	adds r0, r0, r1	@ 0007206e 4018
.org 0x72070
	str r0, [r6, #88]	@ 00072070 b065
.org 0x72072
	adds r0, r6, #0	@ 00072072 301c
.org 0x72074
	bl 0x737e8	@ 00072074 01f0b8fb
.org 0x72078
	cmp r0, #0	@ 00072078 0028
.org 0x7207a
	beq.n 0x72094	@ 0007207a 0bd0
.org 0x7207c
	adds r0, r6, #0	@ 0007207c 301c
.org 0x7207e
	bl 0x739cc	@ 0007207e 01f0a5fc
.org 0x72082
	movs r0, #0	@ 00072082 0020
.org 0x72084
	str r0, [r6, #96]	@ 00072084 3066
.org 0x72086
	b.n 0x720a6	@ 00072086 0ee0
.org 0x72088
	.byte 0x08,0xcb,0x85,0x08	@ 00072088 data
.org 0x7208c
	.byte 0x04,0xcc,0x85,0x08	@ 0007208c data
.org 0x72090
	.byte 0xfc,0xcb,0x85,0x08	@ 00072090 data
.org 0x72094
	ldr r0, [r6, #96]	@ 00072094 306e
.org 0x72096
	ldr r1, [r6, #104]	@ 00072096 b16e
.org 0x72098
	adds r0, r0, r1	@ 00072098 4018
.org 0x7209a
	str r0, [r6, #96]	@ 0007209a 3066
.org 0x7209c
	movs r1, #224	@ 0007209c e021
.org 0x7209e
	lsls r1, r1, #3	@ 0007209e c900
.org 0x720a0
	cmp r0, r1	@ 000720a0 8842
.org 0x720a2
	ble.n 0x720a6	@ 000720a2 00dd
.org 0x720a4
	str r1, [r6, #96]	@ 000720a4 3166
.org 0x720a6
	ldr r0, [r6, #96]	@ 000720a6 306e
.org 0x720a8
	cmp r0, #0	@ 000720a8 0028
.org 0x720aa
	blt.n 0x720b0	@ 000720aa 01db
.org 0x720ac
	movs r0, #0	@ 000720ac 0020
.org 0x720ae
	strb r0, [r6, #19]	@ 000720ae f074
.org 0x720b0
	adds r0, r6, #0	@ 000720b0 301c
.org 0x720b2
	adds r0, #115	@ 000720b2 7330
.org 0x720b4
	ldrb r0, [r0, #0]	@ 000720b4 0078
.org 0x720b6
	cmp r0, #3	@ 000720b6 0328
.org 0x720b8
	bne.n 0x720c8	@ 000720b8 06d1
.org 0x720ba
	ldrh r1, [r6, #18]	@ 000720ba 718a
.org 0x720bc
	cmp r1, #0	@ 000720bc 0029
.org 0x720be
	bne.n 0x720c8	@ 000720be 03d1
.org 0x720c0
	ldrb r0, [r6, #14]	@ 000720c0 b07b
