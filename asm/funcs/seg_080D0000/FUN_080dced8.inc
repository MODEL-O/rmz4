@ FUN_080dced8  entry 0x080dced8  size 216
.thumb
.org 0xdced8
FUN_080dced8:
	push {r4, r5, lr}	@ 000dced8 30b5
.org 0xdceda
	adds r5, r0, #0	@ 000dceda 051c
.org 0xdcedc
	bl 0x1cd28	@ 000dcedc 3ff724ff
.org 0xdcee0
	ldrb r1, [r5, #10]	@ 000dcee0 a97a
.org 0xdcee2
	movs r0, #1	@ 000dcee2 0120
.org 0xdcee4
	orrs r0, r1	@ 000dcee4 0843
.org 0xdcee6
	movs r1, #2	@ 000dcee6 0221
.org 0xdcee8
	orrs r0, r1	@ 000dcee8 0843
.org 0xdceea
	strb r0, [r5, #10]	@ 000dceea a872
.org 0xdceec
	ldrb r0, [r5, #17]	@ 000dceec 687c
.org 0xdceee
	cmp r0, #0	@ 000dceee 0028
.org 0xdcef0
	beq.n 0xdcf2c	@ 000dcef0 1cd0
.org 0xdcef2
	ldr r1, [pc, #40]	@ 000dcef2 0a49
.org 0xdcef4
	adds r0, r5, #0	@ 000dcef4 281c
.org 0xdcef6
	bl 0x1cf00	@ 000dcef6 40f703f8
.org 0xdcefa
	ldr r2, [pc, #36]	@ 000dcefa 094a
.org 0xdcefc
	ldr r1, [r2, #0]	@ 000dcefc 1168
.org 0xdcefe
	ldr r0, [pc, #36]	@ 000dcefe 0948
.org 0xdcf00
	muls r0, r1	@ 000dcf00 4843
.org 0xdcf02
	ldr r1, [pc, #36]	@ 000dcf02 0949
.org 0xdcf04
	adds r0, r0, r1	@ 000dcf04 4018
.org 0xdcf06
	lsls r0, r0, #1	@ 000dcf06 4000
.org 0xdcf08
	lsrs r1, r0, #1	@ 000dcf08 4108
.org 0xdcf0a
	str r1, [r2, #0]	@ 000dcf0a 1160
.org 0xdcf0c
	lsrs r0, r0, #17	@ 000dcf0c 400c
.org 0xdcf0e
	movs r1, #63	@ 000dcf0e 3f21
.org 0xdcf10
	ands r0, r1	@ 000dcf10 0840
.org 0xdcf12
	adds r1, #193	@ 000dcf12 c131
.org 0xdcf14
	adds r0, r0, r1	@ 000dcf14 4018
.org 0xdcf16
	str r0, [r5, #92]	@ 000dcf16 e865
.org 0xdcf18
	movs r0, #5	@ 000dcf18 0520
.org 0xdcf1a
	b.n 0xdcf54	@ 000dcf1a 1be0
.org 0xdcf1c
	.byte 0x05,0x3c,0x00,0x00	@ 000dcf1c data
.org 0xdcf20
	.byte 0x38,0xdc,0x02,0x02	@ 000dcf20 data
.org 0xdcf24
	.byte 0xfd,0x43,0x03,0x00	@ 000dcf24 data
.org 0xdcf28
	.byte 0xc3,0x9e,0x26,0x00	@ 000dcf28 data
.org 0xdcf2c
	ldr r1, [pc, #144]	@ 000dcf2c 2449
.org 0xdcf2e
	adds r0, r5, #0	@ 000dcf2e 281c
.org 0xdcf30
	bl 0x1cf00	@ 000dcf30 3ff7e6ff
.org 0xdcf34
	ldr r2, [pc, #140]	@ 000dcf34 234a
.org 0xdcf36
	ldr r1, [r2, #0]	@ 000dcf36 1168
.org 0xdcf38
	ldr r0, [pc, #140]	@ 000dcf38 2348
.org 0xdcf3a
	muls r1, r0	@ 000dcf3a 4143
.org 0xdcf3c
	ldr r0, [pc, #140]	@ 000dcf3c 2348
.org 0xdcf3e
	adds r1, r1, r0	@ 000dcf3e 0918
.org 0xdcf40
	lsls r1, r1, #1	@ 000dcf40 4900
.org 0xdcf42
	lsrs r0, r1, #1	@ 000dcf42 4808
.org 0xdcf44
	str r0, [r2, #0]	@ 000dcf44 1060
.org 0xdcf46
	lsrs r1, r1, #17	@ 000dcf46 490c
.org 0xdcf48
	movs r0, #63	@ 000dcf48 3f20
.org 0xdcf4a
	ands r1, r0	@ 000dcf4a 0140
.org 0xdcf4c
	ldr r0, [pc, #128]	@ 000dcf4c 2048
.org 0xdcf4e
	subs r0, r0, r1	@ 000dcf4e 401a
.org 0xdcf50
	str r0, [r5, #92]	@ 000dcf50 e865
.org 0xdcf52
	movs r0, #251	@ 000dcf52 fb20
.org 0xdcf54
	strb r0, [r5, #18]	@ 000dcf54 a874
.org 0xdcf56
	adds r0, r5, #0	@ 000dcf56 281c
.org 0xdcf58
	bl 0x1cff0	@ 000dcf58 40f74af8
.org 0xdcf5c
	movs r3, #0	@ 000dcf5c 0023
.org 0xdcf5e
	ldrb r1, [r5, #10]	@ 000dcf5e a97a
.org 0xdcf60
	movs r0, #239	@ 000dcf60 ef20
.org 0xdcf62
	ands r0, r1	@ 000dcf62 0840
.org 0xdcf64
	strb r0, [r5, #10]	@ 000dcf64 a872
.org 0xdcf66
	movs r4, #1	@ 000dcf66 0124
.org 0xdcf68
	adds r0, r5, #0	@ 000dcf68 281c
.org 0xdcf6a
	adds r0, #76	@ 000dcf6a 4c30
.org 0xdcf6c
	strb r3, [r0, #0]	@ 000dcf6c 0370
.org 0xdcf6e
	adds r2, r5, #0	@ 000dcf6e 2a1c
.org 0xdcf70
	adds r2, #74	@ 000dcf70 4a32
.org 0xdcf72
	ldrb r1, [r2, #0]	@ 000dcf72 1178
.org 0xdcf74
	movs r0, #17	@ 000dcf74 1120
.org 0xdcf76
	negs r0, r0	@ 000dcf76 4042
.org 0xdcf78
	ands r0, r1	@ 000dcf78 0840
.org 0xdcf7a
	strb r0, [r2, #0]	@ 000dcf7a 1070
.org 0xdcf7c
	ldr r2, [pc, #68]	@ 000dcf7c 114a
.org 0xdcf7e
	ldr r1, [r2, #0]	@ 000dcf7e 1168
.org 0xdcf80
	ldr r0, [pc, #68]	@ 000dcf80 1148
.org 0xdcf82
	muls r0, r1	@ 000dcf82 4843
.org 0xdcf84
	ldr r1, [pc, #68]	@ 000dcf84 1149
.org 0xdcf86
	adds r0, r0, r1	@ 000dcf86 4018
.org 0xdcf88
	lsls r0, r0, #1	@ 000dcf88 4000
.org 0xdcf8a
	lsrs r1, r0, #1	@ 000dcf8a 4108
.org 0xdcf8c
	str r1, [r2, #0]	@ 000dcf8c 1160
.org 0xdcf8e
	lsrs r0, r0, #17	@ 000dcf8e 400c
.org 0xdcf90
	movs r1, #3	@ 000dcf90 0321
.org 0xdcf92
	ands r0, r1	@ 000dcf92 0840
.org 0xdcf94
	adds r0, #8	@ 000dcf94 0830
.org 0xdcf96
	lsls r0, r0, #6	@ 000dcf96 8001
.org 0xdcf98
	negs r0, r0	@ 000dcf98 4042
.org 0xdcf9a
	str r0, [r5, #96]	@ 000dcf9a 2866
.org 0xdcf9c
	strb r3, [r5, #19]	@ 000dcf9c eb74
.org 0xdcf9e
	adds r0, r5, #0	@ 000dcf9e 281c
.org 0xdcfa0
	adds r0, #125	@ 000dcfa0 7d30
.org 0xdcfa2
	strb r3, [r0, #0]	@ 000dcfa2 0370
.org 0xdcfa4
	ldr r1, [pc, #44]	@ 000dcfa4 0b49
.org 0xdcfa6
	ldrb r0, [r5, #9]	@ 000dcfa6 687a
.org 0xdcfa8
	lsls r0, r0, #2	@ 000dcfa8 8000
.org 0xdcfaa
	adds r0, r0, r1	@ 000dcfaa 4018
.org 0xdcfac
	str r4, [r5, #12]	@ 000dcfac ec60
.org 0xdcfae
	ldr r0, [r0, #0]	@ 000dcfae 0068
