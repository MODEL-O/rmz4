@ FUN_0805ce34  entry 0x0805ce34  size 216
.thumb
.org 0x5ce34
FUN_0805ce34:
	push {r4, r5, r6, r7, lr}	@ 0005ce34 f0b5
.org 0x5ce36
	mov r7, r9	@ 0005ce36 4f46
.org 0x5ce38
	mov r6, r8	@ 0005ce38 4646
.org 0x5ce3a
	push {r6, r7}	@ 0005ce3a c0b4
.org 0x5ce3c
	sub sp, #16	@ 0005ce3c 84b0
.org 0x5ce3e
	adds r5, r0, #0	@ 0005ce3e 051c
.org 0x5ce40
	ldr r1, [pc, #200]	@ 0005ce40 3249
.org 0x5ce42
	mov r0, sp	@ 0005ce42 6846
.org 0x5ce44
	movs r2, #6	@ 0005ce44 0622
.org 0x5ce46
	bl 0x129258	@ 0005ce46 ccf007fa
.org 0x5ce4a
	add r0, sp, #8	@ 0005ce4a 02a8
.org 0x5ce4c
	mov r8, r0	@ 0005ce4c 8046
.org 0x5ce4e
	ldr r1, [pc, #192]	@ 0005ce4e 3049
.org 0x5ce50
	movs r2, #6	@ 0005ce50 0622
.org 0x5ce52
	bl 0x129258	@ 0005ce52 ccf001fa
.org 0x5ce56
	ldrb r7, [r5, #16]	@ 0005ce56 2f7c
.org 0x5ce58
	ldrb r0, [r5, #10]	@ 0005ce58 a87a
.org 0x5ce5a
	lsrs r6, r0, #4	@ 0005ce5a 0609
.org 0x5ce5c
	movs r1, #1	@ 0005ce5c 0121
.org 0x5ce5e
	mov r9, r1	@ 0005ce5e 8946
.org 0x5ce60
	ands r6, r1	@ 0005ce60 0e40
.org 0x5ce62
	ldrb r0, [r5, #15]	@ 0005ce62 e87b
.org 0x5ce64
	cmp r0, #0	@ 0005ce64 0028
.org 0x5ce66
	bne.n 0x5ce9a	@ 0005ce66 18d1
.org 0x5ce68
	adds r0, r5, #0	@ 0005ce68 281c
.org 0x5ce6a
	bl 0x5f150	@ 0005ce6a 02f071f9
.org 0x5ce6e
	adds r4, r0, #0	@ 0005ce6e 041c
.org 0x5ce70
	lsls r0, r7, #1	@ 0005ce70 7800
.org 0x5ce72
	add r0, sp	@ 0005ce72 6844
.org 0x5ce74
	ldrb r1, [r0, #0]	@ 0005ce74 0178
.org 0x5ce76
	adds r0, r5, #0	@ 0005ce76 281c
.org 0x5ce78
	bl 0x5ee6c	@ 0005ce78 01f0f8ff
.org 0x5ce7c
	lsls r4, r4, #1	@ 0005ce7c 6400
.org 0x5ce7e
	add r4, r8	@ 0005ce7e 4444
.org 0x5ce80
	ldrh r1, [r4, #0]	@ 0005ce80 2188
.org 0x5ce82
	lsls r0, r6, #1	@ 0005ce82 7000
.org 0x5ce84
	mov r2, r9	@ 0005ce84 4a46
.org 0x5ce86
	subs r0, r2, r0	@ 0005ce86 101a
.org 0x5ce88
	muls r0, r1	@ 0005ce88 4843
.org 0x5ce8a
	str r0, [r5, #92]	@ 0005ce8a e865
.org 0x5ce8c
	ldr r0, [r5, #84]	@ 0005ce8c 686d
.org 0x5ce8e
	str r0, [r5, #96]	@ 0005ce8e 2866
.org 0x5ce90
	movs r0, #64	@ 0005ce90 4020
.org 0x5ce92
	strb r0, [r5, #18]	@ 0005ce92 a874
.org 0x5ce94
	ldrb r0, [r5, #15]	@ 0005ce94 e87b
.org 0x5ce96
	adds r0, #1	@ 0005ce96 0130
.org 0x5ce98
	strb r0, [r5, #15]	@ 0005ce98 e873
.org 0x5ce9a
	adds r0, r5, #0	@ 0005ce9a 281c
.org 0x5ce9c
	bl 0x1cff0	@ 0005ce9c c0f7a8f8
.org 0x5cea0
	adds r0, r5, #0	@ 0005cea0 281c
.org 0x5cea2
	adds r0, #116	@ 0005cea2 7430
.org 0x5cea4
	ldr r4, [pc, #108]	@ 0005cea4 1b4c
.org 0x5cea6
	ldr r3, [pc, #112]	@ 0005cea6 1c4b
.org 0x5cea8
	adds r1, r5, #0	@ 0005cea8 291c
.org 0x5ceaa
	adds r1, #184	@ 0005ceaa b831
.org 0x5ceac
	ldrb r2, [r1, #0]	@ 0005ceac 0a78
.org 0x5ceae
	lsls r1, r2, #1	@ 0005ceae 5100
.org 0x5ceb0
	adds r1, r1, r3	@ 0005ceb0 c918
.org 0x5ceb2
	ldrh r1, [r1, #0]	@ 0005ceb2 0988
.org 0x5ceb4
	lsls r1, r1, #2	@ 0005ceb4 8900
.org 0x5ceb6
	adds r1, r1, r4	@ 0005ceb6 0919
.org 0x5ceb8
	adds r3, r5, #0	@ 0005ceb8 2b1c
.org 0x5ceba
	adds r3, #113	@ 0005ceba 7133
.org 0x5cebc
	movs r4, #0	@ 0005cebc 0024
.org 0x5cebe
	ldrsb r4, [r3, r4]	@ 0005cebe 1c57
.org 0x5cec0
	ldr r1, [r1, #0]	@ 0005cec0 0968
.org 0x5cec2
	lsls r3, r4, #2	@ 0005cec2 a300
.org 0x5cec4
	adds r3, r3, r1	@ 0005cec4 5b18
.org 0x5cec6
	ldr r1, [pc, #84]	@ 0005cec6 1549
.org 0x5cec8
	lsls r2, r2, #2	@ 0005cec8 9200
.org 0x5ceca
	adds r2, r2, r1	@ 0005ceca 5218
.org 0x5cecc
	ldr r1, [r2, #0]	@ 0005cecc 1168
.org 0x5cece
	adds r1, r1, r4	@ 0005cece 0919
.org 0x5ced0
	ldrb r1, [r1, #0]	@ 0005ced0 0978
.org 0x5ced2
	lsls r2, r1, #1	@ 0005ced2 4a00
.org 0x5ced4
	adds r2, r2, r1	@ 0005ced4 5218
.org 0x5ced6
	lsls r2, r2, #3	@ 0005ced6 d200
.org 0x5ced8
	ldr r1, [r3, #0]	@ 0005ced8 1968
.org 0x5ceda
	adds r1, r1, r2	@ 0005ceda 8918
.org 0x5cedc
	bl 0x5784	@ 0005cedc a8f752fc
.org 0x5cee0
	ldr r1, [r5, #84]	@ 0005cee0 696d
.org 0x5cee2
	ldr r0, [r5, #92]	@ 0005cee2 e86d
.org 0x5cee4
	adds r1, r1, r0	@ 0005cee4 0918
.org 0x5cee6
	str r1, [r5, #84]	@ 0005cee6 6965
.org 0x5cee8
	ldr r0, [r5, #96]	@ 0005cee8 286e
.org 0x5ceea
	subs r0, r0, r1	@ 0005ceea 401a
.org 0x5ceec
	ldr r1, [pc, #48]	@ 0005ceec 0c49
.org 0x5ceee
	adds r0, r0, r1	@ 0005ceee 4018
.org 0x5cef0
	ldr r1, [pc, #48]	@ 0005cef0 0c49
.org 0x5cef2
	cmp r0, r1	@ 0005cef2 8842
.org 0x5cef4
	bls.n 0x5cefe	@ 0005cef4 03d9
.org 0x5cef6
	movs r0, #0	@ 0005cef6 0020
.org 0x5cef8
	mov r2, r9	@ 0005cef8 4a46
.org 0x5cefa
	strb r2, [r5, #14]	@ 0005cefa aa73
.org 0x5cefc
	strb r0, [r5, #15]	@ 0005cefc e873
.org 0x5cefe
	add sp, #16	@ 0005cefe 04b0
.org 0x5cf00
	pop {r3, r4}	@ 0005cf00 18bc
.org 0x5cf02
	mov r8, r3	@ 0005cf02 9846
.org 0x5cf04
	mov r9, r4	@ 0005cf04 a146
.org 0x5cf06
	pop {r4, r5, r6, r7}	@ 0005cf06 f0bc
.org 0x5cf08
	pop {r0}	@ 0005cf08 01bc
.org 0x5cf0a
	bx r0	@ 0005cf0a 0047
