@ FUN_080faaac  entry 0x080faaac  size 206
.thumb
.org 0xfaaac
FUN_080faaac:
	push {r4, r5, lr}	@ 000faaac 30b5
.org 0xfaaae
	adds r4, r0, #0	@ 000faaae 041c
.org 0xfaab0
	adds r0, #140	@ 000faab0 8c30
.org 0xfaab2
	ldr r0, [r0, #0]	@ 000faab2 0068
.org 0xfaab4
	movs r1, #129	@ 000faab4 8121
.org 0xfaab6
	lsls r1, r1, #2	@ 000faab6 8900
.org 0xfaab8
	ands r0, r1	@ 000faab8 0840
.org 0xfaaba
	cmp r0, #0	@ 000faaba 0028
.org 0xfaabc
	beq.n 0xfaadc	@ 000faabc 0ed0
.org 0xfaabe
	ldr r1, [pc, #24]	@ 000faabe 0649
.org 0xfaac0
	ldrb r0, [r4, #9]	@ 000faac0 607a
.org 0xfaac2
	lsls r0, r0, #2	@ 000faac2 8000
.org 0xfaac4
	adds r0, r0, r1	@ 000faac4 4018
.org 0xfaac6
	movs r1, #2	@ 000faac6 0221
.org 0xfaac8
	str r1, [r4, #12]	@ 000faac8 e160
.org 0xfaaca
	ldr r0, [r0, #0]	@ 000faaca 0068
.org 0xfaacc
	ldr r0, [r0, #8]	@ 000faacc 8068
.org 0xfaace
	str r0, [r4, #20]	@ 000faace 6061
.org 0xfaad0
	adds r0, r4, #0	@ 000faad0 201c
.org 0xfaad2
	bl 0xfab8c	@ 000faad2 00f05bf8
.org 0xfaad6
	b.n 0xfab82	@ 000faad6 54e0
.org 0xfaad8
	.byte 0xfc,0x92,0x86,0x08	@ 000faad8 data
.org 0xfaadc
	adds r0, r4, #0	@ 000faadc 201c
.org 0xfaade
	bl 0x1cff0	@ 000faade 22f787fa
.org 0xfaae2
	ldrb r0, [r4, #13]	@ 000faae2 607b
.org 0xfaae4
	cmp r0, #0	@ 000faae4 0028
.org 0xfaae6
	bne.n 0xfab16	@ 000faae6 16d1
.org 0xfaae8
	ldrb r1, [r4, #18]	@ 000faae8 a17c
.org 0xfaaea
	movs r0, #7	@ 000faaea 0720
.org 0xfaaec
	ands r0, r1	@ 000faaec 0840
.org 0xfaaee
	cmp r0, #0	@ 000faaee 0028
.org 0xfaaf0
	bne.n 0xfab00	@ 000faaf0 06d1
.org 0xfaaf2
	adds r0, r4, #0	@ 000faaf2 201c
.org 0xfaaf4
	adds r0, #84	@ 000faaf4 5430
.org 0xfaaf6
	movs r1, #1	@ 000faaf6 0121
.org 0xfaaf8
	movs r2, #0	@ 000faaf8 0022
.org 0xfaafa
	movs r3, #0	@ 000faafa 0023
.org 0xfaafc
	bl 0xcb0bc	@ 000faafc d0f7defa
.org 0xfab00
	ldrb r0, [r4, #18]	@ 000fab00 a07c
.org 0xfab02
	subs r0, #1	@ 000fab02 0138
.org 0xfab04
	strb r0, [r4, #18]	@ 000fab04 a074
.org 0xfab06
	lsls r0, r0, #24	@ 000fab06 0006
.org 0xfab08
	lsrs r0, r0, #24	@ 000fab08 000e
.org 0xfab0a
	cmp r0, #255	@ 000fab0a ff28
.org 0xfab0c
	bne.n 0xfab82	@ 000fab0c 39d1
.org 0xfab0e
	ldrb r0, [r4, #13]	@ 000fab0e 607b
.org 0xfab10
	adds r0, #1	@ 000fab10 0130
.org 0xfab12
	strb r0, [r4, #13]	@ 000fab12 6073
.org 0xfab14
	b.n 0xfab82	@ 000fab14 35e0
.org 0xfab16
	ldrb r5, [r4, #14]	@ 000fab16 a57b
.org 0xfab18
	cmp r5, #0	@ 000fab18 002d
.org 0xfab1a
	bne.n 0xfab82	@ 000fab1a 32d1
.org 0xfab1c
	ldr r0, [r4, #88]	@ 000fab1c a06d
.org 0xfab1e
	ldr r1, [r4, #96]	@ 000fab1e 216e
.org 0xfab20
	adds r0, r0, r1	@ 000fab20 4018
.org 0xfab22
	str r0, [r4, #88]	@ 000fab22 a065
.org 0xfab24
	adds r1, #64	@ 000fab24 4031
.org 0xfab26
	str r1, [r4, #96]	@ 000fab26 2166
.org 0xfab28
	movs r0, #224	@ 000fab28 e020
.org 0xfab2a
	lsls r0, r0, #3	@ 000fab2a c000
.org 0xfab2c
	cmp r1, r0	@ 000fab2c 8142
.org 0xfab2e
	ble.n 0xfab32	@ 000fab2e 00dd
.org 0xfab30
	str r0, [r4, #96]	@ 000fab30 2066
.org 0xfab32
	ldr r0, [r4, #84]	@ 000fab32 606d
.org 0xfab34
	ldr r1, [r4, #88]	@ 000fab34 a16d
.org 0xfab36
	movs r2, #168	@ 000fab36 a822
.org 0xfab38
	lsls r2, r2, #5	@ 000fab38 5201
.org 0xfab3a
	adds r1, r1, r2	@ 000fab3a 8918
.org 0xfab3c
	bl 0x7c7c	@ 000fab3c 0df79ef8
.org 0xfab40
	lsls r0, r0, #16	@ 000fab40 0004
.org 0xfab42
	cmp r0, #0	@ 000fab42 0028
.org 0xfab44
	beq.n 0xfab78	@ 000fab44 18d0
.org 0xfab46
	movs r0, #168	@ 000fab46 a820
.org 0xfab48
	bl 0x2b10	@ 000fab48 07f7e2ff
.org 0xfab4c
	ldr r0, [r4, #84]	@ 000fab4c 606d
.org 0xfab4e
	ldr r1, [r4, #88]	@ 000fab4e a16d
.org 0xfab50
	bl 0x8534	@ 000fab50 0df7f0fc
.org 0xfab54
	ldr r1, [pc, #24]	@ 000fab54 0649
.org 0xfab56
	adds r0, r0, r1	@ 000fab56 4018
.org 0xfab58
	str r0, [r4, #88]	@ 000fab58 a065
.org 0xfab5a
	adds r0, r4, #0	@ 000fab5a 201c
.org 0xfab5c
	adds r0, #116	@ 000fab5c 7430
.org 0xfab5e
	ldr r1, [pc, #20]	@ 000fab5e 0549
.org 0xfab60
	bl 0x5784	@ 000fab60 0af710fe
.org 0xfab64
	str r5, [r4, #96]	@ 000fab64 2566
.org 0xfab66
	ldrb r0, [r4, #14]	@ 000fab66 a07b
.org 0xfab68
	adds r0, #1	@ 000fab68 0130
.org 0xfab6a
	strb r0, [r4, #14]	@ 000fab6a a073
.org 0xfab6c
	b.n 0xfab82	@ 000fab6c 09e0
.org 0xfab6e
	.byte 0x00	@ 000fab6e data
.org 0xfab6f
	.byte 0x00	@ 000fab6f data
.org 0xfab70
	.byte 0x00,0xeb,0xff,0xff	@ 000fab70 data
.org 0xfab74
	.byte 0x40,0xa8,0x86,0x08	@ 000fab74 data
.org 0xfab78
	adds r0, r4, #0	@ 000fab78 201c
