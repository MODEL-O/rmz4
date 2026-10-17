@ FUN_0806e154  entry 0x0806e154  size 72
.thumb
.org 0x6e154
FUN_0806e154:
	push {r4, lr}	@ 0006e154 10b5
.org 0x6e156
	adds r4, r0, #0	@ 0006e156 041c
.org 0x6e158
	ldrb r0, [r4, #15]	@ 0006e158 e07b
.org 0x6e15a
	cmp r0, #0	@ 0006e15a 0028
.org 0x6e15c
	bne.n 0x6e17c	@ 0006e15c 0ed1
.org 0x6e15e
	adds r0, r4, #0	@ 0006e15e 201c
.org 0x6e160
	adds r0, #116	@ 0006e160 7430
.org 0x6e162
	ldr r1, [pc, #56]	@ 0006e162 0e49
.org 0x6e164
	bl 0x5784	@ 0006e164 97f70efb
.org 0x6e168
	movs r1, #173	@ 0006e168 ad21
.org 0x6e16a
	lsls r1, r1, #8	@ 0006e16a 0902
.org 0x6e16c
	adds r0, r4, #0	@ 0006e16c 201c
.org 0x6e16e
	bl 0x1cf00	@ 0006e16e aef7c7fe
.org 0x6e172
	movs r0, #16	@ 0006e172 1020
.org 0x6e174
	strb r0, [r4, #18]	@ 0006e174 a074
.org 0x6e176
	ldrb r0, [r4, #15]	@ 0006e176 e07b
.org 0x6e178
	adds r0, #1	@ 0006e178 0130
.org 0x6e17a
	strb r0, [r4, #15]	@ 0006e17a e073
.org 0x6e17c
	adds r0, r4, #0	@ 0006e17c 201c
.org 0x6e17e
	bl 0x1cff0	@ 0006e17e aef737ff
.org 0x6e182
	ldrb r0, [r4, #18]	@ 0006e182 a07c
.org 0x6e184
	subs r0, #1	@ 0006e184 0138
.org 0x6e186
	strb r0, [r4, #18]	@ 0006e186 a074
.org 0x6e188
	lsls r0, r0, #24	@ 0006e188 0006
.org 0x6e18a
	lsrs r1, r0, #24	@ 0006e18a 010e
.org 0x6e18c
	cmp r1, #0	@ 0006e18c 0029
.org 0x6e18e
	bne.n 0x6e196	@ 0006e18e 02d1
.org 0x6e190
	movs r0, #1	@ 0006e190 0120
.org 0x6e192
	strb r0, [r4, #14]	@ 0006e192 a073
.org 0x6e194
	strb r1, [r4, #15]	@ 0006e194 e173
.org 0x6e196
	pop {r4}	@ 0006e196 10bc
.org 0x6e198
	pop {r0}	@ 0006e198 01bc
.org 0x6e19a
	bx r0	@ 0006e19a 0047
