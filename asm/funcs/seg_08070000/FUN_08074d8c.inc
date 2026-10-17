@ FUN_08074d8c  entry 0x08074d8c  size 306
.thumb
.org 0x74d8c
FUN_08074d8c:
	push {r4, r5, r6, lr}	@ 00074d8c 70b5
.org 0x74d8e
	adds r6, r0, #0	@ 00074d8e 061c
.org 0x74d90
	ldr r0, [pc, #300]	@ 00074d90 4b48
.org 0x74d92
	ldr r1, [pc, #304]	@ 00074d92 4c49
.org 0x74d94
	movs r4, #149	@ 00074d94 9524
.org 0x74d96
	lsls r4, r4, #1	@ 00074d96 6400
.org 0x74d98
	adds r1, r1, r4	@ 00074d98 0919
.org 0x74d9a
	ldrh r1, [r1, #0]	@ 00074d9a 0988
.org 0x74d9c
	ldrh r2, [r0, #6]	@ 00074d9c c288
.org 0x74d9e
	lsrs r2, r2, #6	@ 00074d9e 9209
.org 0x74da0
	subs r1, r1, r2	@ 00074da0 891a
.org 0x74da2
	lsls r1, r1, #5	@ 00074da2 4901
.org 0x74da4
	movs r2, #128	@ 00074da4 8022
.org 0x74da6
	lsls r2, r2, #9	@ 00074da6 5202
.org 0x74da8
	adds r1, r1, r2	@ 00074da8 8918
.org 0x74daa
	bl 0x1d30	@ 00074daa 8cf7c1ff
.org 0x74dae
	ldr r0, [pc, #280]	@ 00074dae 4648
.org 0x74db0
	ldr r1, [pc, #280]	@ 00074db0 4649
.org 0x74db2
	adds r1, r1, r4	@ 00074db2 0919
.org 0x74db4
	ldrh r1, [r1, #0]	@ 00074db4 0988
.org 0x74db6
	ldrb r2, [r0, #7]	@ 00074db6 c279
.org 0x74db8
	subs r1, r1, r2	@ 00074db8 891a
.org 0x74dba
	lsls r1, r1, #5	@ 00074dba 4901
.org 0x74dbc
	movs r2, #128	@ 00074dbc 8022
.org 0x74dbe
	lsls r2, r2, #2	@ 00074dbe 9200
.org 0x74dc0
	adds r1, r1, r2	@ 00074dc0 8918
.org 0x74dc2
	bl 0x2208	@ 00074dc2 8df721fa
.org 0x74dc6
	adds r0, r6, #0	@ 00074dc6 301c
.org 0x74dc8
	bl 0x1cc9c	@ 00074dc8 a7f768ff
.org 0x74dcc
	ldrb r1, [r6, #10]	@ 00074dcc b17a
.org 0x74dce
	movs r0, #1	@ 00074dce 0120
.org 0x74dd0
	movs r5, #0	@ 00074dd0 0025
.org 0x74dd2
	orrs r0, r1	@ 00074dd2 0843
.org 0x74dd4
	movs r1, #2	@ 00074dd4 0221
.org 0x74dd6
	orrs r0, r1	@ 00074dd6 0843
.org 0x74dd8
	strb r0, [r6, #10]	@ 00074dd8 b072
.org 0x74dda
	adds r0, r6, #0	@ 00074dda 301c
.org 0x74ddc
	bl 0x1ceec	@ 00074ddc a8f786f8
.org 0x74de0
	ldr r1, [pc, #236]	@ 00074de0 3b49
.org 0x74de2
	adds r0, r6, #0	@ 00074de2 301c
.org 0x74de4
	bl 0x1cf00	@ 00074de4 a8f78cf8
.org 0x74de8
	adds r0, r6, #0	@ 00074de8 301c
.org 0x74dea
	bl 0x1cff0	@ 00074dea a8f701f9
.org 0x74dee
	adds r0, r6, #0	@ 00074dee 301c
.org 0x74df0
	adds r0, #76	@ 00074df0 4c30
.org 0x74df2
	strb r5, [r0, #0]	@ 00074df2 0570
.org 0x74df4
	adds r2, r6, #0	@ 00074df4 321c
.org 0x74df6
	adds r2, #74	@ 00074df6 4a32
.org 0x74df8
	ldrb r1, [r2, #0]	@ 00074df8 1178
.org 0x74dfa
	movs r0, #17	@ 00074dfa 1120
.org 0x74dfc
	negs r0, r0	@ 00074dfc 4042
.org 0x74dfe
	ands r0, r1	@ 00074dfe 0840
.org 0x74e00
	strb r0, [r2, #0]	@ 00074e00 1070
.org 0x74e02
	ldrb r1, [r6, #10]	@ 00074e02 b17a
.org 0x74e04
	movs r0, #239	@ 00074e04 ef20
.org 0x74e06
	ands r0, r1	@ 00074e06 0840
.org 0x74e08
	strb r0, [r6, #10]	@ 00074e08 b072
.org 0x74e0a
	ldr r1, [pc, #200]	@ 00074e0a 3249
.org 0x74e0c
	adds r0, r6, #0	@ 00074e0c 301c
.org 0x74e0e
	movs r2, #64	@ 00074e0e 4022
.org 0x74e10
	bl 0x503cc	@ 00074e10 dbf7dcfa
.org 0x74e14
	ldr r1, [pc, #192]	@ 00074e14 3049
.org 0x74e16
	adds r0, r6, #0	@ 00074e16 301c
.org 0x74e18
	adds r0, #116	@ 00074e18 7430
.org 0x74e1a
	str r1, [r0, #36]	@ 00074e1a 4162
.org 0x74e1c
	ldr r0, [r6, #84]	@ 00074e1c 706d
.org 0x74e1e
	ldr r1, [r6, #88]	@ 00074e1e b16d
.org 0x74e20
	bl 0x8534	@ 00074e20 93f788fb
.org 0x74e24
	str r0, [r6, #88]	@ 00074e24 b065
.org 0x74e26
	adds r4, r6, #0	@ 00074e26 341c
.org 0x74e28
	adds r4, #180	@ 00074e28 b434
.org 0x74e2a
	ldr r0, [r6, #84]	@ 00074e2a 706d
.org 0x74e2c
	str r0, [r4, #0]	@ 00074e2c 2060
.org 0x74e2e
	ldr r0, [r6, #88]	@ 00074e2e b06d
.org 0x74e30
	str r0, [r4, #4]	@ 00074e30 6060
.org 0x74e32
	str r5, [r4, #8]	@ 00074e32 a560
.org 0x74e34
	str r5, [r4, #12]	@ 00074e34 e560
.org 0x74e36
	ldr r0, [r6, #84]	@ 00074e36 706d
.org 0x74e38
	ldr r1, [r6, #88]	@ 00074e38 b16d
.org 0x74e3a
	bl 0x8988	@ 00074e3a 93f7a5fd
.org 0x74e3e
	str r0, [r4, #16]	@ 00074e3e 2061
.org 0x74e40
	ldr r0, [r6, #84]	@ 00074e40 706d
.org 0x74e42
	ldr r1, [r6, #88]	@ 00074e42 b16d
.org 0x74e44
	bl 0x8868	@ 00074e44 93f710fd
.org 0x74e48
	str r0, [r4, #20]	@ 00074e48 6061
.org 0x74e4a
	ldr r1, [r4, #16]	@ 00074e4a 2169
.org 0x74e4c
	subs r0, r0, r1	@ 00074e4c 401a
.org 0x74e4e
	asrs r0, r0, #1	@ 00074e4e 4010
.org 0x74e50
	adds r1, r1, r0	@ 00074e50 0918
.org 0x74e52
	str r1, [r4, #24]	@ 00074e52 a161
.org 0x74e54
	adds r0, r6, #0	@ 00074e54 301c
.org 0x74e56
	adds r0, #218	@ 00074e56 da30
.org 0x74e58
	strb r5, [r0, #0]	@ 00074e58 0570
.org 0x74e5a
	adds r0, #1	@ 00074e5a 0130
.org 0x74e5c
	strb r5, [r0, #0]	@ 00074e5c 0570
.org 0x74e5e
	adds r0, #1	@ 00074e5e 0130
.org 0x74e60
	strb r5, [r0, #0]	@ 00074e60 0570
.org 0x74e62
	adds r0, #2	@ 00074e62 0230
.org 0x74e64
	strb r5, [r0, #0]	@ 00074e64 0570
.org 0x74e66
	movs r3, #0	@ 00074e66 0023
.org 0x74e68
	ldr r0, [pc, #112]	@ 00074e68 1c48
.org 0x74e6a
	ldr r1, [pc, #116]	@ 00074e6a 1d49
.org 0x74e6c
	adds r0, r0, r1	@ 00074e6c 4018
.org 0x74e6e
	ldrb r1, [r0, #0]	@ 00074e6e 0178
.org 0x74e70
	movs r0, #16	@ 00074e70 1020
.org 0x74e72
	ands r0, r1	@ 00074e72 0840
.org 0x74e74
	cmp r0, #0	@ 00074e74 0028
.org 0x74e76
	beq.n 0x74e86	@ 00074e76 06d0
.org 0x74e78
	ldr r0, [pc, #104]	@ 00074e78 1a48
.org 0x74e7a
	ldrb r1, [r0, #4]	@ 00074e7a 0179
.org 0x74e7c
	movs r0, #4	@ 00074e7c 0420
.org 0x74e7e
	ands r0, r1	@ 00074e7e 0840
.org 0x74e80
	cmp r0, #0	@ 00074e80 0028
.org 0x74e82
	bne.n 0x74e86	@ 00074e82 00d1
.org 0x74e84
	movs r3, #1	@ 00074e84 0123
.org 0x74e86
	adds r0, r4, #0	@ 00074e86 201c
.org 0x74e88
	adds r0, #41	@ 00074e88 2930
.org 0x74e8a
	movs r2, #0	@ 00074e8a 0022
.org 0x74e8c
	strb r3, [r0, #0]	@ 00074e8c 0370
.org 0x74e8e
	adds r1, r6, #0	@ 00074e8e 311c
.org 0x74e90
	adds r1, #221	@ 00074e90 dd31
.org 0x74e92
	ldrb r0, [r1, #0]	@ 00074e92 0878
.org 0x74e94
	cmp r0, #0	@ 00074e94 0028
.org 0x74e96
	beq.n 0x74e9c	@ 00074e96 01d0
.org 0x74e98
	movs r0, #1	@ 00074e98 0120
.org 0x74e9a
	strb r0, [r1, #0]	@ 00074e9a 0870
.org 0x74e9c
	str r2, [r6, #44]	@ 00074e9c f262
.org 0x74e9e
	ldr r1, [pc, #72]	@ 00074e9e 1249
.org 0x74ea0
	ldrb r0, [r6, #9]	@ 00074ea0 707a
.org 0x74ea2
	lsls r0, r0, #2	@ 00074ea2 8000
.org 0x74ea4
	adds r0, r0, r1	@ 00074ea4 4018
.org 0x74ea6
	movs r1, #1	@ 00074ea6 0121
.org 0x74ea8
	str r1, [r6, #12]	@ 00074ea8 f160
.org 0x74eaa
	ldr r0, [r0, #0]	@ 00074eaa 0068
.org 0x74eac
	ldr r0, [r0, #4]	@ 00074eac 4068
.org 0x74eae
	str r0, [r6, #20]	@ 00074eae 7061
.org 0x74eb0
	strb r2, [r6, #13]	@ 00074eb0 7273
.org 0x74eb2
	adds r0, r6, #0	@ 00074eb2 301c
.org 0x74eb4
	bl 0x74eec	@ 00074eb4 00f01af8
.org 0x74eb8
	pop {r4, r5, r6}	@ 00074eb8 70bc
.org 0x74eba
	pop {r0}	@ 00074eba 01bc
.org 0x74ebc
	bx r0	@ 00074ebc 0047
