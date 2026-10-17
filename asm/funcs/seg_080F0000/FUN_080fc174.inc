@ FUN_080fc174  entry 0x080fc174  size 158
.thumb
.org 0xfc174
FUN_080fc174:
	push {r4, lr}	@ 000fc174 10b5
.org 0xfc176
	adds r4, r0, #0	@ 000fc176 041c
.org 0xfc178
	ldrb r3, [r4, #13]	@ 000fc178 637b
.org 0xfc17a
	cmp r3, #0	@ 000fc17a 002b
.org 0xfc17c
	bne.n 0xfc1b4	@ 000fc17c 1ad1
.org 0xfc17e
	adds r0, #192	@ 000fc17e c030
.org 0xfc180
	ldr r2, [r0, #0]	@ 000fc180 0268
.org 0xfc182
	cmp r2, #0	@ 000fc182 002a
.org 0xfc184
	beq.n 0xfc204	@ 000fc184 3ed0
.org 0xfc186
	ldrb r0, [r2, #13]	@ 000fc186 507b
.org 0xfc188
	cmp r0, #3	@ 000fc188 0328
.org 0xfc18a
	bne.n 0xfc1a0	@ 000fc18a 09d1
.org 0xfc18c
	adds r0, r4, #0	@ 000fc18c 201c
.org 0xfc18e
	adds r0, #180	@ 000fc18e b430
.org 0xfc190
	ldr r1, [r2, #88]	@ 000fc190 916d
.org 0xfc192
	ldr r0, [r0, #0]	@ 000fc192 0068
.org 0xfc194
	cmp r1, r0	@ 000fc194 8142
.org 0xfc196
	bne.n 0xfc1a0	@ 000fc196 03d1
.org 0xfc198
	movs r0, #64	@ 000fc198 4020
.org 0xfc19a
	strb r0, [r4, #18]	@ 000fc19a a074
.org 0xfc19c
	adds r0, r3, #1	@ 000fc19c 581c
.org 0xfc19e
	strb r0, [r4, #13]	@ 000fc19e 6073
.org 0xfc1a0
	adds r0, r4, #0	@ 000fc1a0 201c
.org 0xfc1a2
	adds r0, #192	@ 000fc1a2 c030
.org 0xfc1a4
	ldr r0, [r0, #0]	@ 000fc1a4 0068
.org 0xfc1a6
	cmp r0, #0	@ 000fc1a6 0028
.org 0xfc1a8
	beq.n 0xfc204	@ 000fc1a8 2cd0
.org 0xfc1aa
	adds r1, r4, #0	@ 000fc1aa 211c
.org 0xfc1ac
	adds r1, #180	@ 000fc1ac b431
.org 0xfc1ae
	ldr r0, [r2, #88]	@ 000fc1ae 906d
.org 0xfc1b0
	str r0, [r1, #0]	@ 000fc1b0 0860
.org 0xfc1b2
	b.n 0xfc204	@ 000fc1b2 27e0
.org 0xfc1b4
	ldrb r1, [r4, #18]	@ 000fc1b4 a17c
.org 0xfc1b6
	movs r0, #3	@ 000fc1b6 0320
.org 0xfc1b8
	ands r0, r1	@ 000fc1b8 0840
.org 0xfc1ba
	cmp r0, #0	@ 000fc1ba 0028
.org 0xfc1bc
	bne.n 0xfc1ca	@ 000fc1bc 05d1
.org 0xfc1be
	adds r0, r4, #0	@ 000fc1be 201c
.org 0xfc1c0
	adds r0, #184	@ 000fc1c0 b830
.org 0xfc1c2
	ldr r0, [r0, #0]	@ 000fc1c2 0068
.org 0xfc1c4
	movs r2, #128	@ 000fc1c4 8022
.org 0xfc1c6
	lsls r2, r2, #2	@ 000fc1c6 9200
.org 0xfc1c8
	b.n 0xfc1d4	@ 000fc1c8 04e0
.org 0xfc1ca
	adds r0, r4, #0	@ 000fc1ca 201c
.org 0xfc1cc
	adds r0, #184	@ 000fc1cc b830
.org 0xfc1ce
	ldr r0, [r0, #0]	@ 000fc1ce 0068
.org 0xfc1d0
	movs r2, #128	@ 000fc1d0 8022
.org 0xfc1d2
	lsls r2, r2, #1	@ 000fc1d2 5200
.org 0xfc1d4
	adds r0, r0, r2	@ 000fc1d4 8018
.org 0xfc1d6
	str r0, [r4, #104]	@ 000fc1d6 a066
.org 0xfc1d8
	subs r0, r1, #1	@ 000fc1d8 481e
.org 0xfc1da
	strb r0, [r4, #18]	@ 000fc1da a074
.org 0xfc1dc
	lsls r0, r0, #24	@ 000fc1dc 0006
.org 0xfc1de
	lsrs r0, r0, #24	@ 000fc1de 000e
.org 0xfc1e0
	cmp r0, #255	@ 000fc1e0 ff28
.org 0xfc1e2
	bne.n 0xfc204	@ 000fc1e2 0fd1
.org 0xfc1e4
	ldr r1, [pc, #24]	@ 000fc1e4 0649
.org 0xfc1e6
	ldrb r0, [r4, #9]	@ 000fc1e6 607a
.org 0xfc1e8
	lsls r0, r0, #2	@ 000fc1e8 8000
.org 0xfc1ea
	adds r0, r0, r1	@ 000fc1ea 4018
.org 0xfc1ec
	movs r1, #2	@ 000fc1ec 0221
.org 0xfc1ee
	str r1, [r4, #12]	@ 000fc1ee e160
.org 0xfc1f0
	ldr r0, [r0, #0]	@ 000fc1f0 0068
.org 0xfc1f2
	ldr r0, [r0, #8]	@ 000fc1f2 8068
.org 0xfc1f4
	str r0, [r4, #20]	@ 000fc1f4 6061
.org 0xfc1f6
	adds r0, r4, #0	@ 000fc1f6 201c
.org 0xfc1f8
	bl 0xfc218	@ 000fc1f8 00f00ef8
.org 0xfc1fc
	b.n 0xfc212	@ 000fc1fc 09e0
.org 0xfc1fe
	.byte 0x00	@ 000fc1fe data
.org 0xfc1ff
	.byte 0x00	@ 000fc1ff data
.org 0xfc200
	.byte 0xfc,0x92,0x86,0x08	@ 000fc200 data
.org 0xfc204
	adds r0, r4, #0	@ 000fc204 201c
.org 0xfc206
	bl 0x1cff0	@ 000fc206 20f7f3fe
.org 0xfc20a
	adds r1, r4, #0	@ 000fc20a 211c
.org 0xfc20c
	adds r1, #192	@ 000fc20c c031
.org 0xfc20e
	movs r0, #0	@ 000fc20e 0020
.org 0xfc210
	str r0, [r1, #0]	@ 000fc210 0860
