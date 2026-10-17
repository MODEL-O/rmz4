@ FUN_080f8f94  entry 0x080f8f94  size 340
.thumb
.org 0xf8f94
FUN_080f8f94:
	push {r4, r5, r6, r7, lr}	@ 000f8f94 f0b5
.org 0xf8f96
	mov r7, r9	@ 000f8f96 4f46
.org 0xf8f98
	mov r6, r8	@ 000f8f98 4646
.org 0xf8f9a
	push {r6, r7}	@ 000f8f9a c0b4
.org 0xf8f9c
	sub sp, #8	@ 000f8f9c 82b0
.org 0xf8f9e
	mov r8, r0	@ 000f8f9e 8046
.org 0xf8fa0
	ldr r1, [r0, #88]	@ 000f8fa0 816d
.org 0xf8fa2
	ldr r0, [r0, #84]	@ 000f8fa2 406d
.org 0xf8fa4
	str r0, [sp, #0]	@ 000f8fa4 0090
.org 0xf8fa6
	str r1, [sp, #4]	@ 000f8fa6 0191
.org 0xf8fa8
	mov r0, r8	@ 000f8fa8 4046
.org 0xf8faa
	adds r0, #84	@ 000f8faa 5430
.org 0xf8fac
	bl 0xf872c	@ 000f8fac fff7befb
.org 0xf8fb0
	lsls r0, r0, #24	@ 000f8fb0 0006
.org 0xf8fb2
	lsrs r0, r0, #24	@ 000f8fb2 000e
.org 0xf8fb4
	movs r1, #3	@ 000f8fb4 0321
.org 0xf8fb6
	bl 0x129198	@ 000f8fb6 30f0eff8
.org 0xf8fba
	lsls r0, r0, #24	@ 000f8fba 0006
.org 0xf8fbc
	cmp r0, #0	@ 000f8fbc 0028
.org 0xf8fbe
	bne.n 0xf8fec	@ 000f8fbe 15d1
.org 0xf8fc0
	movs r5, #1	@ 000f8fc0 0125
.org 0xf8fc2
	ldr r4, [pc, #4]	@ 000f8fc2 014c
.org 0xf8fc4
	b.n 0xf8fd2	@ 000f8fc4 05e0
.org 0xf8fc6
	.byte 0x00	@ 000f8fc6 data
.org 0xf8fc7
	.byte 0x00	@ 000f8fc7 data
.org 0xf8fc8
	.byte 0xdf,0x01,0x00,0x00	@ 000f8fc8 data
.org 0xf8fcc
	adds r0, r5, #1	@ 000f8fcc 681c
.org 0xf8fce
	lsls r0, r0, #16	@ 000f8fce 0004
.org 0xf8fd0
	lsrs r5, r0, #16	@ 000f8fd0 050c
.org 0xf8fd2
	cmp r5, r4	@ 000f8fd2 a542
.org 0xf8fd4
	bhi.n 0xf8fec	@ 000f8fd4 0ad8
.org 0xf8fd6
	mov r0, sp	@ 000f8fd6 6846
.org 0xf8fd8
	bl 0xf8f20	@ 000f8fd8 fff7a2ff
.org 0xf8fdc
	lsls r0, r0, #24	@ 000f8fdc 0006
.org 0xf8fde
	lsrs r0, r0, #24	@ 000f8fde 000e
.org 0xf8fe0
	movs r1, #3	@ 000f8fe0 0321
.org 0xf8fe2
	bl 0x129198	@ 000f8fe2 30f0d9f8
.org 0xf8fe6
	lsls r0, r0, #24	@ 000f8fe6 0006
.org 0xf8fe8
	cmp r0, #0	@ 000f8fe8 0028
.org 0xf8fea
	beq.n 0xf8fcc	@ 000f8fea efd0
.org 0xf8fec
	movs r6, #0	@ 000f8fec 0026
.org 0xf8fee
	movs r0, #0	@ 000f8fee 0020
.org 0xf8ff0
	ldr r7, [pc, #4]	@ 000f8ff0 014f
.org 0xf8ff2
	movs r5, #0	@ 000f8ff2 0025
.org 0xf8ff4
	adds r4, r0, #1	@ 000f8ff4 441c
.org 0xf8ff6
	b.n 0xf9002	@ 000f8ff6 04e0
.org 0xf8ff8
	.byte 0xdf,0x01,0x00,0x00	@ 000f8ff8 data
.org 0xf8ffc
	adds r0, r5, #1	@ 000f8ffc 681c
.org 0xf8ffe
	lsls r0, r0, #16	@ 000f8ffe 0004
.org 0xf9000
	lsrs r5, r0, #16	@ 000f9000 050c
.org 0xf9002
	cmp r5, r7	@ 000f9002 bd42
.org 0xf9004
	bhi.n 0xf901c	@ 000f9004 0ad8
.org 0xf9006
	mov r0, sp	@ 000f9006 6846
.org 0xf9008
	bl 0xf8f20	@ 000f9008 fff78aff
.org 0xf900c
	lsls r0, r0, #24	@ 000f900c 0006
.org 0xf900e
	lsrs r0, r0, #24	@ 000f900e 000e
.org 0xf9010
	movs r1, #3	@ 000f9010 0321
.org 0xf9012
	bl 0x129198	@ 000f9012 30f0c1f8
.org 0xf9016
	lsls r0, r0, #24	@ 000f9016 0006
.org 0xf9018
	cmp r0, #0	@ 000f9018 0028
.org 0xf901a
	beq.n 0xf8ffc	@ 000f901a efd0
.org 0xf901c
	adds r0, r6, r5	@ 000f901c 7019
.org 0xf901e
	lsls r0, r0, #16	@ 000f901e 0004
.org 0xf9020
	lsrs r6, r0, #16	@ 000f9020 060c
.org 0xf9022
	lsls r0, r4, #24	@ 000f9022 2006
.org 0xf9024
	lsrs r0, r0, #24	@ 000f9024 000e
.org 0xf9026
	cmp r0, #1	@ 000f9026 0128
.org 0xf9028
	bls.n 0xf8ff2	@ 000f9028 e3d9
.org 0xf902a
	adds r0, r6, #2	@ 000f902a b01c
.org 0xf902c
	lsls r0, r0, #16	@ 000f902c 0004
.org 0xf902e
	lsrs r1, r0, #11	@ 000f902e c10a
.org 0xf9030
	ldr r3, [pc, #20]	@ 000f9030 054b
.org 0xf9032
	movs r2, #232	@ 000f9032 e822
.org 0xf9034
	lsls r2, r2, #1	@ 000f9034 5200
.org 0xf9036
	adds r0, r3, r2	@ 000f9036 9818
.org 0xf9038
	ldrh r0, [r0, #0]	@ 000f9038 0088
.org 0xf903a
	movs r2, #127	@ 000f903a 7f22
.org 0xf903c
	ands r2, r0	@ 000f903c 0240
.org 0xf903e
	cmp r2, #10	@ 000f903e 0a2a
.org 0xf9040
	bne.n 0xf9050	@ 000f9040 06d1
.org 0xf9042
	ldr r2, [pc, #8]	@ 000f9042 024a
.org 0xf9044
	b.n 0xf9062	@ 000f9044 0de0
.org 0xf9046
	.byte 0x00	@ 000f9046 data
.org 0xf9047
	.byte 0x00	@ 000f9047 data
.org 0xf9048
	.byte 0xb0,0x0a,0x00,0x02	@ 000f9048 data
.org 0xf904c
	.byte 0x30,0xd0,0x02,0x00	@ 000f904c data
.org 0xf9050
	cmp r2, #13	@ 000f9050 0d2a
.org 0xf9052
	bne.n 0xf905c	@ 000f9052 03d1
.org 0xf9054
	ldr r2, [pc, #0]	@ 000f9054 004a
.org 0xf9056
	b.n 0xf9062	@ 000f9056 04e0
.org 0xf9058
	.byte 0x2c,0xd0,0x02,0x00	@ 000f9058 data
.org 0xf905c
	cmp r2, #15	@ 000f905c 0f2a
.org 0xf905e
	bne.n 0xf9074	@ 000f905e 09d1
.org 0xf9060
	ldr r2, [pc, #12]	@ 000f9060 034a
.org 0xf9062
	adds r0, r3, r2	@ 000f9062 9818
.org 0xf9064
	ldr r0, [r0, #0]	@ 000f9064 0068
.org 0xf9066
	bl 0x129198	@ 000f9066 30f097f8
.org 0xf906a
	adds r7, r0, #0	@ 000f906a 071c
.org 0xf906c
	b.n 0xf9076	@ 000f906c 03e0
.org 0xf906e
	.byte 0x00	@ 000f906e data
.org 0xf906f
	.byte 0x00	@ 000f906f data
.org 0xf9070
	.byte 0x34,0xd0,0x02,0x00	@ 000f9070 data
.org 0xf9074
	movs r7, #0	@ 000f9074 0027
.org 0xf9076
	movs r5, #0	@ 000f9076 0025
.org 0xf9078
	cmp r5, r7	@ 000f9078 bd42
.org 0xf907a
	bcs.n 0xf90fe	@ 000f907a 40d2
.org 0xf907c
	ldr r0, [pc, #88]	@ 000f907c 1648
.org 0xf907e
	mov r9, r0	@ 000f907e 8146
.org 0xf9080
	mov r2, r8	@ 000f9080 4246
.org 0xf9082
	ldr r0, [r2, #84]	@ 000f9082 506d
.org 0xf9084
	ldr r1, [r2, #88]	@ 000f9084 916d
.org 0xf9086
	str r0, [sp, #0]	@ 000f9086 0090
.org 0xf9088
	str r1, [sp, #4]	@ 000f9088 0191
.org 0xf908a
	adds r0, r5, #0	@ 000f908a 281c
.org 0xf908c
	adds r0, #16	@ 000f908c 1030
.org 0xf908e
	mov r4, r8	@ 000f908e 4446
.org 0xf9090
	adds r4, #84	@ 000f9090 5434
.org 0xf9092
	cmp r0, r7	@ 000f9092 b842
.org 0xf9094
	bcs.n 0xf90c4	@ 000f9094 16d2
.org 0xf9096
	adds r6, r4, #0	@ 000f9096 261c
.org 0xf9098
	adds r0, r6, #0	@ 000f9098 301c
.org 0xf909a
	bl 0xf872c	@ 000f909a fff747fb
.org 0xf909e
	lsls r0, r0, #24	@ 000f909e 0006
.org 0xf90a0
	lsrs r0, r0, #24	@ 000f90a0 000e
.org 0xf90a2
	movs r1, #3	@ 000f90a2 0321
.org 0xf90a4
	bl 0x129198	@ 000f90a4 30f078f8
.org 0xf90a8
	lsls r0, r0, #24	@ 000f90a8 0006
.org 0xf90aa
	cmp r0, #0	@ 000f90aa 0028
.org 0xf90ac
	bne.n 0xf90c4	@ 000f90ac 0ad1
.org 0xf90ae
	mov r0, sp	@ 000f90ae 6846
.org 0xf90b0
	bl 0xf8f20	@ 000f90b0 fff736ff
.org 0xf90b4
	lsls r0, r0, #24	@ 000f90b4 0006
.org 0xf90b6
	lsrs r0, r0, #24	@ 000f90b6 000e
.org 0xf90b8
	movs r1, #3	@ 000f90b8 0321
.org 0xf90ba
	bl 0x129198	@ 000f90ba 30f06df8
.org 0xf90be
	lsls r0, r0, #24	@ 000f90be 0006
.org 0xf90c0
	cmp r0, #0	@ 000f90c0 0028
.org 0xf90c2
	beq.n 0xf90dc	@ 000f90c2 0bd0
.org 0xf90c4
	mov r0, r9	@ 000f90c4 4846
.org 0xf90c6
	ldr r3, [r0, #0]	@ 000f90c6 0368
.org 0xf90c8
	adds r0, r4, #0	@ 000f90c8 201c
.org 0xf90ca
	mov r1, r8	@ 000f90ca 4146
.org 0xf90cc
	adds r1, #185	@ 000f90cc b931
.org 0xf90ce
	movs r2, #1	@ 000f90ce 0122
.org 0xf90d0
	bl 0x128f88	@ 000f90d0 2ff05aff
.org 0xf90d4
	b.n 0xf90f4	@ 000f90d4 0ee0
.org 0xf90d6
	.byte 0x00	@ 000f90d6 data
.org 0xf90d7
	.byte 0x00	@ 000f90d7 data
.org 0xf90d8
	.byte 0xd0,0xa3,0x86,0x08	@ 000f90d8 data
.org 0xf90dc
	mov r2, r9	@ 000f90dc 4a46
.org 0xf90de
	ldr r3, [r2, #0]	@ 000f90de 1368
.org 0xf90e0
	adds r0, r6, #0	@ 000f90e0 301c
.org 0xf90e2
	mov r1, r8	@ 000f90e2 4146
.org 0xf90e4
	adds r1, #185	@ 000f90e4 b931
.org 0xf90e6
	movs r2, #16	@ 000f90e6 1022
