@ FUN_08012d88  entry 0x08012d88  size 216
.thumb
.org 0x12d88
FUN_08012d88:
	push {r4, r5, r6, lr}	@ 00012d88 70b5
.org 0x12d8a
	adds r5, r0, #0	@ 00012d8a 051c
.org 0x12d8c
	ldrb r4, [r5, #14]	@ 00012d8c ac7b
.org 0x12d8e
	cmp r4, #0	@ 00012d8e 002c
.org 0x12d90
	bne.n 0x12e46	@ 00012d90 59d1
.org 0x12d92
	ldr r1, [r5, #92]	@ 00012d92 e96d
.org 0x12d94
	lsls r1, r1, #16	@ 00012d94 0904
.org 0x12d96
	lsrs r1, r1, #20	@ 00012d96 090d
.org 0x12d98
	lsls r0, r1, #1	@ 00012d98 4800
.org 0x12d9a
	ldr r3, [pc, #112]	@ 00012d9a 1c4b
.org 0x12d9c
	adds r6, r0, r3	@ 00012d9c c618
.org 0x12d9e
	ldr r0, [r5, #96]	@ 00012d9e 286e
.org 0x12da0
	ldr r2, [r5, #100]	@ 00012da0 6a6e
.org 0x12da2
	orrs r0, r2	@ 00012da2 1043
.org 0x12da4
	movs r2, #68	@ 00012da4 4422
.org 0x12da6
	orrs r0, r2	@ 00012da6 1043
.org 0x12da8
	strh r0, [r6, #0]	@ 00012da8 3080
.org 0x12daa
	lsls r1, r1, #2	@ 00012daa 8900
.org 0x12dac
	adds r3, #8	@ 00012dac 0833
.org 0x12dae
	adds r1, r1, r3	@ 00012dae c918
.org 0x12db0
	str r4, [r1, #0]	@ 00012db0 0c60
.org 0x12db2
	adds r0, r5, #0	@ 00012db2 281c
.org 0x12db4
	adds r0, #112	@ 00012db4 7030
.org 0x12db6
	strh r4, [r0, #0]	@ 00012db6 0480
.org 0x12db8
	subs r0, #2	@ 00012db8 0238
.org 0x12dba
	strh r4, [r0, #0]	@ 00012dba 0480
.org 0x12dbc
	subs r0, #2	@ 00012dbc 0238
.org 0x12dbe
	strh r4, [r0, #0]	@ 00012dbe 0480
.org 0x12dc0
	subs r0, #2	@ 00012dc0 0238
.org 0x12dc2
	strh r4, [r0, #0]	@ 00012dc2 0480
.org 0x12dc4
	subs r0, #2	@ 00012dc4 0238
.org 0x12dc6
	strh r4, [r0, #0]	@ 00012dc6 0480
.org 0x12dc8
	adds r1, r5, #0	@ 00012dc8 291c
.org 0x12dca
	adds r1, #128	@ 00012dca 8031
.org 0x12dcc
	adds r0, #28	@ 00012dcc 1c30
.org 0x12dce
	str r4, [r0, #0]	@ 00012dce 0460
.org 0x12dd0
	str r4, [r1, #0]	@ 00012dd0 0c60
.org 0x12dd2
	str r4, [r5, #124]	@ 00012dd2 ec67
.org 0x12dd4
	str r4, [r5, #120]	@ 00012dd4 ac67
.org 0x12dd6
	str r4, [r5, #116]	@ 00012dd6 6c67
.org 0x12dd8
	ldr r0, [pc, #52]	@ 00012dd8 0d48
.org 0x12dda
	ldr r1, [pc, #56]	@ 00012dda 0e49
.org 0x12ddc
	adds r0, r0, r1	@ 00012ddc 4018
.org 0x12dde
	ldrb r1, [r0, #0]	@ 00012dde 0178
.org 0x12de0
	movs r0, #15	@ 00012de0 0f20
.org 0x12de2
	ands r0, r1	@ 00012de2 0840
.org 0x12de4
	cmp r0, #0	@ 00012de4 0028
.org 0x12de6
	bne.n 0x12e20	@ 00012de6 1bd1
.org 0x12de8
	ldr r0, [pc, #44]	@ 00012de8 0b48
.org 0x12dea
	ldr r0, [r0, #0]	@ 00012dea 0068
.org 0x12dec
	ldr r1, [pc, #44]	@ 00012dec 0b49
.org 0x12dee
	adds r0, r0, r1	@ 00012dee 4018
.org 0x12df0
	ldrh r2, [r6, #0]	@ 00012df0 3288
.org 0x12df2
	movs r1, #248	@ 00012df2 f821
.org 0x12df4
	lsls r1, r1, #5	@ 00012df4 4901
.org 0x12df6
	ands r1, r2	@ 00012df6 1140
.org 0x12df8
	lsls r1, r1, #3	@ 00012df8 c900
.org 0x12dfa
	movs r2, #192	@ 00012dfa c022
.org 0x12dfc
	lsls r2, r2, #19	@ 00012dfc d204
.org 0x12dfe
	adds r1, r1, r2	@ 00012dfe 8918
.org 0x12e00
	movs r2, #128	@ 00012e00 8022
.org 0x12e02
	lsls r2, r2, #2	@ 00012e02 9200
.org 0x12e04
	bl 0x128be0	@ 00012e04 15f1ecfe
.org 0x12e08
	b.n 0x12e40	@ 00012e08 1ae0
.org 0x12e0a
	.byte 0x00	@ 00012e0a data
.org 0x12e0b
	.byte 0x00	@ 00012e0b data
.org 0x12e0c
	.byte 0x04,0x0a,0x00,0x02	@ 00012e0c data
.org 0x12e10
	.byte 0xb0,0x0a,0x00,0x02	@ 00012e10 data
.org 0x12e14
	.byte 0x10,0xc0,0x02,0x00	@ 00012e14 data
.org 0x12e18
	.byte 0xe4,0xc0,0xb2,0x08	@ 00012e18 data
.org 0x12e1c
	.byte 0xec,0xc0,0xb2,0x08	@ 00012e1c data
.org 0x12e20
	ldr r0, [pc, #84]	@ 00012e20 1548
.org 0x12e22
	ldr r0, [r0, #0]	@ 00012e22 0068
.org 0x12e24
	ldr r1, [pc, #84]	@ 00012e24 1549
.org 0x12e26
	adds r0, r0, r1	@ 00012e26 4018
.org 0x12e28
	ldrh r2, [r6, #0]	@ 00012e28 3288
.org 0x12e2a
	movs r1, #248	@ 00012e2a f821
.org 0x12e2c
	lsls r1, r1, #5	@ 00012e2c 4901
.org 0x12e2e
	ands r1, r2	@ 00012e2e 1140
.org 0x12e30
	lsls r1, r1, #3	@ 00012e30 c900
.org 0x12e32
	movs r2, #192	@ 00012e32 c022
.org 0x12e34
	lsls r2, r2, #19	@ 00012e34 d204
.org 0x12e36
	adds r1, r1, r2	@ 00012e36 8918
.org 0x12e38
	movs r2, #128	@ 00012e38 8022
.org 0x12e3a
	lsls r2, r2, #2	@ 00012e3a 9200
.org 0x12e3c
	bl 0x128be0	@ 00012e3c 15f1d0fe
.org 0x12e40
	ldrb r0, [r5, #14]	@ 00012e40 a87b
.org 0x12e42
	adds r0, #1	@ 00012e42 0130
.org 0x12e44
	strb r0, [r5, #14]	@ 00012e44 a873
.org 0x12e46
	adds r1, r5, #0	@ 00012e46 291c
.org 0x12e48
	adds r1, #104	@ 00012e48 6831
.org 0x12e4a
	ldrh r0, [r1, #0]	@ 00012e4a 0888
.org 0x12e4c
	adds r0, #16	@ 00012e4c 1030
.org 0x12e4e
	strh r0, [r1, #0]	@ 00012e4e 0880
.org 0x12e50
	adds r1, #2	@ 00012e50 0231
.org 0x12e52
	ldrh r0, [r1, #0]	@ 00012e52 0888
.org 0x12e54
	adds r0, #12	@ 00012e54 0c30
.org 0x12e56
	strh r0, [r1, #0]	@ 00012e56 0880
.org 0x12e58
	adds r1, #2	@ 00012e58 0231
.org 0x12e5a
	ldrh r0, [r1, #0]	@ 00012e5a 0888
.org 0x12e5c
	adds r0, #8	@ 00012e5c 0830
.org 0x12e5e
	strh r0, [r1, #0]	@ 00012e5e 0880
