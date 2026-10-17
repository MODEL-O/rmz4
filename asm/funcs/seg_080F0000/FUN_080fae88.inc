@ FUN_080fae88  entry 0x080fae88  size 284
.thumb
.org 0xfae88
FUN_080fae88:
	push {r4, r5, r6, r7, lr}	@ 000fae88 f0b5
.org 0xfae8a
	mov r7, sl	@ 000fae8a 5746
.org 0xfae8c
	mov r6, r9	@ 000fae8c 4e46
.org 0xfae8e
	mov r5, r8	@ 000fae8e 4546
.org 0xfae90
	push {r5, r6, r7}	@ 000fae90 e0b4
.org 0xfae92
	sub sp, #56	@ 000fae92 8eb0
.org 0xfae94
	adds r6, r0, #0	@ 000fae94 061c
.org 0xfae96
	mov r1, sp	@ 000fae96 6946
.org 0xfae98
	ldr r0, [pc, #152]	@ 000fae98 2648
.org 0xfae9a
	ldmia r0!, {r2, r3, r4}	@ 000fae9a 1cc8
.org 0xfae9c
	stmia r1!, {r2, r3, r4}	@ 000fae9c 1cc1
.org 0xfae9e
	add r2, sp, #12	@ 000fae9e 03aa
.org 0xfaea0
	adds r1, r2, #0	@ 000faea0 111c
.org 0xfaea2
	ldr r0, [pc, #148]	@ 000faea2 2548
.org 0xfaea4
	ldmia r0!, {r3, r5, r7}	@ 000faea4 a8c8
.org 0xfaea6
	stmia r1!, {r3, r5, r7}	@ 000faea6 a8c1
.org 0xfaea8
	mov r4, sp	@ 000faea8 6c46
.org 0xfaeaa
	str r4, [sp, #44]	@ 000faeaa 0b94
.org 0xfaeac
	add r5, sp, #44	@ 000faeac 0bad
.org 0xfaeae
	mov r8, r5	@ 000faeae a846
.org 0xfaeb0
	str r2, [r5, #4]	@ 000faeb0 6a60
.org 0xfaeb2
	adds r4, #24	@ 000faeb2 1834
.org 0xfaeb4
	str r4, [sp, #52]	@ 000faeb4 0d94
.org 0xfaeb6
	adds r0, r4, #0	@ 000faeb6 201c
.org 0xfaeb8
	movs r1, #0	@ 000faeb8 0021
.org 0xfaeba
	movs r2, #3	@ 000faeba 0322
.org 0xfaebc
	bl 0x1292b8	@ 000faebc 2ef0fcf9
.org 0xfaec0
	add r4, sp, #28	@ 000faec0 07ac
.org 0xfaec2
	ldr r1, [pc, #120]	@ 000faec2 1e49
.org 0xfaec4
	adds r0, r4, #0	@ 000faec4 201c
.org 0xfaec6
	movs r2, #3	@ 000faec6 0322
.org 0xfaec8
	bl 0x129258	@ 000faec8 2ef0c6f9
.org 0xfaecc
	add r2, sp, #32	@ 000faecc 08aa
.org 0xfaece
	adds r1, r2, #0	@ 000faece 111c
.org 0xfaed0
	ldr r0, [pc, #108]	@ 000faed0 1b48
.org 0xfaed2
	ldmia r0!, {r3, r5, r7}	@ 000faed2 a8c8
.org 0xfaed4
	stmia r1!, {r3, r5, r7}	@ 000faed4 a8c1
.org 0xfaed6
	ldr r3, [r6, #40]	@ 000faed6 b36a
.org 0xfaed8
	movs r1, #0	@ 000faed8 0021
.org 0xfaeda
	ldr r0, [pc, #104]	@ 000faeda 1a48
.org 0xfaedc
	ldrh r0, [r0, #0]	@ 000faedc 0088
.org 0xfaede
	mov r9, r8	@ 000faede c146
.org 0xfaee0
	mov sl, r4	@ 000faee0 a246
.org 0xfaee2
	cmp r0, #16	@ 000faee2 1028
.org 0xfaee4
	bne.n 0xfaee8	@ 000faee4 00d1
.org 0xfaee6
	movs r1, #1	@ 000faee6 0121
.org 0xfaee8
	mov r8, r1	@ 000faee8 8846
.org 0xfaeea
	ldrb r4, [r6, #17]	@ 000faeea 747c
.org 0xfaeec
	ldr r1, [pc, #88]	@ 000faeec 1649
.org 0xfaeee
	ldrb r0, [r6, #9]	@ 000faeee 707a
.org 0xfaef0
	lsls r0, r0, #2	@ 000faef0 8000
.org 0xfaef2
	adds r0, r0, r1	@ 000faef2 4018
.org 0xfaef4
	movs r1, #1	@ 000faef4 0121
.org 0xfaef6
	str r1, [r6, #12]	@ 000faef6 f160
.org 0xfaef8
	ldr r0, [r0, #0]	@ 000faef8 0068
.org 0xfaefa
	ldr r0, [r0, #4]	@ 000faefa 4068
.org 0xfaefc
	str r0, [r6, #20]	@ 000faefc 7061
.org 0xfaefe
	ldrb r1, [r6, #10]	@ 000faefe b17a
.org 0xfaf00
	movs r0, #1	@ 000faf00 0120
.org 0xfaf02
	movs r5, #0	@ 000faf02 0025
.org 0xfaf04
	orrs r0, r1	@ 000faf04 0843
.org 0xfaf06
	movs r1, #2	@ 000faf06 0221
.org 0xfaf08
	orrs r0, r1	@ 000faf08 0843
.org 0xfaf0a
	strb r0, [r6, #10]	@ 000faf0a b072
.org 0xfaf0c
	lsls r0, r4, #2	@ 000faf0c a000
.org 0xfaf0e
	adds r0, r2, r0	@ 000faf0e 1018
.org 0xfaf10
	ldr r1, [r3, #84]	@ 000faf10 596d
.org 0xfaf12
	ldr r0, [r0, #0]	@ 000faf12 0068
.org 0xfaf14
	adds r1, r1, r0	@ 000faf14 0918
.org 0xfaf16
	str r1, [r6, #84]	@ 000faf16 7165
.org 0xfaf18
	ldr r0, [r3, #88]	@ 000faf18 986d
.org 0xfaf1a
	str r0, [r6, #88]	@ 000faf1a b065
.org 0xfaf1c
	adds r0, r6, #0	@ 000faf1c 301c
.org 0xfaf1e
	bl 0x1cc9c	@ 000faf1e 21f7bdfe
.org 0xfaf22
	ldr r7, [sp, #52]	@ 000faf22 0d9f
.org 0xfaf24
	adds r0, r7, r4	@ 000faf24 3819
.org 0xfaf26
	ldrb r2, [r0, #0]	@ 000faf26 0278
.org 0xfaf28
	cmp r2, #0	@ 000faf28 002a
.org 0xfaf2a
	beq.n 0xfaf4c	@ 000faf2a 0fd0
.org 0xfaf2c
	ldrb r0, [r6, #10]	@ 000faf2c b07a
.org 0xfaf2e
	movs r1, #16	@ 000faf2e 1021
.org 0xfaf30
	orrs r0, r1	@ 000faf30 0843
.org 0xfaf32
	b.n 0xfaf52	@ 000faf32 0ee0
.org 0xfaf34
	.byte 0xbc,0xa4,0x12,0x08	@ 000faf34 data
.org 0xfaf38
	.byte 0xc8,0xa4,0x12,0x08	@ 000faf38 data
.org 0xfaf3c
	.byte 0xd4,0xa4,0x12,0x08	@ 000faf3c data
.org 0xfaf40
	.byte 0xd8,0xa4,0x12,0x08	@ 000faf40 data
.org 0xfaf44
	.byte 0x10,0xe9,0x02,0x02	@ 000faf44 data
.org 0xfaf48
	.byte 0xfc,0x92,0x86,0x08	@ 000faf48 data
.org 0xfaf4c
	ldrb r1, [r6, #10]	@ 000faf4c b17a
.org 0xfaf4e
	movs r0, #239	@ 000faf4e ef20
.org 0xfaf50
	ands r0, r1	@ 000faf50 0840
.org 0xfaf52
	strb r0, [r6, #10]	@ 000faf52 b072
.org 0xfaf54
	movs r1, #1	@ 000faf54 0121
.org 0xfaf56
	ands r1, r2	@ 000faf56 1140
.org 0xfaf58
	adds r0, r6, #0	@ 000faf58 301c
.org 0xfaf5a
	adds r0, #76	@ 000faf5a 4c30
.org 0xfaf5c
	strb r1, [r0, #0]	@ 000faf5c 0170
.org 0xfaf5e
	adds r3, r6, #0	@ 000faf5e 331c
.org 0xfaf60
	adds r3, #74	@ 000faf60 4a33
.org 0xfaf62
	lsls r1, r1, #4	@ 000faf62 0901
.org 0xfaf64
	ldrb r2, [r3, #0]	@ 000faf64 1a78
.org 0xfaf66
	movs r0, #17	@ 000faf66 1120
.org 0xfaf68
	negs r0, r0	@ 000faf68 4042
.org 0xfaf6a
	ands r0, r2	@ 000faf6a 1040
.org 0xfaf6c
	orrs r0, r1	@ 000faf6c 0843
.org 0xfaf6e
	strb r0, [r3, #0]	@ 000faf6e 1870
.org 0xfaf70
	mov r1, r8	@ 000faf70 4146
.org 0xfaf72
	lsls r0, r1, #2	@ 000faf72 8800
.org 0xfaf74
	add r0, r9	@ 000faf74 4844
.org 0xfaf76
	ldr r1, [r0, #0]	@ 000faf76 0168
.org 0xfaf78
	lsls r0, r4, #2	@ 000faf78 a000
.org 0xfaf7a
	adds r0, r0, r1	@ 000faf7a 4018
.org 0xfaf7c
	ldrh r1, [r0, #0]	@ 000faf7c 0188
.org 0xfaf7e
	adds r0, r6, #0	@ 000faf7e 301c
.org 0xfaf80
	bl 0x1cf00	@ 000faf80 21f7beff
.org 0xfaf84
	adds r0, r6, #0	@ 000faf84 301c
.org 0xfaf86
	bl 0x1cff0	@ 000faf86 22f733f8
.org 0xfaf8a
	ldrb r1, [r6, #11]	@ 000faf8a f17a
.org 0xfaf8c
	movs r0, #8	@ 000faf8c 0820
.org 0xfaf8e
	orrs r0, r1	@ 000faf8e 0843
.org 0xfaf90
	strb r0, [r6, #11]	@ 000faf90 f072
.org 0xfaf92
	ldr r1, [pc, #40]	@ 000faf92 0a49
.org 0xfaf94
	mov r2, sl	@ 000faf94 5246
.org 0xfaf96
	adds r0, r2, r4	@ 000faf96 1019
.org 0xfaf98
	ldrb r0, [r0, #0]	@ 000faf98 0078
.org 0xfaf9a
	lsls r0, r0, #2	@ 000faf9a 8000
.org 0xfaf9c
	adds r0, r0, r1	@ 000faf9c 4018
.org 0xfaf9e
	ldr r0, [r0, #0]	@ 000faf9e 0068
.org 0xfafa0
	str r0, [r6, #48]	@ 000fafa0 3063
.org 0xfafa2
	ldr r0, [pc, #28]	@ 000fafa2 0748
