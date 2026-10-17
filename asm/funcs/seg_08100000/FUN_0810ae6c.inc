@ FUN_0810ae6c  entry 0x0810ae6c  size 124
.thumb
.org 0x10ae6c
FUN_0810ae6c:
	push {r4, lr}	@ 0010ae6c 10b5
.org 0x10ae6e
	adds r4, r0, #0	@ 0010ae6e 041c
.org 0x10ae70
	bl 0x1cc9c	@ 0010ae70 11f714ff
.org 0x10ae74
	ldrb r1, [r4, #10]	@ 0010ae74 a17a
.org 0x10ae76
	movs r0, #1	@ 0010ae76 0120
.org 0x10ae78
	orrs r0, r1	@ 0010ae78 0843
.org 0x10ae7a
	movs r1, #2	@ 0010ae7a 0221
.org 0x10ae7c
	orrs r0, r1	@ 0010ae7c 0843
.org 0x10ae7e
	strb r0, [r4, #10]	@ 0010ae7e a072
.org 0x10ae80
	ldrb r0, [r4, #17]	@ 0010ae80 607c
.org 0x10ae82
	cmp r0, #0	@ 0010ae82 0028
.org 0x10ae84
	bne.n 0x10ae98	@ 0010ae84 08d1
.org 0x10ae86
	ldr r1, [pc, #12]	@ 0010ae86 0349
.org 0x10ae88
	adds r0, r4, #0	@ 0010ae88 201c
.org 0x10ae8a
	bl 0x1cf00	@ 0010ae8a 12f739f8
.org 0x10ae8e
	movs r0, #128	@ 0010ae8e 8020
.org 0x10ae90
	lsls r0, r0, #4	@ 0010ae90 0001
.org 0x10ae92
	b.n 0x10aea4	@ 0010ae92 07e0
.org 0x10ae94
	.byte 0x05,0x43,0x00,0x00	@ 0010ae94 data
.org 0x10ae98
	ldr r1, [pc, #80]	@ 0010ae98 1449
.org 0x10ae9a
	adds r0, r4, #0	@ 0010ae9a 201c
.org 0x10ae9c
	bl 0x1cf00	@ 0010ae9c 12f730f8
.org 0x10aea0
	movs r0, #136	@ 0010aea0 8820
.org 0x10aea2
	lsls r0, r0, #8	@ 0010aea2 0002
.org 0x10aea4
	str r0, [r4, #88]	@ 0010aea4 a065
.org 0x10aea6
	adds r0, r4, #0	@ 0010aea6 201c
.org 0x10aea8
	bl 0x1cff0	@ 0010aea8 12f7a2f8
.org 0x10aeac
	adds r1, r4, #0	@ 0010aeac 211c
.org 0x10aeae
	adds r1, #76	@ 0010aeae 4c31
.org 0x10aeb0
	movs r0, #0	@ 0010aeb0 0020
.org 0x10aeb2
	strb r0, [r1, #0]	@ 0010aeb2 0870
.org 0x10aeb4
	adds r2, r4, #0	@ 0010aeb4 221c
.org 0x10aeb6
	adds r2, #74	@ 0010aeb6 4a32
.org 0x10aeb8
	ldrb r1, [r2, #0]	@ 0010aeb8 1178
.org 0x10aeba
	subs r0, #17	@ 0010aeba 1138
.org 0x10aebc
	ands r0, r1	@ 0010aebc 0840
.org 0x10aebe
	strb r0, [r2, #0]	@ 0010aebe 1070
.org 0x10aec0
	ldrb r1, [r4, #10]	@ 0010aec0 a17a
.org 0x10aec2
	movs r0, #239	@ 0010aec2 ef20
.org 0x10aec4
	ands r0, r1	@ 0010aec4 0840
.org 0x10aec6
	strb r0, [r4, #10]	@ 0010aec6 a072
.org 0x10aec8
	movs r0, #176	@ 0010aec8 b020
.org 0x10aeca
	lsls r0, r0, #7	@ 0010aeca c001
.org 0x10aecc
	str r0, [r4, #84]	@ 0010aecc 6065
.org 0x10aece
	ldr r1, [pc, #32]	@ 0010aece 0849
.org 0x10aed0
	ldrb r0, [r4, #9]	@ 0010aed0 607a
.org 0x10aed2
	lsls r0, r0, #2	@ 0010aed2 8000
.org 0x10aed4
	adds r0, r0, r1	@ 0010aed4 4018
.org 0x10aed6
	movs r1, #1	@ 0010aed6 0121
.org 0x10aed8
	str r1, [r4, #12]	@ 0010aed8 e160
.org 0x10aeda
	ldr r0, [r0, #0]	@ 0010aeda 0068
.org 0x10aedc
	ldr r0, [r0, #4]	@ 0010aedc 4068
.org 0x10aede
	str r0, [r4, #20]	@ 0010aede 6061
.org 0x10aee0
	adds r0, r4, #0	@ 0010aee0 201c
.org 0x10aee2
	bl 0x10ada0	@ 0010aee2 fff75dff
.org 0x10aee6
	pop {r4}	@ 0010aee6 10bc
