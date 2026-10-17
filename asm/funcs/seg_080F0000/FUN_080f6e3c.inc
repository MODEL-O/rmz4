@ FUN_080f6e3c  entry 0x080f6e3c  size 132
.thumb
.org 0xf6e3c
FUN_080f6e3c:
	push {r4, r5, r6, r7, lr}	@ 000f6e3c f0b5
.org 0xf6e3e
	mov r7, r8	@ 000f6e3e 4746
.org 0xf6e40
	push {r7}	@ 000f6e40 80b4
.org 0xf6e42
	sub sp, #12	@ 000f6e42 83b0
.org 0xf6e44
	adds r4, r0, #0	@ 000f6e44 041c
.org 0xf6e46
	ldr r3, [r4, #40]	@ 000f6e46 a36a
.org 0xf6e48
	ldr r1, [pc, #48]	@ 000f6e48 0c49
.org 0xf6e4a
	ldrb r0, [r4, #9]	@ 000f6e4a 607a
.org 0xf6e4c
	lsls r0, r0, #2	@ 000f6e4c 8000
.org 0xf6e4e
	adds r0, r0, r1	@ 000f6e4e 4018
.org 0xf6e50
	movs r1, #1	@ 000f6e50 0121
.org 0xf6e52
	str r1, [r4, #12]	@ 000f6e52 e160
.org 0xf6e54
	ldr r0, [r0, #0]	@ 000f6e54 0068
.org 0xf6e56
	ldr r0, [r0, #4]	@ 000f6e56 4068
.org 0xf6e58
	str r0, [r4, #20]	@ 000f6e58 6061
.org 0xf6e5a
	ldrb r1, [r4, #10]	@ 000f6e5a a17a
.org 0xf6e5c
	movs r0, #254	@ 000f6e5c fe20
.org 0xf6e5e
	ands r0, r1	@ 000f6e5e 0840
.org 0xf6e60
	movs r2, #0	@ 000f6e60 0022
.org 0xf6e62
	movs r1, #2	@ 000f6e62 0221
.org 0xf6e64
	orrs r0, r1	@ 000f6e64 0843
.org 0xf6e66
	strb r0, [r4, #10]	@ 000f6e66 a072
.org 0xf6e68
	adds r0, r4, #0	@ 000f6e68 201c
.org 0xf6e6a
	adds r0, #181	@ 000f6e6a b530
.org 0xf6e6c
	strb r2, [r0, #0]	@ 000f6e6c 0270
.org 0xf6e6e
	movs r5, #0	@ 000f6e6e 0025
.org 0xf6e70
	mov r8, sp	@ 000f6e70 e846
.org 0xf6e72
	movs r7, #144	@ 000f6e72 9027
.org 0xf6e74
	lsls r7, r7, #5	@ 000f6e74 7f01
.org 0xf6e76
	adds r6, r0, #0	@ 000f6e76 061c
.org 0xf6e78
	b.n 0xf6e8c	@ 000f6e78 08e0
.org 0xf6e7a
	.byte 0x00	@ 000f6e7a data
.org 0xf6e7b
	.byte 0x00	@ 000f6e7b data
.org 0xf6e7c
	.byte 0xfc,0x92,0x86,0x08	@ 000f6e7c data
.org 0xf6e80
	ldrb r0, [r6, #0]	@ 000f6e80 3078
.org 0xf6e82
	adds r0, #1	@ 000f6e82 0130
.org 0xf6e84
	strb r0, [r6, #0]	@ 000f6e84 3070
.org 0xf6e86
	ldr r0, [pc, #64]	@ 000f6e86 1048
.org 0xf6e88
	adds r7, r7, r0	@ 000f6e88 3f18
.org 0xf6e8a
	adds r5, #1	@ 000f6e8a 0135
.org 0xf6e8c
	cmp r5, #1	@ 000f6e8c 012d
.org 0xf6e8e
	bgt.n 0xf6eb4	@ 000f6e8e 11dc
.org 0xf6e90
	ldr r0, [r3, #84]	@ 000f6e90 586d
.org 0xf6e92
	adds r0, r0, r7	@ 000f6e92 c019
.org 0xf6e94
	str r0, [sp, #0]	@ 000f6e94 0090
.org 0xf6e96
	ldr r0, [r3, #88]	@ 000f6e96 986d
.org 0xf6e98
	ldr r1, [pc, #48]	@ 000f6e98 0c49
.org 0xf6e9a
	adds r0, r0, r1	@ 000f6e9a 4018
.org 0xf6e9c
	mov r1, r8	@ 000f6e9c 4146
.org 0xf6e9e
	str r0, [r1, #4]	@ 000f6e9e 4860
.org 0xf6ea0
	lsls r2, r5, #24	@ 000f6ea0 2a06
.org 0xf6ea2
	lsrs r2, r2, #24	@ 000f6ea2 120e
.org 0xf6ea4
	adds r0, r4, #0	@ 000f6ea4 201c
.org 0xf6ea6
	mov r1, sp	@ 000f6ea6 6946
.org 0xf6ea8
	str r3, [sp, #8]	@ 000f6ea8 0293
.org 0xf6eaa
	bl 0xf6db8	@ 000f6eaa fff785ff
.org 0xf6eae
	ldr r3, [sp, #8]	@ 000f6eae 029b
.org 0xf6eb0
	cmp r0, #0	@ 000f6eb0 0028
.org 0xf6eb2
	bne.n 0xf6e80	@ 000f6eb2 e5d1
.org 0xf6eb4
	adds r0, r4, #0	@ 000f6eb4 201c
.org 0xf6eb6
	bl 0xf6f50	@ 000f6eb6 00f04bf8
.org 0xf6eba
	add sp, #12	@ 000f6eba 03b0
.org 0xf6ebc
	pop {r3}	@ 000f6ebc 08bc
.org 0xf6ebe
	mov r8, r3	@ 000f6ebe 9846
