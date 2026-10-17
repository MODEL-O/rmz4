@ FUN_080c1d90  entry 0x080c1d90  size 224
.thumb
.org 0xc1d90
FUN_080c1d90:
	push {r4, r5, r6, r7, lr}	@ 000c1d90 f0b5
.org 0xc1d92
	adds r6, r0, #0	@ 000c1d92 061c
.org 0xc1d94
	bl 0x1cc9c	@ 000c1d94 5af782ff
.org 0xc1d98
	ldrb r0, [r6, #10]	@ 000c1d98 b07a
.org 0xc1d9a
	movs r4, #1	@ 000c1d9a 0124
.org 0xc1d9c
	movs r5, #0	@ 000c1d9c 0025
.org 0xc1d9e
	orrs r0, r4	@ 000c1d9e 2043
.org 0xc1da0
	movs r1, #2	@ 000c1da0 0221
.org 0xc1da2
	orrs r0, r1	@ 000c1da2 0843
.org 0xc1da4
	strb r0, [r6, #10]	@ 000c1da4 b072
.org 0xc1da6
	ldr r1, [pc, #48]	@ 000c1da6 0c49
.org 0xc1da8
	adds r0, r6, #0	@ 000c1da8 301c
.org 0xc1daa
	bl 0x1cf00	@ 000c1daa 5bf7a9f8
.org 0xc1dae
	adds r0, r6, #0	@ 000c1dae 301c
.org 0xc1db0
	bl 0x1cff0	@ 000c1db0 5bf71ef9
.org 0xc1db4
	ldr r2, [pc, #36]	@ 000c1db4 094a
.org 0xc1db6
	ldr r1, [r2, #0]	@ 000c1db6 1168
.org 0xc1db8
	ldr r0, [pc, #36]	@ 000c1db8 0948
.org 0xc1dba
	muls r0, r1	@ 000c1dba 4843
.org 0xc1dbc
	ldr r1, [pc, #36]	@ 000c1dbc 0949
.org 0xc1dbe
	adds r0, r0, r1	@ 000c1dbe 4018
.org 0xc1dc0
	lsls r0, r0, #1	@ 000c1dc0 4000
.org 0xc1dc2
	lsrs r1, r0, #1	@ 000c1dc2 4108
.org 0xc1dc4
	str r1, [r2, #0]	@ 000c1dc4 1160
.org 0xc1dc6
	lsrs r2, r0, #17	@ 000c1dc6 420c
.org 0xc1dc8
	ands r2, r4	@ 000c1dc8 2240
.org 0xc1dca
	cmp r2, #0	@ 000c1dca 002a
.org 0xc1dcc
	beq.n 0xc1de8	@ 000c1dcc 0cd0
.org 0xc1dce
	ldrb r0, [r6, #10]	@ 000c1dce b07a
.org 0xc1dd0
	movs r1, #16	@ 000c1dd0 1021
.org 0xc1dd2
	orrs r0, r1	@ 000c1dd2 0843
.org 0xc1dd4
	b.n 0xc1dee	@ 000c1dd4 0be0
.org 0xc1dd6
	.byte 0x00	@ 000c1dd6 data
.org 0xc1dd7
	.byte 0x00	@ 000c1dd7 data
.org 0xc1dd8
	.byte 0x02,0x3e,0x00,0x00	@ 000c1dd8 data
.org 0xc1ddc
	.byte 0x38,0xdc,0x02,0x02	@ 000c1ddc data
.org 0xc1de0
	.byte 0xfd,0x43,0x03,0x00	@ 000c1de0 data
.org 0xc1de4
	.byte 0xc3,0x9e,0x26,0x00	@ 000c1de4 data
.org 0xc1de8
	ldrb r1, [r6, #10]	@ 000c1de8 b17a
.org 0xc1dea
	movs r0, #239	@ 000c1dea ef20
.org 0xc1dec
	ands r0, r1	@ 000c1dec 0840
.org 0xc1dee
	strb r0, [r6, #10]	@ 000c1dee b072
.org 0xc1df0
	movs r0, #1	@ 000c1df0 0120
.org 0xc1df2
	mov ip, r0	@ 000c1df2 8446
.org 0xc1df4
	mov r1, ip	@ 000c1df4 6146
.org 0xc1df6
	ands r1, r2	@ 000c1df6 1140
.org 0xc1df8
	adds r0, r6, #0	@ 000c1df8 301c
.org 0xc1dfa
	adds r0, #76	@ 000c1dfa 4c30
.org 0xc1dfc
	strb r1, [r0, #0]	@ 000c1dfc 0170
.org 0xc1dfe
	adds r3, r6, #0	@ 000c1dfe 331c
.org 0xc1e00
	adds r3, #74	@ 000c1e00 4a33
.org 0xc1e02
	lsls r1, r1, #4	@ 000c1e02 0901
.org 0xc1e04
	ldrb r2, [r3, #0]	@ 000c1e04 1a78
.org 0xc1e06
	movs r0, #17	@ 000c1e06 1120
.org 0xc1e08
	negs r0, r0	@ 000c1e08 4042
.org 0xc1e0a
	ands r0, r2	@ 000c1e0a 1040
.org 0xc1e0c
	orrs r0, r1	@ 000c1e0c 0843
.org 0xc1e0e
	strb r0, [r3, #0]	@ 000c1e0e 1870
.org 0xc1e10
	ldr r5, [pc, #112]	@ 000c1e10 1c4d
.org 0xc1e12
	ldr r0, [r5, #0]	@ 000c1e12 2868
.org 0xc1e14
	ldr r4, [pc, #112]	@ 000c1e14 1c4c
.org 0xc1e16
	muls r0, r4	@ 000c1e16 6043
.org 0xc1e18
	ldr r1, [pc, #112]	@ 000c1e18 1c49
.org 0xc1e1a
	adds r0, r0, r1	@ 000c1e1a 4018
.org 0xc1e1c
	lsls r0, r0, #1	@ 000c1e1c 4000
.org 0xc1e1e
	lsrs r2, r0, #1	@ 000c1e1e 4208
.org 0xc1e20
	lsrs r0, r0, #17	@ 000c1e20 400c
.org 0xc1e22
	movs r3, #15	@ 000c1e22 0f23
.org 0xc1e24
	ands r0, r3	@ 000c1e24 1840
.org 0xc1e26
	adds r0, #4	@ 000c1e26 0430
.org 0xc1e28
	lsrs r0, r0, #1	@ 000c1e28 4008
.org 0xc1e2a
	lsls r7, r0, #8	@ 000c1e2a 0702
.org 0xc1e2c
	str r7, [r6, #92]	@ 000c1e2c f765
.org 0xc1e2e
	adds r0, r2, #0	@ 000c1e2e 101c
.org 0xc1e30
	muls r0, r4	@ 000c1e30 6043
.org 0xc1e32
	adds r0, r0, r1	@ 000c1e32 4018
.org 0xc1e34
	lsls r0, r0, #1	@ 000c1e34 4000
.org 0xc1e36
	lsrs r1, r0, #1	@ 000c1e36 4108
.org 0xc1e38
	str r1, [r5, #0]	@ 000c1e38 2960
.org 0xc1e3a
	lsrs r0, r0, #17	@ 000c1e3a 400c
.org 0xc1e3c
	ands r0, r3	@ 000c1e3c 1840
.org 0xc1e3e
	adds r0, #4	@ 000c1e3e 0430
.org 0xc1e40
	lsrs r0, r0, #1	@ 000c1e40 4008
.org 0xc1e42
	lsls r0, r0, #8	@ 000c1e42 0002
.org 0xc1e44
	str r0, [r6, #96]	@ 000c1e44 3066
.org 0xc1e46
	ldrb r0, [r6, #17]	@ 000c1e46 707c
.org 0xc1e48
	cmp r0, #1	@ 000c1e48 0128
.org 0xc1e4a
	bls.n 0xc1e50	@ 000c1e4a 01d9
.org 0xc1e4c
	negs r0, r7	@ 000c1e4c 7842
.org 0xc1e4e
	str r0, [r6, #92]	@ 000c1e4e f065
.org 0xc1e50
	ldrb r1, [r6, #17]	@ 000c1e50 717c
.org 0xc1e52
	mov r0, ip	@ 000c1e52 6046
.org 0xc1e54
	ands r0, r1	@ 000c1e54 0840
.org 0xc1e56
	cmp r0, #0	@ 000c1e56 0028
.org 0xc1e58
	beq.n 0xc1e60	@ 000c1e58 02d0
.org 0xc1e5a
	ldr r0, [r6, #96]	@ 000c1e5a 306e
.org 0xc1e5c
	negs r0, r0	@ 000c1e5c 4042
.org 0xc1e5e
	str r0, [r6, #96]	@ 000c1e5e 3066
.org 0xc1e60
	movs r0, #0	@ 000c1e60 0020
.org 0xc1e62
	strb r0, [r6, #18]	@ 000c1e62 b074
.org 0xc1e64
	ldr r1, [pc, #40]	@ 000c1e64 0a49
.org 0xc1e66
	ldrb r0, [r6, #9]	@ 000c1e66 707a
.org 0xc1e68
	lsls r0, r0, #2	@ 000c1e68 8000
.org 0xc1e6a
	adds r0, r0, r1	@ 000c1e6a 4018
.org 0xc1e6c
	mov r1, ip	@ 000c1e6c 6146
.org 0xc1e6e
	str r1, [r6, #12]	@ 000c1e6e f160
