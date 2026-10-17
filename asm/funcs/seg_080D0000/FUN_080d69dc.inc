@ FUN_080d69dc  entry 0x080d69dc  size 210
.thumb
.org 0xd69dc
FUN_080d69dc:
	push {r4, r5, r6, r7, lr}	@ 000d69dc f0b5
.org 0xd69de
	adds r7, r0, #0	@ 000d69de 071c
.org 0xd69e0
	ldr r4, [r7, #40]	@ 000d69e0 bc6a
.org 0xd69e2
	ldrb r5, [r7, #17]	@ 000d69e2 7d7c
.org 0xd69e4
	bl 0x1cc9c	@ 000d69e4 46f75af9
.org 0xd69e8
	ldrb r1, [r7, #10]	@ 000d69e8 b97a
.org 0xd69ea
	movs r0, #1	@ 000d69ea 0120
.org 0xd69ec
	movs r6, #0	@ 000d69ec 0026
.org 0xd69ee
	orrs r0, r1	@ 000d69ee 0843
.org 0xd69f0
	movs r1, #2	@ 000d69f0 0221
.org 0xd69f2
	orrs r0, r1	@ 000d69f2 0843
.org 0xd69f4
	strb r0, [r7, #10]	@ 000d69f4 b872
.org 0xd69f6
	ldr r1, [pc, #40]	@ 000d69f6 0a49
.org 0xd69f8
	lsls r0, r5, #1	@ 000d69f8 6800
.org 0xd69fa
	adds r0, r0, r1	@ 000d69fa 4018
.org 0xd69fc
	ldrh r1, [r0, #0]	@ 000d69fc 0188
.org 0xd69fe
	adds r0, r7, #0	@ 000d69fe 381c
.org 0xd6a00
	bl 0x1cf00	@ 000d6a00 46f77efa
.org 0xd6a04
	adds r0, r7, #0	@ 000d6a04 381c
.org 0xd6a06
	bl 0x1cff0	@ 000d6a06 46f7f3fa
.org 0xd6a0a
	ldrb r0, [r4, #10]	@ 000d6a0a a07a
.org 0xd6a0c
	lsrs r2, r0, #4	@ 000d6a0c 0209
.org 0xd6a0e
	movs r0, #1	@ 000d6a0e 0120
.org 0xd6a10
	ands r2, r0	@ 000d6a10 0240
.org 0xd6a12
	cmp r2, #0	@ 000d6a12 002a
.org 0xd6a14
	beq.n 0xd6a24	@ 000d6a14 06d0
.org 0xd6a16
	ldrb r0, [r7, #10]	@ 000d6a16 b87a
.org 0xd6a18
	movs r1, #16	@ 000d6a18 1021
.org 0xd6a1a
	orrs r0, r1	@ 000d6a1a 0843
.org 0xd6a1c
	b.n 0xd6a2a	@ 000d6a1c 05e0
.org 0xd6a1e
	.byte 0x00	@ 000d6a1e data
.org 0xd6a1f
	.byte 0x00	@ 000d6a1f data
.org 0xd6a20
	.byte 0x54,0x7f,0x86,0x08	@ 000d6a20 data
.org 0xd6a24
	ldrb r1, [r7, #10]	@ 000d6a24 b97a
.org 0xd6a26
	movs r0, #239	@ 000d6a26 ef20
.org 0xd6a28
	ands r0, r1	@ 000d6a28 0840
.org 0xd6a2a
	strb r0, [r7, #10]	@ 000d6a2a b872
.org 0xd6a2c
	movs r0, #1	@ 000d6a2c 0120
.org 0xd6a2e
	mov ip, r0	@ 000d6a2e 8446
.org 0xd6a30
	mov r1, ip	@ 000d6a30 6146
.org 0xd6a32
	ands r1, r2	@ 000d6a32 1140
.org 0xd6a34
	adds r0, r7, #0	@ 000d6a34 381c
.org 0xd6a36
	adds r0, #76	@ 000d6a36 4c30
.org 0xd6a38
	strb r1, [r0, #0]	@ 000d6a38 0170
.org 0xd6a3a
	adds r3, r7, #0	@ 000d6a3a 3b1c
.org 0xd6a3c
	adds r3, #74	@ 000d6a3c 4a33
.org 0xd6a3e
	lsls r1, r1, #4	@ 000d6a3e 0901
.org 0xd6a40
	ldrb r2, [r3, #0]	@ 000d6a40 1a78
.org 0xd6a42
	movs r0, #17	@ 000d6a42 1120
.org 0xd6a44
	negs r0, r0	@ 000d6a44 4042
.org 0xd6a46
	ands r0, r2	@ 000d6a46 1040
.org 0xd6a48
	orrs r0, r1	@ 000d6a48 0843
.org 0xd6a4a
	strb r0, [r3, #0]	@ 000d6a4a 1870
.org 0xd6a4c
	ldrb r1, [r7, #10]	@ 000d6a4c b97a
.org 0xd6a4e
	movs r0, #16	@ 000d6a4e 1020
.org 0xd6a50
	ands r0, r1	@ 000d6a50 0840
.org 0xd6a52
	cmp r0, #0	@ 000d6a52 0028
.org 0xd6a54
	beq.n 0xd6a5a	@ 000d6a54 01d0
.org 0xd6a56
	movs r0, #2	@ 000d6a56 0220
.org 0xd6a58
	subs r5, r0, r5	@ 000d6a58 451b
.org 0xd6a5a
	subs r1, r5, #1	@ 000d6a5a 691e
.org 0xd6a5c
	lsls r1, r1, #7	@ 000d6a5c c901
.org 0xd6a5e
	ldr r6, [pc, #84]	@ 000d6a5e 154e
.org 0xd6a60
	ldr r0, [r6, #0]	@ 000d6a60 3068
.org 0xd6a62
	ldr r5, [pc, #84]	@ 000d6a62 154d
.org 0xd6a64
	muls r0, r5	@ 000d6a64 6843
.org 0xd6a66
	ldr r3, [pc, #84]	@ 000d6a66 154b
.org 0xd6a68
	adds r0, r0, r3	@ 000d6a68 c018
.org 0xd6a6a
	lsls r0, r0, #1	@ 000d6a6a 4000
.org 0xd6a6c
	lsrs r2, r0, #1	@ 000d6a6c 4208
.org 0xd6a6e
	lsrs r0, r0, #17	@ 000d6a6e 400c
.org 0xd6a70
	ldr r4, [pc, #76]	@ 000d6a70 134c
.org 0xd6a72
	ands r0, r4	@ 000d6a72 2040
.org 0xd6a74
	adds r1, r1, r0	@ 000d6a74 0918
.org 0xd6a76
	ldr r0, [pc, #76]	@ 000d6a76 1348
.org 0xd6a78
	adds r1, r1, r0	@ 000d6a78 0918
.org 0xd6a7a
	str r1, [r7, #92]	@ 000d6a7a f965
.org 0xd6a7c
	adds r0, r2, #0	@ 000d6a7c 101c
.org 0xd6a7e
	muls r0, r5	@ 000d6a7e 6843
.org 0xd6a80
	adds r0, r0, r3	@ 000d6a80 c018
.org 0xd6a82
	lsls r0, r0, #1	@ 000d6a82 4000
.org 0xd6a84
	lsrs r1, r0, #1	@ 000d6a84 4108
.org 0xd6a86
	str r1, [r6, #0]	@ 000d6a86 3160
.org 0xd6a88
	lsrs r0, r0, #17	@ 000d6a88 400c
.org 0xd6a8a
	ands r0, r4	@ 000d6a8a 2040
.org 0xd6a8c
	ldr r1, [pc, #56]	@ 000d6a8c 0e49
.org 0xd6a8e
	subs r1, r1, r0	@ 000d6a8e 091a
.org 0xd6a90
	str r1, [r7, #96]	@ 000d6a90 3966
.org 0xd6a92
	ldrb r0, [r7, #17]	@ 000d6a92 787c
.org 0xd6a94
	strb r0, [r7, #18]	@ 000d6a94 b874
.org 0xd6a96
	ldr r1, [pc, #52]	@ 000d6a96 0d49
.org 0xd6a98
	ldrb r0, [r7, #9]	@ 000d6a98 787a
.org 0xd6a9a
	lsls r0, r0, #2	@ 000d6a9a 8000
.org 0xd6a9c
	adds r0, r0, r1	@ 000d6a9c 4018
.org 0xd6a9e
	mov r1, ip	@ 000d6a9e 6146
.org 0xd6aa0
	str r1, [r7, #12]	@ 000d6aa0 f960
.org 0xd6aa2
	ldr r0, [r0, #0]	@ 000d6aa2 0068
.org 0xd6aa4
	ldr r0, [r0, #4]	@ 000d6aa4 4068
.org 0xd6aa6
	str r0, [r7, #20]	@ 000d6aa6 7861
.org 0xd6aa8
	adds r0, r7, #0	@ 000d6aa8 381c
.org 0xd6aaa
	bl 0xd68fc	@ 000d6aaa fff727ff
