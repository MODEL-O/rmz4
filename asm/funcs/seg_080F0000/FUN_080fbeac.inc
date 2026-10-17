@ FUN_080fbeac  entry 0x080fbeac  size 434
.thumb
.org 0xfbeac
FUN_080fbeac:
	push {r4, r5, r6, r7, lr}	@ 000fbeac f0b5
.org 0xfbeae
	mov r7, r9	@ 000fbeae 4f46
.org 0xfbeb0
	mov r6, r8	@ 000fbeb0 4646
.org 0xfbeb2
	push {r6, r7}	@ 000fbeb2 c0b4
.org 0xfbeb4
	sub sp, #8	@ 000fbeb4 82b0
.org 0xfbeb6
	adds r7, r0, #0	@ 000fbeb6 071c
.org 0xfbeb8
	ldrb r0, [r7, #14]	@ 000fbeb8 b87b
.org 0xfbeba
	cmp r0, #0	@ 000fbeba 0028
.org 0xfbebc
	bne.n 0xfbf06	@ 000fbebc 23d1
.org 0xfbebe
	ldrb r1, [r7, #11]	@ 000fbebe f97a
.org 0xfbec0
	movs r0, #247	@ 000fbec0 f720
.org 0xfbec2
	ands r0, r1	@ 000fbec2 0840
.org 0xfbec4
	strb r0, [r7, #11]	@ 000fbec4 f872
.org 0xfbec6
	ldr r2, [pc, #408]	@ 000fbec6 664a
.org 0xfbec8
	ldr r5, [pc, #408]	@ 000fbec8 664d
.org 0xfbeca
	ldrb r0, [r7, #16]	@ 000fbeca 387c
.org 0xfbecc
	lsls r0, r0, #2	@ 000fbecc 8000
.org 0xfbece
	adds r0, r0, r5	@ 000fbece 4019
.org 0xfbed0
	ldr r1, [r0, #0]	@ 000fbed0 0168
.org 0xfbed2
	lsrs r3, r1, #3	@ 000fbed2 cb08
.org 0xfbed4
	adds r2, #4	@ 000fbed4 0432
.org 0xfbed6
	adds r3, r3, r2	@ 000fbed6 9b18
.org 0xfbed8
	movs r4, #7	@ 000fbed8 0724
.org 0xfbeda
	ands r1, r4	@ 000fbeda 2140
.org 0xfbedc
	movs r2, #1	@ 000fbedc 0122
.org 0xfbede
	adds r0, r2, #0	@ 000fbede 101c
.org 0xfbee0
	lsls r0, r1	@ 000fbee0 8840
.org 0xfbee2
	ldrb r1, [r3, #0]	@ 000fbee2 1978
.org 0xfbee4
	orrs r0, r1	@ 000fbee4 0843
.org 0xfbee6
	strb r0, [r3, #0]	@ 000fbee6 1870
.org 0xfbee8
	ldr r3, [pc, #380]	@ 000fbee8 5f4b
.org 0xfbeea
	ldrb r0, [r7, #16]	@ 000fbeea 387c
.org 0xfbeec
	lsls r0, r0, #2	@ 000fbeec 8000
.org 0xfbeee
	adds r0, r0, r5	@ 000fbeee 4019
.org 0xfbef0
	ldr r0, [r0, #0]	@ 000fbef0 0068
.org 0xfbef2
	lsrs r1, r0, #3	@ 000fbef2 c108
.org 0xfbef4
	adds r1, r1, r3	@ 000fbef4 c918
.org 0xfbef6
	ands r0, r4	@ 000fbef6 2040
.org 0xfbef8
	lsls r2, r0	@ 000fbef8 8240
.org 0xfbefa
	ldrb r0, [r1, #0]	@ 000fbefa 0878
.org 0xfbefc
	orrs r2, r0	@ 000fbefc 0243
.org 0xfbefe
	strb r2, [r1, #0]	@ 000fbefe 0a70
.org 0xfbf00
	ldrb r0, [r7, #14]	@ 000fbf00 b87b
.org 0xfbf02
	adds r0, #1	@ 000fbf02 0130
.org 0xfbf04
	strb r0, [r7, #14]	@ 000fbf04 b873
.org 0xfbf06
	adds r5, r7, #0	@ 000fbf06 3d1c
.org 0xfbf08
	adds r5, #84	@ 000fbf08 5435
.org 0xfbf0a
	ldr r6, [pc, #352]	@ 000fbf0a 584e
.org 0xfbf0c
	ldrb r0, [r7, #10]	@ 000fbf0c b87a
.org 0xfbf0e
	movs r4, #16	@ 000fbf0e 1024
.org 0xfbf10
	adds r3, r4, #0	@ 000fbf10 231c
.org 0xfbf12
	ands r3, r0	@ 000fbf12 0340
.org 0xfbf14
	lsls r3, r3, #24	@ 000fbf14 1b06
.org 0xfbf16
	lsrs r3, r3, #24	@ 000fbf16 1b0e
.org 0xfbf18
	adds r0, r5, #0	@ 000fbf18 281c
.org 0xfbf1a
	adds r1, r6, #0	@ 000fbf1a 311c
.org 0xfbf1c
	movs r2, #0	@ 000fbf1c 0022
.org 0xfbf1e
	bl 0xd4c8c	@ 000fbf1e d8f7b5fe
.org 0xfbf22
	adds r1, r6, #0	@ 000fbf22 311c
.org 0xfbf24
	adds r1, #28	@ 000fbf24 1c31
.org 0xfbf26
	ldrb r0, [r7, #10]	@ 000fbf26 b87a
.org 0xfbf28
	adds r3, r4, #0	@ 000fbf28 231c
.org 0xfbf2a
	ands r3, r0	@ 000fbf2a 0340
.org 0xfbf2c
	lsls r3, r3, #24	@ 000fbf2c 1b06
.org 0xfbf2e
	lsrs r3, r3, #24	@ 000fbf2e 1b0e
.org 0xfbf30
	adds r0, r5, #0	@ 000fbf30 281c
.org 0xfbf32
	movs r2, #0	@ 000fbf32 0022
.org 0xfbf34
	bl 0xd4c8c	@ 000fbf34 d8f7aafe
.org 0xfbf38
	adds r1, r6, #0	@ 000fbf38 311c
.org 0xfbf3a
	adds r1, #56	@ 000fbf3a 3831
.org 0xfbf3c
	ldrb r0, [r7, #10]	@ 000fbf3c b87a
.org 0xfbf3e
	adds r3, r4, #0	@ 000fbf3e 231c
.org 0xfbf40
	ands r3, r0	@ 000fbf40 0340
.org 0xfbf42
	lsls r3, r3, #24	@ 000fbf42 1b06
.org 0xfbf44
	lsrs r3, r3, #24	@ 000fbf44 1b0e
.org 0xfbf46
	adds r0, r5, #0	@ 000fbf46 281c
.org 0xfbf48
	movs r2, #0	@ 000fbf48 0022
.org 0xfbf4a
	bl 0xd4c8c	@ 000fbf4a d8f79ffe
.org 0xfbf4e
	adds r1, r6, #0	@ 000fbf4e 311c
.org 0xfbf50
	adds r1, #84	@ 000fbf50 5431
.org 0xfbf52
	ldrb r0, [r7, #10]	@ 000fbf52 b87a
.org 0xfbf54
	adds r3, r4, #0	@ 000fbf54 231c
.org 0xfbf56
	ands r3, r0	@ 000fbf56 0340
.org 0xfbf58
	lsls r3, r3, #24	@ 000fbf58 1b06
.org 0xfbf5a
	lsrs r3, r3, #24	@ 000fbf5a 1b0e
.org 0xfbf5c
	adds r0, r5, #0	@ 000fbf5c 281c
.org 0xfbf5e
	movs r2, #0	@ 000fbf5e 0022
.org 0xfbf60
	bl 0xd4c8c	@ 000fbf60 d8f794fe
.org 0xfbf64
	adds r1, r6, #0	@ 000fbf64 311c
.org 0xfbf66
	adds r1, #112	@ 000fbf66 7031
.org 0xfbf68
	ldrb r0, [r7, #10]	@ 000fbf68 b87a
.org 0xfbf6a
	adds r3, r4, #0	@ 000fbf6a 231c
.org 0xfbf6c
	ands r3, r0	@ 000fbf6c 0340
.org 0xfbf6e
	lsls r3, r3, #24	@ 000fbf6e 1b06
.org 0xfbf70
	lsrs r3, r3, #24	@ 000fbf70 1b0e
.org 0xfbf72
	adds r0, r5, #0	@ 000fbf72 281c
.org 0xfbf74
	movs r2, #0	@ 000fbf74 0022
.org 0xfbf76
	bl 0xd4c8c	@ 000fbf76 d8f789fe
.org 0xfbf7a
	adds r1, r6, #0	@ 000fbf7a 311c
.org 0xfbf7c
	adds r1, #140	@ 000fbf7c 8c31
.org 0xfbf7e
	ldrb r0, [r7, #10]	@ 000fbf7e b87a
.org 0xfbf80
	adds r3, r4, #0	@ 000fbf80 231c
.org 0xfbf82
	ands r3, r0	@ 000fbf82 0340
.org 0xfbf84
	lsls r3, r3, #24	@ 000fbf84 1b06
.org 0xfbf86
	lsrs r3, r3, #24	@ 000fbf86 1b0e
.org 0xfbf88
	adds r0, r5, #0	@ 000fbf88 281c
.org 0xfbf8a
	movs r2, #0	@ 000fbf8a 0022
.org 0xfbf8c
	bl 0xd4c8c	@ 000fbf8c d8f77efe
.org 0xfbf90
	adds r1, r6, #0	@ 000fbf90 311c
.org 0xfbf92
	adds r1, #168	@ 000fbf92 a831
.org 0xfbf94
	ldrb r0, [r7, #10]	@ 000fbf94 b87a
.org 0xfbf96
	ands r4, r0	@ 000fbf96 0440
.org 0xfbf98
	lsls r4, r4, #24	@ 000fbf98 2406
.org 0xfbf9a
	lsrs r4, r4, #24	@ 000fbf9a 240e
.org 0xfbf9c
	adds r0, r5, #0	@ 000fbf9c 281c
.org 0xfbf9e
	movs r2, #0	@ 000fbf9e 0022
.org 0xfbfa0
	adds r3, r4, #0	@ 000fbfa0 231c
.org 0xfbfa2
	bl 0xd4c8c	@ 000fbfa2 d8f773fe
.org 0xfbfa6
	ldr r5, [pc, #200]	@ 000fbfa6 324d
.org 0xfbfa8
	ldr r0, [r5, #0]	@ 000fbfa8 2868
.org 0xfbfaa
	ldr r1, [pc, #200]	@ 000fbfaa 3249
.org 0xfbfac
	mov r9, r1	@ 000fbfac 8946
.org 0xfbfae
	mov r1, r9	@ 000fbfae 4946
.org 0xfbfb0
	muls r1, r0	@ 000fbfb0 4143
.org 0xfbfb2
	ldr r0, [pc, #196]	@ 000fbfb2 3148
.org 0xfbfb4
	mov r8, r0	@ 000fbfb4 8046
.org 0xfbfb6
	add r1, r8	@ 000fbfb6 4144
.org 0xfbfb8
	lsls r1, r1, #1	@ 000fbfb8 4900
.org 0xfbfba
	lsrs r0, r1, #1	@ 000fbfba 4808
.org 0xfbfbc
	str r0, [r5, #0]	@ 000fbfbc 2860
.org 0xfbfbe
	lsrs r1, r1, #17	@ 000fbfbe 490c
.org 0xfbfc0
	movs r6, #15	@ 000fbfc0 0f26
.org 0xfbfc2
	ands r1, r6	@ 000fbfc2 3140
.org 0xfbfc4
	movs r4, #8	@ 000fbfc4 0824
.org 0xfbfc6
	subs r1, r4, r1	@ 000fbfc6 611a
.org 0xfbfc8
	lsls r1, r1, #8	@ 000fbfc8 0902
.org 0xfbfca
	ldr r0, [r7, #84]	@ 000fbfca 786d
.org 0xfbfcc
	adds r0, r0, r1	@ 000fbfcc 4018
.org 0xfbfce
	str r0, [sp, #0]	@ 000fbfce 0090
.org 0xfbfd0
	ldr r0, [r7, #88]	@ 000fbfd0 b86d
.org 0xfbfd2
	str r0, [sp, #4]	@ 000fbfd2 0190
.org 0xfbfd4
	movs r0, #1	@ 000fbfd4 0120
.org 0xfbfd6
	mov r1, sp	@ 000fbfd6 6946
.org 0xfbfd8
	bl 0xd0c88	@ 000fbfd8 d4f756fe
.org 0xfbfdc
	ldr r0, [r5, #0]	@ 000fbfdc 2868
.org 0xfbfde
	mov r1, r9	@ 000fbfde 4946
.org 0xfbfe0
	muls r1, r0	@ 000fbfe0 4143
.org 0xfbfe2
	adds r0, r1, #0	@ 000fbfe2 081c
.org 0xfbfe4
	add r0, r8	@ 000fbfe4 4044
.org 0xfbfe6
	lsls r0, r0, #1	@ 000fbfe6 4000
.org 0xfbfe8
	lsrs r1, r0, #1	@ 000fbfe8 4108
.org 0xfbfea
	str r1, [r5, #0]	@ 000fbfea 2960
.org 0xfbfec
	lsrs r0, r0, #17	@ 000fbfec 400c
.org 0xfbfee
	ands r0, r6	@ 000fbfee 3040
.org 0xfbff0
	subs r0, r4, r0	@ 000fbff0 201a
.org 0xfbff2
	lsls r0, r0, #8	@ 000fbff2 0002
.org 0xfbff4
	ldr r1, [r7, #84]	@ 000fbff4 796d
.org 0xfbff6
	adds r1, r1, r0	@ 000fbff6 0918
.org 0xfbff8
	str r1, [sp, #0]	@ 000fbff8 0091
.org 0xfbffa
	ldr r0, [r7, #88]	@ 000fbffa b86d
.org 0xfbffc
	ldr r1, [pc, #124]	@ 000fbffc 1f49
.org 0xfbffe
	adds r0, r0, r1	@ 000fbffe 4018
.org 0xfc000
	str r0, [sp, #4]	@ 000fc000 0190
.org 0xfc002
	movs r0, #1	@ 000fc002 0120
.org 0xfc004
	mov r1, sp	@ 000fc004 6946
.org 0xfc006
	bl 0xd0c88	@ 000fc006 d4f73ffe
.org 0xfc00a
	ldr r0, [r5, #0]	@ 000fc00a 2868
.org 0xfc00c
	mov r1, r9	@ 000fc00c 4946
.org 0xfc00e
	muls r1, r0	@ 000fc00e 4143
.org 0xfc010
	adds r0, r1, #0	@ 000fc010 081c
.org 0xfc012
	add r0, r8	@ 000fc012 4044
.org 0xfc014
	lsls r0, r0, #1	@ 000fc014 4000
.org 0xfc016
	lsrs r1, r0, #1	@ 000fc016 4108
.org 0xfc018
	str r1, [r5, #0]	@ 000fc018 2960
.org 0xfc01a
	lsrs r0, r0, #17	@ 000fc01a 400c
.org 0xfc01c
	ands r0, r6	@ 000fc01c 3040
.org 0xfc01e
	subs r4, r4, r0	@ 000fc01e 241a
.org 0xfc020
	lsls r4, r4, #8	@ 000fc020 2402
.org 0xfc022
	ldr r0, [r7, #84]	@ 000fc022 786d
.org 0xfc024
	adds r0, r0, r4	@ 000fc024 0019
.org 0xfc026
	str r0, [sp, #0]	@ 000fc026 0090
.org 0xfc028
	ldr r0, [r7, #88]	@ 000fc028 b86d
.org 0xfc02a
	ldr r1, [pc, #84]	@ 000fc02a 1549
.org 0xfc02c
	adds r0, r0, r1	@ 000fc02c 4018
.org 0xfc02e
	str r0, [sp, #4]	@ 000fc02e 0190
.org 0xfc030
	movs r0, #1	@ 000fc030 0120
.org 0xfc032
	mov r1, sp	@ 000fc032 6946
.org 0xfc034
	bl 0xd0c88	@ 000fc034 d4f728fe
.org 0xfc038
	movs r0, #166	@ 000fc038 a620
.org 0xfc03a
	bl 0x2b10	@ 000fc03a 06f769fd
.org 0xfc03e
	ldr r1, [pc, #68]	@ 000fc03e 1149
.org 0xfc040
	ldrb r0, [r7, #9]	@ 000fc040 787a
.org 0xfc042
	lsls r0, r0, #2	@ 000fc042 8000
.org 0xfc044
	adds r0, r0, r1	@ 000fc044 4018
.org 0xfc046
	movs r1, #4	@ 000fc046 0421
.org 0xfc048
	str r1, [r7, #12]	@ 000fc048 f960
.org 0xfc04a
	ldr r0, [r0, #0]	@ 000fc04a 0068
.org 0xfc04c
	ldr r0, [r0, #16]	@ 000fc04c 0069
.org 0xfc04e
	str r0, [r7, #20]	@ 000fc04e 7861
.org 0xfc050
	add sp, #8	@ 000fc050 02b0
.org 0xfc052
	pop {r3, r4}	@ 000fc052 18bc
.org 0xfc054
	mov r8, r3	@ 000fc054 9846
.org 0xfc056
	mov r9, r4	@ 000fc056 a146
.org 0xfc058
	pop {r4, r5, r6, r7}	@ 000fc058 f0bc
.org 0xfc05a
	pop {r0}	@ 000fc05a 01bc
.org 0xfc05c
	bx r0	@ 000fc05c 0047
