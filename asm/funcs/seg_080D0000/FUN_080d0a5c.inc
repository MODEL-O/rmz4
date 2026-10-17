@ FUN_080d0a5c  entry 0x080d0a5c  size 138
.thumb
.org 0xd0a5c
FUN_080d0a5c:
	push {r4, r5, r6, lr}	@ 000d0a5c 70b5
.org 0xd0a5e
	mov r6, r8	@ 000d0a5e 4646
.org 0xd0a60
	push {r6}	@ 000d0a60 40b4
.org 0xd0a62
	adds r5, r0, #0	@ 000d0a62 051c
.org 0xd0a64
	bl 0x1cc9c	@ 000d0a64 4cf71af9
.org 0xd0a68
	ldrb r0, [r5, #10]	@ 000d0a68 a87a
.org 0xd0a6a
	movs r2, #254	@ 000d0a6a fe22
.org 0xd0a6c
	ands r2, r0	@ 000d0a6c 0240
.org 0xd0a6e
	movs r1, #0	@ 000d0a6e 0021
.org 0xd0a70
	movs r0, #0	@ 000d0a70 0020
.org 0xd0a72
	mov r8, r0	@ 000d0a72 8046
.org 0xd0a74
	movs r0, #2	@ 000d0a74 0220
.org 0xd0a76
	orrs r2, r0	@ 000d0a76 0243
.org 0xd0a78
	orrs r2, r1	@ 000d0a78 0a43
.org 0xd0a7a
	strb r2, [r5, #10]	@ 000d0a7a aa72
.org 0xd0a7c
	ldr r1, [pc, #104]	@ 000d0a7c 1a49
.org 0xd0a7e
	ldrb r0, [r5, #9]	@ 000d0a7e 687a
.org 0xd0a80
	lsls r0, r0, #2	@ 000d0a80 8000
.org 0xd0a82
	adds r0, r0, r1	@ 000d0a82 4018
.org 0xd0a84
	movs r1, #1	@ 000d0a84 0121
.org 0xd0a86
	str r1, [r5, #12]	@ 000d0a86 e960
.org 0xd0a88
	ldr r0, [r0, #0]	@ 000d0a88 0068
.org 0xd0a8a
	movs r6, #4	@ 000d0a8a 0426
.org 0xd0a8c
	ldr r0, [r0, #4]	@ 000d0a8c 4068
.org 0xd0a8e
	str r0, [r5, #20]	@ 000d0a8e 6861
.org 0xd0a90
	movs r0, #4	@ 000d0a90 0420
.org 0xd0a92
	orrs r2, r0	@ 000d0a92 0243
.org 0xd0a94
	strb r2, [r5, #10]	@ 000d0a94 aa72
.org 0xd0a96
	adds r4, r5, #0	@ 000d0a96 2c1c
.org 0xd0a98
	adds r4, #116	@ 000d0a98 7434
.org 0xd0a9a
	ldr r1, [pc, #80]	@ 000d0a9a 1449
.org 0xd0a9c
	adds r2, r5, #0	@ 000d0a9c 2a1c
.org 0xd0a9e
	adds r2, #84	@ 000d0a9e 5432
.org 0xd0aa0
	adds r0, r4, #0	@ 000d0aa0 201c
.org 0xd0aa2
	movs r3, #255	@ 000d0aa2 ff23
.org 0xd0aa4
	bl 0x5760	@ 000d0aa4 34f75cfe
.org 0xd0aa8
	str r5, [r4, #44]	@ 000d0aa8 e562
.org 0xd0aaa
	mov r1, r8	@ 000d0aaa 4146
.org 0xd0aac
	str r1, [r4, #36]	@ 000d0aac 6162
.org 0xd0aae
	ldr r0, [pc, #64]	@ 000d0aae 1048
.org 0xd0ab0
	ldr r2, [r0, #0]	@ 000d0ab0 0268
.org 0xd0ab2
	ldr r3, [pc, #64]	@ 000d0ab2 104b
.org 0xd0ab4
	ldrb r1, [r2, #10]	@ 000d0ab4 917a
.org 0xd0ab6
	movs r0, #16	@ 000d0ab6 1020
.org 0xd0ab8
	ands r0, r1	@ 000d0ab8 0840
.org 0xd0aba
	lsls r0, r0, #24	@ 000d0aba 0006
.org 0xd0abc
	lsrs r0, r0, #24	@ 000d0abc 000e
.org 0xd0abe
	negs r0, r0	@ 000d0abe 4042
.org 0xd0ac0
	asrs r0, r0, #31	@ 000d0ac0 c017
.org 0xd0ac2
	ands r0, r6	@ 000d0ac2 3040
.org 0xd0ac4
	adds r0, r0, r3	@ 000d0ac4 c018
.org 0xd0ac6
	ldr r1, [r0, #0]	@ 000d0ac6 0168
.org 0xd0ac8
	lsls r1, r1, #8	@ 000d0ac8 0902
.org 0xd0aca
	ldr r0, [r2, #84]	@ 000d0aca 506d
.org 0xd0acc
	adds r0, r0, r1	@ 000d0acc 4018
.org 0xd0ace
	str r0, [r5, #84]	@ 000d0ace 6865
.org 0xd0ad0
	ldr r0, [r2, #88]	@ 000d0ad0 906d
.org 0xd0ad2
	ldr r1, [pc, #36]	@ 000d0ad2 0949
.org 0xd0ad4
	adds r0, r0, r1	@ 000d0ad4 4018
.org 0xd0ad6
	str r0, [r5, #88]	@ 000d0ad6 a865
.org 0xd0ad8
	movs r0, #20	@ 000d0ad8 1420
.org 0xd0ada
	strb r0, [r5, #18]	@ 000d0ada a874
.org 0xd0adc
	pop {r3}	@ 000d0adc 08bc
.org 0xd0ade
	mov r8, r3	@ 000d0ade 9846
.org 0xd0ae0
	pop {r4, r5, r6}	@ 000d0ae0 70bc
.org 0xd0ae2
	pop {r0}	@ 000d0ae2 01bc
.org 0xd0ae4
	bx r0	@ 000d0ae4 0047
