@ FUN_080e8fb8  entry 0x080e8fb8  size 366
.thumb
.org 0xe8fb8
FUN_080e8fb8:
	push {r4, r5, r6, r7, lr}	@ 000e8fb8 f0b5
.org 0xe8fba
	mov r7, r8	@ 000e8fba 4746
.org 0xe8fbc
	push {r7}	@ 000e8fbc 80b4
.org 0xe8fbe
	adds r7, r0, #0	@ 000e8fbe 071c
.org 0xe8fc0
	ldrb r0, [r7, #18]	@ 000e8fc0 b87c
.org 0xe8fc2
	adds r4, r0, #0	@ 000e8fc2 041c
.org 0xe8fc4
	cmp r4, #0	@ 000e8fc4 002c
.org 0xe8fc6
	beq.n 0xe8fce	@ 000e8fc6 02d0
.org 0xe8fc8
	subs r0, #1	@ 000e8fc8 0138
.org 0xe8fca
	strb r0, [r7, #18]	@ 000e8fca b874
.org 0xe8fcc
	b.n 0xe9136	@ 000e8fcc b3e0
.org 0xe8fce
	adds r0, r7, #0	@ 000e8fce 381c
.org 0xe8fd0
	bl 0x1cc9c	@ 000e8fd0 33f764fe
.org 0xe8fd4
	ldrb r1, [r7, #10]	@ 000e8fd4 b97a
.org 0xe8fd6
	movs r0, #1	@ 000e8fd6 0120
.org 0xe8fd8
	orrs r0, r1	@ 000e8fd8 0843
.org 0xe8fda
	movs r1, #2	@ 000e8fda 0221
.org 0xe8fdc
	orrs r0, r1	@ 000e8fdc 0843
.org 0xe8fde
	strb r0, [r7, #10]	@ 000e8fde b872
.org 0xe8fe0
	ldr r1, [pc, #108]	@ 000e8fe0 1b49
.org 0xe8fe2
	ldrb r0, [r7, #9]	@ 000e8fe2 787a
.org 0xe8fe4
	lsls r0, r0, #2	@ 000e8fe4 8000
.org 0xe8fe6
	adds r0, r0, r1	@ 000e8fe6 4018
.org 0xe8fe8
	movs r1, #1	@ 000e8fe8 0121
.org 0xe8fea
	str r1, [r7, #12]	@ 000e8fea f960
.org 0xe8fec
	ldr r0, [r0, #0]	@ 000e8fec 0068
.org 0xe8fee
	ldr r0, [r0, #4]	@ 000e8fee 4068
.org 0xe8ff0
	str r0, [r7, #20]	@ 000e8ff0 7861
.org 0xe8ff2
	ldrb r0, [r7, #17]	@ 000e8ff2 787c
.org 0xe8ff4
	movs r1, #125	@ 000e8ff4 7d21
.org 0xe8ff6
	adds r1, r1, r7	@ 000e8ff6 c919
.org 0xe8ff8
	mov r8, r1	@ 000e8ff8 8846
.org 0xe8ffa
	cmp r0, #3	@ 000e8ffa 0328
.org 0xe8ffc
	bne.n 0xe9000	@ 000e8ffc 00d1
.org 0xe8ffe
	strb r4, [r1, #0]	@ 000e8ffe 0c70
.org 0xe9000
	ldrb r0, [r7, #17]	@ 000e9000 787c
.org 0xe9002
	cmp r0, #0	@ 000e9002 0028
.org 0xe9004
	beq.n 0xe9058	@ 000e9004 28d0
.org 0xe9006
	ldr r6, [r7, #40]	@ 000e9006 be6a
.org 0xe9008
	adds r1, r0, #0	@ 000e9008 011c
.org 0xe900a
	subs r4, r1, #1	@ 000e900a 4c1e
.org 0xe900c
	movs r2, #128	@ 000e900c 8022
.org 0xe900e
	lsls r2, r2, #1	@ 000e900e 5200
.org 0xe9010
	adds r0, r2, #0	@ 000e9010 101c
.org 0xe9012
	orrs r4, r0	@ 000e9012 0443
.org 0xe9014
	lsls r4, r4, #16	@ 000e9014 2404
.org 0xe9016
	lsrs r4, r4, #16	@ 000e9016 240c
.org 0xe9018
	adds r5, r7, #0	@ 000e9018 3d1c
.org 0xe901a
	adds r5, #116	@ 000e901a 7435
.org 0xe901c
	ldr r0, [pc, #52]	@ 000e901c 0d48
.org 0xe901e
	lsls r1, r1, #1	@ 000e901e 4900
.org 0xe9020
	adds r1, r1, r0	@ 000e9020 0918
.org 0xe9022
	ldrh r0, [r5, #0]	@ 000e9022 2888
.org 0xe9024
	ldrh r1, [r1, #0]	@ 000e9024 0988
.org 0xe9026
	bl 0x129198	@ 000e9026 40f0b7f8
.org 0xe902a
	adds r2, r0, #0	@ 000e902a 021c
.org 0xe902c
	lsls r2, r2, #16	@ 000e902c 1204
.org 0xe902e
	lsrs r2, r2, #16	@ 000e902e 120c
.org 0xe9030
	adds r0, r6, #0	@ 000e9030 301c
.org 0xe9032
	adds r1, r4, #0	@ 000e9032 211c
.org 0xe9034
	bl 0xe8dd8	@ 000e9034 fff7d0fe
.org 0xe9038
	adds r2, r0, #0	@ 000e9038 021c
.org 0xe903a
	str r2, [r7, #44]	@ 000e903a fa62
.org 0xe903c
	cmp r2, #0	@ 000e903c 002a
.org 0xe903e
	beq.n 0xe9074	@ 000e903e 19d0
.org 0xe9040
	adds r0, r7, #0	@ 000e9040 381c
.org 0xe9042
	adds r0, #124	@ 000e9042 7c30
.org 0xe9044
	ldrb r1, [r0, #0]	@ 000e9044 0178
.org 0xe9046
	adds r0, r2, #0	@ 000e9046 101c
.org 0xe9048
	adds r0, #124	@ 000e9048 7c30
.org 0xe904a
	strb r1, [r0, #0]	@ 000e904a 0170
.org 0xe904c
	b.n 0xe9074	@ 000e904c 12e0
.org 0xe904e
	.byte 0x00	@ 000e904e data
.org 0xe904f
	.byte 0x00	@ 000e904f data
.org 0xe9050
	.byte 0x64,0x6f,0x86,0x08	@ 000e9050 data
.org 0xe9054
	.byte 0xd2,0x92,0x86,0x08	@ 000e9054 data
.org 0xe9058
	adds r0, r7, #0	@ 000e9058 381c
.org 0xe905a
	adds r0, #124	@ 000e905a 7c30
.org 0xe905c
	ldrb r0, [r0, #0]	@ 000e905c 0078
.org 0xe905e
	adds r5, r7, #0	@ 000e905e 3d1c
.org 0xe9060
	adds r5, #116	@ 000e9060 7435
.org 0xe9062
	cmp r0, #1	@ 000e9062 0128
.org 0xe9064
	bne.n 0xe9074	@ 000e9064 06d1
.org 0xe9066
	ldr r0, [r7, #40]	@ 000e9066 b86a
.org 0xe9068
	movs r1, #128	@ 000e9068 8021
.org 0xe906a
	lsls r1, r1, #2	@ 000e906a 8900
.org 0xe906c
	movs r2, #0	@ 000e906c 0022
.org 0xe906e
	bl 0xe8dd8	@ 000e906e fff7b3fe
.org 0xe9072
	str r0, [r7, #44]	@ 000e9072 f862
.org 0xe9074
	mov r3, r8	@ 000e9074 4346
.org 0xe9076
	ldrb r0, [r3, #0]	@ 000e9076 1878
.org 0xe9078
	cmp r0, #0	@ 000e9078 0028
.org 0xe907a
	bne.n 0xe90da	@ 000e907a 2ed1
.org 0xe907c
	ldr r0, [pc, #44]	@ 000e907c 0b48
.org 0xe907e
	ldrb r2, [r7, #17]	@ 000e907e 7a7c
.org 0xe9080
	lsls r1, r2, #1	@ 000e9080 5100
.org 0xe9082
	adds r1, r1, r0	@ 000e9082 0918
.org 0xe9084
	ldrh r0, [r5, #0]	@ 000e9084 2888
.org 0xe9086
	ldrh r3, [r1, #0]	@ 000e9086 0b88
.org 0xe9088
	cmp r0, r3	@ 000e9088 9842
.org 0xe908a
	bcc.n 0xe90b4	@ 000e908a 13d3
.org 0xe908c
	ldr r4, [pc, #32]	@ 000e908c 084c
.org 0xe908e
	ldrh r1, [r1, #0]	@ 000e908e 0988
.org 0xe9090
	bl 0x129120	@ 000e9090 40f046f8
.org 0xe9094
	lsls r0, r0, #16	@ 000e9094 0004
.org 0xe9096
	lsrs r0, r0, #15	@ 000e9096 c00b
.org 0xe9098
	adds r0, r0, r4	@ 000e9098 0019
.org 0xe909a
	ldrh r1, [r0, #0]	@ 000e909a 0188
.org 0xe909c
	adds r0, r7, #0	@ 000e909c 381c
.org 0xe909e
	bl 0x1cf00	@ 000e909e 33f72fff
.org 0xe90a2
	movs r0, #1	@ 000e90a2 0120
.org 0xe90a4
	mov r1, r8	@ 000e90a4 4146
.org 0xe90a6
	strb r0, [r1, #0]	@ 000e90a6 0870
.org 0xe90a8
	b.n 0xe90fa	@ 000e90a8 27e0
.org 0xe90aa
	.byte 0x00	@ 000e90aa data
.org 0xe90ab
	.byte 0x00	@ 000e90ab data
.org 0xe90ac
	.byte 0xd2,0x92,0x86,0x08	@ 000e90ac data
.org 0xe90b0
	.byte 0xbe,0x92,0x86,0x08	@ 000e90b0 data
.org 0xe90b4
	cmp r2, #0	@ 000e90b4 002a
.org 0xe90b6
	bne.n 0xe90d0	@ 000e90b6 0bd1
.org 0xe90b8
	movs r0, #1	@ 000e90b8 0120
.org 0xe90ba
	mov r2, r8	@ 000e90ba 4246
.org 0xe90bc
	strb r0, [r2, #0]	@ 000e90bc 1070
.org 0xe90be
	ldr r0, [pc, #12]	@ 000e90be 0348
.org 0xe90c0
	ldrh r1, [r0, #0]	@ 000e90c0 0188
.org 0xe90c2
	adds r0, r7, #0	@ 000e90c2 381c
.org 0xe90c4
	bl 0x1cf00	@ 000e90c4 33f71cff
.org 0xe90c8
	b.n 0xe90fa	@ 000e90c8 17e0
.org 0xe90ca
	.byte 0x00	@ 000e90ca data
.org 0xe90cb
	.byte 0x00	@ 000e90cb data
.org 0xe90cc
	.byte 0xbe,0x92,0x86,0x08	@ 000e90cc data
.org 0xe90d0
	ldrb r1, [r7, #10]	@ 000e90d0 b97a
.org 0xe90d2
	movs r0, #254	@ 000e90d2 fe20
.org 0xe90d4
	ands r0, r1	@ 000e90d4 0840
.org 0xe90d6
	strb r0, [r7, #10]	@ 000e90d6 b872
.org 0xe90d8
	b.n 0xe90fa	@ 000e90d8 0fe0
.org 0xe90da
	ldr r4, [pc, #100]	@ 000e90da 194c
.org 0xe90dc
	ldr r0, [pc, #100]	@ 000e90dc 1948
.org 0xe90de
	ldrb r1, [r7, #17]	@ 000e90de 797c
.org 0xe90e0
	lsls r1, r1, #1	@ 000e90e0 4900
.org 0xe90e2
	adds r1, r1, r0	@ 000e90e2 0918
.org 0xe90e4
	ldrh r0, [r5, #0]	@ 000e90e4 2888
.org 0xe90e6
	ldrh r1, [r1, #0]	@ 000e90e6 0988
.org 0xe90e8
	bl 0x129120	@ 000e90e8 40f01af8
.org 0xe90ec
	lsls r0, r0, #16	@ 000e90ec 0004
.org 0xe90ee
	lsrs r0, r0, #15	@ 000e90ee c00b
.org 0xe90f0
	adds r0, r0, r4	@ 000e90f0 0019
.org 0xe90f2
	ldrh r1, [r0, #0]	@ 000e90f2 0188
.org 0xe90f4
	adds r0, r7, #0	@ 000e90f4 381c
.org 0xe90f6
	bl 0x1cf00	@ 000e90f6 33f703ff
.org 0xe90fa
	ldr r0, [r7, #44]	@ 000e90fa f86a
.org 0xe90fc
	cmp r0, #0	@ 000e90fc 0028
.org 0xe90fe
	beq.n 0xe9108	@ 000e90fe 03d0
.org 0xe9100
	mov r3, r8	@ 000e9100 4346
.org 0xe9102
	ldrb r1, [r3, #0]	@ 000e9102 1978
.org 0xe9104
	adds r0, #125	@ 000e9104 7d30
.org 0xe9106
	strb r1, [r0, #0]	@ 000e9106 0170
.org 0xe9108
	ldrb r0, [r7, #17]	@ 000e9108 787c
.org 0xe910a
	movs r1, #3	@ 000e910a 0321
.org 0xe910c
	subs r1, r1, r0	@ 000e910c 091a
.org 0xe910e
	lsls r0, r1, #4	@ 000e910e 0801
.org 0xe9110
	subs r0, r0, r1	@ 000e9110 401a
.org 0xe9112
	adds r0, #20	@ 000e9112 1430
.org 0xe9114
	lsls r0, r0, #8	@ 000e9114 0002
.org 0xe9116
	ldr r1, [r7, #84]	@ 000e9116 796d
.org 0xe9118
	adds r1, r1, r0	@ 000e9118 0918
.org 0xe911a
	ldr r0, [r7, #88]	@ 000e911a b86d
.org 0xe911c
	ldr r2, [pc, #40]	@ 000e911c 0a4a
.org 0xe911e
	adds r1, r1, r2	@ 000e911e 8918
.org 0xe9120
	str r1, [r7, #84]	@ 000e9120 7965
.org 0xe9122
	ldr r3, [pc, #40]	@ 000e9122 0a4b
.org 0xe9124
	adds r0, r0, r3	@ 000e9124 c018
