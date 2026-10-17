@ FUN_0807dcc0  entry 0x0807dcc0  size 256
.thumb
.org 0x7dcc0
FUN_0807dcc0:
	push {r4, r5, lr}	@ 0007dcc0 30b5
.org 0x7dcc2
	adds r4, r0, #0	@ 0007dcc2 041c
.org 0x7dcc4
	ldrb r0, [r4, #15]	@ 0007dcc4 e07b
.org 0x7dcc6
	cmp r0, #0	@ 0007dcc6 0028
.org 0x7dcc8
	bne.n 0x7dd18	@ 0007dcc8 26d1
.org 0x7dcca
	movs r0, #164	@ 0007dcca a420
.org 0x7dccc
	lsls r0, r0, #1	@ 0007dccc 4000
.org 0x7dcce
	bl 0x2b10	@ 0007dcce 84f71fff
.org 0x7dcd2
	ldr r1, [pc, #236]	@ 0007dcd2 3b49
.org 0x7dcd4
	ldr r0, [pc, #236]	@ 0007dcd4 3b48
.org 0x7dcd6
	strh r0, [r1, #0]	@ 0007dcd6 0880
.org 0x7dcd8
	adds r2, r4, #0	@ 0007dcd8 221c
.org 0x7dcda
	adds r2, #69	@ 0007dcda 4532
.org 0x7dcdc
	ldrb r1, [r2, #0]	@ 0007dcdc 1178
.org 0x7dcde
	movs r0, #13	@ 0007dcde 0d20
.org 0x7dce0
	negs r0, r0	@ 0007dce0 4042
.org 0x7dce2
	ands r0, r1	@ 0007dce2 0840
.org 0x7dce4
	movs r1, #4	@ 0007dce4 0421
.org 0x7dce6
	orrs r0, r1	@ 0007dce6 0843
.org 0x7dce8
	strb r0, [r2, #0]	@ 0007dce8 1070
.org 0x7dcea
	adds r0, r4, #0	@ 0007dcea 201c
.org 0x7dcec
	movs r1, #28	@ 0007dcec 1c21
.org 0x7dcee
	bl 0x7e8c8	@ 0007dcee 00f0ebfd
.org 0x7dcf2
	adds r0, r4, #0	@ 0007dcf2 201c
.org 0x7dcf4
	adds r0, #180	@ 0007dcf4 b430
.org 0x7dcf6
	ldr r0, [r0, #0]	@ 0007dcf6 0068
.org 0x7dcf8
	movs r1, #240	@ 0007dcf8 f021
.org 0x7dcfa
	lsls r1, r1, #7	@ 0007dcfa c901
.org 0x7dcfc
	adds r0, r0, r1	@ 0007dcfc 4018
.org 0x7dcfe
	str r0, [r4, #92]	@ 0007dcfe e065
.org 0x7dd00
	ldr r1, [r4, #84]	@ 0007dd00 616d
.org 0x7dd02
	subs r0, r0, r1	@ 0007dd02 401a
.org 0x7dd04
	str r0, [r4, #100]	@ 0007dd04 6066
.org 0x7dd06
	ldr r0, [r4, #96]	@ 0007dd06 206e
.org 0x7dd08
	ldr r1, [r4, #88]	@ 0007dd08 a16d
.org 0x7dd0a
	subs r0, r0, r1	@ 0007dd0a 401a
.org 0x7dd0c
	str r0, [r4, #104]	@ 0007dd0c a066
.org 0x7dd0e
	movs r0, #32	@ 0007dd0e 2020
.org 0x7dd10
	strb r0, [r4, #18]	@ 0007dd10 a074
.org 0x7dd12
	ldrb r0, [r4, #15]	@ 0007dd12 e07b
.org 0x7dd14
	adds r0, #1	@ 0007dd14 0130
.org 0x7dd16
	strb r0, [r4, #15]	@ 0007dd16 e073
.org 0x7dd18
	adds r5, r4, #0	@ 0007dd18 251c
.org 0x7dd1a
	adds r5, #188	@ 0007dd1a bc35
.org 0x7dd1c
	ldrb r0, [r5, #0]	@ 0007dd1c 2878
.org 0x7dd1e
	cmp r0, #0	@ 0007dd1e 0028
.org 0x7dd20
	beq.n 0x7dd28	@ 0007dd20 02d0
.org 0x7dd22
	adds r0, r4, #0	@ 0007dd22 201c
.org 0x7dd24
	bl 0x1cff0	@ 0007dd24 9ff764f9
.org 0x7dd28
	adds r0, r4, #0	@ 0007dd28 201c
.org 0x7dd2a
	adds r0, #116	@ 0007dd2a 7430
.org 0x7dd2c
	ldr r3, [pc, #152]	@ 0007dd2c 264b
.org 0x7dd2e
	ldr r2, [pc, #156]	@ 0007dd2e 274a
.org 0x7dd30
	ldrb r1, [r5, #0]	@ 0007dd30 2978
.org 0x7dd32
	lsls r1, r1, #1	@ 0007dd32 4900
.org 0x7dd34
	adds r1, r1, r2	@ 0007dd34 8918
.org 0x7dd36
	ldrh r2, [r1, #0]	@ 0007dd36 0a88
.org 0x7dd38
	lsls r2, r2, #2	@ 0007dd38 9200
.org 0x7dd3a
	adds r2, r2, r3	@ 0007dd3a d218
.org 0x7dd3c
	adds r1, r4, #0	@ 0007dd3c 211c
.org 0x7dd3e
	adds r1, #113	@ 0007dd3e 7131
.org 0x7dd40
	ldrb r1, [r1, #0]	@ 0007dd40 0978
.org 0x7dd42
	lsls r1, r1, #24	@ 0007dd42 0906
.org 0x7dd44
	asrs r1, r1, #24	@ 0007dd44 0916
.org 0x7dd46
	ldr r2, [r2, #0]	@ 0007dd46 1268
.org 0x7dd48
	lsls r1, r1, #2	@ 0007dd48 8900
.org 0x7dd4a
	adds r1, r1, r2	@ 0007dd4a 8918
.org 0x7dd4c
	ldr r1, [r1, #0]	@ 0007dd4c 0968
.org 0x7dd4e
	bl 0x5784	@ 0007dd4e 87f719fd
.org 0x7dd52
	ldrb r0, [r4, #18]	@ 0007dd52 a07c
.org 0x7dd54
	subs r5, r0, #1	@ 0007dd54 451e
.org 0x7dd56
	strb r5, [r4, #18]	@ 0007dd56 a574
.org 0x7dd58
	ldrb r0, [r4, #18]	@ 0007dd58 a07c
.org 0x7dd5a
	ldr r1, [pc, #116]	@ 0007dd5a 1d49
.org 0x7dd5c
	lsls r0, r0, #25	@ 0007dd5c 4006
.org 0x7dd5e
	lsrs r0, r0, #23	@ 0007dd5e c00d
.org 0x7dd60
	adds r0, r0, r1	@ 0007dd60 4018
.org 0x7dd62
	movs r3, #0	@ 0007dd62 0023
.org 0x7dd64
	ldrsh r2, [r0, r3]	@ 0007dd64 c25e
.org 0x7dd66
	adds r0, r2, #0	@ 0007dd66 101c
.org 0x7dd68
	cmp r2, #0	@ 0007dd68 002a
.org 0x7dd6a
	bge.n 0x7dd6e	@ 0007dd6a 00da
.org 0x7dd6c
	adds r0, r2, #3	@ 0007dd6c d01c
.org 0x7dd6e
	asrs r2, r0, #2	@ 0007dd6e 8210
.org 0x7dd70
	lsls r0, r2, #24	@ 0007dd70 1006
.org 0x7dd72
	lsrs r0, r0, #23	@ 0007dd72 c00d
.org 0x7dd74
	adds r0, r0, r1	@ 0007dd74 4018
.org 0x7dd76
	movs r1, #0	@ 0007dd76 0021
.org 0x7dd78
	ldrsh r2, [r0, r1]	@ 0007dd78 425e
.org 0x7dd7a
	ldr r0, [r4, #100]	@ 0007dd7a 606e
.org 0x7dd7c
	negs r0, r0	@ 0007dd7c 4042
.org 0x7dd7e
	muls r0, r2	@ 0007dd7e 5043
.org 0x7dd80
	cmp r0, #0	@ 0007dd80 0028
.org 0x7dd82
	bge.n 0x7dd86	@ 0007dd82 00da
.org 0x7dd84
	adds r0, #255	@ 0007dd84 ff30
.org 0x7dd86
	asrs r1, r0, #8	@ 0007dd86 0112
.org 0x7dd88
	ldr r0, [r4, #92]	@ 0007dd88 e06d
.org 0x7dd8a
	adds r0, r0, r1	@ 0007dd8a 4018
.org 0x7dd8c
	str r0, [r4, #84]	@ 0007dd8c 6065
.org 0x7dd8e
	adds r0, r2, #0	@ 0007dd8e 101c
.org 0x7dd90
	cmp r0, #0	@ 0007dd90 0028
.org 0x7dd92
	bge.n 0x7dd96	@ 0007dd92 00da
.org 0x7dd94
	adds r0, #15	@ 0007dd94 0f30
.org 0x7dd96
	asrs r2, r0, #4	@ 0007dd96 0211
.org 0x7dd98
	ldr r3, [pc, #36]	@ 0007dd98 094b
.org 0x7dd9a
	movs r0, #31	@ 0007dd9a 1f20
.org 0x7dd9c
	adds r1, r2, #0	@ 0007dd9c 111c
.org 0x7dd9e
	ands r1, r0	@ 0007dd9e 0140
.org 0x7dda0
	movs r0, #16	@ 0007dda0 1020
.org 0x7dda2
	subs r0, r0, r2	@ 0007dda2 801a
.org 0x7dda4
	lsls r0, r0, #8	@ 0007dda4 0002
.org 0x7dda6
	orrs r1, r0	@ 0007dda6 0143
.org 0x7dda8
	strh r1, [r3, #2]	@ 0007dda8 5980
.org 0x7ddaa
	lsls r0, r5, #24	@ 0007ddaa 2806
.org 0x7ddac
	cmp r0, #0	@ 0007ddac 0028
.org 0x7ddae
	bne.n 0x7ddba	@ 0007ddae 04d1
.org 0x7ddb0
	ldrb r0, [r4, #14]	@ 0007ddb0 a07b
.org 0x7ddb2
	adds r0, #1	@ 0007ddb2 0130
.org 0x7ddb4
	strb r0, [r4, #14]	@ 0007ddb4 a073
.org 0x7ddb6
	movs r0, #0	@ 0007ddb6 0020
.org 0x7ddb8
	strb r0, [r4, #15]	@ 0007ddb8 e073
.org 0x7ddba
	pop {r4, r5}	@ 0007ddba 30bc
.org 0x7ddbc
	pop {r0}	@ 0007ddbc 01bc
.org 0x7ddbe
	bx r0	@ 0007ddbe 0047
