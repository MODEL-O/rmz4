@ FUN_08094a38  entry 0x08094a38  size 212
.thumb
.org 0x94a38
FUN_08094a38:
	push {r4, r5, r6, r7, lr}	@ 00094a38 f0b5
.org 0x94a3a
	mov r7, r9	@ 00094a3a 4f46
.org 0x94a3c
	mov r6, r8	@ 00094a3c 4646
.org 0x94a3e
	push {r6, r7}	@ 00094a3e c0b4
.org 0x94a40
	sub sp, #8	@ 00094a40 82b0
.org 0x94a42
	adds r7, r0, #0	@ 00094a42 071c
.org 0x94a44
	ldr r1, [r7, #84]	@ 00094a44 796d
.org 0x94a46
	ldr r2, [r7, #88]	@ 00094a46 ba6d
.org 0x94a48
	bl 0x94eb4	@ 00094a48 00f034fa
.org 0x94a4c
	cmp r0, #0	@ 00094a4c 0028
.org 0x94a4e
	beq.n 0x94a5a	@ 00094a4e 04d0
.org 0x94a50
	ldr r0, [r7, #84]	@ 00094a50 786d
.org 0x94a52
	ldr r1, [r7, #88]	@ 00094a52 b96d
.org 0x94a54
	bl 0x8534	@ 00094a54 73f76efd
.org 0x94a58
	b.n 0x94afc	@ 00094a58 50e0
.org 0x94a5a
	ldr r0, [r7, #88]	@ 00094a5a b86d
.org 0x94a5c
	movs r1, #128	@ 00094a5c 8021
.org 0x94a5e
	lsls r1, r1, #4	@ 00094a5e 0901
.org 0x94a60
	adds r5, r0, r1	@ 00094a60 4518
.org 0x94a62
	ldr r0, [r7, #84]	@ 00094a62 786d
.org 0x94a64
	ldr r1, [pc, #164]	@ 00094a64 2949
.org 0x94a66
	adds r0, r0, r1	@ 00094a66 4018
.org 0x94a68
	str r0, [sp, #0]	@ 00094a68 0090
.org 0x94a6a
	ldr r1, [pc, #164]	@ 00094a6a 2949
.org 0x94a6c
	mov r8, r1	@ 00094a6c 8846
.org 0x94a6e
	adds r6, r0, #0	@ 00094a6e 061c
.org 0x94a70
	movs r0, #0	@ 00094a70 0020
.org 0x94a72
	mov r9, r0	@ 00094a72 8146
.org 0x94a74
	adds r0, r6, #0	@ 00094a74 301c
.org 0x94a76
	adds r1, r5, #0	@ 00094a76 291c
.org 0x94a78
	bl 0x7c7c	@ 00094a78 73f700f9
.org 0x94a7c
	lsls r0, r0, #16	@ 00094a7c 0004
.org 0x94a7e
	cmp r0, #0	@ 00094a7e 0028
.org 0x94a80
	beq.n 0x94aa8	@ 00094a80 12d0
.org 0x94a82
	adds r0, r6, #0	@ 00094a82 301c
.org 0x94a84
	adds r1, r5, #0	@ 00094a84 291c
.org 0x94a86
	bl 0x7c7c	@ 00094a86 73f7f9f8
.org 0x94a8a
	movs r1, #15	@ 00094a8a 0f21
.org 0x94a8c
	ands r1, r0	@ 00094a8c 0140
.org 0x94a8e
	cmp r1, #15	@ 00094a8e 0f29
.org 0x94a90
	beq.n 0x94aa8	@ 00094a90 0ad0
.org 0x94a92
	adds r0, r6, #0	@ 00094a92 301c
.org 0x94a94
	adds r1, r5, #0	@ 00094a94 291c
.org 0x94a96
	bl 0x7db4	@ 00094a96 73f78df9
.org 0x94a9a
	cmp r0, #0	@ 00094a9a 0028
.org 0x94a9c
	bge.n 0x94aa8	@ 00094a9c 04da
.org 0x94a9e
	adds r0, r0, r5	@ 00094a9e 4019
.org 0x94aa0
	cmp r0, r8	@ 00094aa0 4045
.org 0x94aa2
	bge.n 0x94aa8	@ 00094aa2 01da
.org 0x94aa4
	adds r5, r0, #0	@ 00094aa4 051c
.org 0x94aa6
	mov r8, r0	@ 00094aa6 8046
.org 0x94aa8
	movs r1, #128	@ 00094aa8 8021
.org 0x94aaa
	lsls r1, r1, #5	@ 00094aaa 4901
.org 0x94aac
	adds r6, r6, r1	@ 00094aac 7618
.org 0x94aae
	movs r0, #1	@ 00094aae 0120
.org 0x94ab0
	negs r0, r0	@ 00094ab0 4042
.org 0x94ab2
	add r9, r0	@ 00094ab2 8144
.org 0x94ab4
	mov r1, r9	@ 00094ab4 4946
.org 0x94ab6
	cmp r1, #0	@ 00094ab6 0029
.org 0x94ab8
	bge.n 0x94a74	@ 00094ab8 dcda
.org 0x94aba
	ldr r0, [sp, #0]	@ 00094aba 0098
.org 0x94abc
	movs r1, #224	@ 00094abc e021
.org 0x94abe
	lsls r1, r1, #4	@ 00094abe 0901
.org 0x94ac0
	adds r6, r0, r1	@ 00094ac0 4618
.org 0x94ac2
	adds r0, r6, #0	@ 00094ac2 301c
.org 0x94ac4
	adds r1, r5, #0	@ 00094ac4 291c
.org 0x94ac6
	bl 0x7c7c	@ 00094ac6 73f7d9f8
.org 0x94aca
	lsls r0, r0, #16	@ 00094aca 0004
.org 0x94acc
	cmp r0, #0	@ 00094acc 0028
.org 0x94ace
	beq.n 0x94af4	@ 00094ace 11d0
.org 0x94ad0
	adds r0, r6, #0	@ 00094ad0 301c
.org 0x94ad2
	adds r1, r5, #0	@ 00094ad2 291c
.org 0x94ad4
	bl 0x7c7c	@ 00094ad4 73f7d2f8
.org 0x94ad8
	movs r1, #15	@ 00094ad8 0f21
.org 0x94ada
	ands r1, r0	@ 00094ada 0140
.org 0x94adc
	cmp r1, #15	@ 00094adc 0f29
.org 0x94ade
	beq.n 0x94af4	@ 00094ade 09d0
.org 0x94ae0
	adds r0, r6, #0	@ 00094ae0 301c
.org 0x94ae2
	adds r1, r5, #0	@ 00094ae2 291c
.org 0x94ae4
	bl 0x7db4	@ 00094ae4 73f766f9
.org 0x94ae8
	cmp r0, #0	@ 00094ae8 0028
.org 0x94aea
	bge.n 0x94af4	@ 00094aea 03da
.org 0x94aec
	adds r0, r0, r5	@ 00094aec 4019
.org 0x94aee
	cmp r0, r8	@ 00094aee 4045
.org 0x94af0
	bge.n 0x94af4	@ 00094af0 00da
.org 0x94af2
	mov r8, r0	@ 00094af2 8046
.org 0x94af4
	ldr r0, [pc, #24]	@ 00094af4 0648
.org 0x94af6
	cmp r8, r0	@ 00094af6 8045
.org 0x94af8
	beq.n 0x94afe	@ 00094af8 01d0
.org 0x94afa
	mov r0, r8	@ 00094afa 4046
.org 0x94afc
	str r0, [r7, #88]	@ 00094afc b865
.org 0x94afe
	add sp, #8	@ 00094afe 02b0
.org 0x94b00
	pop {r3, r4}	@ 00094b00 18bc
.org 0x94b02
	mov r8, r3	@ 00094b02 9846
.org 0x94b04
	mov r9, r4	@ 00094b04 a146
.org 0x94b06
	pop {r4, r5, r6, r7}	@ 00094b06 f0bc
.org 0x94b08
	pop {r0}	@ 00094b08 01bc
.org 0x94b0a
	bx r0	@ 00094b0a 0047
