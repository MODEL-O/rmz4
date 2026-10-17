@ FUN_080570b4  entry 0x080570b4  size 318
.thumb
.org 0x570b4
FUN_080570b4:
	push {r4, r5, r6, lr}	@ 000570b4 70b5
.org 0x570b6
	sub sp, #16	@ 000570b6 84b0
.org 0x570b8
	adds r4, r0, #0	@ 000570b8 041c
.org 0x570ba
	ldrb r0, [r4, #10]	@ 000570ba a07a
.org 0x570bc
	lsrs r6, r0, #4	@ 000570bc 0609
.org 0x570be
	movs r0, #1	@ 000570be 0120
.org 0x570c0
	ands r6, r0	@ 000570c0 0640
.org 0x570c2
	ldrb r0, [r4, #15]	@ 000570c2 e07b
.org 0x570c4
	cmp r0, #0	@ 000570c4 0028
.org 0x570c6
	bne.n 0x57186	@ 000570c6 5ed1
.org 0x570c8
	movs r0, #252	@ 000570c8 fc20
.org 0x570ca
	bl 0x2b10	@ 000570ca abf721fd
.org 0x570ce
	ldr r0, [pc, #292]	@ 000570ce 4948
.org 0x570d0
	ldr r1, [pc, #292]	@ 000570d0 4949
.org 0x570d2
	adds r1, #116	@ 000570d2 7431
.org 0x570d4
	ldrh r1, [r1, #0]	@ 000570d4 0988
.org 0x570d6
	ldrh r2, [r0, #6]	@ 000570d6 c288
.org 0x570d8
	lsrs r2, r2, #6	@ 000570d8 9209
.org 0x570da
	subs r1, r1, r2	@ 000570da 891a
.org 0x570dc
	lsls r1, r1, #5	@ 000570dc 4901
.org 0x570de
	movs r2, #128	@ 000570de 8022
.org 0x570e0
	lsls r2, r2, #9	@ 000570e0 5202
.org 0x570e2
	adds r1, r1, r2	@ 000570e2 8918
.org 0x570e4
	bl 0x1d30	@ 000570e4 aaf724fe
.org 0x570e8
	ldr r0, [pc, #272]	@ 000570e8 4448
.org 0x570ea
	ldr r1, [pc, #276]	@ 000570ea 4549
.org 0x570ec
	adds r1, #116	@ 000570ec 7431
.org 0x570ee
	ldrh r1, [r1, #0]	@ 000570ee 0988
.org 0x570f0
	ldrb r2, [r0, #7]	@ 000570f0 c279
.org 0x570f2
	subs r1, r1, r2	@ 000570f2 891a
.org 0x570f4
	lsls r1, r1, #5	@ 000570f4 4901
.org 0x570f6
	movs r3, #128	@ 000570f6 8023
.org 0x570f8
	lsls r3, r3, #2	@ 000570f8 9b00
.org 0x570fa
	adds r1, r1, r3	@ 000570fa c918
.org 0x570fc
	bl 0x2208	@ 000570fc abf784f8
.org 0x57100
	adds r0, r4, #0	@ 00057100 201c
.org 0x57102
	bl 0x5977c	@ 00057102 02f03bfb
.org 0x57106
	adds r5, r0, #0	@ 00057106 051c
.org 0x57108
	ldr r1, [pc, #248]	@ 00057108 3e49
.org 0x5710a
	lsls r0, r5, #1	@ 0005710a 6800
.org 0x5710c
	adds r0, r0, r1	@ 0005710c 4018
.org 0x5710e
	ldrh r5, [r0, #0]	@ 0005710e 0588
.org 0x57110
	adds r0, r4, #0	@ 00057110 201c
.org 0x57112
	bl 0x59a9c	@ 00057112 02f0c3fc
.org 0x57116
	lsls r0, r0, #24	@ 00057116 0006
.org 0x57118
	lsls r1, r6, #1	@ 00057118 7100
.org 0x5711a
	subs r1, #1	@ 0005711a 0139
.org 0x5711c
	lsls r2, r1, #1	@ 0005711c 4a00
.org 0x5711e
	adds r2, r2, r1	@ 0005711e 5218
.org 0x57120
	lsls r2, r2, #10	@ 00057120 9202
.org 0x57122
	ldr r1, [r4, #84]	@ 00057122 616d
.org 0x57124
	adds r1, r1, r2	@ 00057124 8918
.org 0x57126
	str r1, [sp, #0]	@ 00057126 0091
.org 0x57128
	ldr r1, [r4, #88]	@ 00057128 a16d
.org 0x5712a
	ldr r2, [pc, #220]	@ 0005712a 374a
.org 0x5712c
	adds r1, r1, r2	@ 0005712c 8918
.org 0x5712e
	str r1, [sp, #4]	@ 0005712e 0191
.org 0x57130
	ldr r1, [pc, #216]	@ 00057130 3649
.org 0x57132
	lsrs r2, r0, #24	@ 00057132 020e
.org 0x57134
	movs r3, #128	@ 00057134 8023
.org 0x57136
	lsls r3, r3, #23	@ 00057136 db05
.org 0x57138
	adds r0, r0, r3	@ 00057138 c018
.org 0x5713a
	lsrs r0, r0, #23	@ 0005713a c00d
.org 0x5713c
	adds r0, r0, r1	@ 0005713c 4018
.org 0x5713e
	movs r3, #0	@ 0005713e 0023
.org 0x57140
	ldrsh r0, [r0, r3]	@ 00057140 c05e
.org 0x57142
	muls r0, r5	@ 00057142 6843
.org 0x57144
	cmp r0, #0	@ 00057144 0028
.org 0x57146
	bge.n 0x5714a	@ 00057146 00da
.org 0x57148
	adds r0, #255	@ 00057148 ff30
.org 0x5714a
	asrs r0, r0, #8	@ 0005714a 0012
.org 0x5714c
	str r0, [sp, #8]	@ 0005714c 0290
.org 0x5714e
	lsls r0, r2, #1	@ 0005714e 5000
.org 0x57150
	adds r0, r0, r1	@ 00057150 4018
.org 0x57152
	movs r1, #0	@ 00057152 0021
.org 0x57154
	ldrsh r0, [r0, r1]	@ 00057154 405e
.org 0x57156
	muls r0, r5	@ 00057156 6843
.org 0x57158
	cmp r0, #0	@ 00057158 0028
.org 0x5715a
	bge.n 0x5715e	@ 0005715a 00da
.org 0x5715c
	adds r0, #255	@ 0005715c ff30
.org 0x5715e
	asrs r0, r0, #8	@ 0005715e 0012
.org 0x57160
	add r2, sp, #8	@ 00057160 02aa
.org 0x57162
	str r0, [r2, #4]	@ 00057162 5060
.org 0x57164
	adds r0, r4, #0	@ 00057164 201c
.org 0x57166
	mov r1, sp	@ 00057166 6946
.org 0x57168
	movs r3, #0	@ 00057168 0023
.org 0x5716a
	bl 0xc0d28	@ 0005716a 69f0ddfd
.org 0x5716e
	adds r1, r4, #0	@ 0005716e 211c
.org 0x57170
	adds r1, #212	@ 00057170 d431
.org 0x57172
	str r0, [r1, #0]	@ 00057172 0860
.org 0x57174
	ldr r1, [pc, #152]	@ 00057174 2649
.org 0x57176
	adds r0, r4, #0	@ 00057176 201c
.org 0x57178
	bl 0x1cf00	@ 00057178 c5f7c2fe
.org 0x5717c
	movs r0, #24	@ 0005717c 1820
.org 0x5717e
	strb r0, [r4, #18]	@ 0005717e a074
.org 0x57180
	ldrb r0, [r4, #15]	@ 00057180 e07b
.org 0x57182
	adds r0, #1	@ 00057182 0130
.org 0x57184
	strb r0, [r4, #15]	@ 00057184 e073
.org 0x57186
	adds r0, r4, #0	@ 00057186 201c
.org 0x57188
	bl 0x1cff0	@ 00057188 c5f732ff
.org 0x5718c
	adds r0, r4, #0	@ 0005718c 201c
.org 0x5718e
	adds r0, #116	@ 0005718e 7430
.org 0x57190
	ldr r3, [pc, #128]	@ 00057190 204b
.org 0x57192
	ldrb r1, [r4, #30]	@ 00057192 a17f
.org 0x57194
	lsls r1, r1, #8	@ 00057194 0902
.org 0x57196
	adds r2, r4, #0	@ 00057196 221c
.org 0x57198
	adds r2, #112	@ 00057198 7032
.org 0x5719a
	ldrb r2, [r2, #0]	@ 0005719a 1278
.org 0x5719c
	orrs r1, r2	@ 0005719c 1143
.org 0x5719e
	ldr r2, [pc, #120]	@ 0005719e 1e4a
.org 0x571a0
	adds r1, r1, r2	@ 000571a0 8918
.org 0x571a2
	lsls r1, r1, #2	@ 000571a2 8900
.org 0x571a4
	adds r1, r1, r3	@ 000571a4 c918
.org 0x571a6
	adds r2, r4, #0	@ 000571a6 221c
.org 0x571a8
	adds r2, #113	@ 000571a8 7132
.org 0x571aa
	ldrb r2, [r2, #0]	@ 000571aa 1278
.org 0x571ac
	lsls r2, r2, #24	@ 000571ac 1206
.org 0x571ae
	asrs r2, r2, #24	@ 000571ae 1216
.org 0x571b0
	ldr r1, [r1, #0]	@ 000571b0 0968
.org 0x571b2
	lsls r2, r2, #2	@ 000571b2 9200
.org 0x571b4
	adds r2, r2, r1	@ 000571b4 5218
.org 0x571b6
	ldr r1, [r2, #0]	@ 000571b6 1168
.org 0x571b8
	ldrb r2, [r1, #0]	@ 000571b8 0a78
.org 0x571ba
	lsls r1, r2, #1	@ 000571ba 5100
.org 0x571bc
	adds r1, r1, r2	@ 000571bc 8918
.org 0x571be
	lsls r1, r1, #3	@ 000571be c900
.org 0x571c0
	ldr r2, [pc, #88]	@ 000571c0 164a
.org 0x571c2
	adds r1, r1, r2	@ 000571c2 8918
.org 0x571c4
	bl 0x5784	@ 000571c4 aef7defa
.org 0x571c8
	ldrb r0, [r4, #18]	@ 000571c8 a07c
.org 0x571ca
	cmp r0, #0	@ 000571ca 0028
.org 0x571cc
	beq.n 0x571d8	@ 000571cc 04d0
.org 0x571ce
	subs r0, #1	@ 000571ce 0138
.org 0x571d0
	strb r0, [r4, #18]	@ 000571d0 a074
.org 0x571d2
	lsls r0, r0, #24	@ 000571d2 0006
.org 0x571d4
	cmp r0, #0	@ 000571d4 0028
.org 0x571d6
	bne.n 0x571ea	@ 000571d6 08d1
.org 0x571d8
	adds r0, r4, #0	@ 000571d8 201c
.org 0x571da
	adds r0, #115	@ 000571da 7330
.org 0x571dc
	ldrb r0, [r0, #0]	@ 000571dc 0078
.org 0x571de
	cmp r0, #3	@ 000571de 0328
.org 0x571e0
	bne.n 0x571ea	@ 000571e0 03d1
.org 0x571e2
	movs r1, #0	@ 000571e2 0021
.org 0x571e4
	movs r0, #4	@ 000571e4 0420
.org 0x571e6
	strb r0, [r4, #14]	@ 000571e6 a073
.org 0x571e8
	strb r1, [r4, #15]	@ 000571e8 e173
.org 0x571ea
	add sp, #16	@ 000571ea 04b0
.org 0x571ec
	pop {r4, r5, r6}	@ 000571ec 70bc
.org 0x571ee
	pop {r0}	@ 000571ee 01bc
.org 0x571f0
	bx r0	@ 000571f0 0047
