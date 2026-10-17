@ FUN_080b80fc  entry 0x080b80fc  size 204
.thumb
.org 0xb80fc
FUN_080b80fc:
	push {r4, r5, lr}	@ 000b80fc 30b5
.org 0xb80fe
	adds r4, r0, #0	@ 000b80fe 041c
.org 0xb8100
	ldrb r5, [r4, #14]	@ 000b8100 a57b
.org 0xb8102
	cmp r5, #0	@ 000b8102 002d
.org 0xb8104
	bne.n 0xb8114	@ 000b8104 06d1
.org 0xb8106
	ldr r1, [pc, #124]	@ 000b8106 1f49
.org 0xb8108
	bl 0x1cf00	@ 000b8108 64f7fafe
.org 0xb810c
	strb r5, [r4, #15]	@ 000b810c e573
.org 0xb810e
	ldrb r0, [r4, #14]	@ 000b810e a07b
.org 0xb8110
	adds r0, #1	@ 000b8110 0130
.org 0xb8112
	strb r0, [r4, #14]	@ 000b8112 a073
.org 0xb8114
	ldrb r0, [r4, #15]	@ 000b8114 e07b
.org 0xb8116
	cmp r0, #0	@ 000b8116 0028
.org 0xb8118
	bne.n 0xb8194	@ 000b8118 3cd1
.org 0xb811a
	ldr r1, [r4, #40]	@ 000b811a a16a
.org 0xb811c
	adds r1, #180	@ 000b811c b431
.org 0xb811e
	ldr r0, [r1, #0]	@ 000b811e 0868
.org 0xb8120
	movs r2, #128	@ 000b8120 8022
.org 0xb8122
	lsls r2, r2, #4	@ 000b8122 1201
.org 0xb8124
	adds r0, r0, r2	@ 000b8124 8018
.org 0xb8126
	str r0, [r4, #84]	@ 000b8126 6065
.org 0xb8128
	ldr r0, [r1, #4]	@ 000b8128 4868
.org 0xb812a
	movs r1, #192	@ 000b812a c021
.org 0xb812c
	lsls r1, r1, #6	@ 000b812c 8901
.org 0xb812e
	adds r0, r0, r1	@ 000b812e 4018
.org 0xb8130
	str r0, [r4, #88]	@ 000b8130 a065
.org 0xb8132
	adds r0, r4, #0	@ 000b8132 201c
.org 0xb8134
	adds r0, #115	@ 000b8134 7330
.org 0xb8136
	ldrb r0, [r0, #0]	@ 000b8136 0078
.org 0xb8138
	cmp r0, #3	@ 000b8138 0328
.org 0xb813a
	bne.n 0xb81cc	@ 000b813a 47d1
.org 0xb813c
	adds r0, r4, #0	@ 000b813c 201c
.org 0xb813e
	bl 0x1cc9c	@ 000b813e 64f7adfd
.org 0xb8142
	adds r0, r4, #0	@ 000b8142 201c
.org 0xb8144
	bl 0x1ceec	@ 000b8144 64f7d2fe
.org 0xb8148
	ldr r1, [pc, #60]	@ 000b8148 0f49
.org 0xb814a
	adds r0, r4, #0	@ 000b814a 201c
.org 0xb814c
	bl 0x1cf00	@ 000b814c 64f7d8fe
.org 0xb8150
	adds r1, r4, #0	@ 000b8150 211c
.org 0xb8152
	adds r1, #37	@ 000b8152 2531
.org 0xb8154
	movs r0, #23	@ 000b8154 1720
.org 0xb8156
	strb r0, [r1, #0]	@ 000b8156 0870
.org 0xb8158
	adds r0, r4, #0	@ 000b8158 201c
.org 0xb815a
	adds r0, #116	@ 000b815a 7430
.org 0xb815c
	ldr r1, [pc, #44]	@ 000b815c 0b49
.org 0xb815e
	bl 0x5784	@ 000b815e 4df711fb
.org 0xb8162
	ldr r1, [r4, #40]	@ 000b8162 a16a
.org 0xb8164
	adds r1, #180	@ 000b8164 b431
.org 0xb8166
	ldr r0, [r1, #0]	@ 000b8166 0868
.org 0xb8168
	ldr r2, [pc, #36]	@ 000b8168 094a
.org 0xb816a
	adds r0, r0, r2	@ 000b816a 8018
.org 0xb816c
	str r0, [r4, #84]	@ 000b816c 6065
.org 0xb816e
	ldr r0, [r1, #4]	@ 000b816e 4868
.org 0xb8170
	movs r1, #220	@ 000b8170 dc21
.org 0xb8172
	lsls r1, r1, #6	@ 000b8172 8901
.org 0xb8174
	adds r0, r0, r1	@ 000b8174 4018
.org 0xb8176
	str r0, [r4, #88]	@ 000b8176 a065
.org 0xb8178
	movs r0, #8	@ 000b8178 0820
.org 0xb817a
	strb r0, [r4, #19]	@ 000b817a e074
.org 0xb817c
	ldrb r0, [r4, #15]	@ 000b817c e07b
.org 0xb817e
	adds r0, #1	@ 000b817e 0130
.org 0xb8180
	strb r0, [r4, #15]	@ 000b8180 e073
.org 0xb8182
	b.n 0xb81cc	@ 000b8182 23e0
.org 0xb8184
	.byte 0x01,0xb2,0x00,0x00	@ 000b8184 data
.org 0xb8188
	.byte 0x04,0xb2,0x00,0x00	@ 000b8188 data
.org 0xb818c
	.byte 0x8c,0x41,0x86,0x08	@ 000b818c data
.org 0xb8190
	.byte 0x00,0xe5,0xff,0xff	@ 000b8190 data
.org 0xb8194
	ldr r1, [r4, #40]	@ 000b8194 a16a
.org 0xb8196
	adds r1, #180	@ 000b8196 b431
.org 0xb8198
	ldr r0, [r1, #0]	@ 000b8198 0868
.org 0xb819a
	ldr r2, [pc, #60]	@ 000b819a 0f4a
.org 0xb819c
	adds r0, r0, r2	@ 000b819c 8018
.org 0xb819e
	str r0, [r4, #84]	@ 000b819e 6065
.org 0xb81a0
	ldr r0, [r1, #4]	@ 000b81a0 4868
.org 0xb81a2
	movs r1, #220	@ 000b81a2 dc21
.org 0xb81a4
	lsls r1, r1, #6	@ 000b81a4 8901
.org 0xb81a6
	adds r0, r0, r1	@ 000b81a6 4018
.org 0xb81a8
	str r0, [r4, #88]	@ 000b81a8 a065
.org 0xb81aa
	adds r0, r4, #0	@ 000b81aa 201c
.org 0xb81ac
	adds r0, #115	@ 000b81ac 7330
.org 0xb81ae
	ldrb r0, [r0, #0]	@ 000b81ae 0078
.org 0xb81b0
	cmp r0, #3	@ 000b81b0 0328
.org 0xb81b2
	bne.n 0xb81cc	@ 000b81b2 0bd1
.org 0xb81b4
	ldrb r0, [r4, #19]	@ 000b81b4 e07c
.org 0xb81b6
	subs r0, #1	@ 000b81b6 0138
.org 0xb81b8
	strb r0, [r4, #19]	@ 000b81b8 e074
.org 0xb81ba
	lsls r0, r0, #24	@ 000b81ba 0006
.org 0xb81bc
	lsrs r0, r0, #24	@ 000b81bc 000e
.org 0xb81be
	cmp r0, #255	@ 000b81be ff28
.org 0xb81c0
	bne.n 0xb81cc	@ 000b81c0 04d1
.org 0xb81c2
	ldrb r0, [r4, #13]	@ 000b81c2 607b
.org 0xb81c4
	adds r0, #1	@ 000b81c4 0130
.org 0xb81c6
	strb r0, [r4, #13]	@ 000b81c6 6073
