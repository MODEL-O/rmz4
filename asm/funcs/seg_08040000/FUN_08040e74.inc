@ FUN_08040e74  entry 0x08040e74  size 122
.thumb
.org 0x40e74
FUN_08040e74:
	push {r4, r5, r6, lr}	@ 00040e74 70b5
.org 0x40e76
	adds r6, r0, #0	@ 00040e76 061c
.org 0x40e78
	ldr r2, [r6, #40]	@ 00040e78 b26a
.org 0x40e7a
	ldr r1, [pc, #116]	@ 00040e7a 1d49
.org 0x40e7c
	ldrb r0, [r6, #9]	@ 00040e7c 707a
.org 0x40e7e
	lsls r0, r0, #2	@ 00040e7e 8000
.org 0x40e80
	adds r0, r0, r1	@ 00040e80 4018
.org 0x40e82
	movs r1, #1	@ 00040e82 0121
.org 0x40e84
	str r1, [r6, #12]	@ 00040e84 f160
.org 0x40e86
	ldr r0, [r0, #0]	@ 00040e86 0068
.org 0x40e88
	ldr r0, [r0, #4]	@ 00040e88 4068
.org 0x40e8a
	str r0, [r6, #20]	@ 00040e8a 7061
.org 0x40e8c
	adds r1, r2, #0	@ 00040e8c 111c
.org 0x40e8e
	adds r1, #180	@ 00040e8e b431
.org 0x40e90
	ldrb r0, [r1, #12]	@ 00040e90 087b
.org 0x40e92
	cmp r0, #2	@ 00040e92 0228
.org 0x40e94
	bhi.n 0x40e98	@ 00040e94 00d8
.org 0x40e96
	ldrb r0, [r1, #13]	@ 00040e96 487b
.org 0x40e98
	ldr r1, [pc, #88]	@ 00040e98 1649
.org 0x40e9a
	lsls r0, r0, #2	@ 00040e9a 8000
.org 0x40e9c
	adds r0, r0, r1	@ 00040e9c 4018
.org 0x40e9e
	adds r1, r2, #0	@ 00040e9e 111c
.org 0x40ea0
	adds r1, #180	@ 00040ea0 b431
.org 0x40ea2
	ldrb r1, [r1, #15]	@ 00040ea2 c97b
.org 0x40ea4
	ldr r2, [r0, #0]	@ 00040ea4 0268
.org 0x40ea6
	lsls r0, r1, #1	@ 00040ea6 4800
.org 0x40ea8
	adds r0, r0, r1	@ 00040ea8 4018
.org 0x40eaa
	lsls r0, r0, #2	@ 00040eaa 8000
.org 0x40eac
	adds r0, r0, r2	@ 00040eac 8018
.org 0x40eae
	ldrh r5, [r0, #0]	@ 00040eae 0588
.org 0x40eb0
	adds r0, r6, #0	@ 00040eb0 301c
.org 0x40eb2
	bl 0x1cd28	@ 00040eb2 dbf739ff
.org 0x40eb6
	adds r0, r6, #0	@ 00040eb6 301c
.org 0x40eb8
	bl 0x1ceec	@ 00040eb8 dcf718f8
.org 0x40ebc
	ldrb r1, [r6, #10]	@ 00040ebc b17a
.org 0x40ebe
	movs r0, #254	@ 00040ebe fe20
.org 0x40ec0
	ands r0, r1	@ 00040ec0 0840
.org 0x40ec2
	movs r4, #0	@ 00040ec2 0024
.org 0x40ec4
	movs r1, #2	@ 00040ec4 0221
.org 0x40ec6
	orrs r0, r1	@ 00040ec6 0843
.org 0x40ec8
	strb r0, [r6, #10]	@ 00040ec8 b072
.org 0x40eca
	adds r0, r6, #0	@ 00040eca 301c
.org 0x40ecc
	adds r1, r5, #0	@ 00040ecc 291c
.org 0x40ece
	bl 0x1cf00	@ 00040ece dcf717f8
.org 0x40ed2
	adds r0, r6, #0	@ 00040ed2 301c
.org 0x40ed4
	bl 0x1cff0	@ 00040ed4 dcf78cf8
.org 0x40ed8
	adds r0, r6, #0	@ 00040ed8 301c
.org 0x40eda
	adds r0, #36	@ 00040eda 2430
.org 0x40edc
	strb r4, [r0, #0]	@ 00040edc 0470
.org 0x40ede
	movs r0, #8	@ 00040ede 0820
.org 0x40ee0
	strb r0, [r6, #18]	@ 00040ee0 b074
.org 0x40ee2
	adds r0, r6, #0	@ 00040ee2 301c
.org 0x40ee4
	bl 0x40d54	@ 00040ee4 fff736ff
.org 0x40ee8
	pop {r4, r5, r6}	@ 00040ee8 70bc
.org 0x40eea
	pop {r0}	@ 00040eea 01bc
.org 0x40eec
	bx r0	@ 00040eec 0047
