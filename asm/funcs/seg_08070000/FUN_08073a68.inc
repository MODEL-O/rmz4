@ FUN_08073a68  entry 0x08073a68  size 156
.thumb
.org 0x73a68
FUN_08073a68:
	push {r4, r5, r6, r7, lr}	@ 00073a68 f0b5
.org 0x73a6a
	mov r7, sl	@ 00073a6a 5746
.org 0x73a6c
	mov r6, r9	@ 00073a6c 4e46
.org 0x73a6e
	mov r5, r8	@ 00073a6e 4546
.org 0x73a70
	push {r5, r6, r7}	@ 00073a70 e0b4
.org 0x73a72
	sub sp, #24	@ 00073a72 86b0
.org 0x73a74
	mov r8, r0	@ 00073a74 8046
.org 0x73a76
	movs r0, #224	@ 00073a76 e020
.org 0x73a78
	lsls r0, r0, #4	@ 00073a78 0001
.org 0x73a7a
	mov r9, r0	@ 00073a7a 8146
.org 0x73a7c
	mov r1, r8	@ 00073a7c 4146
.org 0x73a7e
	ldr r0, [r1, #84]	@ 00073a7e 486d
.org 0x73a80
	str r0, [sp, #0]	@ 00073a80 0090
.org 0x73a82
	ldr r1, [r1, #88]	@ 00073a82 896d
.org 0x73a84
	ldr r6, [pc, #124]	@ 00073a84 1f4e
.org 0x73a86
	adds r6, r1, r6	@ 00073a86 8e19
.org 0x73a88
	str r6, [sp, #4]	@ 00073a88 0196
.org 0x73a8a
	adds r6, r0, #0	@ 00073a8a 061c
.org 0x73a8c
	subs r6, r0, r6	@ 00073a8c 861b
.org 0x73a8e
	str r6, [sp, #8]	@ 00073a8e 0296
.org 0x73a90
	ldr r6, [sp, #4]	@ 00073a90 019e
.org 0x73a92
	subs r1, r1, r6	@ 00073a92 891b
.org 0x73a94
	str r1, [sp, #12]	@ 00073a94 0391
.org 0x73a96
	adds r4, r0, #0	@ 00073a96 041c
.org 0x73a98
	ldr r5, [pc, #108]	@ 00073a98 1b4d
.org 0x73a9a
	adds r3, r6, #0	@ 00073a9a 331c
.org 0x73a9c
	add r3, r9	@ 00073a9c 4b44
.org 0x73a9e
	movs r0, #1	@ 00073a9e 0120
.org 0x73aa0
	add r0, r9	@ 00073aa0 4844
.org 0x73aa2
	mov sl, r0	@ 00073aa2 8246
.org 0x73aa4
	adds r1, r4, #0	@ 00073aa4 211c
.org 0x73aa6
	ldr r0, [pc, #100]	@ 00073aa6 1948
.org 0x73aa8
	adds r6, r1, r0	@ 00073aa8 0e18
.org 0x73aaa
	movs r7, #1	@ 00073aaa 0127
.org 0x73aac
	adds r2, r6, #0	@ 00073aac 321c
.org 0x73aae
	adds r0, r6, #0	@ 00073aae 301c
.org 0x73ab0
	adds r1, r3, #0	@ 00073ab0 191c
.org 0x73ab2
	str r2, [sp, #16]	@ 00073ab2 0492
.org 0x73ab4
	str r3, [sp, #20]	@ 00073ab4 0593
.org 0x73ab6
	bl 0x8534	@ 00073ab6 94f73dfd
.org 0x73aba
	mov r1, r9	@ 00073aba 4946
.org 0x73abc
	adds r1, #1	@ 00073abc 0131
.org 0x73abe
	subs r0, r0, r1	@ 00073abe 401a
.org 0x73ac0
	ldr r3, [sp, #20]	@ 00073ac0 059b
.org 0x73ac2
	cmp r0, r5	@ 00073ac2 a842
.org 0x73ac4
	bge.n 0x73ac8	@ 00073ac4 00da
.org 0x73ac6
	adds r5, r0, #0	@ 00073ac6 051c
.org 0x73ac8
	movs r1, #128	@ 00073ac8 8021
.org 0x73aca
	lsls r1, r1, #5	@ 00073aca 4901
.org 0x73acc
	adds r6, r6, r1	@ 00073acc 7618
.org 0x73ace
	subs r7, #1	@ 00073ace 013f
.org 0x73ad0
	cmp r7, #0	@ 00073ad0 002f
.org 0x73ad2
	bge.n 0x73aac	@ 00073ad2 ebda
.org 0x73ad4
	ldr r6, [sp, #0]	@ 00073ad4 009e
.org 0x73ad6
	movs r1, #160	@ 00073ad6 a021
.org 0x73ad8
	lsls r1, r1, #4	@ 00073ad8 0901
.org 0x73ada
	adds r0, r6, r1	@ 00073ada 7018
.org 0x73adc
	adds r1, r3, #0	@ 00073adc 191c
.org 0x73ade
	bl 0x8534	@ 00073ade 94f729fd
.org 0x73ae2
	mov r6, sl	@ 00073ae2 5646
.org 0x73ae4
	subs r0, r0, r6	@ 00073ae4 801b
.org 0x73ae6
	cmp r0, r5	@ 00073ae6 a842
.org 0x73ae8
	bge.n 0x73aec	@ 00073ae8 00da
.org 0x73aea
	adds r5, r0, #0	@ 00073aea 051c
.org 0x73aec
	ldr r1, [sp, #12]	@ 00073aec 0399
.org 0x73aee
	adds r0, r5, r1	@ 00073aee 6818
.org 0x73af0
	mov r6, r8	@ 00073af0 4646
.org 0x73af2
	str r0, [r6, #88]	@ 00073af2 b065
.org 0x73af4
	add sp, #24	@ 00073af4 06b0
.org 0x73af6
	pop {r3, r4, r5}	@ 00073af6 38bc
.org 0x73af8
	mov r8, r3	@ 00073af8 9846
.org 0x73afa
	mov r9, r4	@ 00073afa a146
.org 0x73afc
	mov sl, r5	@ 00073afc aa46
.org 0x73afe
	pop {r4, r5, r6, r7}	@ 00073afe f0bc
.org 0x73b00
	pop {r0}	@ 00073b00 01bc
.org 0x73b02
	bx r0	@ 00073b02 0047
