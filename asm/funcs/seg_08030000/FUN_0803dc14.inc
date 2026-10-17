@ FUN_0803dc14  entry 0x0803dc14  size 448
.thumb
.org 0x3dc14
FUN_0803dc14:
	push {r4, r5, r6, lr}	@ 0003dc14 70b5
.org 0x3dc16
	mov ip, r0	@ 0003dc16 8446
.org 0x3dc18
	adds r0, #180	@ 0003dc18 b430
.org 0x3dc1a
	ldr r5, [r0, #0]	@ 0003dc1a 0568
.org 0x3dc1c
	ldrb r0, [r5, #10]	@ 0003dc1c a87a
.org 0x3dc1e
	lsrs r2, r0, #4	@ 0003dc1e 0209
.org 0x3dc20
	movs r0, #1	@ 0003dc20 0120
.org 0x3dc22
	ands r2, r0	@ 0003dc22 0240
.org 0x3dc24
	cmp r2, #0	@ 0003dc24 002a
.org 0x3dc26
	beq.n 0x3dc32	@ 0003dc26 04d0
.org 0x3dc28
	mov r0, ip	@ 0003dc28 6046
.org 0x3dc2a
	ldrb r1, [r0, #10]	@ 0003dc2a 817a
.org 0x3dc2c
	movs r0, #16	@ 0003dc2c 1020
.org 0x3dc2e
	orrs r0, r1	@ 0003dc2e 0843
.org 0x3dc30
	b.n 0x3dc3a	@ 0003dc30 03e0
.org 0x3dc32
	mov r0, ip	@ 0003dc32 6046
.org 0x3dc34
	ldrb r1, [r0, #10]	@ 0003dc34 817a
.org 0x3dc36
	movs r0, #239	@ 0003dc36 ef20
.org 0x3dc38
	ands r0, r1	@ 0003dc38 0840
.org 0x3dc3a
	mov r1, ip	@ 0003dc3a 6146
.org 0x3dc3c
	strb r0, [r1, #10]	@ 0003dc3c 8872
.org 0x3dc3e
	movs r6, #1	@ 0003dc3e 0126
.org 0x3dc40
	adds r1, r6, #0	@ 0003dc40 311c
.org 0x3dc42
	ands r1, r2	@ 0003dc42 1140
.org 0x3dc44
	mov r4, ip	@ 0003dc44 6446
.org 0x3dc46
	adds r4, #76	@ 0003dc46 4c34
.org 0x3dc48
	strb r1, [r4, #0]	@ 0003dc48 2170
.org 0x3dc4a
	mov r3, ip	@ 0003dc4a 6346
.org 0x3dc4c
	adds r3, #74	@ 0003dc4c 4a33
.org 0x3dc4e
	lsls r1, r1, #4	@ 0003dc4e 0901
.org 0x3dc50
	ldrb r2, [r3, #0]	@ 0003dc50 1a78
.org 0x3dc52
	movs r0, #17	@ 0003dc52 1120
.org 0x3dc54
	negs r0, r0	@ 0003dc54 4042
.org 0x3dc56
	ands r0, r2	@ 0003dc56 1040
.org 0x3dc58
	orrs r0, r1	@ 0003dc58 0843
.org 0x3dc5a
	strb r0, [r3, #0]	@ 0003dc5a 1870
.org 0x3dc5c
	mov r2, ip	@ 0003dc5c 6246
.org 0x3dc5e
	adds r2, #37	@ 0003dc5e 2532
.org 0x3dc60
	movs r0, #16	@ 0003dc60 1020
.org 0x3dc62
	strb r0, [r2, #0]	@ 0003dc62 1070
.org 0x3dc64
	ldrb r0, [r5, #30]	@ 0003dc64 a87f
.org 0x3dc66
	lsls r0, r0, #8	@ 0003dc66 0002
.org 0x3dc68
	adds r1, r5, #0	@ 0003dc68 291c
.org 0x3dc6a
	adds r1, #112	@ 0003dc6a 7031
.org 0x3dc6c
	ldrb r1, [r1, #0]	@ 0003dc6c 0978
.org 0x3dc6e
	orrs r1, r0	@ 0003dc6e 0143
.org 0x3dc70
	ldr r0, [pc, #28]	@ 0003dc70 0748
.org 0x3dc72
	cmp r1, r0	@ 0003dc72 8142
.org 0x3dc74
	beq.n 0x3dd3a	@ 0003dc74 61d0
.org 0x3dc76
	cmp r1, r0	@ 0003dc76 8142
.org 0x3dc78
	bgt.n 0x3dca4	@ 0003dc78 14dc
.org 0x3dc7a
	ldr r0, [pc, #24]	@ 0003dc7a 0648
.org 0x3dc7c
	cmp r1, r0	@ 0003dc7c 8142
.org 0x3dc7e
	bgt.n 0x3dc98	@ 0003dc7e 0bdc
.org 0x3dc80
	subs r0, #2	@ 0003dc80 0238
.org 0x3dc82
	cmp r1, r0	@ 0003dc82 8142
.org 0x3dc84
	bge.n 0x3dd0e	@ 0003dc84 43da
.org 0x3dc86
	subs r0, #255	@ 0003dc86 ff38
.org 0x3dc88
	cmp r1, r0	@ 0003dc88 8142
.org 0x3dc8a
	beq.n 0x3dce8	@ 0003dc8a 2dd0
.org 0x3dc8c
	b.n 0x3ddbe	@ 0003dc8c 97e0
.org 0x3dc8e
	.byte 0x00	@ 0003dc8e data
.org 0x3dc8f
	.byte 0x00	@ 0003dc8f data
.org 0x3dc90
	.byte 0x01,0x0b,0x00,0x00	@ 0003dc90 data
.org 0x3dc94
	.byte 0x02,0x09,0x00,0x00	@ 0003dc94 data
.org 0x3dc98
	ldr r0, [pc, #4]	@ 0003dc98 0148
.org 0x3dc9a
	cmp r1, r0	@ 0003dc9a 8142
.org 0x3dc9c
	beq.n 0x3dd30	@ 0003dc9c 48d0
.org 0x3dc9e
	b.n 0x3ddbe	@ 0003dc9e 8ee0
.org 0x3dca0
	.byte 0x01,0x0a,0x00,0x00	@ 0003dca0 data
.org 0x3dca4
	ldr r0, [pc, #48]	@ 0003dca4 0c48
.org 0x3dca6
	cmp r1, r0	@ 0003dca6 8142
.org 0x3dca8
	beq.n 0x3dd56	@ 0003dca8 55d0
.org 0x3dcaa
	cmp r1, r0	@ 0003dcaa 8142
.org 0x3dcac
	bgt.n 0x3dcdc	@ 0003dcac 16dc
.org 0x3dcae
	subs r0, #252	@ 0003dcae fc38
.org 0x3dcb0
	cmp r1, r0	@ 0003dcb0 8142
.org 0x3dcb2
	ble.n 0x3dcb6	@ 0003dcb2 00dd
.org 0x3dcb4
	b.n 0x3ddbe	@ 0003dcb4 83e0
.org 0x3dcb6
	subs r0, #2	@ 0003dcb6 0238
.org 0x3dcb8
	cmp r1, r0	@ 0003dcb8 8142
.org 0x3dcba
	bge.n 0x3dcbe	@ 0003dcba 00da
.org 0x3dcbc
	b.n 0x3ddbe	@ 0003dcbc 7fe0
.org 0x3dcbe
	adds r0, r5, #0	@ 0003dcbe 281c
.org 0x3dcc0
	adds r0, #113	@ 0003dcc0 7130
.org 0x3dcc2
	ldrb r0, [r0, #0]	@ 0003dcc2 0078
.org 0x3dcc4
	lsls r0, r0, #24	@ 0003dcc4 0006
.org 0x3dcc6
	asrs r0, r0, #24	@ 0003dcc6 0016
.org 0x3dcc8
	cmp r0, #0	@ 0003dcc8 0028
.org 0x3dcca
	bne.n 0x3dd04	@ 0003dcca 1bd1
.org 0x3dccc
	movs r3, #144	@ 0003dccc 9023
.org 0x3dcce
	lsls r3, r3, #5	@ 0003dcce 5b01
.org 0x3dcd0
	movs r2, #184	@ 0003dcd0 b822
.org 0x3dcd2
	lsls r2, r2, #5	@ 0003dcd2 5201
.org 0x3dcd4
	b.n 0x3ddc2	@ 0003dcd4 75e0
.org 0x3dcd6
	.byte 0x00	@ 0003dcd6 data
.org 0x3dcd7
	.byte 0x00	@ 0003dcd7 data
.org 0x3dcd8
	.byte 0x01,0x0c,0x00,0x00	@ 0003dcd8 data
.org 0x3dcdc
	ldr r0, [pc, #4]	@ 0003dcdc 0148
.org 0x3dcde
	cmp r1, r0	@ 0003dcde 8142
.org 0x3dce0
	beq.n 0x3dd9e	@ 0003dce0 5dd0
.org 0x3dce2
	b.n 0x3ddbe	@ 0003dce2 6ce0
.org 0x3dce4
	.byte 0x01,0x0d,0x00,0x00	@ 0003dce4 data
.org 0x3dce8
	adds r0, r5, #0	@ 0003dce8 281c
.org 0x3dcea
	adds r0, #113	@ 0003dcea 7130
.org 0x3dcec
	ldrb r0, [r0, #0]	@ 0003dcec 0078
.org 0x3dcee
	lsls r0, r0, #24	@ 0003dcee 0006
.org 0x3dcf0
	asrs r0, r0, #24	@ 0003dcf0 0016
.org 0x3dcf2
	movs r3, #144	@ 0003dcf2 9023
.org 0x3dcf4
	lsls r3, r3, #5	@ 0003dcf4 5b01
.org 0x3dcf6
	cmp r0, #1	@ 0003dcf6 0128
.org 0x3dcf8
	bgt.n 0x3dcfe	@ 0003dcf8 01dc
.org 0x3dcfa
	movs r3, #136	@ 0003dcfa 8823
.org 0x3dcfc
	lsls r3, r3, #5	@ 0003dcfc 5b01
.org 0x3dcfe
	movs r2, #168	@ 0003dcfe a822
.org 0x3dd00
	lsls r2, r2, #5	@ 0003dd00 5201
.org 0x3dd02
	b.n 0x3ddc2	@ 0003dd02 5ee0
.org 0x3dd04
	movs r3, #152	@ 0003dd04 9823
.org 0x3dd06
	lsls r3, r3, #5	@ 0003dd06 5b01
.org 0x3dd08
	movs r2, #160	@ 0003dd08 a022
.org 0x3dd0a
	lsls r2, r2, #5	@ 0003dd0a 5201
.org 0x3dd0c
	b.n 0x3ddc2	@ 0003dd0c 59e0
.org 0x3dd0e
	ldr r0, [pc, #24]	@ 0003dd0e 0648
.org 0x3dd10
	adds r1, r5, #0	@ 0003dd10 291c
.org 0x3dd12
	adds r1, #113	@ 0003dd12 7131
.org 0x3dd14
	ldrb r1, [r1, #0]	@ 0003dd14 0978
.org 0x3dd16
	lsls r1, r1, #24	@ 0003dd16 0906
.org 0x3dd18
	asrs r1, r1, #24	@ 0003dd18 0916
.org 0x3dd1a
	lsls r1, r1, #2	@ 0003dd1a 8900
.org 0x3dd1c
	adds r0, r1, r0	@ 0003dd1c 0818
.org 0x3dd1e
	ldr r3, [r0, #0]	@ 0003dd1e 0368
.org 0x3dd20
	ldr r0, [pc, #8]	@ 0003dd20 0248
.org 0x3dd22
	adds r1, r1, r0	@ 0003dd22 0918
.org 0x3dd24
	ldr r2, [r1, #0]	@ 0003dd24 0a68
.org 0x3dd26
	b.n 0x3ddc2	@ 0003dd26 4ce0
.org 0x3dd28
	.byte 0x04,0x53,0x85,0x08	@ 0003dd28 data
.org 0x3dd2c
	.byte 0x30,0x53,0x85,0x08	@ 0003dd2c data
.org 0x3dd30
	movs r3, #184	@ 0003dd30 b823
.org 0x3dd32
	lsls r3, r3, #5	@ 0003dd32 5b01
.org 0x3dd34
	movs r2, #240	@ 0003dd34 f022
.org 0x3dd36
	lsls r2, r2, #4	@ 0003dd36 1201
.org 0x3dd38
	b.n 0x3ddc2	@ 0003dd38 43e0
.org 0x3dd3a
	adds r0, r5, #0	@ 0003dd3a 281c
.org 0x3dd3c
	adds r0, #113	@ 0003dd3c 7130
.org 0x3dd3e
	ldrb r0, [r0, #0]	@ 0003dd3e 0078
.org 0x3dd40
	lsls r0, r0, #24	@ 0003dd40 0006
.org 0x3dd42
	asrs r0, r0, #24	@ 0003dd42 0016
.org 0x3dd44
	movs r3, #144	@ 0003dd44 9023
.org 0x3dd46
	lsls r3, r3, #5	@ 0003dd46 5b01
.org 0x3dd48
	cmp r0, #0	@ 0003dd48 0028
.org 0x3dd4a
	bne.n 0x3dd50	@ 0003dd4a 01d1
.org 0x3dd4c
	movs r3, #136	@ 0003dd4c 8823
.org 0x3dd4e
	lsls r3, r3, #5	@ 0003dd4e 5b01
.org 0x3dd50
	movs r2, #176	@ 0003dd50 b022
.org 0x3dd52
	lsls r2, r2, #5	@ 0003dd52 5201
.org 0x3dd54
	b.n 0x3ddc2	@ 0003dd54 35e0
.org 0x3dd56
	mov r0, ip	@ 0003dd56 6046
.org 0x3dd58
	ldrb r2, [r0, #10]	@ 0003dd58 827a
.org 0x3dd5a
	lsrs r0, r2, #4	@ 0003dd5a 1009
.org 0x3dd5c
	adds r1, r6, #0	@ 0003dd5c 311c
.org 0x3dd5e
	bics r1, r0	@ 0003dd5e 8143
.org 0x3dd60
	cmp r1, #0	@ 0003dd60 0029
.org 0x3dd62
	beq.n 0x3dd6a	@ 0003dd62 02d0
.org 0x3dd64
	movs r0, #16	@ 0003dd64 1020
.org 0x3dd66
	orrs r0, r2	@ 0003dd66 1043
.org 0x3dd68
	b.n 0x3dd6e	@ 0003dd68 01e0
.org 0x3dd6a
	movs r0, #239	@ 0003dd6a ef20
.org 0x3dd6c
	ands r0, r2	@ 0003dd6c 1040
.org 0x3dd6e
	mov r2, ip	@ 0003dd6e 6246
.org 0x3dd70
	strb r0, [r2, #10]	@ 0003dd70 9072
.org 0x3dd72
	strb r1, [r4, #0]	@ 0003dd72 2170
.org 0x3dd74
	lsls r1, r1, #4	@ 0003dd74 0901
.org 0x3dd76
	ldrb r2, [r3, #0]	@ 0003dd76 1a78
.org 0x3dd78
	movs r0, #17	@ 0003dd78 1120
.org 0x3dd7a
	negs r0, r0	@ 0003dd7a 4042
.org 0x3dd7c
	ands r0, r2	@ 0003dd7c 1040
.org 0x3dd7e
	orrs r0, r1	@ 0003dd7e 0843
.org 0x3dd80
	strb r0, [r3, #0]	@ 0003dd80 1870
.org 0x3dd82
	adds r0, r5, #0	@ 0003dd82 281c
.org 0x3dd84
	adds r0, #113	@ 0003dd84 7130
.org 0x3dd86
	ldrb r0, [r0, #0]	@ 0003dd86 0078
.org 0x3dd88
	lsls r0, r0, #24	@ 0003dd88 0006
.org 0x3dd8a
	asrs r0, r0, #24	@ 0003dd8a 0016
.org 0x3dd8c
	movs r3, #240	@ 0003dd8c f023
.org 0x3dd8e
	lsls r3, r3, #4	@ 0003dd8e 1b01
.org 0x3dd90
	cmp r0, #1	@ 0003dd90 0128
.org 0x3dd92
	bgt.n 0x3dd98	@ 0003dd92 01dc
.org 0x3dd94
	movs r3, #224	@ 0003dd94 e023
.org 0x3dd96
	lsls r3, r3, #4	@ 0003dd96 1b01
.org 0x3dd98
	movs r2, #144	@ 0003dd98 9022
.org 0x3dd9a
	lsls r2, r2, #5	@ 0003dd9a 5201
.org 0x3dd9c
	b.n 0x3ddc2	@ 0003dd9c 11e0
.org 0x3dd9e
	movs r0, #17	@ 0003dd9e 1120
.org 0x3dda0
	strb r0, [r2, #0]	@ 0003dda0 1070
.org 0x3dda2
	adds r0, r5, #0	@ 0003dda2 281c
.org 0x3dda4
	adds r0, #113	@ 0003dda4 7130
.org 0x3dda6
	ldrb r0, [r0, #0]	@ 0003dda6 0078
.org 0x3dda8
	lsls r0, r0, #24	@ 0003dda8 0006
.org 0x3ddaa
	asrs r0, r0, #24	@ 0003ddaa 0016
.org 0x3ddac
	movs r3, #224	@ 0003ddac e023
.org 0x3ddae
	lsls r3, r3, #4	@ 0003ddae 1b01
.org 0x3ddb0
	cmp r0, #1	@ 0003ddb0 0128
.org 0x3ddb2
	bgt.n 0x3ddb8	@ 0003ddb2 01dc
.org 0x3ddb4
	movs r3, #208	@ 0003ddb4 d023
.org 0x3ddb6
	lsls r3, r3, #4	@ 0003ddb6 1b01
.org 0x3ddb8
	movs r2, #192	@ 0003ddb8 c022
.org 0x3ddba
	lsls r2, r2, #5	@ 0003ddba 5201
.org 0x3ddbc
	b.n 0x3ddc2	@ 0003ddbc 01e0
.org 0x3ddbe
	movs r0, #1	@ 0003ddbe 0120
.org 0x3ddc0
	b.n 0x3ddee	@ 0003ddc0 15e0
.org 0x3ddc2
	mov r1, ip	@ 0003ddc2 6146
.org 0x3ddc4
	ldr r0, [r1, #100]	@ 0003ddc4 486e
.org 0x3ddc6
	adds r3, r3, r0	@ 0003ddc6 1b18
.org 0x3ddc8
	ldr r0, [r1, #104]	@ 0003ddc8 886e
.org 0x3ddca
	adds r2, r2, r0	@ 0003ddca 1218
.org 0x3ddcc
	ldrb r1, [r1, #10]	@ 0003ddcc 897a
.org 0x3ddce
	movs r0, #16	@ 0003ddce 1020
.org 0x3ddd0
	ands r0, r1	@ 0003ddd0 0840
.org 0x3ddd2
	cmp r0, #0	@ 0003ddd2 0028
