@ FUN_080c3d34  entry 0x080c3d34  size 262
.thumb
.org 0xc3d34
FUN_080c3d34:
	push {r4, r5, lr}	@ 000c3d34 30b5
.org 0xc3d36
	adds r4, r0, #0	@ 000c3d36 041c
.org 0xc3d38
	ldr r5, [r4, #40]	@ 000c3d38 a56a
.org 0xc3d3a
	bl 0x1cff0	@ 000c3d3a 59f759f9
.org 0xc3d3e
	ldrb r0, [r4, #13]	@ 000c3d3e 607b
.org 0xc3d40
	cmp r0, #0	@ 000c3d40 0028
.org 0xc3d42
	bne.n 0xc3ddc	@ 000c3d42 4bd1
.org 0xc3d44
	ldrb r0, [r5, #12]	@ 000c3d44 287b
.org 0xc3d46
	cmp r0, #1	@ 000c3d46 0128
.org 0xc3d48
	bls.n 0xc3d6c	@ 000c3d48 10d9
.org 0xc3d4a
	ldr r1, [pc, #28]	@ 000c3d4a 0749
.org 0xc3d4c
	ldrb r0, [r4, #9]	@ 000c3d4c 607a
.org 0xc3d4e
	lsls r0, r0, #2	@ 000c3d4e 8000
.org 0xc3d50
	adds r0, r0, r1	@ 000c3d50 4018
.org 0xc3d52
	movs r1, #2	@ 000c3d52 0221
.org 0xc3d54
	str r1, [r4, #12]	@ 000c3d54 e160
.org 0xc3d56
	ldr r0, [r0, #0]	@ 000c3d56 0068
.org 0xc3d58
	ldr r0, [r0, #8]	@ 000c3d58 8068
.org 0xc3d5a
	str r0, [r4, #20]	@ 000c3d5a 6061
.org 0xc3d5c
	movs r0, #64	@ 000c3d5c 4020
.org 0xc3d5e
	strb r0, [r4, #18]	@ 000c3d5e a074
.org 0xc3d60
	adds r0, r4, #0	@ 000c3d60 201c
.org 0xc3d62
	bl 0xc3e50	@ 000c3d62 00f075f8
.org 0xc3d66
	b.n 0xc3e40	@ 000c3d66 6be0
.org 0xc3d68
	.byte 0xf4,0x49,0x86,0x08	@ 000c3d68 data
.org 0xc3d6c
	ldrb r0, [r5, #13]	@ 000c3d6c 687b
.org 0xc3d6e
	cmp r0, #2	@ 000c3d6e 0228
.org 0xc3d70
	bne.n 0xc3e40	@ 000c3d70 66d1
.org 0xc3d72
	ldr r0, [pc, #96]	@ 000c3d72 1848
.org 0xc3d74
	ldr r3, [r0, #0]	@ 000c3d74 0368
.org 0xc3d76
	ldr r0, [r3, #84]	@ 000c3d76 586d
.org 0xc3d78
	ldr r1, [r4, #84]	@ 000c3d78 616d
.org 0xc3d7a
	subs r0, r0, r1	@ 000c3d7a 401a
.org 0xc3d7c
	lsls r0, r0, #8	@ 000c3d7c 0002
.org 0xc3d7e
	asrs r0, r0, #16	@ 000c3d7e 0014
.org 0xc3d80
	ldr r2, [r4, #88]	@ 000c3d80 a26d
.org 0xc3d82
	movs r1, #160	@ 000c3d82 a021
.org 0xc3d84
	lsls r1, r1, #5	@ 000c3d84 4901
.org 0xc3d86
	adds r2, r2, r1	@ 000c3d86 5218
.org 0xc3d88
	ldr r1, [r3, #88]	@ 000c3d88 996d
.org 0xc3d8a
	subs r1, r1, r2	@ 000c3d8a 891a
.org 0xc3d8c
	lsls r1, r1, #8	@ 000c3d8c 0902
.org 0xc3d8e
	asrs r1, r1, #16	@ 000c3d8e 0914
.org 0xc3d90
	bl 0x128bdc	@ 000c3d90 64f024ff
.org 0xc3d94
	lsls r0, r0, #16	@ 000c3d94 0004
.org 0xc3d96
	lsrs r0, r0, #24	@ 000c3d96 000e
.org 0xc3d98
	ldr r3, [pc, #60]	@ 000c3d98 0f4b
.org 0xc3d9a
	adds r1, r0, #0	@ 000c3d9a 011c
.org 0xc3d9c
	adds r1, #64	@ 000c3d9c 4031
.org 0xc3d9e
	lsls r1, r1, #24	@ 000c3d9e 0906
.org 0xc3da0
	lsrs r1, r1, #23	@ 000c3da0 c90d
.org 0xc3da2
	adds r1, r1, r3	@ 000c3da2 c918
.org 0xc3da4
	movs r5, #0	@ 000c3da4 0025
.org 0xc3da6
	ldrsh r2, [r1, r5]	@ 000c3da6 4a5f
.org 0xc3da8
	lsls r1, r2, #1	@ 000c3da8 5100
.org 0xc3daa
	adds r1, r1, r2	@ 000c3daa 8918
.org 0xc3dac
	lsls r1, r1, #2	@ 000c3dac 8900
.org 0xc3dae
	subs r1, r1, r2	@ 000c3dae 891a
.org 0xc3db0
	asrs r1, r1, #2	@ 000c3db0 8910
.org 0xc3db2
	str r1, [r4, #92]	@ 000c3db2 e165
.org 0xc3db4
	lsls r0, r0, #1	@ 000c3db4 4000
.org 0xc3db6
	adds r0, r0, r3	@ 000c3db6 c018
.org 0xc3db8
	movs r2, #0	@ 000c3db8 0022
.org 0xc3dba
	ldrsh r1, [r0, r2]	@ 000c3dba 815e
.org 0xc3dbc
	lsls r0, r1, #1	@ 000c3dbc 4800
.org 0xc3dbe
	adds r0, r0, r1	@ 000c3dbe 4018
.org 0xc3dc0
	lsls r0, r0, #2	@ 000c3dc0 8000
.org 0xc3dc2
	subs r0, r0, r1	@ 000c3dc2 401a
.org 0xc3dc4
	asrs r0, r0, #2	@ 000c3dc4 8010
.org 0xc3dc6
	str r0, [r4, #96]	@ 000c3dc6 2066
.org 0xc3dc8
	movs r0, #64	@ 000c3dc8 4020
.org 0xc3dca
	strb r0, [r4, #18]	@ 000c3dca a074
.org 0xc3dcc
	ldrb r0, [r4, #13]	@ 000c3dcc 607b
.org 0xc3dce
	adds r0, #1	@ 000c3dce 0130
.org 0xc3dd0
	strb r0, [r4, #13]	@ 000c3dd0 6073
.org 0xc3dd2
	b.n 0xc3e40	@ 000c3dd2 35e0
.org 0xc3dd4
	.byte 0xf0,0xdb,0x02,0x02	@ 000c3dd4 data
.org 0xc3dd8
	.byte 0x0c,0x93,0x12,0x08	@ 000c3dd8 data
.org 0xc3ddc
	ldr r0, [r4, #84]	@ 000c3ddc 606d
.org 0xc3dde
	ldr r1, [r4, #92]	@ 000c3dde e16d
.org 0xc3de0
	adds r0, r0, r1	@ 000c3de0 4018
.org 0xc3de2
	str r0, [r4, #84]	@ 000c3de2 6065
.org 0xc3de4
	ldr r0, [r4, #88]	@ 000c3de4 a06d
.org 0xc3de6
	ldr r1, [r4, #96]	@ 000c3de6 216e
.org 0xc3de8
	adds r0, r0, r1	@ 000c3de8 4018
.org 0xc3dea
	str r0, [r4, #88]	@ 000c3dea a065
.org 0xc3dec
	ldrb r0, [r4, #18]	@ 000c3dec a07c
.org 0xc3dee
	adds r5, r0, #0	@ 000c3dee 051c
.org 0xc3df0
	cmp r5, #0	@ 000c3df0 002d
.org 0xc3df2
	beq.n 0xc3dfa	@ 000c3df2 02d0
.org 0xc3df4
	subs r0, #1	@ 000c3df4 0138
.org 0xc3df6
	strb r0, [r4, #18]	@ 000c3df6 a074
.org 0xc3df8
	b.n 0xc3e40	@ 000c3df8 22e0
.org 0xc3dfa
	ldr r0, [pc, #76]	@ 000c3dfa 1348
.org 0xc3dfc
	adds r1, r4, #0	@ 000c3dfc 211c
.org 0xc3dfe
	adds r1, #84	@ 000c3dfe 5431
.org 0xc3e00
	bl 0x1fb14	@ 000c3e00 5bf788fe
.org 0xc3e04
	movs r1, #128	@ 000c3e04 8021
.org 0xc3e06
	lsls r1, r1, #5	@ 000c3e06 4901
.org 0xc3e08
	cmp r0, r1	@ 000c3e08 8842
.org 0xc3e0a
	bls.n 0xc3e40	@ 000c3e0a 19d9
.org 0xc3e0c
	ldrb r1, [r4, #10]	@ 000c3e0c a17a
.org 0xc3e0e
	movs r0, #254	@ 000c3e0e fe20
.org 0xc3e10
	ands r0, r1	@ 000c3e10 0840
.org 0xc3e12
	movs r1, #253	@ 000c3e12 fd21
.org 0xc3e14
	ands r0, r1	@ 000c3e14 0840
.org 0xc3e16
	strb r0, [r4, #10]	@ 000c3e16 a072
.org 0xc3e18
	adds r0, r4, #0	@ 000c3e18 201c
.org 0xc3e1a
	adds r0, #140	@ 000c3e1a 8c30
.org 0xc3e1c
	str r5, [r0, #0]	@ 000c3e1c 0560
.org 0xc3e1e
	adds r0, #4	@ 000c3e1e 0430
.org 0xc3e20
	str r5, [r0, #0]	@ 000c3e20 0560
.org 0xc3e22
	adds r0, #4	@ 000c3e22 0430
.org 0xc3e24
	strb r5, [r0, #0]	@ 000c3e24 0570
.org 0xc3e26
	ldrb r1, [r4, #10]	@ 000c3e26 a17a
.org 0xc3e28
	movs r0, #251	@ 000c3e28 fb20
.org 0xc3e2a
	ands r0, r1	@ 000c3e2a 0840
.org 0xc3e2c
	strb r0, [r4, #10]	@ 000c3e2c a072
.org 0xc3e2e
	ldr r1, [pc, #28]	@ 000c3e2e 0749
.org 0xc3e30
	ldrb r0, [r4, #9]	@ 000c3e30 607a
.org 0xc3e32
	lsls r0, r0, #2	@ 000c3e32 8000
.org 0xc3e34
	adds r0, r0, r1	@ 000c3e34 4018
.org 0xc3e36
	movs r1, #3	@ 000c3e36 0321
.org 0xc3e38
	str r1, [r4, #12]	@ 000c3e38 e160
