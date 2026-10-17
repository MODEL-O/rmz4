@ FUN_0804ae30  entry 0x0804ae30  size 344
.thumb
.org 0x4ae30
FUN_0804ae30:
	push {r4, r5, r6, r7, lr}	@ 0004ae30 f0b5
.org 0x4ae32
	mov r7, r9	@ 0004ae32 4f46
.org 0x4ae34
	mov r6, r8	@ 0004ae34 4646
.org 0x4ae36
	push {r6, r7}	@ 0004ae36 c0b4
.org 0x4ae38
	sub sp, #8	@ 0004ae38 82b0
.org 0x4ae3a
	adds r6, r0, #0	@ 0004ae3a 061c
.org 0x4ae3c
	adds r0, #180	@ 0004ae3c b430
.org 0x4ae3e
	ldr r1, [r0, #4]	@ 0004ae3e 4168
.org 0x4ae40
	mov r9, r1	@ 0004ae40 8946
.org 0x4ae42
	ldr r0, [r0, #0]	@ 0004ae42 0068
.org 0x4ae44
	mov r8, r0	@ 0004ae44 8046
.org 0x4ae46
	ldr r1, [pc, #80]	@ 0004ae46 1449
.org 0x4ae48
	ldrb r0, [r6, #9]	@ 0004ae48 707a
.org 0x4ae4a
	lsls r0, r0, #2	@ 0004ae4a 8000
.org 0x4ae4c
	adds r0, r0, r1	@ 0004ae4c 4018
.org 0x4ae4e
	movs r4, #1	@ 0004ae4e 0124
.org 0x4ae50
	str r4, [r6, #12]	@ 0004ae50 f460
.org 0x4ae52
	ldr r0, [r0, #0]	@ 0004ae52 0068
.org 0x4ae54
	ldr r0, [r0, #4]	@ 0004ae54 4068
.org 0x4ae56
	str r0, [r6, #20]	@ 0004ae56 7061
.org 0x4ae58
	adds r0, r6, #0	@ 0004ae58 301c
.org 0x4ae5a
	bl 0x1cdbc	@ 0004ae5a d1f7afff
.org 0x4ae5e
	adds r0, r6, #0	@ 0004ae5e 301c
.org 0x4ae60
	bl 0x1ceec	@ 0004ae60 d2f744f8
.org 0x4ae64
	ldrb r1, [r6, #10]	@ 0004ae64 b17a
.org 0x4ae66
	movs r0, #1	@ 0004ae66 0120
.org 0x4ae68
	movs r5, #0	@ 0004ae68 0025
.org 0x4ae6a
	orrs r0, r1	@ 0004ae6a 0843
.org 0x4ae6c
	movs r1, #2	@ 0004ae6c 0221
.org 0x4ae6e
	orrs r0, r1	@ 0004ae6e 0843
.org 0x4ae70
	strb r0, [r6, #10]	@ 0004ae70 b072
.org 0x4ae72
	adds r0, r6, #0	@ 0004ae72 301c
.org 0x4ae74
	movs r1, #15	@ 0004ae74 0f21
.org 0x4ae76
	bl 0x1d3d0	@ 0004ae76 d2f7abfa
.org 0x4ae7a
	movs r1, #250	@ 0004ae7a fa21
.org 0x4ae7c
	lsls r1, r1, #7	@ 0004ae7c c901
.org 0x4ae7e
	adds r0, r6, #0	@ 0004ae7e 301c
.org 0x4ae80
	bl 0x1cf00	@ 0004ae80 d2f73ef8
.org 0x4ae84
	mov r1, r8	@ 0004ae84 4146
.org 0x4ae86
	ldrb r0, [r1, #10]	@ 0004ae86 887a
.org 0x4ae88
	lsrs r2, r0, #4	@ 0004ae88 0209
.org 0x4ae8a
	ands r2, r4	@ 0004ae8a 2240
.org 0x4ae8c
	cmp r2, #0	@ 0004ae8c 002a
.org 0x4ae8e
	beq.n 0x4ae9c	@ 0004ae8e 05d0
.org 0x4ae90
	ldrb r0, [r6, #10]	@ 0004ae90 b07a
.org 0x4ae92
	movs r1, #16	@ 0004ae92 1021
.org 0x4ae94
	orrs r0, r1	@ 0004ae94 0843
.org 0x4ae96
	b.n 0x4aea2	@ 0004ae96 04e0
.org 0x4ae98
	.byte 0xf8,0x39,0x85,0x08	@ 0004ae98 data
.org 0x4ae9c
	ldrb r1, [r6, #10]	@ 0004ae9c b17a
.org 0x4ae9e
	movs r0, #239	@ 0004ae9e ef20
.org 0x4aea0
	ands r0, r1	@ 0004aea0 0840
.org 0x4aea2
	strb r0, [r6, #10]	@ 0004aea2 b072
.org 0x4aea4
	adds r1, r2, #0	@ 0004aea4 111c
.org 0x4aea6
	adds r0, r6, #0	@ 0004aea6 301c
.org 0x4aea8
	adds r0, #76	@ 0004aea8 4c30
.org 0x4aeaa
	strb r1, [r0, #0]	@ 0004aeaa 0170
.org 0x4aeac
	adds r2, r6, #0	@ 0004aeac 321c
.org 0x4aeae
	adds r2, #74	@ 0004aeae 4a32
.org 0x4aeb0
	lsls r1, r1, #4	@ 0004aeb0 0901
.org 0x4aeb2
	ldrb r3, [r2, #0]	@ 0004aeb2 1378
.org 0x4aeb4
	movs r0, #17	@ 0004aeb4 1120
.org 0x4aeb6
	negs r0, r0	@ 0004aeb6 4042
.org 0x4aeb8
	ands r0, r3	@ 0004aeb8 1840
.org 0x4aeba
	orrs r0, r1	@ 0004aeba 0843
.org 0x4aebc
	strb r0, [r2, #0]	@ 0004aebc 1070
.org 0x4aebe
	ldrb r3, [r6, #16]	@ 0004aebe 337c
.org 0x4aec0
	adds r4, r2, #0	@ 0004aec0 141c
.org 0x4aec2
	cmp r3, #0	@ 0004aec2 002b
.org 0x4aec4
	beq.n 0x4aece	@ 0004aec4 03d0
.org 0x4aec6
	ldrb r0, [r6, #10]	@ 0004aec6 b07a
.org 0x4aec8
	movs r1, #32	@ 0004aec8 2021
.org 0x4aeca
	orrs r0, r1	@ 0004aeca 0843
.org 0x4aecc
	b.n 0x4aed4	@ 0004aecc 02e0
.org 0x4aece
	ldrb r1, [r6, #10]	@ 0004aece b17a
.org 0x4aed0
	movs r0, #223	@ 0004aed0 df20
.org 0x4aed2
	ands r0, r1	@ 0004aed2 0840
.org 0x4aed4
	strb r0, [r6, #10]	@ 0004aed4 b072
.org 0x4aed6
	movs r0, #1	@ 0004aed6 0120
.org 0x4aed8
	ands r0, r3	@ 0004aed8 1840
.org 0x4aeda
	adds r1, r6, #0	@ 0004aeda 311c
.org 0x4aedc
	adds r1, #77	@ 0004aedc 4d31
.org 0x4aede
	strb r0, [r1, #0]	@ 0004aede 0870
.org 0x4aee0
	lsls r0, r0, #5	@ 0004aee0 4001
.org 0x4aee2
	ldrb r2, [r4, #0]	@ 0004aee2 2278
.org 0x4aee4
	movs r1, #33	@ 0004aee4 2121
.org 0x4aee6
	negs r1, r1	@ 0004aee6 4942
.org 0x4aee8
	ands r1, r2	@ 0004aee8 1140
.org 0x4aeea
	orrs r1, r0	@ 0004aeea 0143
.org 0x4aeec
	strb r1, [r4, #0]	@ 0004aeec 2170
.org 0x4aeee
	ldrb r7, [r6, #16]	@ 0004aeee 377c
.org 0x4aef0
	cmp r7, #0	@ 0004aef0 002f
.org 0x4aef2
	bne.n 0x4af7c	@ 0004aef2 43d1
.org 0x4aef4
	ldrb r0, [r6, #10]	@ 0004aef4 b07a
.org 0x4aef6
	movs r1, #4	@ 0004aef6 0421
.org 0x4aef8
	orrs r0, r1	@ 0004aef8 0843
.org 0x4aefa
	strb r0, [r6, #10]	@ 0004aefa b072
.org 0x4aefc
	adds r4, r6, #0	@ 0004aefc 341c
.org 0x4aefe
	adds r4, #116	@ 0004aefe 7434
.org 0x4af00
	ldr r5, [pc, #80]	@ 0004af00 144d
.org 0x4af02
	adds r2, r6, #0	@ 0004af02 321c
.org 0x4af04
	adds r2, #84	@ 0004af04 5432
.org 0x4af06
	adds r0, r4, #0	@ 0004af06 201c
.org 0x4af08
	adds r1, r5, #0	@ 0004af08 291c
.org 0x4af0a
	movs r3, #1	@ 0004af0a 0123
.org 0x4af0c
	bl 0x5760	@ 0004af0c baf728fc
.org 0x4af10
	str r6, [r4, #44]	@ 0004af10 e662
.org 0x4af12
	str r7, [r4, #36]	@ 0004af12 6762
.org 0x4af14
	mov r0, r9	@ 0004af14 4846
.org 0x4af16
	bl 0x3a4e8	@ 0004af16 eff7e7fa
.org 0x4af1a
	adds r2, r0, #0	@ 0004af1a 021c
.org 0x4af1c
	adds r2, #8	@ 0004af1c 0832
.org 0x4af1e
	lsls r2, r2, #24	@ 0004af1e 1206
.org 0x4af20
	lsrs r2, r2, #24	@ 0004af20 120e
.org 0x4af22
	movs r3, #1	@ 0004af22 0123
.org 0x4af24
	negs r3, r3	@ 0004af24 5b42
.org 0x4af26
	str r3, [sp, #0]	@ 0004af26 0093
.org 0x4af28
	str r3, [sp, #4]	@ 0004af28 0193
.org 0x4af2a
	adds r0, r4, #0	@ 0004af2a 201c
.org 0x4af2c
	adds r1, r5, #0	@ 0004af2c 291c
.org 0x4af2e
	bl 0x5794	@ 0004af2e baf731fc
.org 0x4af32
	ldrb r1, [r6, #10]	@ 0004af32 b17a
.org 0x4af34
	movs r0, #16	@ 0004af34 1020
.org 0x4af36
	ands r0, r1	@ 0004af36 0840
.org 0x4af38
	cmp r0, #0	@ 0004af38 0028
.org 0x4af3a
	beq.n 0x4af58	@ 0004af3a 0dd0
.org 0x4af3c
	mov r1, r8	@ 0004af3c 4146
.org 0x4af3e
	ldr r0, [r1, #84]	@ 0004af3e 486d
.org 0x4af40
	movs r1, #136	@ 0004af40 8821
.org 0x4af42
	lsls r1, r1, #6	@ 0004af42 8901
.org 0x4af44
	adds r0, r0, r1	@ 0004af44 4018
.org 0x4af46
	str r0, [r6, #84]	@ 0004af46 7065
.org 0x4af48
	movs r0, #128	@ 0004af48 8020
.org 0x4af4a
	lsls r0, r0, #3	@ 0004af4a c000
.org 0x4af4c
	str r0, [r6, #92]	@ 0004af4c f065
.org 0x4af4e
	movs r0, #85	@ 0004af4e 5520
.org 0x4af50
	negs r0, r0	@ 0004af50 4042
.org 0x4af52
	b.n 0x4af68	@ 0004af52 09e0
.org 0x4af54
	.byte 0x24,0x74,0x85,0x08	@ 0004af54 data
.org 0x4af58
	mov r1, r8	@ 0004af58 4146
.org 0x4af5a
	ldr r0, [r1, #84]	@ 0004af5a 486d
.org 0x4af5c
	ldr r1, [pc, #48]	@ 0004af5c 0c49
.org 0x4af5e
	adds r0, r0, r1	@ 0004af5e 4018
.org 0x4af60
	str r0, [r6, #84]	@ 0004af60 7065
.org 0x4af62
	ldr r0, [pc, #48]	@ 0004af62 0c48
.org 0x4af64
	str r0, [r6, #92]	@ 0004af64 f065
.org 0x4af66
	movs r0, #85	@ 0004af66 5520
.org 0x4af68
	str r0, [r6, #100]	@ 0004af68 7066
.org 0x4af6a
	mov r1, r8	@ 0004af6a 4146
.org 0x4af6c
	ldr r0, [r1, #88]	@ 0004af6c 886d
.org 0x4af6e
	ldr r1, [pc, #40]	@ 0004af6e 0a49
.org 0x4af70
	adds r0, r0, r1	@ 0004af70 4018
.org 0x4af72
	str r0, [r6, #88]	@ 0004af72 b065
.org 0x4af74
	movs r0, #18	@ 0004af74 1220
.org 0x4af76
	strb r0, [r6, #18]	@ 0004af76 b074
.org 0x4af78
	ldr r0, [pc, #32]	@ 0004af78 0848
.org 0x4af7a
	str r0, [r4, #36]	@ 0004af7a 6062
.org 0x4af7c
	adds r0, r6, #0	@ 0004af7c 301c
.org 0x4af7e
	bl 0x4afa0	@ 0004af7e 00f00ff8
.org 0x4af82
	add sp, #8	@ 0004af82 02b0
.org 0x4af84
	pop {r3, r4}	@ 0004af84 18bc
.org 0x4af86
	mov r8, r3	@ 0004af86 9846
