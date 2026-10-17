@ FUN_081069ec  entry 0x081069ec  size 198
.thumb
.org 0x1069ec
FUN_081069ec:
	push {r4, r5, r6, lr}	@ 001069ec 70b5
.org 0x1069ee
	adds r6, r0, #0	@ 001069ee 061c
.org 0x1069f0
	ldrb r0, [r6, #13]	@ 001069f0 707b
.org 0x1069f2
	cmp r0, #1	@ 001069f2 0128
.org 0x1069f4
	beq.n 0x106a58	@ 001069f4 30d0
.org 0x1069f6
	cmp r0, #1	@ 001069f6 0128
.org 0x1069f8
	bgt.n 0x106a8a	@ 001069f8 47dc
.org 0x1069fa
	cmp r0, #0	@ 001069fa 0028
.org 0x1069fc
	bne.n 0x106a8a	@ 001069fc 45d1
.org 0x1069fe
	ldr r0, [r6, #84]	@ 001069fe 706d
.org 0x106a00
	ldr r1, [r6, #88]	@ 00106a00 b16d
.org 0x106a02
	bl 0x8534	@ 00106a02 01f797fd
.org 0x106a06
	ldr r1, [pc, #172]	@ 00106a06 2b49
.org 0x106a08
	adds r0, r0, r1	@ 00106a08 4018
.org 0x106a0a
	str r0, [r6, #88]	@ 00106a0a b065
.org 0x106a0c
	str r0, [r6, #104]	@ 00106a0c b066
.org 0x106a0e
	ldr r0, [pc, #168]	@ 00106a0e 2a48
.org 0x106a10
	movs r5, #0	@ 00106a10 0025
.org 0x106a12
	movs r1, #192	@ 00106a12 c021
.org 0x106a14
	lsls r1, r1, #2	@ 00106a14 8900
.org 0x106a16
	strh r1, [r0, #24]	@ 00106a16 0183
.org 0x106a18
	ldr r4, [pc, #160]	@ 00106a18 284c
.org 0x106a1a
	movs r0, #5	@ 00106a1a 0520
.org 0x106a1c
	strh r0, [r4, #24]	@ 00106a1c 2083
.org 0x106a1e
	ldr r0, [pc, #160]	@ 00106a1e 2848
.org 0x106a20
	ldrh r2, [r0, #6]	@ 00106a20 c288
.org 0x106a22
	lsrs r2, r2, #6	@ 00106a22 9209
.org 0x106a24
	subs r1, r1, r2	@ 00106a24 891a
.org 0x106a26
	lsls r1, r1, #5	@ 00106a26 4901
.org 0x106a28
	movs r2, #128	@ 00106a28 8022
.org 0x106a2a
	lsls r2, r2, #9	@ 00106a2a 5202
.org 0x106a2c
	adds r1, r1, r2	@ 00106a2c 8918
.org 0x106a2e
	bl 0x1d30	@ 00106a2e fbf67ff9
.org 0x106a32
	ldr r0, [pc, #144]	@ 00106a32 2448
.org 0x106a34
	ldrh r1, [r4, #24]	@ 00106a34 218b
.org 0x106a36
	ldrb r2, [r0, #7]	@ 00106a36 c279
.org 0x106a38
	subs r1, r1, r2	@ 00106a38 891a
.org 0x106a3a
	lsls r1, r1, #5	@ 00106a3a 4901
.org 0x106a3c
	movs r2, #128	@ 00106a3c 8022
.org 0x106a3e
	lsls r2, r2, #2	@ 00106a3e 9200
.org 0x106a40
	adds r1, r1, r2	@ 00106a40 8918
.org 0x106a42
	bl 0x2208	@ 00106a42 fbf6e1fb
.org 0x106a46
	movs r1, #192	@ 00106a46 c021
.org 0x106a48
	lsls r1, r1, #4	@ 00106a48 0901
.org 0x106a4a
	adds r0, r6, #0	@ 00106a4a 301c
.org 0x106a4c
	bl 0x1cf00	@ 00106a4c 16f758fa
.org 0x106a50
	strb r5, [r6, #18]	@ 00106a50 b574
.org 0x106a52
	ldrb r0, [r6, #13]	@ 00106a52 707b
.org 0x106a54
	adds r0, #1	@ 00106a54 0130
.org 0x106a56
	strb r0, [r6, #13]	@ 00106a56 7073
.org 0x106a58
	adds r0, r6, #0	@ 00106a58 301c
.org 0x106a5a
	bl 0x1cff0	@ 00106a5a 16f7c9fa
.org 0x106a5e
	ldr r0, [r6, #24]	@ 00106a5e b069
.org 0x106a60
	ldrb r1, [r0, #9]	@ 00106a60 417a
.org 0x106a62
	movs r0, #1	@ 00106a62 0120
.org 0x106a64
	ands r0, r1	@ 00106a64 0840
.org 0x106a66
	cmp r0, #0	@ 00106a66 0028
.org 0x106a68
	beq.n 0x106a8a	@ 00106a68 0fd0
.org 0x106a6a
	movs r4, #0	@ 00106a6a 0024
.org 0x106a6c
	adds r0, r6, #0	@ 00106a6c 301c
.org 0x106a6e
	movs r1, #9	@ 00106a6e 0921
.org 0x106a70
	bl 0x105720	@ 00106a70 fef756fe
.org 0x106a74
	strb r4, [r0, #17]	@ 00106a74 4474
.org 0x106a76
	adds r4, #1	@ 00106a76 0134
.org 0x106a78
	cmp r4, #4	@ 00106a78 042c
.org 0x106a7a
	ble.n 0x106a6c	@ 00106a7a f7dd
.org 0x106a7c
	ldrb r0, [r6, #10]	@ 00106a7c b07a
.org 0x106a7e
	movs r1, #254	@ 00106a7e fe21
.org 0x106a80
	ands r1, r0	@ 00106a80 0140
.org 0x106a82
	strb r1, [r6, #10]	@ 00106a82 b172
.org 0x106a84
	ldrb r0, [r6, #13]	@ 00106a84 707b
.org 0x106a86
	adds r0, #1	@ 00106a86 0130
.org 0x106a88
	strb r0, [r6, #13]	@ 00106a88 7073
.org 0x106a8a
	ldr r1, [pc, #60]	@ 00106a8a 0f49
.org 0x106a8c
	ldrb r0, [r6, #18]	@ 00106a8c b07c
.org 0x106a8e
	lsls r0, r0, #1	@ 00106a8e 4000
.org 0x106a90
	adds r0, r0, r1	@ 00106a90 4018
.org 0x106a92
	movs r2, #0	@ 00106a92 0022
.org 0x106a94
	ldrsh r1, [r0, r2]	@ 00106a94 815e
.org 0x106a96
	lsls r0, r1, #1	@ 00106a96 4800
.org 0x106a98
	adds r0, r0, r1	@ 00106a98 4018
.org 0x106a9a
	lsls r0, r0, #8	@ 00106a9a 0002
.org 0x106a9c
	subs r0, r0, r1	@ 00106a9c 401a
.org 0x106a9e
	asrs r0, r0, #8	@ 00106a9e 0012
.org 0x106aa0
	ldr r1, [r6, #104]	@ 00106aa0 b16e
.org 0x106aa2
	adds r1, r1, r0	@ 00106aa2 0918
.org 0x106aa4
	str r1, [r6, #88]	@ 00106aa4 b165
.org 0x106aa6
	ldrb r0, [r6, #18]	@ 00106aa6 b07c
.org 0x106aa8
	adds r0, #1	@ 00106aa8 0130
.org 0x106aaa
	strb r0, [r6, #18]	@ 00106aaa b074
.org 0x106aac
	pop {r4, r5, r6}	@ 00106aac 70bc
.org 0x106aae
	pop {r0}	@ 00106aae 01bc
.org 0x106ab0
	bx r0	@ 00106ab0 0047
