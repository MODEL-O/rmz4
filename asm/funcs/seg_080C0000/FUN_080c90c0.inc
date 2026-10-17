@ FUN_080c90c0  entry 0x080c90c0  size 312
.thumb
.org 0xc90c0
FUN_080c90c0:
	push {lr}	@ 000c90c0 00b5
.org 0xc90c2
	.byte 0xff,0xff	@ 000c90c2 (raw)
.org 0xc90c4
	.byte 0x11,0xa9	@ 000c90c4 (raw)
.org 0xc90c6
	movs r0, r0	@ 000c90c6 0000
.org 0xc90c8
	str r4, [r6, #20]	@ 000c90c8 7461
.org 0xc90ca
	lsrs r6, r0, #2	@ 000c90ca 8608
.org 0xc90cc
	ldr r1, [pc, #108]	@ 000c90cc 1b49
.org 0xc90ce
	mov r2, ip	@ 000c90ce 6246
.org 0xc90d0
	adds r2, #113	@ 000c90d0 7132
.org 0xc90d2
	movs r0, #0	@ 000c90d2 0020
.org 0xc90d4
	ldrsb r0, [r2, r0]	@ 000c90d4 1056
.org 0xc90d6
	lsls r0, r0, #2	@ 000c90d6 8000
.org 0xc90d8
	adds r0, r0, r1	@ 000c90d8 4018
.org 0xc90da
	mov r6, ip	@ 000c90da 6646
.org 0xc90dc
	ldr r1, [r6, #84]	@ 000c90dc 716d
.org 0xc90de
	ldr r0, [r0, #0]	@ 000c90de 0068
.org 0xc90e0
	adds r1, r1, r0	@ 000c90e0 0918
.org 0xc90e2
	str r1, [r4, #84]	@ 000c90e2 6165
.org 0xc90e4
	ldr r1, [pc, #88]	@ 000c90e4 1649
.org 0xc90e6
	movs r0, #0	@ 000c90e6 0020
.org 0xc90e8
	ldrsb r0, [r2, r0]	@ 000c90e8 1056
.org 0xc90ea
	lsls r0, r0, #2	@ 000c90ea 8000
.org 0xc90ec
	adds r0, r0, r1	@ 000c90ec 4018
.org 0xc90ee
	mov r2, ip	@ 000c90ee 6246
.org 0xc90f0
	ldr r1, [r2, #88]	@ 000c90f0 916d
.org 0xc90f2
	ldr r0, [r0, #0]	@ 000c90f2 0068
.org 0xc90f4
	adds r1, r1, r0	@ 000c90f4 0918
.org 0xc90f6
	str r1, [r4, #88]	@ 000c90f6 a165
.org 0xc90f8
	ldrb r0, [r2, #30]	@ 000c90f8 907f
.org 0xc90fa
	lsls r0, r0, #8	@ 000c90fa 0002
.org 0xc90fc
	mov r1, ip	@ 000c90fc 6146
.org 0xc90fe
	adds r1, #112	@ 000c90fe 7031
.org 0xc9100
	ldrb r1, [r1, #0]	@ 000c9100 0978
.org 0xc9102
	orrs r0, r1	@ 000c9102 0843
.org 0xc9104
	ldr r1, [pc, #60]	@ 000c9104 0f49
.org 0xc9106
	cmp r0, r1	@ 000c9106 8842
.org 0xc9108
	beq.n 0xc910c	@ 000c9108 00d0
.org 0xc910a
	b.n 0xc9246	@ 000c910a 9ce0
.org 0xc910c
	ldrb r0, [r4, #13]	@ 000c910c 607b
.org 0xc910e
	adds r0, #1	@ 000c910e 0130
.org 0xc9110
	strb r0, [r4, #13]	@ 000c9110 6073
.org 0xc9112
	ldrb r1, [r4, #10]	@ 000c9112 a17a
.org 0xc9114
	movs r0, #16	@ 000c9114 1020
.org 0xc9116
	ands r0, r1	@ 000c9116 0840
.org 0xc9118
	cmp r0, #0	@ 000c9118 0028
.org 0xc911a
	beq.n 0xc914c	@ 000c911a 17d0
.org 0xc911c
	ldr r1, [pc, #28]	@ 000c911c 0749
.org 0xc911e
	ldr r3, [pc, #40]	@ 000c911e 0a4b
.org 0xc9120
	mov r2, ip	@ 000c9120 6246
.org 0xc9122
	adds r2, #113	@ 000c9122 7132
.org 0xc9124
	movs r0, #0	@ 000c9124 0020
.org 0xc9126
	ldrsb r0, [r2, r0]	@ 000c9126 1056
.org 0xc9128
	adds r0, r0, r3	@ 000c9128 c018
.org 0xc912a
	ldrb r0, [r0, #0]	@ 000c912a 0078
.org 0xc912c
	lsls r0, r0, #2	@ 000c912c 8000
.org 0xc912e
	adds r0, r0, r1	@ 000c912e 4018
.org 0xc9130
	mov r6, ip	@ 000c9130 6646
.org 0xc9132
	ldr r1, [r6, #84]	@ 000c9132 716d
.org 0xc9134
	ldr r0, [r0, #0]	@ 000c9134 0068
.org 0xc9136
	subs r1, r1, r0	@ 000c9136 091a
.org 0xc9138
	b.n 0xc9168	@ 000c9138 16e0
.org 0xc913a
	.byte 0x00	@ 000c913a data
.org 0xc913b
	.byte 0x00	@ 000c913b data
.org 0xc913c
	.byte 0x74,0x61,0x86,0x08	@ 000c913c data
.org 0xc9140
	.byte 0x88,0x61,0x86,0x08	@ 000c9140 data
.org 0xc9144
	.byte 0x12,0xa9,0x00,0x00	@ 000c9144 data
.org 0xc9148
	.byte 0x9c,0x61,0x86,0x08	@ 000c9148 data
.org 0xc914c
	ldr r1, [pc, #92]	@ 000c914c 1749
.org 0xc914e
	ldr r3, [pc, #96]	@ 000c914e 184b
.org 0xc9150
	mov r2, ip	@ 000c9150 6246
.org 0xc9152
	adds r2, #113	@ 000c9152 7132
.org 0xc9154
	movs r0, #0	@ 000c9154 0020
.org 0xc9156
	ldrsb r0, [r2, r0]	@ 000c9156 1056
.org 0xc9158
	adds r0, r0, r3	@ 000c9158 c018
.org 0xc915a
	ldrb r0, [r0, #0]	@ 000c915a 0078
.org 0xc915c
	lsls r0, r0, #2	@ 000c915c 8000
.org 0xc915e
	adds r0, r0, r1	@ 000c915e 4018
.org 0xc9160
	mov r6, ip	@ 000c9160 6646
.org 0xc9162
	ldr r1, [r6, #84]	@ 000c9162 716d
.org 0xc9164
	ldr r0, [r0, #0]	@ 000c9164 0068
.org 0xc9166
	adds r1, r1, r0	@ 000c9166 0918
.org 0xc9168
	str r1, [r4, #84]	@ 000c9168 6165
.org 0xc916a
	ldr r1, [pc, #72]	@ 000c916a 1249
.org 0xc916c
	movs r0, #0	@ 000c916c 0020
.org 0xc916e
	ldrsb r0, [r2, r0]	@ 000c916e 1056
.org 0xc9170
	adds r0, r0, r3	@ 000c9170 c018
.org 0xc9172
	ldrb r0, [r0, #0]	@ 000c9172 0078
.org 0xc9174
	lsls r0, r0, #2	@ 000c9174 8000
.org 0xc9176
	adds r0, r0, r1	@ 000c9176 4018
.org 0xc9178
	mov r3, ip	@ 000c9178 6346
.org 0xc917a
	ldr r1, [r3, #88]	@ 000c917a 996d
.org 0xc917c
	ldr r0, [r0, #0]	@ 000c917c 0068
.org 0xc917e
	adds r1, r1, r0	@ 000c917e 0918
.org 0xc9180
	str r1, [r4, #88]	@ 000c9180 a165
.org 0xc9182
	movs r0, #0	@ 000c9182 0020
.org 0xc9184
	ldrsb r0, [r2, r0]	@ 000c9184 1056
.org 0xc9186
	cmp r0, #2	@ 000c9186 0228
.org 0xc9188
	ble.n 0xc9246	@ 000c9188 5ddd
.org 0xc918a
	mov r0, ip	@ 000c918a 6046
.org 0xc918c
	adds r0, #114	@ 000c918c 7230
.org 0xc918e
	ldrb r0, [r0, #0]	@ 000c918e 0078
.org 0xc9190
	lsls r0, r0, #24	@ 000c9190 0006
.org 0xc9192
	asrs r0, r0, #24	@ 000c9192 0016
.org 0xc9194
	cmp r0, #1	@ 000c9194 0128
.org 0xc9196
	bgt.n 0xc9246	@ 000c9196 56dc
.org 0xc9198
	ldr r0, [pc, #28]	@ 000c9198 0748
.org 0xc919a
	str r0, [r4, #96]	@ 000c919a 2066
.org 0xc919c
	mov r0, ip	@ 000c919c 6046
.org 0xc919e
	adds r0, #221	@ 000c919e dd30
.org 0xc91a0
	ldrb r0, [r0, #0]	@ 000c91a0 0078
.org 0xc91a2
	cmp r0, #0	@ 000c91a2 0028
.org 0xc91a4
	beq.n 0xc91bc	@ 000c91a4 0ad0
.org 0xc91a6
	movs r0, #28	@ 000c91a6 1c20
.org 0xc91a8
	b.n 0xc91be	@ 000c91a8 09e0
.org 0xc91aa
	.byte 0x00	@ 000c91aa data
.org 0xc91ab
	.byte 0x00	@ 000c91ab data
.org 0xc91ac
	.byte 0x74,0x61,0x86,0x08	@ 000c91ac data
.org 0xc91b0
	.byte 0x9c,0x61,0x86,0x08	@ 000c91b0 data
.org 0xc91b4
	.byte 0x88,0x61,0x86,0x08	@ 000c91b4 data
.org 0xc91b8
	.byte 0x00,0xfa,0xff,0xff	@ 000c91b8 data
.org 0xc91bc
	movs r0, #21	@ 000c91bc 1520
.org 0xc91be
	strb r0, [r4, #18]	@ 000c91be a074
.org 0xc91c0
	ldrb r0, [r4, #13]	@ 000c91c0 607b
.org 0xc91c2
	adds r0, #1	@ 000c91c2 0130
.org 0xc91c4
	strb r0, [r4, #13]	@ 000c91c4 6073
.org 0xc91c6
	ldr r0, [r4, #88]	@ 000c91c6 a06d
.org 0xc91c8
	ldr r1, [r4, #96]	@ 000c91c8 216e
.org 0xc91ca
	adds r0, r0, r1	@ 000c91ca 4018
.org 0xc91cc
	str r0, [r4, #88]	@ 000c91cc a065
.org 0xc91ce
	adds r1, #64	@ 000c91ce 4031
.org 0xc91d0
	str r1, [r4, #96]	@ 000c91d0 2166
.org 0xc91d2
	ldrb r0, [r4, #18]	@ 000c91d2 a07c
.org 0xc91d4
	lsls r0, r0, #6	@ 000c91d4 8001
.org 0xc91d6
	cmp r1, r0	@ 000c91d6 8142
.org 0xc91d8
	ble.n 0xc9246	@ 000c91d8 35dd
.org 0xc91da
	ldr r0, [pc, #20]	@ 000c91da 0548
.org 0xc91dc
	str r0, [r4, #96]	@ 000c91dc 2066
.org 0xc91de
	mov r6, ip	@ 000c91de 6646
.org 0xc91e0
	ldrb r1, [r6, #10]	@ 000c91e0 b17a
.org 0xc91e2
	movs r0, #16	@ 000c91e2 1020
.org 0xc91e4
	ands r0, r1	@ 000c91e4 0840
.org 0xc91e6
	cmp r0, #0	@ 000c91e6 0028
.org 0xc91e8
	beq.n 0xc91f4	@ 000c91e8 04d0
.org 0xc91ea
	movs r0, #128	@ 000c91ea 8020
.org 0xc91ec
	lsls r0, r0, #4	@ 000c91ec 0001
.org 0xc91ee
	b.n 0xc91f6	@ 000c91ee 02e0
.org 0xc91f0
	.byte 0x00,0xfc,0xff,0xff	@ 000c91f0 data
.org 0xc91f4
	ldr r0, [pc, #12]	@ 000c91f4 0348
.org 0xc91f6
	str r0, [r4, #92]	@ 000c91f6 e065
