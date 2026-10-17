@ FUN_080ffbec  entry 0x080ffbec  size 344
.thumb
.org 0xffbec
FUN_080ffbec:
	push {r4, lr}	@ 000ffbec 10b5
.org 0xffbee
	sub sp, #8	@ 000ffbee 82b0
.org 0xffbf0
	adds r4, r0, #0	@ 000ffbf0 041c
.org 0xffbf2
	ldrb r0, [r4, #14]	@ 000ffbf2 a07b
.org 0xffbf4
	cmp r0, #1	@ 000ffbf4 0128
.org 0xffbf6
	beq.n 0xffc38	@ 000ffbf6 1fd0
.org 0xffbf8
	cmp r0, #1	@ 000ffbf8 0128
.org 0xffbfa
	bgt.n 0xffc02	@ 000ffbfa 02dc
.org 0xffbfc
	cmp r0, #0	@ 000ffbfc 0028
.org 0xffbfe
	beq.n 0xffc0e	@ 000ffbfe 06d0
.org 0xffc00
	b.n 0xffd4a	@ 000ffc00 a3e0
.org 0xffc02
	cmp r0, #2	@ 000ffc02 0228
.org 0xffc04
	beq.n 0xffc96	@ 000ffc04 47d0
.org 0xffc06
	cmp r0, #3	@ 000ffc06 0328
.org 0xffc08
	bne.n 0xffc0c	@ 000ffc08 00d1
.org 0xffc0a
	b.n 0xffd20	@ 000ffc0a 89e0
.org 0xffc0c
	b.n 0xffd4a	@ 000ffc0c 9de0
.org 0xffc0e
	ldrb r0, [r4, #16]	@ 000ffc0e 207c
.org 0xffc10
	cmp r0, #0	@ 000ffc10 0028
.org 0xffc12
	bne.n 0xffc1c	@ 000ffc12 03d1
.org 0xffc14
	ldr r0, [r4, #88]	@ 000ffc14 a06d
.org 0xffc16
	movs r1, #192	@ 000ffc16 c021
.org 0xffc18
	lsls r1, r1, #7	@ 000ffc18 c901
.org 0xffc1a
	b.n 0xffc2e	@ 000ffc1a 08e0
.org 0xffc1c
	cmp r0, #1	@ 000ffc1c 0128
.org 0xffc1e
	bne.n 0xffc28	@ 000ffc1e 03d1
.org 0xffc20
	ldr r0, [r4, #88]	@ 000ffc20 a06d
.org 0xffc22
	movs r1, #160	@ 000ffc22 a021
.org 0xffc24
	lsls r1, r1, #7	@ 000ffc24 c901
.org 0xffc26
	b.n 0xffc2e	@ 000ffc26 02e0
.org 0xffc28
	ldr r0, [r4, #88]	@ 000ffc28 a06d
.org 0xffc2a
	movs r1, #128	@ 000ffc2a 8021
.org 0xffc2c
	lsls r1, r1, #7	@ 000ffc2c c901
.org 0xffc2e
	adds r0, r0, r1	@ 000ffc2e 4018
.org 0xffc30
	str r0, [r4, #88]	@ 000ffc30 a065
.org 0xffc32
	ldrb r0, [r4, #14]	@ 000ffc32 a07b
.org 0xffc34
	adds r0, #1	@ 000ffc34 0130
.org 0xffc36
	strb r0, [r4, #14]	@ 000ffc36 a073
.org 0xffc38
	ldr r0, [pc, #36]	@ 000ffc38 0948
.org 0xffc3a
	adds r1, r4, #0	@ 000ffc3a 211c
.org 0xffc3c
	adds r1, #84	@ 000ffc3c 5431
.org 0xffc3e
	bl 0x1fb14	@ 000ffc3e 1ff769ff
.org 0xffc42
	movs r1, #240	@ 000ffc42 f021
.org 0xffc44
	lsls r1, r1, #8	@ 000ffc44 0902
.org 0xffc46
	cmp r0, r1	@ 000ffc46 8842
.org 0xffc48
	bls.n 0xffc68	@ 000ffc48 0ed9
.org 0xffc4a
	ldr r1, [pc, #24]	@ 000ffc4a 0649
.org 0xffc4c
	ldrb r0, [r4, #9]	@ 000ffc4c 607a
.org 0xffc4e
	lsls r0, r0, #2	@ 000ffc4e 8000
.org 0xffc50
	adds r0, r0, r1	@ 000ffc50 4018
.org 0xffc52
	movs r1, #2	@ 000ffc52 0221
.org 0xffc54
	str r1, [r4, #12]	@ 000ffc54 e160
.org 0xffc56
	ldr r0, [r0, #0]	@ 000ffc56 0068
.org 0xffc58
	ldr r0, [r0, #8]	@ 000ffc58 8068
.org 0xffc5a
	str r0, [r4, #20]	@ 000ffc5a 6061
.org 0xffc5c
	b.n 0xffd4a	@ 000ffc5c 75e0
.org 0xffc5e
	.byte 0x00	@ 000ffc5e data
.org 0xffc5f
	.byte 0x00	@ 000ffc5f data
.org 0xffc60
	.byte 0xf8,0xe9,0x02,0x02	@ 000ffc60 data
.org 0xffc64
	.byte 0xfc,0x92,0x86,0x08	@ 000ffc64 data
.org 0xffc68
	ldr r0, [pc, #20]	@ 000ffc68 0548
.org 0xffc6a
	ldr r0, [r0, #0]	@ 000ffc6a 0068
.org 0xffc6c
	ldr r0, [r0, #84]	@ 000ffc6c 406d
.org 0xffc6e
	ldr r1, [r4, #84]	@ 000ffc6e 616d
.org 0xffc70
	subs r2, r0, r1	@ 000ffc70 421a
.org 0xffc72
	cmp r2, #0	@ 000ffc72 002a
.org 0xffc74
	blt.n 0xffc84	@ 000ffc74 06db
.org 0xffc76
	movs r0, #192	@ 000ffc76 c020
.org 0xffc78
	lsls r0, r0, #7	@ 000ffc78 c001
.org 0xffc7a
	cmp r2, r0	@ 000ffc7a 8242
.org 0xffc7c
	bgt.n 0xffc8e	@ 000ffc7c 07dc
.org 0xffc7e
	b.n 0xffd4a	@ 000ffc7e 64e0
.org 0xffc80
	.byte 0xf0,0xdb,0x02,0x02	@ 000ffc80 data
.org 0xffc84
	subs r1, r1, r0	@ 000ffc84 091a
.org 0xffc86
	movs r0, #192	@ 000ffc86 c020
.org 0xffc88
	lsls r0, r0, #7	@ 000ffc88 c001
.org 0xffc8a
	cmp r1, r0	@ 000ffc8a 8142
.org 0xffc8c
	ble.n 0xffd4a	@ 000ffc8c 5ddd
.org 0xffc8e
	ldrb r0, [r4, #14]	@ 000ffc8e a07b
.org 0xffc90
	adds r0, #1	@ 000ffc90 0130
.org 0xffc92
	strb r0, [r4, #14]	@ 000ffc92 a073
.org 0xffc94
	b.n 0xffd4a	@ 000ffc94 59e0
.org 0xffc96
	ldr r2, [pc, #188]	@ 000ffc96 2f4a
.org 0xffc98
	ldr r0, [pc, #188]	@ 000ffc98 2f48
.org 0xffc9a
	adds r2, r2, r0	@ 000ffc9a 1218
.org 0xffc9c
	movs r0, #1	@ 000ffc9c 0120
.org 0xffc9e
	ldrb r1, [r4, #16]	@ 000ffc9e 217c
.org 0xffca0
	lsls r0, r1	@ 000ffca0 8840
.org 0xffca2
	ldrb r1, [r2, #0]	@ 000ffca2 1178
.org 0xffca4
	orrs r0, r1	@ 000ffca4 0843
.org 0xffca6
	strb r0, [r2, #0]	@ 000ffca6 1070
.org 0xffca8
	movs r0, #195	@ 000ffca8 c320
.org 0xffcaa
	lsls r0, r0, #1	@ 000ffcaa 4000
.org 0xffcac
	bl 0x2b10	@ 000ffcac 02f730ff
.org 0xffcb0
	ldr r0, [r4, #84]	@ 000ffcb0 606d
.org 0xffcb2
	ldr r1, [r4, #88]	@ 000ffcb2 a16d
.org 0xffcb4
	str r0, [sp, #0]	@ 000ffcb4 0090
.org 0xffcb6
	str r1, [sp, #4]	@ 000ffcb6 0191
.org 0xffcb8
	ldr r0, [sp, #0]	@ 000ffcb8 0098
.org 0xffcba
	ldr r1, [pc, #160]	@ 000ffcba 2849
.org 0xffcbc
	adds r0, r0, r1	@ 000ffcbc 4018
.org 0xffcbe
	str r0, [sp, #0]	@ 000ffcbe 0090
.org 0xffcc0
	ldrb r0, [r4, #16]	@ 000ffcc0 207c
.org 0xffcc2
	lsls r2, r0, #1	@ 000ffcc2 4200
.org 0xffcc4
	adds r2, r2, r0	@ 000ffcc4 1218
.org 0xffcc6
	lsls r2, r2, #24	@ 000ffcc6 1206
.org 0xffcc8
	lsrs r2, r2, #24	@ 000ffcc8 120e
.org 0xffcca
	mov r0, sp	@ 000ffcca 6846
.org 0xffccc
	movs r1, #1	@ 000ffccc 0121
.org 0xffcce
	bl 0x92c7c	@ 000ffcce 92f7d5ff
.org 0xffcd2
	ldr r0, [r4, #84]	@ 000ffcd2 606d
.org 0xffcd4
	ldr r1, [r4, #88]	@ 000ffcd4 a16d
.org 0xffcd6
	str r0, [sp, #0]	@ 000ffcd6 0090
.org 0xffcd8
	str r1, [sp, #4]	@ 000ffcd8 0191
.org 0xffcda
	ldrb r0, [r4, #16]	@ 000ffcda 207c
.org 0xffcdc
	lsls r2, r0, #1	@ 000ffcdc 4200
.org 0xffcde
	adds r2, r2, r0	@ 000ffcde 1218
.org 0xffce0
	adds r2, #1	@ 000ffce0 0132
.org 0xffce2
	lsls r2, r2, #24	@ 000ffce2 1206
.org 0xffce4
	lsrs r2, r2, #24	@ 000ffce4 120e
.org 0xffce6
	mov r0, sp	@ 000ffce6 6846
.org 0xffce8
	movs r1, #1	@ 000ffce8 0121
.org 0xffcea
	bl 0x92c7c	@ 000ffcea 92f7c7ff
.org 0xffcee
	ldr r0, [r4, #84]	@ 000ffcee 606d
.org 0xffcf0
	ldr r1, [r4, #88]	@ 000ffcf0 a16d
.org 0xffcf2
	str r0, [sp, #0]	@ 000ffcf2 0090
.org 0xffcf4
	str r1, [sp, #4]	@ 000ffcf4 0191
.org 0xffcf6
	ldr r0, [sp, #0]	@ 000ffcf6 0098
.org 0xffcf8
	movs r1, #192	@ 000ffcf8 c021
.org 0xffcfa
	lsls r1, r1, #5	@ 000ffcfa 4901
.org 0xffcfc
	adds r0, r0, r1	@ 000ffcfc 4018
.org 0xffcfe
	str r0, [sp, #0]	@ 000ffcfe 0090
.org 0xffd00
	ldrb r0, [r4, #16]	@ 000ffd00 207c
.org 0xffd02
	lsls r2, r0, #1	@ 000ffd02 4200
.org 0xffd04
	adds r2, r2, r0	@ 000ffd04 1218
.org 0xffd06
	adds r2, #2	@ 000ffd06 0232
.org 0xffd08
	lsls r2, r2, #24	@ 000ffd08 1206
.org 0xffd0a
	lsrs r2, r2, #24	@ 000ffd0a 120e
.org 0xffd0c
	mov r0, sp	@ 000ffd0c 6846
.org 0xffd0e
	movs r1, #1	@ 000ffd0e 0121
.org 0xffd10
	bl 0x92c7c	@ 000ffd10 92f7b4ff
.org 0xffd14
	movs r0, #192	@ 000ffd14 c020
.org 0xffd16
	lsls r0, r0, #1	@ 000ffd16 4000
.org 0xffd18
	str r0, [r4, #96]	@ 000ffd18 2066
.org 0xffd1a
	ldrb r0, [r4, #14]	@ 000ffd1a a07b
.org 0xffd1c
	adds r0, #1	@ 000ffd1c 0130
.org 0xffd1e
	strb r0, [r4, #14]	@ 000ffd1e a073
.org 0xffd20
	ldr r0, [r4, #88]	@ 000ffd20 a06d
.org 0xffd22
	ldr r1, [r4, #96]	@ 000ffd22 216e
.org 0xffd24
	subs r0, r0, r1	@ 000ffd24 401a
.org 0xffd26
	str r0, [r4, #88]	@ 000ffd26 a065
.org 0xffd28
	adds r1, r4, #0	@ 000ffd28 211c
.org 0xffd2a
	adds r1, #180	@ 000ffd2a b431
.org 0xffd2c
	ldr r3, [r1, #0]	@ 000ffd2c 0b68
.org 0xffd2e
	cmp r0, r3	@ 000ffd2e 9842
.org 0xffd30
	bge.n 0xffd4a	@ 000ffd30 0bda
.org 0xffd32
	ldr r2, [pc, #32]	@ 000ffd32 084a
.org 0xffd34
	ldr r0, [pc, #40]	@ 000ffd34 0a48
.org 0xffd36
	adds r2, r2, r0	@ 000ffd36 1218
.org 0xffd38
	movs r0, #1	@ 000ffd38 0120
.org 0xffd3a
	ldrb r1, [r4, #16]	@ 000ffd3a 217c
.org 0xffd3c
	lsls r0, r1	@ 000ffd3c 8840
.org 0xffd3e
	ldrb r1, [r2, #0]	@ 000ffd3e 1178
.org 0xffd40
	orrs r0, r1	@ 000ffd40 0843
.org 0xffd42
	movs r1, #0	@ 000ffd42 0021
