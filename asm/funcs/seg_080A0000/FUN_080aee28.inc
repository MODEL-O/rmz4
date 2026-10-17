@ FUN_080aee28  entry 0x080aee28  size 198
.thumb
.org 0xaee28
FUN_080aee28:
	push {r4, r5, r6, r7, lr}	@ 000aee28 f0b5
.org 0xaee2a
	mov r7, r8	@ 000aee2a 4746
.org 0xaee2c
	push {r7}	@ 000aee2c 80b4
.org 0xaee2e
	adds r7, r0, #0	@ 000aee2e 071c
.org 0xaee30
	ldr r4, [r7, #40]	@ 000aee30 bc6a
.org 0xaee32
	ldrb r1, [r7, #14]	@ 000aee32 b97b
.org 0xaee34
	cmp r1, #0	@ 000aee34 0029
.org 0xaee36
	bne.n 0xaee40	@ 000aee36 03d1
.org 0xaee38
	movs r0, #60	@ 000aee38 3c20
.org 0xaee3a
	strb r0, [r7, #18]	@ 000aee3a b874
.org 0xaee3c
	adds r0, r1, #1	@ 000aee3c 481c
.org 0xaee3e
	strb r0, [r7, #14]	@ 000aee3e b873
.org 0xaee40
	adds r0, r7, #0	@ 000aee40 381c
.org 0xaee42
	bl 0x1cff0	@ 000aee42 6ef7d5f8
.org 0xaee46
	ldr r0, [r4, #84]	@ 000aee46 606d
.org 0xaee48
	ldr r1, [pc, #112]	@ 000aee48 1c49
.org 0xaee4a
	adds r0, r0, r1	@ 000aee4a 4018
.org 0xaee4c
	ldr r4, [r4, #88]	@ 000aee4c a46d
.org 0xaee4e
	ldr r3, [pc, #112]	@ 000aee4e 1c4b
.org 0xaee50
	adds r4, r4, r3	@ 000aee50 e418
.org 0xaee52
	ldr r1, [r7, #84]	@ 000aee52 796d
.org 0xaee54
	mov r8, r1	@ 000aee54 8846
.org 0xaee56
	subs r0, r0, r1	@ 000aee56 401a
.org 0xaee58
	ldrb r1, [r7, #18]	@ 000aee58 b97c
.org 0xaee5a
	bl 0x128fb8	@ 000aee5a 7af0adf8
.org 0xaee5e
	adds r6, r0, #0	@ 000aee5e 061c
.org 0xaee60
	str r6, [r7, #92]	@ 000aee60 fe65
.org 0xaee62
	ldr r5, [r7, #88]	@ 000aee62 bd6d
.org 0xaee64
	subs r4, r4, r5	@ 000aee64 641b
.org 0xaee66
	ldrb r1, [r7, #18]	@ 000aee66 b97c
.org 0xaee68
	adds r0, r4, #0	@ 000aee68 201c
.org 0xaee6a
	bl 0x128fb8	@ 000aee6a 7af0a5f8
.org 0xaee6e
	str r0, [r7, #96]	@ 000aee6e 3866
.org 0xaee70
	mov r3, r8	@ 000aee70 4346
.org 0xaee72
	adds r4, r3, r6	@ 000aee72 9c19
.org 0xaee74
	str r4, [r7, #84]	@ 000aee74 7c65
.org 0xaee76
	adds r5, r5, r0	@ 000aee76 2d18
.org 0xaee78
	str r5, [r7, #88]	@ 000aee78 bd65
.org 0xaee7a
	adds r3, r7, #0	@ 000aee7a 3b1c
.org 0xaee7c
	adds r3, #140	@ 000aee7c 8c33
.org 0xaee7e
	ldr r0, [r3, #0]	@ 000aee7e 1868
.org 0xaee80
	movs r1, #128	@ 000aee80 8021
.org 0xaee82
	lsls r1, r1, #4	@ 000aee82 0901
.org 0xaee84
	ands r0, r1	@ 000aee84 0840
.org 0xaee86
	cmp r0, #0	@ 000aee86 0028
.org 0xaee88
	beq.n 0xaee9a	@ 000aee88 07d0
.org 0xaee8a
	ldr r0, [pc, #56]	@ 000aee8a 0e48
.org 0xaee8c
	ldrh r1, [r0, #8]	@ 000aee8c 0189
.org 0xaee8e
	movs r0, #8	@ 000aee8e 0820
.org 0xaee90
	ands r0, r1	@ 000aee90 0840
.org 0xaee92
	lsls r0, r0, #16	@ 000aee92 0004
.org 0xaee94
	lsrs r2, r0, #16	@ 000aee94 020c
.org 0xaee96
	cmp r2, #0	@ 000aee96 002a
.org 0xaee98
	beq.n 0xaeec8	@ 000aee98 16d0
.org 0xaee9a
	movs r1, #0	@ 000aee9a 0021
.org 0xaee9c
	str r1, [r3, #0]	@ 000aee9c 1960
.org 0xaee9e
	adds r0, r7, #0	@ 000aee9e 381c
.org 0xaeea0
	adds r0, #144	@ 000aeea0 9030
.org 0xaeea2
	str r1, [r0, #0]	@ 000aeea2 0160
.org 0xaeea4
	adds r0, #4	@ 000aeea4 0430
.org 0xaeea6
	strb r1, [r0, #0]	@ 000aeea6 0170
.org 0xaeea8
	ldrb r2, [r7, #10]	@ 000aeea8 ba7a
.org 0xaeeaa
	movs r0, #251	@ 000aeeaa fb20
.org 0xaeeac
	ands r0, r2	@ 000aeeac 1040
.org 0xaeeae
	strb r0, [r7, #10]	@ 000aeeae b872
.org 0xaeeb0
	str r1, [r7, #92]	@ 000aeeb0 f965
.org 0xaeeb2
	str r1, [r7, #96]	@ 000aeeb2 3966
.org 0xaeeb4
	movs r0, #2	@ 000aeeb4 0220
.org 0xaeeb6
	strb r0, [r7, #13]	@ 000aeeb6 7873
.org 0xaeeb8
	strb r1, [r7, #14]	@ 000aeeb8 b973
.org 0xaeeba
	b.n 0xaeef0	@ 000aeeba 19e0
.org 0xaeebc
	.byte 0x00,0x98,0xff,0xff	@ 000aeebc data
.org 0xaeec0
	.byte 0x00,0xfe,0xff,0xff	@ 000aeec0 data
.org 0xaeec4
	.byte 0x10,0xe9,0x02,0x02	@ 000aeec4 data
.org 0xaeec8
	ldr r0, [pc, #48]	@ 000aeec8 0c48
.org 0xaeeca
	ldr r1, [r0, #0]	@ 000aeeca 0168
.org 0xaeecc
	str r4, [r1, #84]	@ 000aeecc 4c65
.org 0xaeece
	ldr r0, [r7, #88]	@ 000aeece b86d
.org 0xaeed0
	movs r3, #152	@ 000aeed0 9823
.org 0xaeed2
	lsls r3, r3, #5	@ 000aeed2 5b01
.org 0xaeed4
	adds r0, r0, r3	@ 000aeed4 c018
.org 0xaeed6
	str r0, [r1, #88]	@ 000aeed6 8865
.org 0xaeed8
	str r2, [r1, #96]	@ 000aeed8 0a66
.org 0xaeeda
	ldrb r0, [r7, #18]	@ 000aeeda b87c
.org 0xaeedc
	subs r0, #1	@ 000aeedc 0138
.org 0xaeede
	strb r0, [r7, #18]	@ 000aeede b874
.org 0xaeee0
	lsls r0, r0, #24	@ 000aeee0 0006
.org 0xaeee2
	lsrs r0, r0, #24	@ 000aeee2 000e
.org 0xaeee4
	cmp r0, #255	@ 000aeee4 ff28
.org 0xaeee6
	bne.n 0xaeef0	@ 000aeee6 03d1
.org 0xaeee8
	ldrb r0, [r7, #13]	@ 000aeee8 787b
.org 0xaeeea
	adds r0, #1	@ 000aeeea 0130
.org 0xaeeec
	strb r0, [r7, #13]	@ 000aeeec 7873
