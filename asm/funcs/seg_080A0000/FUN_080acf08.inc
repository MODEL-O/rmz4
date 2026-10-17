@ FUN_080acf08  entry 0x080acf08  size 232
.thumb
.org 0xacf08
FUN_080acf08:
	push {r4, r5, r6, r7, lr}	@ 000acf08 f0b5
.org 0xacf0a
	mov r7, r9	@ 000acf0a 4f46
.org 0xacf0c
	mov r6, r8	@ 000acf0c 4646
.org 0xacf0e
	push {r6, r7}	@ 000acf0e c0b4
.org 0xacf10
	sub sp, #24	@ 000acf10 86b0
.org 0xacf12
	adds r5, r0, #0	@ 000acf12 051c
.org 0xacf14
	mov r1, sp	@ 000acf14 6946
.org 0xacf16
	ldr r0, [pc, #216]	@ 000acf16 3648
.org 0xacf18
	ldmia r0!, {r2, r3, r4}	@ 000acf18 1cc8
.org 0xacf1a
	stmia r1!, {r2, r3, r4}	@ 000acf1a 1cc1
.org 0xacf1c
	ldr r0, [r0, #0]	@ 000acf1c 0068
.org 0xacf1e
	str r0, [r1, #0]	@ 000acf1e 0860
.org 0xacf20
	add r7, sp, #16	@ 000acf20 04af
.org 0xacf22
	ldr r1, [pc, #208]	@ 000acf22 3449
.org 0xacf24
	adds r0, r7, #0	@ 000acf24 381c
.org 0xacf26
	movs r2, #8	@ 000acf26 0822
.org 0xacf28
	bl 0x129258	@ 000acf28 7cf096f9
.org 0xacf2c
	ldr r0, [r5, #40]	@ 000acf2c a86a
.org 0xacf2e
	ldr r0, [r0, #40]	@ 000acf2e 806a
.org 0xacf30
	mov r8, r0	@ 000acf30 8046
.org 0xacf32
	ldrb r4, [r5, #17]	@ 000acf32 6c7c
.org 0xacf34
	mov r9, r4	@ 000acf34 a146
.org 0xacf36
	ldrb r0, [r5, #15]	@ 000acf36 e87b
.org 0xacf38
	mov r6, sp	@ 000acf38 6e46
.org 0xacf3a
	adds r6, #17	@ 000acf3a 1136
.org 0xacf3c
	cmp r0, #0	@ 000acf3c 0028
.org 0xacf3e
	bne.n 0xacf8e	@ 000acf3e 26d1
.org 0xacf40
	lsls r0, r4, #2	@ 000acf40 a000
.org 0xacf42
	add r0, sp	@ 000acf42 6844
.org 0xacf44
	ldrh r1, [r0, #0]	@ 000acf44 0188
.org 0xacf46
	adds r0, r5, #0	@ 000acf46 281c
.org 0xacf48
	bl 0x1cf00	@ 000acf48 6ff7daff
.org 0xacf4c
	mov r3, r8	@ 000acf4c 4346
.org 0xacf4e
	adds r3, #184	@ 000acf4e b833
.org 0xacf50
	lsls r2, r4, #1	@ 000acf50 6200
.org 0xacf52
	adds r0, r7, r2	@ 000acf52 b818
.org 0xacf54
	movs r1, #0	@ 000acf54 0021
.org 0xacf56
	ldrsb r1, [r0, r1]	@ 000acf56 4156
.org 0xacf58
	lsls r0, r1, #1	@ 000acf58 4800
.org 0xacf5a
	adds r0, r0, r1	@ 000acf5a 4018
.org 0xacf5c
	lsls r0, r0, #2	@ 000acf5c 8000
.org 0xacf5e
	adds r0, r0, r1	@ 000acf5e 4018
.org 0xacf60
	lsls r0, r0, #11	@ 000acf60 c002
.org 0xacf62
	movs r1, #240	@ 000acf62 f021
.org 0xacf64
	lsls r1, r1, #7	@ 000acf64 c901
.org 0xacf66
	subs r1, r1, r0	@ 000acf66 091a
.org 0xacf68
	ldr r0, [r3, #0]	@ 000acf68 1868
.org 0xacf6a
	adds r0, r0, r1	@ 000acf6a 4018
.org 0xacf6c
	str r0, [r5, #100]	@ 000acf6c 6866
.org 0xacf6e
	adds r3, #4	@ 000acf6e 0433
.org 0xacf70
	adds r2, r6, r2	@ 000acf70 b218
.org 0xacf72
	movs r0, #0	@ 000acf72 0020
.org 0xacf74
	ldrsb r0, [r2, r0]	@ 000acf74 1056
.org 0xacf76
	lsls r0, r0, #14	@ 000acf76 8003
.org 0xacf78
	movs r1, #160	@ 000acf78 a021
.org 0xacf7a
	lsls r1, r1, #7	@ 000acf7a c901
.org 0xacf7c
	subs r1, r1, r0	@ 000acf7c 091a
.org 0xacf7e
	ldr r0, [r3, #0]	@ 000acf7e 1868
.org 0xacf80
	adds r0, r0, r1	@ 000acf80 4018
.org 0xacf82
	str r0, [r5, #104]	@ 000acf82 a866
.org 0xacf84
	movs r0, #32	@ 000acf84 2020
.org 0xacf86
	strb r0, [r5, #18]	@ 000acf86 a874
.org 0xacf88
	ldrb r0, [r5, #15]	@ 000acf88 e87b
.org 0xacf8a
	adds r0, #1	@ 000acf8a 0130
.org 0xacf8c
	strb r0, [r5, #15]	@ 000acf8c e873
.org 0xacf8e
	adds r0, r5, #0	@ 000acf8e 281c
.org 0xacf90
	bl 0x1cff0	@ 000acf90 70f72ef8
.org 0xacf94
	ldrb r4, [r5, #18]	@ 000acf94 ac7c
.org 0xacf96
	subs r4, #1	@ 000acf96 013c
.org 0xacf98
	strb r4, [r5, #18]	@ 000acf98 ac74
.org 0xacf9a
	ldrb r0, [r5, #18]	@ 000acf9a a87c
.org 0xacf9c
	lsls r0, r0, #25	@ 000acf9c 4006
.org 0xacf9e
	ldr r1, [pc, #88]	@ 000acf9e 1649
.org 0xacfa0
	lsrs r0, r0, #23	@ 000acfa0 c00d
.org 0xacfa2
	adds r0, r0, r1	@ 000acfa2 4018
.org 0xacfa4
	movs r1, #0	@ 000acfa4 0021
.org 0xacfa6
	ldrsh r2, [r0, r1]	@ 000acfa6 425e
.org 0xacfa8
	lsls r2, r2, #5	@ 000acfa8 5201
.org 0xacfaa
	negs r2, r2	@ 000acfaa 5242
.org 0xacfac
	mov r3, r9	@ 000acfac 4b46
.org 0xacfae
	lsls r1, r3, #1	@ 000acfae 5900
.org 0xacfb0
	adds r0, r7, r1	@ 000acfb0 7818
.org 0xacfb2
	ldrb r0, [r0, #0]	@ 000acfb2 0078
.org 0xacfb4
	lsls r0, r0, #24	@ 000acfb4 0006
.org 0xacfb6
	asrs r0, r0, #24	@ 000acfb6 0016
.org 0xacfb8
	adds r3, r2, #0	@ 000acfb8 131c
.org 0xacfba
	muls r3, r0	@ 000acfba 4343
.org 0xacfbc
	ldr r0, [r5, #100]	@ 000acfbc 686e
.org 0xacfbe
	adds r0, r0, r3	@ 000acfbe c018
.org 0xacfc0
	str r0, [r5, #84]	@ 000acfc0 6865
.org 0xacfc2
	adds r1, r6, r1	@ 000acfc2 7118
.org 0xacfc4
	movs r0, #0	@ 000acfc4 0020
.org 0xacfc6
	ldrsb r0, [r1, r0]	@ 000acfc6 0856
.org 0xacfc8
	adds r1, r2, #0	@ 000acfc8 111c
.org 0xacfca
	muls r1, r0	@ 000acfca 4143
.org 0xacfcc
	ldr r0, [r5, #104]	@ 000acfcc a86e
.org 0xacfce
	adds r0, r0, r1	@ 000acfce 4018
.org 0xacfd0
	str r0, [r5, #88]	@ 000acfd0 a865
.org 0xacfd2
	lsls r4, r4, #24	@ 000acfd2 2406
.org 0xacfd4
	lsrs r4, r4, #24	@ 000acfd4 240e
.org 0xacfd6
	cmp r4, #0	@ 000acfd6 002c
.org 0xacfd8
	bne.n 0xacfe2	@ 000acfd8 03d1
.org 0xacfda
	movs r0, #1	@ 000acfda 0120
.org 0xacfdc
	strb r0, [r5, #13]	@ 000acfdc 6873
.org 0xacfde
	strb r4, [r5, #14]	@ 000acfde ac73
.org 0xacfe0
	strb r4, [r5, #15]	@ 000acfe0 ec73
.org 0xacfe2
	add sp, #24	@ 000acfe2 06b0
.org 0xacfe4
	pop {r3, r4}	@ 000acfe4 18bc
.org 0xacfe6
	mov r8, r3	@ 000acfe6 9846
.org 0xacfe8
	mov r9, r4	@ 000acfe8 a146
.org 0xacfea
	pop {r4, r5, r6, r7}	@ 000acfea f0bc
.org 0xacfec
	pop {r0}	@ 000acfec 01bc
.org 0xacfee
	bx r0	@ 000acfee 0047
