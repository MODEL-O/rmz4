@ FUN_0802ee58  entry 0x0802ee58  size 556
.thumb
.org 0x2ee58
FUN_0802ee58:
	push {r4, r5, r6, r7, lr}	@ 0002ee58 f0b5
.org 0x2ee5a
	mov r7, r9	@ 0002ee5a 4f46
.org 0x2ee5c
	mov r6, r8	@ 0002ee5c 4646
.org 0x2ee5e
	push {r6, r7}	@ 0002ee5e c0b4
.org 0x2ee60
	adds r7, r0, #0	@ 0002ee60 071c
.org 0x2ee62
	mov r8, r1	@ 0002ee62 8846
.org 0x2ee64
	ldrb r1, [r7, #10]	@ 0002ee64 b97a
.org 0x2ee66
	movs r0, #16	@ 0002ee66 1020
.org 0x2ee68
	ands r0, r1	@ 0002ee68 0840
.org 0x2ee6a
	cmp r0, #0	@ 0002ee6a 0028
.org 0x2ee6c
	beq.n 0x2ee7c	@ 0002ee6c 06d0
.org 0x2ee6e
	mov r1, r8	@ 0002ee6e 4146
.org 0x2ee70
	movs r2, #0	@ 0002ee70 0022
.org 0x2ee72
	ldrsh r0, [r1, r2]	@ 0002ee72 885e
.org 0x2ee74
	ldr r2, [r7, #84]	@ 0002ee74 7a6d
.org 0x2ee76
	subs r0, r2, r0	@ 0002ee76 101a
.org 0x2ee78
	ldrh r1, [r1, #4]	@ 0002ee78 8988
.org 0x2ee7a
	b.n 0x2ee88	@ 0002ee7a 05e0
.org 0x2ee7c
	mov r3, r8	@ 0002ee7c 4346
.org 0x2ee7e
	movs r1, #0	@ 0002ee7e 0021
.org 0x2ee80
	ldrsh r0, [r3, r1]	@ 0002ee80 585e
.org 0x2ee82
	ldr r2, [r7, #84]	@ 0002ee82 7a6d
.org 0x2ee84
	adds r0, r2, r0	@ 0002ee84 1018
.org 0x2ee86
	ldrh r1, [r3, #4]	@ 0002ee86 9988
.org 0x2ee88
	lsls r1, r1, #16	@ 0002ee88 0904
.org 0x2ee8a
	asrs r1, r1, #17	@ 0002ee8a 4914
.org 0x2ee8c
	adds r4, r0, r1	@ 0002ee8c 4418
.org 0x2ee8e
	subs r5, r0, r1	@ 0002ee8e 451a
.org 0x2ee90
	adds r0, r2, #0	@ 0002ee90 101c
.org 0x2ee92
	ldr r1, [r7, #88]	@ 0002ee92 b96d
.org 0x2ee94
	adds r1, #1	@ 0002ee94 0131
.org 0x2ee96
	bl 0x7d28	@ 0002ee96 d8f747ff
.org 0x2ee9a
	movs r1, #15	@ 0002ee9a 0f21
.org 0x2ee9c
	ands r1, r0	@ 0002ee9c 0140
.org 0x2ee9e
	cmp r1, #1	@ 0002ee9e 0129
.org 0x2eea0
	bne.n 0x2eeb6	@ 0002eea0 09d1
.org 0x2eea2
	mov r2, r8	@ 0002eea2 4246
.org 0x2eea4
	movs r3, #2	@ 0002eea4 0223
.org 0x2eea6
	ldrsh r0, [r2, r3]	@ 0002eea6 d05e
.org 0x2eea8
	ldr r1, [r7, #88]	@ 0002eea8 b96d
.org 0x2eeaa
	adds r1, r1, r0	@ 0002eeaa 0918
.org 0x2eeac
	ldrh r0, [r2, #6]	@ 0002eeac d088
.org 0x2eeae
	lsls r0, r0, #16	@ 0002eeae 0004
.org 0x2eeb0
	asrs r0, r0, #17	@ 0002eeb0 4014
.org 0x2eeb2
	adds r6, r1, r0	@ 0002eeb2 0e18
.org 0x2eeb4
	b.n 0x2eec0	@ 0002eeb4 04e0
.org 0x2eeb6
	mov r0, r8	@ 0002eeb6 4046
.org 0x2eeb8
	movs r2, #2	@ 0002eeb8 0222
.org 0x2eeba
	ldrsh r1, [r0, r2]	@ 0002eeba 815e
.org 0x2eebc
	ldr r0, [r7, #88]	@ 0002eebc b86d
.org 0x2eebe
	adds r6, r0, r1	@ 0002eebe 4618
.org 0x2eec0
	adds r0, r4, #0	@ 0002eec0 201c
.org 0x2eec2
	adds r1, r6, #0	@ 0002eec2 311c
.org 0x2eec4
	bl 0x8264	@ 0002eec4 d9f7cef9
.org 0x2eec8
	cmp r0, #0	@ 0002eec8 0028
.org 0x2eeca
	blt.n 0x2eee8	@ 0002eeca 0ddb
.org 0x2eecc
	adds r0, r7, #0	@ 0002eecc 381c
.org 0x2eece
	adds r1, r4, #0	@ 0002eece 211c
.org 0x2eed0
	adds r2, r6, #0	@ 0002eed0 321c
.org 0x2eed2
	bl 0x2de7c	@ 0002eed2 fef7d3ff
.org 0x2eed6
	cmp r0, #0	@ 0002eed6 0028
.org 0x2eed8
	blt.n 0x2eee8	@ 0002eed8 06db
.org 0x2eeda
	movs r3, #190	@ 0002eeda be23
.org 0x2eedc
	lsls r3, r3, #1	@ 0002eedc 5b00
.org 0x2eede
	adds r0, r7, r3	@ 0002eede f818
.org 0x2eee0
	ldr r0, [r0, #0]	@ 0002eee0 0068
.org 0x2eee2
	subs r0, r0, r4	@ 0002eee2 001b
.org 0x2eee4
	cmp r0, #0	@ 0002eee4 0028
.org 0x2eee6
	bge.n 0x2ef2c	@ 0002eee6 21da
.org 0x2eee8
	adds r0, r0, r5	@ 0002eee8 4019
.org 0x2eeea
	mov r9, r0	@ 0002eeea 8146
.org 0x2eeec
	adds r1, r6, #0	@ 0002eeec 311c
.org 0x2eeee
	bl 0x7d28	@ 0002eeee d8f71bff
.org 0x2eef2
	lsls r0, r0, #16	@ 0002eef2 0004
.org 0x2eef4
	lsrs r1, r0, #16	@ 0002eef4 010c
.org 0x2eef6
	movs r0, #132	@ 0002eef6 8420
.org 0x2eef8
	lsls r0, r0, #8	@ 0002eef8 0002
.org 0x2eefa
	ands r0, r1	@ 0002eefa 0840
.org 0x2eefc
	cmp r0, #0	@ 0002eefc 0028
.org 0x2eefe
	bne.n 0x2ef2c	@ 0002eefe 15d1
.org 0x2ef00
	movs r0, #15	@ 0002ef00 0f20
.org 0x2ef02
	ands r1, r0	@ 0002ef02 0140
.org 0x2ef04
	cmp r1, #1	@ 0002ef04 0129
.org 0x2ef06
	bne.n 0x2ef0a	@ 0002ef06 00d1
.org 0x2ef08
	b.n 0x2f072	@ 0002ef08 b3e0
.org 0x2ef0a
	adds r0, r7, #0	@ 0002ef0a 381c
.org 0x2ef0c
	mov r1, r9	@ 0002ef0c 4946
.org 0x2ef0e
	adds r2, r6, #0	@ 0002ef0e 321c
.org 0x2ef10
	bl 0x2e2d0	@ 0002ef10 fff7def9
.org 0x2ef14
	lsls r0, r0, #16	@ 0002ef14 0004
.org 0x2ef16
	cmp r0, #0	@ 0002ef16 0028
.org 0x2ef18
	beq.n 0x2ef1c	@ 0002ef18 00d0
.org 0x2ef1a
	b.n 0x2f072	@ 0002ef1a aae0
.org 0x2ef1c
	movs r1, #188	@ 0002ef1c bc21
.org 0x2ef1e
	lsls r1, r1, #1	@ 0002ef1e 4900
.org 0x2ef20
	adds r0, r7, r1	@ 0002ef20 7818
.org 0x2ef22
	ldr r0, [r0, #0]	@ 0002ef22 0068
.org 0x2ef24
	subs r0, r0, r5	@ 0002ef24 401b
.org 0x2ef26
	cmp r0, #0	@ 0002ef26 0028
.org 0x2ef28
	ble.n 0x2ef2c	@ 0002ef28 00dd
.org 0x2ef2a
	b.n 0x2f072	@ 0002ef2a a2e0
.org 0x2ef2c
	adds r0, r5, #0	@ 0002ef2c 281c
.org 0x2ef2e
	adds r1, r6, #0	@ 0002ef2e 311c
.org 0x2ef30
	bl 0x8448	@ 0002ef30 d9f78afa
.org 0x2ef34
	cmp r0, #0	@ 0002ef34 0028
.org 0x2ef36
	bgt.n 0x2ef54	@ 0002ef36 0ddc
.org 0x2ef38
	adds r0, r7, #0	@ 0002ef38 381c
.org 0x2ef3a
	adds r1, r5, #0	@ 0002ef3a 291c
.org 0x2ef3c
	adds r2, r6, #0	@ 0002ef3c 321c
.org 0x2ef3e
	bl 0x2de7c	@ 0002ef3e fef79dff
.org 0x2ef42
	cmp r0, #0	@ 0002ef42 0028
.org 0x2ef44
	bgt.n 0x2ef54	@ 0002ef44 06dc
.org 0x2ef46
	movs r2, #188	@ 0002ef46 bc22
.org 0x2ef48
	lsls r2, r2, #1	@ 0002ef48 5200
.org 0x2ef4a
	adds r0, r7, r2	@ 0002ef4a b818
.org 0x2ef4c
	ldr r0, [r0, #0]	@ 0002ef4c 0068
.org 0x2ef4e
	subs r0, r0, r5	@ 0002ef4e 401b
.org 0x2ef50
	cmp r0, #0	@ 0002ef50 0028
.org 0x2ef52
	ble.n 0x2ef92	@ 0002ef52 1edd
.org 0x2ef54
	adds r0, r0, r4	@ 0002ef54 0019
.org 0x2ef56
	mov r9, r0	@ 0002ef56 8146
.org 0x2ef58
	adds r1, r6, #0	@ 0002ef58 311c
.org 0x2ef5a
	bl 0x7d28	@ 0002ef5a d8f7e5fe
.org 0x2ef5e
	lsls r0, r0, #16	@ 0002ef5e 0004
.org 0x2ef60
	lsrs r1, r0, #16	@ 0002ef60 010c
.org 0x2ef62
	movs r0, #132	@ 0002ef62 8420
.org 0x2ef64
	lsls r0, r0, #8	@ 0002ef64 0002
.org 0x2ef66
	ands r0, r1	@ 0002ef66 0840
.org 0x2ef68
	cmp r0, #0	@ 0002ef68 0028
.org 0x2ef6a
	bne.n 0x2ef92	@ 0002ef6a 12d1
.org 0x2ef6c
	movs r0, #15	@ 0002ef6c 0f20
.org 0x2ef6e
	ands r1, r0	@ 0002ef6e 0140
.org 0x2ef70
	cmp r1, #1	@ 0002ef70 0129
.org 0x2ef72
	beq.n 0x2f072	@ 0002ef72 7ed0
.org 0x2ef74
	adds r0, r7, #0	@ 0002ef74 381c
.org 0x2ef76
	mov r1, r9	@ 0002ef76 4946
.org 0x2ef78
	adds r2, r6, #0	@ 0002ef78 321c
.org 0x2ef7a
	bl 0x2e2d0	@ 0002ef7a fff7a9f9
.org 0x2ef7e
	lsls r0, r0, #16	@ 0002ef7e 0004
.org 0x2ef80
	cmp r0, #0	@ 0002ef80 0028
.org 0x2ef82
	bne.n 0x2f072	@ 0002ef82 76d1
.org 0x2ef84
	movs r3, #190	@ 0002ef84 be23
.org 0x2ef86
	lsls r3, r3, #1	@ 0002ef86 5b00
.org 0x2ef88
	adds r0, r7, r3	@ 0002ef88 f818
.org 0x2ef8a
	ldr r0, [r0, #0]	@ 0002ef8a 0068
.org 0x2ef8c
	subs r0, r0, r4	@ 0002ef8c 001b
.org 0x2ef8e
	cmp r0, #0	@ 0002ef8e 0028
.org 0x2ef90
	blt.n 0x2f072	@ 0002ef90 6fdb
.org 0x2ef92
	mov r1, r8	@ 0002ef92 4146
.org 0x2ef94
	movs r2, #2	@ 0002ef94 0222
.org 0x2ef96
	ldrsh r0, [r1, r2]	@ 0002ef96 885e
.org 0x2ef98
	ldr r1, [r7, #88]	@ 0002ef98 b96d
.org 0x2ef9a
	adds r1, r1, r0	@ 0002ef9a 0918
.org 0x2ef9c
	mov r3, r8	@ 0002ef9c 4346
.org 0x2ef9e
	ldrh r0, [r3, #6]	@ 0002ef9e d888
.org 0x2efa0
	lsls r0, r0, #16	@ 0002efa0 0004
.org 0x2efa2
	asrs r0, r0, #17	@ 0002efa2 4014
.org 0x2efa4
	subs r6, r1, r0	@ 0002efa4 0e1a
.org 0x2efa6
	adds r0, r4, #0	@ 0002efa6 201c
.org 0x2efa8
	adds r1, r6, #0	@ 0002efa8 311c
.org 0x2efaa
	bl 0x8264	@ 0002efaa d9f75bf9
.org 0x2efae
	cmp r0, #0	@ 0002efae 0028
.org 0x2efb0
	blt.n 0x2efce	@ 0002efb0 0ddb
.org 0x2efb2
	adds r0, r7, #0	@ 0002efb2 381c
.org 0x2efb4
	adds r1, r4, #0	@ 0002efb4 211c
.org 0x2efb6
	adds r2, r6, #0	@ 0002efb6 321c
.org 0x2efb8
	bl 0x2de7c	@ 0002efb8 fef760ff
.org 0x2efbc
	cmp r0, #0	@ 0002efbc 0028
.org 0x2efbe
	blt.n 0x2efce	@ 0002efbe 06db
.org 0x2efc0
	movs r1, #190	@ 0002efc0 be21
.org 0x2efc2
	lsls r1, r1, #1	@ 0002efc2 4900
.org 0x2efc4
	adds r0, r7, r1	@ 0002efc4 7818
.org 0x2efc6
	ldr r0, [r0, #0]	@ 0002efc6 0068
.org 0x2efc8
	subs r0, r0, r4	@ 0002efc8 001b
.org 0x2efca
	cmp r0, #0	@ 0002efca 0028
.org 0x2efcc
	bge.n 0x2f00c	@ 0002efcc 1eda
.org 0x2efce
	adds r0, r0, r5	@ 0002efce 4019
.org 0x2efd0
	mov r8, r0	@ 0002efd0 8046
.org 0x2efd2
	adds r1, r6, #0	@ 0002efd2 311c
.org 0x2efd4
	bl 0x7d28	@ 0002efd4 d8f7a8fe
.org 0x2efd8
	lsls r0, r0, #16	@ 0002efd8 0004
.org 0x2efda
	lsrs r1, r0, #16	@ 0002efda 010c
.org 0x2efdc
	movs r0, #132	@ 0002efdc 8420
.org 0x2efde
	lsls r0, r0, #8	@ 0002efde 0002
.org 0x2efe0
	ands r0, r1	@ 0002efe0 0840
.org 0x2efe2
	cmp r0, #0	@ 0002efe2 0028
.org 0x2efe4
	bne.n 0x2f00c	@ 0002efe4 12d1
.org 0x2efe6
	movs r0, #15	@ 0002efe6 0f20
.org 0x2efe8
	ands r1, r0	@ 0002efe8 0140
.org 0x2efea
	cmp r1, #1	@ 0002efea 0129
.org 0x2efec
	beq.n 0x2f072	@ 0002efec 41d0
.org 0x2efee
	adds r0, r7, #0	@ 0002efee 381c
.org 0x2eff0
	mov r1, r8	@ 0002eff0 4146
.org 0x2eff2
	adds r2, r6, #0	@ 0002eff2 321c
.org 0x2eff4
	bl 0x2e2d0	@ 0002eff4 fff76cf9
.org 0x2eff8
	lsls r0, r0, #16	@ 0002eff8 0004
.org 0x2effa
	cmp r0, #0	@ 0002effa 0028
.org 0x2effc
	bne.n 0x2f072	@ 0002effc 39d1
.org 0x2effe
	movs r2, #188	@ 0002effe bc22
.org 0x2f000
	lsls r2, r2, #1	@ 0002f000 5200
.org 0x2f002
	adds r0, r7, r2	@ 0002f002 b818
.org 0x2f004
	ldr r0, [r0, #0]	@ 0002f004 0068
.org 0x2f006
	subs r0, r0, r5	@ 0002f006 401b
.org 0x2f008
	cmp r0, #0	@ 0002f008 0028
.org 0x2f00a
	bgt.n 0x2f072	@ 0002f00a 32dc
.org 0x2f00c
	adds r0, r5, #0	@ 0002f00c 281c
.org 0x2f00e
	adds r1, r6, #0	@ 0002f00e 311c
.org 0x2f010
	bl 0x8448	@ 0002f010 d9f71afa
.org 0x2f014
	cmp r0, #0	@ 0002f014 0028
.org 0x2f016
	bgt.n 0x2f034	@ 0002f016 0ddc
.org 0x2f018
	adds r0, r7, #0	@ 0002f018 381c
.org 0x2f01a
	adds r1, r5, #0	@ 0002f01a 291c
.org 0x2f01c
	adds r2, r6, #0	@ 0002f01c 321c
.org 0x2f01e
	bl 0x2de7c	@ 0002f01e fef72dff
.org 0x2f022
	cmp r0, #0	@ 0002f022 0028
.org 0x2f024
	bgt.n 0x2f034	@ 0002f024 06dc
.org 0x2f026
	movs r3, #188	@ 0002f026 bc23
.org 0x2f028
	lsls r3, r3, #1	@ 0002f028 5b00
.org 0x2f02a
	adds r0, r7, r3	@ 0002f02a f818
.org 0x2f02c
	ldr r0, [r0, #0]	@ 0002f02c 0068
.org 0x2f02e
	subs r0, r0, r5	@ 0002f02e 401b
.org 0x2f030
	cmp r0, #0	@ 0002f030 0028
.org 0x2f032
	ble.n 0x2f076	@ 0002f032 20dd
.org 0x2f034
	adds r0, r0, r4	@ 0002f034 0019
.org 0x2f036
	mov r8, r0	@ 0002f036 8046
.org 0x2f038
	adds r1, r6, #0	@ 0002f038 311c
.org 0x2f03a
	bl 0x7d28	@ 0002f03a d8f775fe
.org 0x2f03e
	lsls r0, r0, #16	@ 0002f03e 0004
.org 0x2f040
	lsrs r1, r0, #16	@ 0002f040 010c
.org 0x2f042
	movs r0, #132	@ 0002f042 8420
.org 0x2f044
	lsls r0, r0, #8	@ 0002f044 0002
.org 0x2f046
	ands r0, r1	@ 0002f046 0840
.org 0x2f048
	cmp r0, #0	@ 0002f048 0028
.org 0x2f04a
	bne.n 0x2f076	@ 0002f04a 14d1
.org 0x2f04c
	movs r0, #15	@ 0002f04c 0f20
.org 0x2f04e
	ands r1, r0	@ 0002f04e 0140
.org 0x2f050
	cmp r1, #1	@ 0002f050 0129
.org 0x2f052
	beq.n 0x2f072	@ 0002f052 0ed0
.org 0x2f054
	adds r0, r7, #0	@ 0002f054 381c
.org 0x2f056
	mov r1, r8	@ 0002f056 4146
.org 0x2f058
	adds r2, r6, #0	@ 0002f058 321c
.org 0x2f05a
	bl 0x2e2d0	@ 0002f05a fff739f9
.org 0x2f05e
	lsls r0, r0, #16	@ 0002f05e 0004
.org 0x2f060
	cmp r0, #0	@ 0002f060 0028
.org 0x2f062
	bne.n 0x2f072	@ 0002f062 06d1
.org 0x2f064
	movs r1, #190	@ 0002f064 be21
.org 0x2f066
	lsls r1, r1, #1	@ 0002f066 4900
.org 0x2f068
	adds r0, r7, r1	@ 0002f068 7818
.org 0x2f06a
	ldr r0, [r0, #0]	@ 0002f06a 0068
.org 0x2f06c
	subs r0, r0, r4	@ 0002f06c 001b
.org 0x2f06e
	cmp r0, #0	@ 0002f06e 0028
.org 0x2f070
	bge.n 0x2f076	@ 0002f070 01da
.org 0x2f072
	movs r0, #0	@ 0002f072 0020
.org 0x2f074
	b.n 0x2f078	@ 0002f074 00e0
.org 0x2f076
	movs r0, #1	@ 0002f076 0120
.org 0x2f078
	pop {r3, r4}	@ 0002f078 18bc
.org 0x2f07a
	mov r8, r3	@ 0002f07a 9846
.org 0x2f07c
	mov r9, r4	@ 0002f07c a146
.org 0x2f07e
	pop {r4, r5, r6, r7}	@ 0002f07e f0bc
.org 0x2f080
	pop {r1}	@ 0002f080 02bc
.org 0x2f082
	bx r1	@ 0002f082 0847
