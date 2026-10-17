@ FUN_08063128  entry 0x08063128  size 166
.thumb
.org 0x63128
FUN_08063128:
	push {r4, r5, r6, lr}	@ 00063128 70b5
.org 0x6312a
	adds r6, r0, #0	@ 0006312a 061c
.org 0x6312c
	ldrb r0, [r6, #15]	@ 0006312c f07b
.org 0x6312e
	cmp r0, #0	@ 0006312e 0028
.org 0x63130
	bne.n 0x63156	@ 00063130 11d1
.org 0x63132
	adds r0, r6, #0	@ 00063132 301c
.org 0x63134
	adds r0, #196	@ 00063134 c430
.org 0x63136
	ldr r0, [r0, #0]	@ 00063136 0068
.org 0x63138
	cmp r0, #0	@ 00063138 0028
.org 0x6313a
	beq.n 0x63144	@ 0006313a 03d0
.org 0x6313c
	adds r1, r0, #0	@ 0006313c 011c
.org 0x6313e
	adds r1, #180	@ 0006313e b431
.org 0x63140
	movs r0, #1	@ 00063140 0120
.org 0x63142
	strb r0, [r1, #0]	@ 00063142 0870
.org 0x63144
	adds r0, r6, #0	@ 00063144 301c
.org 0x63146
	movs r1, #25	@ 00063146 1921
.org 0x63148
	bl 0x65a94	@ 00063148 02f0a4fc
.org 0x6314c
	movs r0, #64	@ 0006314c 4020
.org 0x6314e
	strb r0, [r6, #18]	@ 0006314e b074
.org 0x63150
	ldrb r0, [r6, #15]	@ 00063150 f07b
.org 0x63152
	adds r0, #1	@ 00063152 0130
.org 0x63154
	strb r0, [r6, #15]	@ 00063154 f073
.org 0x63156
	adds r0, r6, #0	@ 00063156 301c
.org 0x63158
	bl 0x1cff0	@ 00063158 b9f74aff
.org 0x6315c
	adds r0, r6, #0	@ 0006315c 301c
.org 0x6315e
	adds r0, #116	@ 0006315e 7430
.org 0x63160
	ldr r4, [pc, #108]	@ 00063160 1b4c
.org 0x63162
	ldr r3, [pc, #112]	@ 00063162 1c4b
.org 0x63164
	adds r1, r6, #0	@ 00063164 311c
.org 0x63166
	adds r1, #180	@ 00063166 b431
.org 0x63168
	ldrb r2, [r1, #0]	@ 00063168 0a78
.org 0x6316a
	lsls r1, r2, #1	@ 0006316a 5100
.org 0x6316c
	adds r1, r1, r3	@ 0006316c c918
.org 0x6316e
	ldrh r1, [r1, #0]	@ 0006316e 0988
.org 0x63170
	lsls r1, r1, #2	@ 00063170 8900
.org 0x63172
	adds r1, r1, r4	@ 00063172 0919
.org 0x63174
	adds r3, r6, #0	@ 00063174 331c
.org 0x63176
	adds r3, #113	@ 00063176 7133
.org 0x63178
	movs r5, #0	@ 00063178 0025
.org 0x6317a
	ldrsb r5, [r3, r5]	@ 0006317a 5d57
.org 0x6317c
	ldr r1, [r1, #0]	@ 0006317c 0968
.org 0x6317e
	lsls r3, r5, #2	@ 0006317e ab00
.org 0x63180
	adds r3, r3, r1	@ 00063180 5b18
.org 0x63182
	ldr r4, [pc, #84]	@ 00063182 154c
.org 0x63184
	adds r1, r6, #0	@ 00063184 311c
.org 0x63186
	adds r1, #181	@ 00063186 b531
.org 0x63188
	ldrb r1, [r1, #0]	@ 00063188 0978
.org 0x6318a
	lsls r1, r1, #2	@ 0006318a 8900
.org 0x6318c
	adds r1, r1, r4	@ 0006318c 0919
.org 0x6318e
	ldr r1, [r1, #0]	@ 0006318e 0968
.org 0x63190
	lsls r2, r2, #2	@ 00063190 9200
.org 0x63192
	adds r2, r2, r1	@ 00063192 5218
.org 0x63194
	ldr r1, [r2, #0]	@ 00063194 1168
.org 0x63196
	adds r1, r1, r5	@ 00063196 4919
.org 0x63198
	ldrb r1, [r1, #0]	@ 00063198 0978
.org 0x6319a
	lsls r2, r1, #1	@ 0006319a 4a00
.org 0x6319c
	adds r2, r2, r1	@ 0006319c 5218
.org 0x6319e
	lsls r2, r2, #3	@ 0006319e d200
.org 0x631a0
	ldr r1, [r3, #0]	@ 000631a0 1968
.org 0x631a2
	adds r1, r1, r2	@ 000631a2 8918
.org 0x631a4
	bl 0x5784	@ 000631a4 a2f7eefa
.org 0x631a8
	ldrb r0, [r6, #18]	@ 000631a8 b07c
.org 0x631aa
	cmp r0, #0	@ 000631aa 0028
.org 0x631ac
	beq.n 0x631b8	@ 000631ac 04d0
.org 0x631ae
	subs r0, #1	@ 000631ae 0138
.org 0x631b0
	strb r0, [r6, #18]	@ 000631b0 b074
.org 0x631b2
	lsls r0, r0, #24	@ 000631b2 0006
.org 0x631b4
	cmp r0, #0	@ 000631b4 0028
.org 0x631b6
	bne.n 0x631c8	@ 000631b6 07d1
.org 0x631b8
	adds r0, r6, #0	@ 000631b8 301c
.org 0x631ba
	adds r0, #196	@ 000631ba c430
.org 0x631bc
	ldr r0, [r0, #0]	@ 000631bc 0068
.org 0x631be
	cmp r0, #0	@ 000631be 0028
.org 0x631c0
	bne.n 0x631c8	@ 000631c0 02d1
.org 0x631c2
	adds r0, r6, #0	@ 000631c2 301c
.org 0x631c4
	bl 0x65cb0	@ 000631c4 02f074fd
.org 0x631c8
	pop {r4, r5, r6}	@ 000631c8 70bc
.org 0x631ca
	pop {r0}	@ 000631ca 01bc
.org 0x631cc
	bx r0	@ 000631cc 0047
