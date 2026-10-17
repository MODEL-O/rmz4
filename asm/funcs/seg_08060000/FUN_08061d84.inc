@ FUN_08061d84  entry 0x08061d84  size 174
.thumb
.org 0x61d84
FUN_08061d84:
	push {r4, r5, lr}	@ 00061d84 30b5
.org 0x61d86
	adds r4, r0, #0	@ 00061d86 041c
.org 0x61d88
	ldrb r5, [r4, #14]	@ 00061d88 a57b
.org 0x61d8a
	cmp r5, #0	@ 00061d8a 002d
.org 0x61d8c
	bne.n 0x61d9e	@ 00061d8c 07d1
.org 0x61d8e
	ldr r1, [pc, #84]	@ 00061d8e 1549
.org 0x61d90
	bl 0x1cf00	@ 00061d90 bbf7b6f8
.org 0x61d94
	str r5, [r4, #96]	@ 00061d94 2566
.org 0x61d96
	strb r5, [r4, #15]	@ 00061d96 e573
.org 0x61d98
	ldrb r0, [r4, #14]	@ 00061d98 a07b
.org 0x61d9a
	adds r0, #1	@ 00061d9a 0130
.org 0x61d9c
	strb r0, [r4, #14]	@ 00061d9c a073
.org 0x61d9e
	ldrb r0, [r4, #15]	@ 00061d9e e07b
.org 0x61da0
	cmp r0, #0	@ 00061da0 0028
.org 0x61da2
	bne.n 0x61e24	@ 00061da2 3fd1
.org 0x61da4
	movs r3, #0	@ 00061da4 0023
.org 0x61da6
	ldr r0, [pc, #64]	@ 00061da6 1048
.org 0x61da8
	ldr r2, [r0, #0]	@ 00061da8 0268
.org 0x61daa
	ldr r1, [r4, #84]	@ 00061daa 616d
.org 0x61dac
	ldr r0, [r2, #84]	@ 00061dac 506d
.org 0x61dae
	cmp r1, r0	@ 00061dae 8142
.org 0x61db0
	bge.n 0x61db4	@ 00061db0 00da
.org 0x61db2
	movs r3, #1	@ 00061db2 0123
.org 0x61db4
	adds r0, r4, #0	@ 00061db4 201c
.org 0x61db6
	adds r0, #76	@ 00061db6 4c30
.org 0x61db8
	strb r3, [r0, #0]	@ 00061db8 0370
.org 0x61dba
	movs r3, #0	@ 00061dba 0023
.org 0x61dbc
	ldr r1, [r4, #84]	@ 00061dbc 616d
.org 0x61dbe
	ldr r0, [r2, #84]	@ 00061dbe 506d
.org 0x61dc0
	cmp r1, r0	@ 00061dc0 8142
.org 0x61dc2
	bge.n 0x61dc6	@ 00061dc2 00da
.org 0x61dc4
	movs r3, #1	@ 00061dc4 0123
.org 0x61dc6
	adds r5, r4, #0	@ 00061dc6 251c
.org 0x61dc8
	adds r5, #74	@ 00061dc8 4a35
.org 0x61dca
	lsls r2, r3, #4	@ 00061dca 1a01
.org 0x61dcc
	ldrb r1, [r5, #0]	@ 00061dcc 2978
.org 0x61dce
	movs r0, #17	@ 00061dce 1120
.org 0x61dd0
	negs r0, r0	@ 00061dd0 4042
.org 0x61dd2
	ands r0, r1	@ 00061dd2 0840
.org 0x61dd4
	orrs r0, r2	@ 00061dd4 1043
.org 0x61dd6
	strb r0, [r5, #0]	@ 00061dd6 2870
.org 0x61dd8
	cmp r3, #0	@ 00061dd8 002b
.org 0x61dda
	beq.n 0x61dec	@ 00061dda 07d0
.org 0x61ddc
	ldrb r0, [r4, #10]	@ 00061ddc a07a
.org 0x61dde
	movs r1, #16	@ 00061dde 1021
.org 0x61de0
	orrs r0, r1	@ 00061de0 0843
.org 0x61de2
	b.n 0x61df2	@ 00061de2 06e0
.org 0x61de4
	.byte 0x22,0xa5,0x00,0x00	@ 00061de4 data
.org 0x61de8
	.byte 0xf0,0xdb,0x02,0x02	@ 00061de8 data
.org 0x61dec
	ldrb r1, [r4, #10]	@ 00061dec a17a
.org 0x61dee
	movs r0, #239	@ 00061dee ef20
.org 0x61df0
	ands r0, r1	@ 00061df0 0840
.org 0x61df2
	strb r0, [r4, #10]	@ 00061df2 a072
.org 0x61df4
	ldr r0, [r4, #88]	@ 00061df4 a06d
.org 0x61df6
	ldr r1, [r4, #96]	@ 00061df6 216e
.org 0x61df8
	adds r0, r0, r1	@ 00061df8 4018
.org 0x61dfa
	str r0, [r4, #88]	@ 00061dfa a065
.org 0x61dfc
	adds r1, #64	@ 00061dfc 4031
.org 0x61dfe
	str r1, [r4, #96]	@ 00061dfe 2166
.org 0x61e00
	adds r5, r4, #0	@ 00061e00 251c
.org 0x61e02
	adds r5, #180	@ 00061e02 b435
.org 0x61e04
	ldr r1, [r5, #4]	@ 00061e04 6968
.org 0x61e06
	cmp r0, r1	@ 00061e06 8842
.org 0x61e08
	ble.n 0x61e34	@ 00061e08 14dd
.org 0x61e0a
	ldr r1, [pc, #20]	@ 00061e0a 0549
.org 0x61e0c
	adds r0, r4, #0	@ 00061e0c 201c
.org 0x61e0e
	bl 0x1cf00	@ 00061e0e bbf777f8
.org 0x61e12
	ldr r0, [r5, #4]	@ 00061e12 6868
.org 0x61e14
	str r0, [r4, #88]	@ 00061e14 a065
.org 0x61e16
	ldrb r0, [r4, #15]	@ 00061e16 e07b
.org 0x61e18
	adds r0, #1	@ 00061e18 0130
.org 0x61e1a
	strb r0, [r4, #15]	@ 00061e1a e073
.org 0x61e1c
	b.n 0x61e34	@ 00061e1c 0ae0
.org 0x61e1e
	.byte 0x00	@ 00061e1e data
.org 0x61e1f
	.byte 0x00	@ 00061e1f data
.org 0x61e20
	.byte 0x03,0xa5,0x00,0x00	@ 00061e20 data
.org 0x61e24
	adds r0, r4, #0	@ 00061e24 201c
.org 0x61e26
	adds r0, #115	@ 00061e26 7330
.org 0x61e28
	ldrb r1, [r0, #0]	@ 00061e28 0178
.org 0x61e2a
	cmp r1, #3	@ 00061e2a 0329
.org 0x61e2c
	bne.n 0x61e34	@ 00061e2c 02d1
.org 0x61e2e
	movs r0, #0	@ 00061e2e 0020
.org 0x61e30
	strb r1, [r4, #13]	@ 00061e30 6173
