@ FUN_0810814c  entry 0x0810814c  size 88
.thumb
.org 0x10814c
FUN_0810814c:
	push {r4, lr}	@ 0010814c 10b5
.org 0x10814e
	adds r1, r0, #0	@ 0010814e 011c
.org 0x108150
	ldrb r3, [r1, #16]	@ 00108150 0b7c
.org 0x108152
	cmp r3, #0	@ 00108152 002b
.org 0x108154
	bne.n 0x108180	@ 00108154 14d1
.org 0x108156
	ldr r0, [r1, #44]	@ 00108156 c86a
.org 0x108158
	ldr r4, [pc, #32]	@ 00108158 084c
.org 0x10815a
	adds r2, r0, r4	@ 0010815a 0219
.org 0x10815c
	adds r0, r1, #0	@ 0010815c 081c
.org 0x10815e
	adds r0, #181	@ 0010815e b530
.org 0x108160
	ldr r1, [r2, #76]	@ 00108160 d16c
.org 0x108162
	ldrb r0, [r0, #0]	@ 00108162 0078
.org 0x108164
	cmp r1, r0	@ 00108164 8142
.org 0x108166
	bne.n 0x1081a4	@ 00108166 1dd1
.org 0x108168
	adds r0, r1, #1	@ 00108168 481c
.org 0x10816a
	str r0, [r2, #76]	@ 0010816a d064
.org 0x10816c
	cmp r0, #6	@ 0010816c 0628
.org 0x10816e
	bne.n 0x1081a4	@ 0010816e 19d1
.org 0x108170
	movs r0, #255	@ 00108170 ff20
.org 0x108172
	str r0, [r2, #76]	@ 00108172 d064
.org 0x108174
	str r3, [r2, #68]	@ 00108174 5364
.org 0x108176
	str r3, [r2, #108]	@ 00108176 d366
.org 0x108178
	b.n 0x1081a4	@ 00108178 14e0
.org 0x10817a
	.byte 0x00	@ 0010817a data
.org 0x10817b
	.byte 0x00	@ 0010817b data
.org 0x10817c
	.byte 0xcc,0x0d,0x00,0x00	@ 0010817c data
.org 0x108180
	ldr r0, [r1, #44]	@ 00108180 c86a
.org 0x108182
	ldr r3, [pc, #40]	@ 00108182 0a4b
.org 0x108184
	adds r2, r0, r3	@ 00108184 c218
.org 0x108186
	adds r0, r1, #0	@ 00108186 081c
.org 0x108188
	adds r0, #181	@ 00108188 b530
.org 0x10818a
	ldr r1, [r2, #80]	@ 0010818a 116d
.org 0x10818c
	ldrb r0, [r0, #0]	@ 0010818c 0078
.org 0x10818e
	cmp r1, r0	@ 0010818e 8142
.org 0x108190
	bne.n 0x1081a4	@ 00108190 08d1
.org 0x108192
	adds r0, r1, #1	@ 00108192 481c
.org 0x108194
	str r0, [r2, #80]	@ 00108194 1065
.org 0x108196
	cmp r0, #6	@ 00108196 0628
.org 0x108198
	bne.n 0x1081a4	@ 00108198 04d1
.org 0x10819a
	movs r0, #255	@ 0010819a ff20
.org 0x10819c
	str r0, [r2, #80]	@ 0010819c 1065
.org 0x10819e
	movs r0, #0	@ 0010819e 0020
.org 0x1081a0
	str r0, [r2, #72]	@ 001081a0 9064
.org 0x1081a2
	str r0, [r2, #112]	@ 001081a2 1067
