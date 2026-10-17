@ FUN_080730b0  entry 0x080730b0  size 156
.thumb
.org 0x730b0
FUN_080730b0:
	push {r4, r5, r6, lr}	@ 000730b0 70b5
.org 0x730b2
	adds r6, r0, #0	@ 000730b2 061c
.org 0x730b4
	ldrb r1, [r6, #15]	@ 000730b4 f17b
.org 0x730b6
	cmp r1, #0	@ 000730b6 0029
.org 0x730b8
	bne.n 0x730da	@ 000730b8 0fd1
.org 0x730ba
	adds r0, #200	@ 000730ba c830
.org 0x730bc
	strb r1, [r0, #0]	@ 000730bc 0170
.org 0x730be
	subs r0, #20	@ 000730be 1438
.org 0x730c0
	ldr r0, [r0, #0]	@ 000730c0 0068
.org 0x730c2
	adds r0, #180	@ 000730c2 b430
.org 0x730c4
	movs r1, #1	@ 000730c4 0121
.org 0x730c6
	strb r1, [r0, #0]	@ 000730c6 0170
.org 0x730c8
	adds r0, r6, #0	@ 000730c8 301c
.org 0x730ca
	movs r1, #24	@ 000730ca 1821
.org 0x730cc
	bl 0x736c4	@ 000730cc 00f0fafa
.org 0x730d0
	movs r0, #16	@ 000730d0 1020
.org 0x730d2
	strb r0, [r6, #18]	@ 000730d2 b074
.org 0x730d4
	ldrb r0, [r6, #15]	@ 000730d4 f07b
.org 0x730d6
	adds r0, #1	@ 000730d6 0130
.org 0x730d8
	strb r0, [r6, #15]	@ 000730d8 f073
.org 0x730da
	adds r0, r6, #0	@ 000730da 301c
.org 0x730dc
	bl 0x1cff0	@ 000730dc a9f788ff
.org 0x730e0
	adds r0, r6, #0	@ 000730e0 301c
.org 0x730e2
	adds r0, #116	@ 000730e2 7430
.org 0x730e4
	ldr r4, [pc, #100]	@ 000730e4 194c
.org 0x730e6
	ldr r3, [pc, #104]	@ 000730e6 1a4b
.org 0x730e8
	adds r1, r6, #0	@ 000730e8 311c
.org 0x730ea
	adds r1, #184	@ 000730ea b831
.org 0x730ec
	ldrb r2, [r1, #0]	@ 000730ec 0a78
.org 0x730ee
	lsls r1, r2, #1	@ 000730ee 5100
.org 0x730f0
	adds r1, r1, r3	@ 000730f0 c918
.org 0x730f2
	ldrh r1, [r1, #0]	@ 000730f2 0988
.org 0x730f4
	lsls r1, r1, #2	@ 000730f4 8900
.org 0x730f6
	adds r1, r1, r4	@ 000730f6 0919
.org 0x730f8
	adds r3, r6, #0	@ 000730f8 331c
.org 0x730fa
	adds r3, #113	@ 000730fa 7133
.org 0x730fc
	movs r5, #0	@ 000730fc 0025
.org 0x730fe
	ldrsb r5, [r3, r5]	@ 000730fe 5d57
.org 0x73100
	ldr r1, [r1, #0]	@ 00073100 0968
.org 0x73102
	lsls r3, r5, #2	@ 00073102 ab00
.org 0x73104
	adds r3, r3, r1	@ 00073104 5b18
.org 0x73106
	ldr r4, [pc, #76]	@ 00073106 134c
.org 0x73108
	adds r1, r6, #0	@ 00073108 311c
.org 0x7310a
	adds r1, #185	@ 0007310a b931
.org 0x7310c
	ldrb r1, [r1, #0]	@ 0007310c 0978
.org 0x7310e
	lsls r1, r1, #2	@ 0007310e 8900
.org 0x73110
	adds r1, r1, r4	@ 00073110 0919
.org 0x73112
	ldr r1, [r1, #0]	@ 00073112 0968
.org 0x73114
	lsls r2, r2, #2	@ 00073114 9200
.org 0x73116
	adds r2, r2, r1	@ 00073116 5218
.org 0x73118
	ldr r1, [r2, #0]	@ 00073118 1168
.org 0x7311a
	adds r1, r1, r5	@ 0007311a 4919
.org 0x7311c
	ldrb r1, [r1, #0]	@ 0007311c 0978
.org 0x7311e
	lsls r2, r1, #1	@ 0007311e 4a00
.org 0x73120
	adds r2, r2, r1	@ 00073120 5218
.org 0x73122
	lsls r2, r2, #3	@ 00073122 d200
.org 0x73124
	ldr r1, [r3, #0]	@ 00073124 1968
.org 0x73126
	adds r1, r1, r2	@ 00073126 8918
.org 0x73128
	bl 0x5784	@ 00073128 92f72cfb
.org 0x7312c
	ldrb r0, [r6, #18]	@ 0007312c b07c
.org 0x7312e
	cmp r0, #0	@ 0007312e 0028
.org 0x73130
	beq.n 0x7313c	@ 00073130 04d0
.org 0x73132
	subs r0, #1	@ 00073132 0138
.org 0x73134
	strb r0, [r6, #18]	@ 00073134 b074
.org 0x73136
	lsls r0, r0, #24	@ 00073136 0006
.org 0x73138
	cmp r0, #0	@ 00073138 0028
.org 0x7313a
	bne.n 0x73146	@ 0007313a 04d1
.org 0x7313c
	ldrb r0, [r6, #14]	@ 0007313c b07b
.org 0x7313e
	adds r0, #1	@ 0007313e 0130
.org 0x73140
	movs r1, #0	@ 00073140 0021
.org 0x73142
	strb r0, [r6, #14]	@ 00073142 b073
.org 0x73144
	strb r1, [r6, #15]	@ 00073144 f173
.org 0x73146
	pop {r4, r5, r6}	@ 00073146 70bc
.org 0x73148
	pop {r0}	@ 00073148 01bc
.org 0x7314a
	bx r0	@ 0007314a 0047
