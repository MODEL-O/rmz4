@ FUN_08092954  entry 0x08092954  size 262
.thumb
.org 0x92954
FUN_08092954:
	push {r4, r5, r6, lr}	@ 00092954 70b5
.org 0x92956
	sub sp, #16	@ 00092956 84b0
.org 0x92958
	adds r4, r0, #0	@ 00092958 041c
.org 0x9295a
	ldrb r5, [r4, #14]	@ 0009295a a57b
.org 0x9295c
	cmp r5, #0	@ 0009295c 002d
.org 0x9295e
	beq.n 0x92966	@ 0009295e 02d0
.org 0x92960
	cmp r5, #1	@ 00092960 012d
.org 0x92962
	beq.n 0x92a1a	@ 00092962 5ad0
.org 0x92964
	b.n 0x92a60	@ 00092964 7ce0
.org 0x92966
	movs r6, #0	@ 00092966 0026
.org 0x92968
	ldr r0, [pc, #116]	@ 00092968 1d48
.org 0x9296a
	ldr r0, [r0, #0]	@ 0009296a 0068
.org 0x9296c
	ldr r0, [r0, #84]	@ 0009296c 406d
.org 0x9296e
	ldr r1, [r4, #84]	@ 0009296e 616d
.org 0x92970
	subs r0, r0, r1	@ 00092970 401a
.org 0x92972
	cmp r0, #0	@ 00092972 0028
.org 0x92974
	ble.n 0x92978	@ 00092974 00dd
.org 0x92976
	movs r6, #1	@ 00092976 0126
.org 0x92978
	lsls r0, r6, #8	@ 00092978 3002
.org 0x9297a
	subs r0, r1, r0	@ 0009297a 081a
.org 0x9297c
	str r0, [r4, #84]	@ 0009297c 6065
.org 0x9297e
	ldr r1, [pc, #100]	@ 0009297e 1949
.org 0x92980
	adds r0, r4, #0	@ 00092980 201c
.org 0x92982
	bl 0x1cf00	@ 00092982 8af7bdfa
.org 0x92986
	adds r0, r4, #0	@ 00092986 201c
.org 0x92988
	adds r0, #140	@ 00092988 8c30
.org 0x9298a
	str r5, [r0, #0]	@ 0009298a 0560
.org 0x9298c
	adds r0, #4	@ 0009298c 0430
.org 0x9298e
	str r5, [r0, #0]	@ 0009298e 0560
.org 0x92990
	adds r0, #4	@ 00092990 0430
.org 0x92992
	strb r5, [r0, #0]	@ 00092992 0570
.org 0x92994
	ldrb r1, [r4, #10]	@ 00092994 a17a
.org 0x92996
	movs r0, #251	@ 00092996 fb20
.org 0x92998
	ands r0, r1	@ 00092998 0840
.org 0x9299a
	strb r0, [r4, #10]	@ 0009299a a072
.org 0x9299c
	ldr r0, [r4, #84]	@ 0009299c 606d
.org 0x9299e
	str r0, [sp, #8]	@ 0009299e 0290
.org 0x929a0
	ldr r0, [r4, #88]	@ 000929a0 a06d
.org 0x929a2
	str r0, [sp, #12]	@ 000929a2 0390
.org 0x929a4
	movs r2, #128	@ 000929a4 8022
.org 0x929a6
	lsls r2, r2, #2	@ 000929a6 9200
.org 0x929a8
	movs r0, #0	@ 000929a8 0020
.org 0x929aa
	add r1, sp, #8	@ 000929aa 02a9
.org 0x929ac
	adds r3, r6, #0	@ 000929ac 331c
.org 0x929ae
	bl 0xd0dc4	@ 000929ae 3ef009fa
.org 0x929b2
	movs r1, #96	@ 000929b2 6021
.org 0x929b4
	lsls r0, r6, #1	@ 000929b4 7000
.org 0x929b6
	adds r0, r0, r6	@ 000929b6 8019
.org 0x929b8
	lsls r0, r0, #6	@ 000929b8 8001
.org 0x929ba
	subs r0, r1, r0	@ 000929ba 081a
.org 0x929bc
	str r0, [sp, #8]	@ 000929bc 0290
.org 0x929be
	str r1, [sp, #12]	@ 000929be 0391
.org 0x929c0
	ldrb r0, [r4, #16]	@ 000929c0 207c
.org 0x929c2
	cmp r0, #0	@ 000929c2 0028
.org 0x929c4
	bne.n 0x929ec	@ 000929c4 12d1
.org 0x929c6
	adds r1, r4, #0	@ 000929c6 211c
.org 0x929c8
	adds r1, #84	@ 000929c8 5431
.org 0x929ca
	ldr r0, [pc, #28]	@ 000929ca 0748
.org 0x929cc
	str r0, [sp, #0]	@ 000929cc 0090
.org 0x929ce
	movs r0, #24	@ 000929ce 1820
.org 0x929d0
	str r0, [sp, #4]	@ 000929d0 0190
.org 0x929d2
	adds r0, r4, #0	@ 000929d2 201c
.org 0x929d4
	add r2, sp, #8	@ 000929d4 02aa
.org 0x929d6
	movs r3, #64	@ 000929d6 4023
.org 0x929d8
	bl 0xdc3d0	@ 000929d8 49f0fafc
.org 0x929dc
	b.n 0x92a02	@ 000929dc 11e0
.org 0x929de
	.byte 0x00	@ 000929de data
.org 0x929df
	.byte 0x00	@ 000929df data
.org 0x929e0
	.byte 0xf0,0xdb,0x02,0x02	@ 000929e0 data
.org 0x929e4
	.byte 0x05,0x3f,0x00,0x00	@ 000929e4 data
.org 0x929e8
	.byte 0xc8,0x04,0x86,0x08	@ 000929e8 data
.org 0x929ec
	adds r1, r4, #0	@ 000929ec 211c
.org 0x929ee
	adds r1, #84	@ 000929ee 5431
.org 0x929f0
	ldr r0, [pc, #116]	@ 000929f0 1d48
.org 0x929f2
	str r0, [sp, #0]	@ 000929f2 0090
.org 0x929f4
	movs r0, #24	@ 000929f4 1820
.org 0x929f6
	str r0, [sp, #4]	@ 000929f6 0190
.org 0x929f8
	adds r0, r4, #0	@ 000929f8 201c
.org 0x929fa
	add r2, sp, #8	@ 000929fa 02aa
.org 0x929fc
	movs r3, #64	@ 000929fc 4023
.org 0x929fe
	bl 0xdc458	@ 000929fe 49f02bfd
.org 0x92a02
	ldr r0, [sp, #8]	@ 00092a02 0298
.org 0x92a04
	lsrs r1, r0, #31	@ 00092a04 c10f
.org 0x92a06
	adds r0, r0, r1	@ 00092a06 4018
.org 0x92a08
	asrs r0, r0, #1	@ 00092a08 4010
.org 0x92a0a
	str r0, [r4, #92]	@ 00092a0a e065
.org 0x92a0c
	movs r0, #0	@ 00092a0c 0020
.org 0x92a0e
	str r0, [r4, #96]	@ 00092a0e 2066
.org 0x92a10
	movs r0, #24	@ 00092a10 1820
.org 0x92a12
	strb r0, [r4, #18]	@ 00092a12 a074
.org 0x92a14
	ldrb r0, [r4, #14]	@ 00092a14 a07b
.org 0x92a16
	adds r0, #1	@ 00092a16 0130
.org 0x92a18
	strb r0, [r4, #14]	@ 00092a18 a073
.org 0x92a1a
	ldr r0, [r4, #84]	@ 00092a1a 606d
.org 0x92a1c
	ldr r1, [r4, #92]	@ 00092a1c e16d
.org 0x92a1e
	adds r0, r0, r1	@ 00092a1e 4018
.org 0x92a20
	str r0, [r4, #84]	@ 00092a20 6065
.org 0x92a22
	ldr r0, [r4, #96]	@ 00092a22 206e
.org 0x92a24
	adds r0, #32	@ 00092a24 2030
.org 0x92a26
	str r0, [r4, #96]	@ 00092a26 2066
.org 0x92a28
	movs r1, #224	@ 00092a28 e021
.org 0x92a2a
	lsls r1, r1, #3	@ 00092a2a c900
.org 0x92a2c
	cmp r0, r1	@ 00092a2c 8842
.org 0x92a2e
	ble.n 0x92a32	@ 00092a2e 00dd
.org 0x92a30
	str r1, [r4, #96]	@ 00092a30 2166
.org 0x92a32
	ldr r0, [r4, #88]	@ 00092a32 a06d
.org 0x92a34
	ldr r1, [r4, #96]	@ 00092a34 216e
.org 0x92a36
	adds r0, r0, r1	@ 00092a36 4018
.org 0x92a38
	str r0, [r4, #88]	@ 00092a38 a065
.org 0x92a3a
	adds r0, r4, #0	@ 00092a3a 201c
.org 0x92a3c
	bl 0x1cff0	@ 00092a3c 8af7d8fa
.org 0x92a40
	ldrb r0, [r4, #18]	@ 00092a40 a07c
.org 0x92a42
	subs r0, #1	@ 00092a42 0138
.org 0x92a44
	strb r0, [r4, #18]	@ 00092a44 a074
.org 0x92a46
	lsls r0, r0, #24	@ 00092a46 0006
.org 0x92a48
	cmp r0, #0	@ 00092a48 0028
.org 0x92a4a
	beq.n 0x92a5a	@ 00092a4a 06d0
.org 0x92a4c
	ldr r0, [r4, #84]	@ 00092a4c 606d
.org 0x92a4e
	ldr r1, [r4, #88]	@ 00092a4e a16d
.org 0x92a50
	bl 0x7c7c	@ 00092a50 75f714f9
.org 0x92a54
	lsls r0, r0, #16	@ 00092a54 0004
.org 0x92a56
	cmp r0, #0	@ 00092a56 0028
.org 0x92a58
	beq.n 0x92a60	@ 00092a58 02d0
