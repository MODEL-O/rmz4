@ FUN_0808dca4  entry 0x0808dca4  size 298
.thumb
.org 0x8dca4
FUN_0808dca4:
	push {r4, r5, r6, r7, lr}	@ 0008dca4 f0b5
.org 0x8dca6
	mov r7, r8	@ 0008dca6 4746
.org 0x8dca8
	push {r7}	@ 0008dca8 80b4
.org 0x8dcaa
	adds r5, r0, #0	@ 0008dcaa 051c
.org 0x8dcac
	ldr r3, [r5, #40]	@ 0008dcac ab6a
.org 0x8dcae
	ldrb r7, [r5, #17]	@ 0008dcae 6f7c
.org 0x8dcb0
	movs r2, #0	@ 0008dcb0 0022
.org 0x8dcb2
	ldr r1, [pc, #180]	@ 0008dcb2 2d49
.org 0x8dcb4
	ldrb r0, [r5, #9]	@ 0008dcb4 687a
.org 0x8dcb6
	lsls r0, r0, #2	@ 0008dcb6 8000
.org 0x8dcb8
	adds r0, r0, r1	@ 0008dcb8 4018
.org 0x8dcba
	movs r1, #1	@ 0008dcba 0121
.org 0x8dcbc
	str r1, [r5, #12]	@ 0008dcbc e960
.org 0x8dcbe
	ldr r0, [r0, #0]	@ 0008dcbe 0068
.org 0x8dcc0
	ldr r0, [r0, #4]	@ 0008dcc0 4068
.org 0x8dcc2
	str r0, [r5, #20]	@ 0008dcc2 6861
.org 0x8dcc4
	strb r2, [r5, #13]	@ 0008dcc4 6a73
.org 0x8dcc6
	strb r2, [r5, #14]	@ 0008dcc6 aa73
.org 0x8dcc8
	strb r2, [r5, #15]	@ 0008dcc8 ea73
.org 0x8dcca
	ldrb r0, [r5, #10]	@ 0008dcca a87a
.org 0x8dccc
	movs r4, #0	@ 0008dccc 0024
.org 0x8dcce
	mov r8, r4	@ 0008dcce a046
.org 0x8dcd0
	orrs r0, r1	@ 0008dcd0 0843
.org 0x8dcd2
	movs r1, #2	@ 0008dcd2 0221
.org 0x8dcd4
	orrs r0, r1	@ 0008dcd4 0843
.org 0x8dcd6
	strb r0, [r5, #10]	@ 0008dcd6 a872
.org 0x8dcd8
	adds r1, r5, #0	@ 0008dcd8 291c
.org 0x8dcda
	adds r1, #180	@ 0008dcda b431
.org 0x8dcdc
	adds r0, r3, #0	@ 0008dcdc 181c
.org 0x8dcde
	adds r0, #188	@ 0008dcde bc30
.org 0x8dce0
	ldr r0, [r0, #0]	@ 0008dce0 0068
.org 0x8dce2
	str r0, [r1, #0]	@ 0008dce2 0860
.org 0x8dce4
	ldr r1, [pc, #132]	@ 0008dce4 2149
.org 0x8dce6
	ldrb r0, [r1, #0]	@ 0008dce6 0878
.org 0x8dce8
	movs r4, #185	@ 0008dce8 b924
.org 0x8dcea
	adds r4, r4, r5	@ 0008dcea 6419
.org 0x8dcec
	mov ip, r4	@ 0008dcec a446
.org 0x8dcee
	strb r0, [r4, #0]	@ 0008dcee 2070
.org 0x8dcf0
	ldrb r0, [r1, #1]	@ 0008dcf0 4878
.org 0x8dcf2
	adds r6, r5, #0	@ 0008dcf2 2e1c
.org 0x8dcf4
	adds r6, #186	@ 0008dcf4 ba36
.org 0x8dcf6
	strb r0, [r6, #0]	@ 0008dcf6 3070
.org 0x8dcf8
	adds r0, r5, #0	@ 0008dcf8 281c
.org 0x8dcfa
	adds r0, #188	@ 0008dcfa bc30
.org 0x8dcfc
	strh r2, [r0, #0]	@ 0008dcfc 0280
.org 0x8dcfe
	ldr r4, [pc, #112]	@ 0008dcfe 1c4c
.org 0x8dd00
	mov r1, ip	@ 0008dd00 6146
.org 0x8dd02
	ldrb r0, [r1, #0]	@ 0008dd02 0878
.org 0x8dd04
	adds r0, #64	@ 0008dd04 4030
.org 0x8dd06
	lsls r0, r0, #24	@ 0008dd06 0006
.org 0x8dd08
	lsrs r0, r0, #23	@ 0008dd08 c00d
.org 0x8dd0a
	adds r0, r0, r4	@ 0008dd0a 0019
.org 0x8dd0c
	movs r2, #0	@ 0008dd0c 0022
.org 0x8dd0e
	ldrsh r1, [r0, r2]	@ 0008dd0e 815e
.org 0x8dd10
	lsls r1, r1, #2	@ 0008dd10 8900
.org 0x8dd12
	movs r0, #216	@ 0008dd12 d820
.org 0x8dd14
	lsls r0, r0, #6	@ 0008dd14 8001
.org 0x8dd16
	adds r1, r1, r0	@ 0008dd16 0918
.org 0x8dd18
	lsls r0, r7, #1	@ 0008dd18 7800
.org 0x8dd1a
	subs r0, #1	@ 0008dd1a 0138
.org 0x8dd1c
	muls r1, r0	@ 0008dd1c 4143
.org 0x8dd1e
	ldr r0, [r3, #84]	@ 0008dd1e 586d
.org 0x8dd20
	adds r0, r0, r1	@ 0008dd20 4018
.org 0x8dd22
	str r0, [r5, #84]	@ 0008dd22 6865
.org 0x8dd24
	ldr r2, [r3, #88]	@ 0008dd24 9a6d
.org 0x8dd26
	movs r1, #192	@ 0008dd26 c021
.org 0x8dd28
	lsls r1, r1, #4	@ 0008dd28 0901
.org 0x8dd2a
	adds r2, r2, r1	@ 0008dd2a 5218
.org 0x8dd2c
	ldrb r0, [r6, #0]	@ 0008dd2c 3078
.org 0x8dd2e
	lsls r0, r0, #1	@ 0008dd2e 4000
.org 0x8dd30
	adds r0, r0, r4	@ 0008dd30 0019
.org 0x8dd32
	movs r3, #0	@ 0008dd32 0023
.org 0x8dd34
	ldrsh r1, [r0, r3]	@ 0008dd34 c15e
.org 0x8dd36
	lsls r0, r1, #1	@ 0008dd36 4800
.org 0x8dd38
	adds r0, r0, r1	@ 0008dd38 4018
.org 0x8dd3a
	lsls r0, r0, #1	@ 0008dd3a 4000
.org 0x8dd3c
	adds r2, r2, r0	@ 0008dd3c 1218
.org 0x8dd3e
	str r2, [r5, #88]	@ 0008dd3e aa65
.org 0x8dd40
	adds r0, r5, #0	@ 0008dd40 281c
.org 0x8dd42
	bl 0x1cc9c	@ 0008dd42 8ef7abff
.org 0x8dd46
	adds r2, r5, #0	@ 0008dd46 2a1c
.org 0x8dd48
	adds r2, #73	@ 0008dd48 4932
.org 0x8dd4a
	ldrb r0, [r2, #0]	@ 0008dd4a 1078
.org 0x8dd4c
	movs r1, #12	@ 0008dd4c 0c21
.org 0x8dd4e
	orrs r0, r1	@ 0008dd4e 0843
.org 0x8dd50
	strb r0, [r2, #0]	@ 0008dd50 1070
.org 0x8dd52
	adds r1, r5, #0	@ 0008dd52 291c
.org 0x8dd54
	adds r1, #37	@ 0008dd54 2531
.org 0x8dd56
	movs r0, #25	@ 0008dd56 1920
.org 0x8dd58
	strb r0, [r1, #0]	@ 0008dd58 0870
.org 0x8dd5a
	adds r2, r7, #0	@ 0008dd5a 3a1c
.org 0x8dd5c
	cmp r7, #0	@ 0008dd5c 002f
.org 0x8dd5e
	beq.n 0x8dd74	@ 0008dd5e 09d0
.org 0x8dd60
	ldrb r0, [r5, #10]	@ 0008dd60 a87a
.org 0x8dd62
	movs r1, #16	@ 0008dd62 1021
.org 0x8dd64
	orrs r0, r1	@ 0008dd64 0843
.org 0x8dd66
	b.n 0x8dd7a	@ 0008dd66 08e0
.org 0x8dd68
	.byte 0x40,0xdb,0x85,0x08	@ 0008dd68 data
.org 0x8dd6c
	.byte 0xf8,0xfa,0x85,0x08	@ 0008dd6c data
.org 0x8dd70
	.byte 0x0c,0x93,0x12,0x08	@ 0008dd70 data
.org 0x8dd74
	ldrb r1, [r5, #10]	@ 0008dd74 a97a
.org 0x8dd76
	movs r0, #239	@ 0008dd76 ef20
.org 0x8dd78
	ands r0, r1	@ 0008dd78 0840
.org 0x8dd7a
	strb r0, [r5, #10]	@ 0008dd7a a872
.org 0x8dd7c
	movs r1, #1	@ 0008dd7c 0121
.org 0x8dd7e
	ands r1, r2	@ 0008dd7e 1140
.org 0x8dd80
	adds r0, r5, #0	@ 0008dd80 281c
.org 0x8dd82
	adds r0, #76	@ 0008dd82 4c30
.org 0x8dd84
	strb r1, [r0, #0]	@ 0008dd84 0170
.org 0x8dd86
	adds r3, r5, #0	@ 0008dd86 2b1c
.org 0x8dd88
	adds r3, #74	@ 0008dd88 4a33
.org 0x8dd8a
	lsls r1, r1, #4	@ 0008dd8a 0901
.org 0x8dd8c
	ldrb r2, [r3, #0]	@ 0008dd8c 1a78
.org 0x8dd8e
	movs r0, #17	@ 0008dd8e 1120
.org 0x8dd90
	negs r0, r0	@ 0008dd90 4042
.org 0x8dd92
	ands r0, r2	@ 0008dd92 1040
.org 0x8dd94
	orrs r0, r1	@ 0008dd94 0843
.org 0x8dd96
	strb r0, [r3, #0]	@ 0008dd96 1870
.org 0x8dd98
	ldr r1, [pc, #64]	@ 0008dd98 1049
.org 0x8dd9a
	adds r0, r5, #0	@ 0008dd9a 281c
.org 0x8dd9c
	bl 0x1cf00	@ 0008dd9c 8ff7b0f8
.org 0x8dda0
	adds r0, r5, #0	@ 0008dda0 281c
.org 0x8dda2
	movs r1, #1	@ 0008dda2 0121
.org 0x8dda4
	adds r2, r7, #0	@ 0008dda4 3a1c
.org 0x8dda6
	movs r3, #0	@ 0008dda6 0023
.org 0x8dda8
	bl 0x8dc1c	@ 0008dda8 fff738ff
.org 0x8ddac
	str r0, [r5, #100]	@ 0008ddac 6866
.org 0x8ddae
	adds r0, r5, #0	@ 0008ddae 281c
.org 0x8ddb0
	movs r1, #2	@ 0008ddb0 0221
.org 0x8ddb2
	adds r2, r7, #0	@ 0008ddb2 3a1c
.org 0x8ddb4
	movs r3, #1	@ 0008ddb4 0123
.org 0x8ddb6
	bl 0x8dc1c	@ 0008ddb6 fff731ff
.org 0x8ddba
	str r0, [r5, #44]	@ 0008ddba e862
.org 0x8ddbc
	adds r0, r5, #0	@ 0008ddbc 281c
.org 0x8ddbe
	movs r1, #2	@ 0008ddbe 0221
.org 0x8ddc0
	adds r2, r7, #0	@ 0008ddc0 3a1c
.org 0x8ddc2
	movs r3, #0	@ 0008ddc2 0023
.org 0x8ddc4
	bl 0x8dc1c	@ 0008ddc4 fff72aff
.org 0x8ddc8
	str r0, [r5, #104]	@ 0008ddc8 a866
.org 0x8ddca
	adds r0, r5, #0	@ 0008ddca 281c
.org 0x8ddcc
	bl 0x8df7c	@ 0008ddcc 00f0d6f8
