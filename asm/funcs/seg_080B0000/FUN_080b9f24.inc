@ FUN_080b9f24  entry 0x080b9f24  size 270
.thumb
.org 0xb9f24
FUN_080b9f24:
	push {r4, r5, r6, r7, lr}	@ 000b9f24 f0b5
.org 0xb9f26
	mov r7, sl	@ 000b9f26 5746
.org 0xb9f28
	mov r6, r9	@ 000b9f28 4e46
.org 0xb9f2a
	mov r5, r8	@ 000b9f2a 4546
.org 0xb9f2c
	push {r5, r6, r7}	@ 000b9f2c e0b4
.org 0xb9f2e
	adds r7, r0, #0	@ 000b9f2e 071c
.org 0xb9f30
	ldr r1, [pc, #256]	@ 000b9f30 4049
.org 0xb9f32
	ldrb r0, [r7, #9]	@ 000b9f32 787a
.org 0xb9f34
	lsls r0, r0, #2	@ 000b9f34 8000
.org 0xb9f36
	adds r0, r0, r1	@ 000b9f36 4018
.org 0xb9f38
	movs r1, #1	@ 000b9f38 0121
.org 0xb9f3a
	str r1, [r7, #12]	@ 000b9f3a f960
.org 0xb9f3c
	ldr r0, [r0, #0]	@ 000b9f3c 0068
.org 0xb9f3e
	ldr r0, [r0, #4]	@ 000b9f3e 4068
.org 0xb9f40
	str r0, [r7, #20]	@ 000b9f40 7861
.org 0xb9f42
	movs r2, #0	@ 000b9f42 0022
.org 0xb9f44
	strb r2, [r7, #13]	@ 000b9f44 7a73
.org 0xb9f46
	strb r2, [r7, #14]	@ 000b9f46 ba73
.org 0xb9f48
	strb r2, [r7, #15]	@ 000b9f48 fa73
.org 0xb9f4a
	ldrb r0, [r7, #10]	@ 000b9f4a b87a
.org 0xb9f4c
	orrs r0, r1	@ 000b9f4c 0843
.org 0xb9f4e
	movs r1, #2	@ 000b9f4e 0221
.org 0xb9f50
	orrs r0, r1	@ 000b9f50 0843
.org 0xb9f52
	strb r0, [r7, #10]	@ 000b9f52 b872
.org 0xb9f54
	ldr r5, [pc, #224]	@ 000b9f54 384d
.org 0xb9f56
	ldr r0, [pc, #228]	@ 000b9f56 3948
.org 0xb9f58
	mov r9, r0	@ 000b9f58 8146
.org 0xb9f5a
	adds r0, r5, r0	@ 000b9f5a 2818
.org 0xb9f5c
	ldr r1, [pc, #224]	@ 000b9f5c 3849
.org 0xb9f5e
	mov r8, r1	@ 000b9f5e 8846
.org 0xb9f60
	movs r4, #182	@ 000b9f60 b624
.org 0xb9f62
	lsls r4, r4, #1	@ 000b9f62 6400
.org 0xb9f64
	adds r1, r1, r4	@ 000b9f64 0919
.org 0xb9f66
	ldrh r1, [r1, #0]	@ 000b9f66 0988
.org 0xb9f68
	ldrh r2, [r0, #6]	@ 000b9f68 c288
.org 0xb9f6a
	lsrs r2, r2, #6	@ 000b9f6a 9209
.org 0xb9f6c
	subs r1, r1, r2	@ 000b9f6c 891a
.org 0xb9f6e
	lsls r1, r1, #5	@ 000b9f6e 4901
.org 0xb9f70
	movs r2, #128	@ 000b9f70 8022
.org 0xb9f72
	lsls r2, r2, #9	@ 000b9f72 5202
.org 0xb9f74
	adds r1, r1, r2	@ 000b9f74 8918
.org 0xb9f76
	bl 0x1d30	@ 000b9f76 47f7dbfe
.org 0xb9f7a
	ldr r0, [pc, #200]	@ 000b9f7a 3248
.org 0xb9f7c
	adds r5, r5, r0	@ 000b9f7c 2d18
.org 0xb9f7e
	ldr r6, [pc, #200]	@ 000b9f7e 324e
.org 0xb9f80
	adds r4, r6, r4	@ 000b9f80 3419
.org 0xb9f82
	ldrh r1, [r4, #0]	@ 000b9f82 2188
.org 0xb9f84
	ldrb r0, [r5, #7]	@ 000b9f84 e879
.org 0xb9f86
	subs r1, r1, r0	@ 000b9f86 091a
.org 0xb9f88
	lsls r1, r1, #5	@ 000b9f88 4901
.org 0xb9f8a
	movs r2, #128	@ 000b9f8a 8022
.org 0xb9f8c
	lsls r2, r2, #2	@ 000b9f8c 9200
.org 0xb9f8e
	mov sl, r2	@ 000b9f8e 9246
.org 0xb9f90
	add r1, sl	@ 000b9f90 5144
.org 0xb9f92
	adds r0, r5, #0	@ 000b9f92 281c
.org 0xb9f94
	bl 0x2208	@ 000b9f94 48f738f9
.org 0xb9f98
	movs r4, #145	@ 000b9f98 9124
.org 0xb9f9a
	lsls r4, r4, #5	@ 000b9f9a 6401
.org 0xb9f9c
	add r9, r4	@ 000b9f9c a144
.org 0xb9f9e
	movs r5, #232	@ 000b9f9e e825
.org 0xb9fa0
	lsls r5, r5, #1	@ 000b9fa0 6d00
.org 0xb9fa2
	add r8, r5	@ 000b9fa2 a844
.org 0xb9fa4
	mov r0, r8	@ 000b9fa4 4046
.org 0xb9fa6
	ldrh r1, [r0, #0]	@ 000b9fa6 0188
.org 0xb9fa8
	mov r2, r9	@ 000b9fa8 4a46
.org 0xb9faa
	ldrh r0, [r2, #6]	@ 000b9faa d088
.org 0xb9fac
	lsrs r0, r0, #6	@ 000b9fac 8009
.org 0xb9fae
	subs r1, r1, r0	@ 000b9fae 091a
.org 0xb9fb0
	lsls r1, r1, #5	@ 000b9fb0 4901
.org 0xb9fb2
	movs r0, #128	@ 000b9fb2 8020
.org 0xb9fb4
	lsls r0, r0, #9	@ 000b9fb4 4002
.org 0xb9fb6
	adds r1, r1, r0	@ 000b9fb6 0918
.org 0xb9fb8
	mov r0, r9	@ 000b9fb8 4846
.org 0xb9fba
	bl 0x1d30	@ 000b9fba 47f7b9fe
.org 0xb9fbe
	ldr r1, [pc, #132]	@ 000b9fbe 2149
.org 0xb9fc0
	adds r4, r4, r1	@ 000b9fc0 6418
.org 0xb9fc2
	adds r6, r6, r5	@ 000b9fc2 7619
.org 0xb9fc4
	ldrh r1, [r6, #0]	@ 000b9fc4 3188
.org 0xb9fc6
	ldrb r0, [r4, #7]	@ 000b9fc6 e079
.org 0xb9fc8
	subs r1, r1, r0	@ 000b9fc8 091a
.org 0xb9fca
	lsls r1, r1, #5	@ 000b9fca 4901
.org 0xb9fcc
	add r1, sl	@ 000b9fcc 5144
.org 0xb9fce
	adds r0, r4, #0	@ 000b9fce 201c
.org 0xb9fd0
	bl 0x2208	@ 000b9fd0 48f71af9
.org 0xb9fd4
	adds r0, r7, #0	@ 000b9fd4 381c
.org 0xb9fd6
	bl 0x1cc9c	@ 000b9fd6 62f761fe
.org 0xb9fda
	adds r0, r7, #0	@ 000b9fda 381c
.org 0xb9fdc
	adds r0, #37	@ 000b9fdc 2530
.org 0xb9fde
	movs r2, #1	@ 000b9fde 0122
.org 0xb9fe0
	strb r2, [r0, #0]	@ 000b9fe0 0270
.org 0xb9fe2
	ldrb r1, [r7, #10]	@ 000b9fe2 b97a
.org 0xb9fe4
	movs r0, #239	@ 000b9fe4 ef20
.org 0xb9fe6
	ands r0, r1	@ 000b9fe6 0840
.org 0xb9fe8
	strb r0, [r7, #10]	@ 000b9fe8 b872
.org 0xb9fea
	adds r0, r7, #0	@ 000b9fea 381c
.org 0xb9fec
	adds r0, #76	@ 000b9fec 4c30
.org 0xb9fee
	movs r1, #0	@ 000b9fee 0021
.org 0xb9ff0
	strb r1, [r0, #0]	@ 000b9ff0 0170
.org 0xb9ff2
	adds r2, r7, #0	@ 000b9ff2 3a1c
.org 0xb9ff4
	adds r2, #74	@ 000b9ff4 4a32
.org 0xb9ff6
	ldrb r1, [r2, #0]	@ 000b9ff6 1178
.org 0xb9ff8
	movs r0, #17	@ 000b9ff8 1120
.org 0xb9ffa
	negs r0, r0	@ 000b9ffa 4042
.org 0xb9ffc
	ands r0, r1	@ 000b9ffc 0840
.org 0xb9ffe
	strb r0, [r2, #0]	@ 000b9ffe 1070
.org 0xba000
	ldrb r1, [r7, #10]	@ 000ba000 b97a
.org 0xba002
	movs r0, #4	@ 000ba002 0420
.org 0xba004
	orrs r0, r1	@ 000ba004 0843
.org 0xba006
	strb r0, [r7, #10]	@ 000ba006 b872
.org 0xba008
	adds r4, r7, #0	@ 000ba008 3c1c
.org 0xba00a
	adds r4, #116	@ 000ba00a 7434
.org 0xba00c
	ldr r1, [pc, #60]	@ 000ba00c 0f49
.org 0xba00e
	adds r2, #10	@ 000ba00e 0a32
.org 0xba010
	adds r0, r4, #0	@ 000ba010 201c
.org 0xba012
	movs r3, #64	@ 000ba012 4023
.org 0xba014
	bl 0x5760	@ 000ba014 4bf7a4fb
.org 0xba018
	str r7, [r4, #44]	@ 000ba018 e762
.org 0xba01a
	movs r2, #0	@ 000ba01a 0022
.org 0xba01c
	str r2, [r4, #36]	@ 000ba01c 6262
.org 0xba01e
	adds r0, r7, #0	@ 000ba01e 381c
.org 0xba020
	bl 0xba050	@ 000ba020 00f016f8
.org 0xba024
	pop {r3, r4, r5}	@ 000ba024 38bc
.org 0xba026
	mov r8, r3	@ 000ba026 9846
.org 0xba028
	mov r9, r4	@ 000ba028 a146
.org 0xba02a
	mov sl, r5	@ 000ba02a aa46
.org 0xba02c
	pop {r4, r5, r6, r7}	@ 000ba02c f0bc
.org 0xba02e
	pop {r0}	@ 000ba02e 01bc
.org 0xba030
	bx r0	@ 000ba030 0047
