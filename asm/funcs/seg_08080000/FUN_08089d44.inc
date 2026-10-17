@ FUN_08089d44  entry 0x08089d44  size 234
.thumb
.org 0x89d44
FUN_08089d44:
	push {r4, r5, r6, r7, lr}	@ 00089d44 f0b5
.org 0x89d46
	mov r7, r8	@ 00089d46 4746
.org 0x89d48
	push {r7}	@ 00089d48 80b4
.org 0x89d4a
	sub sp, #20	@ 00089d4a 85b0
.org 0x89d4c
	adds r7, r0, #0	@ 00089d4c 071c
.org 0x89d4e
	adds r0, #140	@ 00089d4e 8c30
.org 0x89d50
	movs r1, #0	@ 00089d50 0021
.org 0x89d52
	str r1, [r0, #0]	@ 00089d52 0160
.org 0x89d54
	adds r0, #4	@ 00089d54 0430
.org 0x89d56
	str r1, [r0, #0]	@ 00089d56 0160
.org 0x89d58
	adds r0, #4	@ 00089d58 0430
.org 0x89d5a
	strb r1, [r0, #0]	@ 00089d5a 0170
.org 0x89d5c
	ldrb r2, [r7, #10]	@ 00089d5c ba7a
.org 0x89d5e
	movs r0, #251	@ 00089d5e fb20
.org 0x89d60
	ands r0, r2	@ 00089d60 1040
.org 0x89d62
	strb r0, [r7, #10]	@ 00089d62 b872
.org 0x89d64
	adds r0, r7, #0	@ 00089d64 381c
.org 0x89d66
	adds r0, #92	@ 00089d66 5c30
.org 0x89d68
	str r1, [r0, #4]	@ 00089d68 4160
.org 0x89d6a
	str r1, [r7, #92]	@ 00089d6a f965
.org 0x89d6c
	ldr r0, [r7, #84]	@ 00089d6c 786d
.org 0x89d6e
	str r0, [sp, #4]	@ 00089d6e 0190
.org 0x89d70
	ldr r0, [r7, #88]	@ 00089d70 b86d
.org 0x89d72
	ldr r1, [pc, #188]	@ 00089d72 2f49
.org 0x89d74
	adds r0, r0, r1	@ 00089d74 4018
.org 0x89d76
	str r0, [sp, #8]	@ 00089d76 0290
.org 0x89d78
	movs r0, #1	@ 00089d78 0120
.org 0x89d7a
	add r1, sp, #4	@ 00089d7a 01a9
.org 0x89d7c
	bl 0xd0c88	@ 00089d7c 46f084ff
.org 0x89d80
	movs r0, #42	@ 00089d80 2a20
.org 0x89d82
	bl 0x2b10	@ 00089d82 78f7c5fe
.org 0x89d86
	movs r0, #84	@ 00089d86 5420
.org 0x89d88
	adds r0, r0, r7	@ 00089d88 c019
.org 0x89d8a
	mov r8, r0	@ 00089d8a 8046
.org 0x89d8c
	movs r0, #3	@ 00089d8c 0320
.org 0x89d8e
	movs r1, #49	@ 00089d8e 3121
.org 0x89d90
	mov r2, r8	@ 00089d90 4246
.org 0x89d92
	bl 0x2ab88	@ 00089d92 a0f7f9fe
.org 0x89d96
	ldr r2, [pc, #156]	@ 00089d96 274a
.org 0x89d98
	ldr r1, [r2, #0]	@ 00089d98 1168
.org 0x89d9a
	ldr r0, [pc, #156]	@ 00089d9a 2748
.org 0x89d9c
	adds r4, r1, #0	@ 00089d9c 0c1c
.org 0x89d9e
	muls r4, r0	@ 00089d9e 4443
.org 0x89da0
	ldr r1, [pc, #152]	@ 00089da0 2649
.org 0x89da2
	adds r4, r4, r1	@ 00089da2 6418
.org 0x89da4
	lsls r4, r4, #1	@ 00089da4 6400
.org 0x89da6
	lsrs r0, r4, #1	@ 00089da6 6008
.org 0x89da8
	str r0, [r2, #0]	@ 00089da8 1060
.org 0x89daa
	lsrs r4, r4, #17	@ 00089daa 640c
.org 0x89dac
	movs r0, #3	@ 00089dac 0320
.org 0x89dae
	ands r4, r0	@ 00089dae 0440
.org 0x89db0
	ldr r0, [r7, #84]	@ 00089db0 786d
.org 0x89db2
	str r0, [sp, #12]	@ 00089db2 0390
.org 0x89db4
	ldr r0, [r7, #88]	@ 00089db4 b86d
.org 0x89db6
	add r6, sp, #12	@ 00089db6 03ae
.org 0x89db8
	str r0, [r6, #4]	@ 00089db8 7060
.org 0x89dba
	ldrb r1, [r7, #10]	@ 00089dba b97a
.org 0x89dbc
	lsrs r1, r1, #4	@ 00089dbc 0909
.org 0x89dbe
	movs r5, #1	@ 00089dbe 0125
.org 0x89dc0
	ands r1, r5	@ 00089dc0 2940
.org 0x89dc2
	ldr r2, [pc, #124]	@ 00089dc2 1f4a
.org 0x89dc4
	str r5, [sp, #0]	@ 00089dc4 0095
.org 0x89dc6
	adds r0, r6, #0	@ 00089dc6 301c
.org 0x89dc8
	adds r3, r4, #0	@ 00089dc8 231c
.org 0x89dca
	bl 0xd8a6c	@ 00089dca 4ef04ffe
.org 0x89dce
	ldrb r1, [r7, #10]	@ 00089dce b97a
.org 0x89dd0
	lsrs r1, r1, #4	@ 00089dd0 0909
.org 0x89dd2
	ands r1, r5	@ 00089dd2 2940
.org 0x89dd4
	ldr r2, [pc, #108]	@ 00089dd4 1b4a
.org 0x89dd6
	str r5, [sp, #0]	@ 00089dd6 0095
.org 0x89dd8
	adds r0, r6, #0	@ 00089dd8 301c
.org 0x89dda
	adds r3, r4, #0	@ 00089dda 231c
.org 0x89ddc
	bl 0xd8a6c	@ 00089ddc 4ef046fe
.org 0x89de0
	ldrb r1, [r7, #10]	@ 00089de0 b97a
.org 0x89de2
	lsrs r1, r1, #4	@ 00089de2 0909
.org 0x89de4
	ands r1, r5	@ 00089de4 2940
.org 0x89de6
	ldr r2, [pc, #96]	@ 00089de6 184a
.org 0x89de8
	str r5, [sp, #0]	@ 00089de8 0095
.org 0x89dea
	adds r0, r6, #0	@ 00089dea 301c
.org 0x89dec
	adds r3, r4, #0	@ 00089dec 231c
.org 0x89dee
	bl 0xd8a6c	@ 00089dee 4ef03dfe
.org 0x89df2
	ldr r2, [pc, #88]	@ 00089df2 164a
.org 0x89df4
	ldrh r1, [r2, #12]	@ 00089df4 9189
.org 0x89df6
	ldr r0, [pc, #88]	@ 00089df6 1648
.org 0x89df8
	cmp r1, r0	@ 00089df8 8142
.org 0x89dfa
	bhi.n 0x89e00	@ 00089dfa 01d8
.org 0x89dfc
	adds r0, r1, #1	@ 00089dfc 481c
.org 0x89dfe
	strh r0, [r2, #12]	@ 00089dfe 9081
.org 0x89e00
	adds r0, r7, #0	@ 00089e00 381c
.org 0x89e02
	mov r1, r8	@ 00089e02 4146
.org 0x89e04
	bl 0x2abe0	@ 00089e04 a0f7ecfe
.org 0x89e08
	ldrb r1, [r7, #10]	@ 00089e08 b97a
.org 0x89e0a
	movs r0, #254	@ 00089e0a fe20
.org 0x89e0c
	ands r0, r1	@ 00089e0c 0840
.org 0x89e0e
	strb r0, [r7, #10]	@ 00089e0e b872
.org 0x89e10
	ldr r1, [pc, #64]	@ 00089e10 1049
.org 0x89e12
	ldrb r0, [r7, #9]	@ 00089e12 787a
.org 0x89e14
	lsls r0, r0, #2	@ 00089e14 8000
.org 0x89e16
	adds r0, r0, r1	@ 00089e16 4018
.org 0x89e18
	movs r1, #4	@ 00089e18 0421
.org 0x89e1a
	str r1, [r7, #12]	@ 00089e1a f960
.org 0x89e1c
	ldr r0, [r0, #0]	@ 00089e1c 0068
.org 0x89e1e
	ldr r0, [r0, #16]	@ 00089e1e 0069
.org 0x89e20
	str r0, [r7, #20]	@ 00089e20 7861
.org 0x89e22
	add sp, #20	@ 00089e22 05b0
.org 0x89e24
	pop {r3}	@ 00089e24 08bc
.org 0x89e26
	mov r8, r3	@ 00089e26 9846
.org 0x89e28
	pop {r4, r5, r6, r7}	@ 00089e28 f0bc
.org 0x89e2a
	pop {r0}	@ 00089e2a 01bc
.org 0x89e2c
	bx r0	@ 00089e2c 0047
