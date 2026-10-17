@ FUN_0801aef8  entry 0x0801aef8  size 340
.thumb
.org 0x1aef8
FUN_0801aef8:
	push {r4, r5, r6, r7, lr}	@ 0001aef8 f0b5
.org 0x1aefa
	adds r6, r0, #0	@ 0001aefa 061c
.org 0x1aefc
	ldrb r7, [r6, #14]	@ 0001aefc b77b
.org 0x1aefe
	cmp r7, #0	@ 0001aefe 002f
.org 0x1af00
	bne.n 0x1af60	@ 0001af00 2ed1
.org 0x1af02
	movs r4, #164	@ 0001af02 a424
.org 0x1af04
	ldr r0, [pc, #136]	@ 0001af04 2248
.org 0x1af06
	lsls r2, r4, #1	@ 0001af06 6200
.org 0x1af08
	adds r0, r0, r2	@ 0001af08 8018
.org 0x1af0a
	movs r1, #240	@ 0001af0a f021
.org 0x1af0c
	lsls r1, r1, #1	@ 0001af0c 4900
.org 0x1af0e
	strh r1, [r0, #0]	@ 0001af0e 0180
.org 0x1af10
	ldr r5, [pc, #128]	@ 0001af10 204d
.org 0x1af12
	adds r5, r5, r2	@ 0001af12 ad18
.org 0x1af14
	movs r0, #10	@ 0001af14 0a20
.org 0x1af16
	strh r0, [r5, #0]	@ 0001af16 2880
.org 0x1af18
	lsls r4, r4, #4	@ 0001af18 2401
.org 0x1af1a
	movs r0, #164	@ 0001af1a a420
.org 0x1af1c
	lsls r0, r0, #2	@ 0001af1c 8000
.org 0x1af1e
	adds r4, r4, r0	@ 0001af1e 2418
.org 0x1af20
	ldr r0, [pc, #116]	@ 0001af20 1d48
.org 0x1af22
	adds r0, r4, r0	@ 0001af22 2018
.org 0x1af24
	ldrh r2, [r0, #6]	@ 0001af24 c288
.org 0x1af26
	lsrs r2, r2, #6	@ 0001af26 9209
.org 0x1af28
	subs r1, r1, r2	@ 0001af28 891a
.org 0x1af2a
	lsls r1, r1, #5	@ 0001af2a 4901
.org 0x1af2c
	movs r2, #128	@ 0001af2c 8022
.org 0x1af2e
	lsls r2, r2, #9	@ 0001af2e 5202
.org 0x1af30
	adds r1, r1, r2	@ 0001af30 8918
.org 0x1af32
	bl 0x1d30	@ 0001af32 e6f7fdfe
.org 0x1af36
	ldr r0, [pc, #100]	@ 0001af36 1948
.org 0x1af38
	adds r4, r4, r0	@ 0001af38 2418
.org 0x1af3a
	ldrh r1, [r5, #0]	@ 0001af3a 2988
.org 0x1af3c
	ldrb r0, [r4, #7]	@ 0001af3c e079
.org 0x1af3e
	subs r1, r1, r0	@ 0001af3e 091a
.org 0x1af40
	lsls r1, r1, #5	@ 0001af40 4901
.org 0x1af42
	movs r0, #128	@ 0001af42 8020
.org 0x1af44
	lsls r0, r0, #2	@ 0001af44 8000
.org 0x1af46
	adds r1, r1, r0	@ 0001af46 0918
.org 0x1af48
	adds r0, r4, #0	@ 0001af48 201c
.org 0x1af4a
	bl 0x2208	@ 0001af4a e7f75df9
.org 0x1af4e
	str r7, [r6, #104]	@ 0001af4e b766
.org 0x1af50
	str r7, [r6, #108]	@ 0001af50 f766
.org 0x1af52
	str r7, [r6, #112]	@ 0001af52 3767
.org 0x1af54
	str r7, [r6, #116]	@ 0001af54 7767
.org 0x1af56
	str r7, [r6, #120]	@ 0001af56 b767
.org 0x1af58
	str r7, [r6, #124]	@ 0001af58 f767
.org 0x1af5a
	ldrb r0, [r6, #14]	@ 0001af5a b07b
.org 0x1af5c
	adds r0, #1	@ 0001af5c 0130
.org 0x1af5e
	strb r0, [r6, #14]	@ 0001af5e b073
.org 0x1af60
	ldr r0, [r6, #52]	@ 0001af60 706b
.org 0x1af62
	ldr r1, [pc, #60]	@ 0001af62 0f49
.org 0x1af64
	adds r0, r0, r1	@ 0001af64 4018
.org 0x1af66
	ldr r1, [pc, #60]	@ 0001af66 0f49
.org 0x1af68
	cmp r0, r1	@ 0001af68 8842
.org 0x1af6a
	bhi.n 0x1afb0	@ 0001af6a 21d8
.org 0x1af6c
	ldr r0, [r6, #104]	@ 0001af6c b06e
.org 0x1af6e
	cmp r0, #0	@ 0001af6e 0028
.org 0x1af70
	bne.n 0x1af7e	@ 0001af70 05d1
.org 0x1af72
	ldr r0, [pc, #52]	@ 0001af72 0d48
.org 0x1af74
	movs r1, #0	@ 0001af74 0021
.org 0x1af76
	movs r2, #3	@ 0001af76 0322
.org 0x1af78
	bl 0xf83fc	@ 0001af78 ddf040fa
.org 0x1af7c
	str r0, [r6, #104]	@ 0001af7c b066
.org 0x1af7e
	ldr r0, [r6, #108]	@ 0001af7e f06e
.org 0x1af80
	cmp r0, #0	@ 0001af80 0028
.org 0x1af82
	bne.n 0x1afcc	@ 0001af82 23d1
.org 0x1af84
	ldr r0, [pc, #36]	@ 0001af84 0948
.org 0x1af86
	movs r1, #0	@ 0001af86 0021
.org 0x1af88
	movs r2, #3	@ 0001af88 0322
.org 0x1af8a
	bl 0xf83fc	@ 0001af8a ddf037fa
.org 0x1af8e
	b.n 0x1afca	@ 0001af8e 1ce0
.org 0x1af90
	.byte 0x40,0xe0,0x02,0x02	@ 0001af90 data
.org 0x1af94
	.byte 0x40,0xde,0x02,0x02	@ 0001af94 data
.org 0x1af98
	.byte 0x00,0x40,0xc4,0x08	@ 0001af98 data
.org 0x1af9c
	.byte 0x0c,0x40,0xc4,0x08	@ 0001af9c data
.org 0x1afa0
	.byte 0xff,0xeb,0xff,0xff	@ 0001afa0 data
.org 0x1afa4
	.byte 0x0e,0x02,0x00,0x00	@ 0001afa4 data
.org 0x1afa8
	.byte 0x9c,0xb0,0x83,0x08	@ 0001afa8 data
.org 0x1afac
	.byte 0xa4,0xb0,0x83,0x08	@ 0001afac data
.org 0x1afb0
	ldr r0, [r6, #104]	@ 0001afb0 b06e
.org 0x1afb2
	cmp r0, #0	@ 0001afb2 0028
.org 0x1afb4
	beq.n 0x1afbe	@ 0001afb4 03d0
.org 0x1afb6
	bl 0xe954c	@ 0001afb6 cef0c9fa
.org 0x1afba
	movs r0, #0	@ 0001afba 0020
.org 0x1afbc
	str r0, [r6, #104]	@ 0001afbc b066
.org 0x1afbe
	ldr r0, [r6, #108]	@ 0001afbe f06e
.org 0x1afc0
	cmp r0, #0	@ 0001afc0 0028
.org 0x1afc2
	beq.n 0x1afcc	@ 0001afc2 03d0
.org 0x1afc4
	bl 0xe954c	@ 0001afc4 cef0c2fa
.org 0x1afc8
	movs r0, #0	@ 0001afc8 0020
.org 0x1afca
	str r0, [r6, #108]	@ 0001afca f066
.org 0x1afcc
	ldr r0, [r6, #52]	@ 0001afcc 706b
.org 0x1afce
	ldr r2, [pc, #48]	@ 0001afce 0c4a
.org 0x1afd0
	adds r0, r0, r2	@ 0001afd0 8018
.org 0x1afd2
	movs r1, #239	@ 0001afd2 ef21
.org 0x1afd4
	lsls r1, r1, #1	@ 0001afd4 4900
.org 0x1afd6
	cmp r0, r1	@ 0001afd6 8842
.org 0x1afd8
	bhi.n 0x1b00c	@ 0001afd8 18d8
.org 0x1afda
	ldr r0, [r6, #112]	@ 0001afda 306f
.org 0x1afdc
	cmp r0, #0	@ 0001afdc 0028
.org 0x1afde
	bne.n 0x1afec	@ 0001afde 05d1
.org 0x1afe0
	ldr r0, [pc, #32]	@ 0001afe0 0848
.org 0x1afe2
	movs r1, #0	@ 0001afe2 0021
.org 0x1afe4
	movs r2, #3	@ 0001afe4 0322
.org 0x1afe6
	bl 0xf83fc	@ 0001afe6 ddf009fa
.org 0x1afea
	str r0, [r6, #112]	@ 0001afea 3067
.org 0x1afec
	ldr r0, [r6, #116]	@ 0001afec 706f
.org 0x1afee
	cmp r0, #0	@ 0001afee 0028
.org 0x1aff0
	bne.n 0x1b028	@ 0001aff0 1ad1
.org 0x1aff2
	ldr r0, [pc, #20]	@ 0001aff2 0548
.org 0x1aff4
	movs r1, #0	@ 0001aff4 0021
.org 0x1aff6
	movs r2, #3	@ 0001aff6 0322
.org 0x1aff8
	bl 0xf83fc	@ 0001aff8 ddf000fa
.org 0x1affc
	b.n 0x1b026	@ 0001affc 13e0
.org 0x1affe
	.byte 0x00	@ 0001affe data
.org 0x1afff
	.byte 0x00	@ 0001afff data
.org 0x1b000
	.byte 0x5f,0xeb,0xff,0xff	@ 0001b000 data
.org 0x1b004
	.byte 0xac,0xb0,0x83,0x08	@ 0001b004 data
.org 0x1b008
	.byte 0xb4,0xb0,0x83,0x08	@ 0001b008 data
.org 0x1b00c
	ldr r0, [r6, #112]	@ 0001b00c 306f
.org 0x1b00e
	cmp r0, #0	@ 0001b00e 0028
.org 0x1b010
	beq.n 0x1b01a	@ 0001b010 03d0
.org 0x1b012
	bl 0xe954c	@ 0001b012 cef09bfa
.org 0x1b016
	movs r0, #0	@ 0001b016 0020
.org 0x1b018
	str r0, [r6, #112]	@ 0001b018 3067
.org 0x1b01a
	ldr r0, [r6, #116]	@ 0001b01a 706f
.org 0x1b01c
	cmp r0, #0	@ 0001b01c 0028
.org 0x1b01e
	beq.n 0x1b028	@ 0001b01e 03d0
.org 0x1b020
	bl 0xe954c	@ 0001b020 cef094fa
.org 0x1b024
	movs r0, #0	@ 0001b024 0020
.org 0x1b026
	str r0, [r6, #116]	@ 0001b026 7067
.org 0x1b028
	ldr r0, [r6, #52]	@ 0001b028 706b
.org 0x1b02a
	ldr r1, [pc, #44]	@ 0001b02a 0b49
.org 0x1b02c
	adds r0, r0, r1	@ 0001b02c 4018
.org 0x1b02e
	ldr r1, [pc, #44]	@ 0001b02e 0b49
.org 0x1b030
	cmp r0, r1	@ 0001b030 8842
.org 0x1b032
	bhi.n 0x1b068	@ 0001b032 19d8
.org 0x1b034
	ldr r0, [r6, #120]	@ 0001b034 b06f
.org 0x1b036
	cmp r0, #0	@ 0001b036 0028
.org 0x1b038
	bne.n 0x1b046	@ 0001b038 05d1
.org 0x1b03a
	ldr r0, [pc, #36]	@ 0001b03a 0948
.org 0x1b03c
	movs r1, #0	@ 0001b03c 0021
.org 0x1b03e
	movs r2, #3	@ 0001b03e 0322
.org 0x1b040
	bl 0xf83fc	@ 0001b040 ddf0dcf9
.org 0x1b044
	str r0, [r6, #120]	@ 0001b044 b067
.org 0x1b046
	ldr r0, [r6, #124]	@ 0001b046 f06f
.org 0x1b048
	cmp r0, #0	@ 0001b048 0028
.org 0x1b04a
	bne.n 0x1b084	@ 0001b04a 1bd1
