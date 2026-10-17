@ FUN_0809c18c  entry 0x0809c18c  size 70
.thumb
.org 0x9c18c
FUN_0809c18c:
	push {r4, r5, lr}	@ 0009c18c 30b5
.org 0x9c18e
	adds r4, r0, #0	@ 0009c18e 041c
.org 0x9c190
	ldr r5, [r4, #40]	@ 0009c190 a56a
.org 0x9c192
	ldrb r0, [r4, #15]	@ 0009c192 e07b
.org 0x9c194
	cmp r0, #0	@ 0009c194 0028
.org 0x9c196
	bne.n 0x9c1bc	@ 0009c196 11d1
.org 0x9c198
	adds r0, r4, #0	@ 0009c198 201c
.org 0x9c19a
	adds r0, #116	@ 0009c19a 7430
.org 0x9c19c
	ldr r1, [pc, #52]	@ 0009c19c 0d49
.org 0x9c19e
	ldr r1, [r1, #0]	@ 0009c19e 0968
.org 0x9c1a0
	ldr r1, [r1, #0]	@ 0009c1a0 0968
.org 0x9c1a2
	bl 0x5784	@ 0009c1a2 69f7effa
.org 0x9c1a6
	ldrb r1, [r4, #10]	@ 0009c1a6 a17a
.org 0x9c1a8
	movs r0, #254	@ 0009c1a8 fe20
.org 0x9c1aa
	ands r0, r1	@ 0009c1aa 0840
.org 0x9c1ac
	strb r0, [r4, #10]	@ 0009c1ac a072
.org 0x9c1ae
	adds r1, r4, #0	@ 0009c1ae 211c
.org 0x9c1b0
	adds r1, #180	@ 0009c1b0 b431
.org 0x9c1b2
	movs r0, #1	@ 0009c1b2 0120
.org 0x9c1b4
	strb r0, [r1, #0]	@ 0009c1b4 0870
.org 0x9c1b6
	ldrb r0, [r4, #15]	@ 0009c1b6 e07b
.org 0x9c1b8
	adds r0, #1	@ 0009c1b8 0130
.org 0x9c1ba
	strb r0, [r4, #15]	@ 0009c1ba e073
.org 0x9c1bc
	adds r0, r5, #0	@ 0009c1bc 281c
.org 0x9c1be
	adds r0, #180	@ 0009c1be b430
.org 0x9c1c0
	ldr r0, [r0, #0]	@ 0009c1c0 0068
.org 0x9c1c2
	str r0, [r4, #84]	@ 0009c1c2 6065
.org 0x9c1c4
	adds r0, r5, #0	@ 0009c1c4 281c
.org 0x9c1c6
	adds r0, #184	@ 0009c1c6 b830
.org 0x9c1c8
	ldr r0, [r0, #0]	@ 0009c1c8 0068
.org 0x9c1ca
	str r0, [r4, #88]	@ 0009c1ca a065
.org 0x9c1cc
	pop {r4, r5}	@ 0009c1cc 30bc
.org 0x9c1ce
	pop {r0}	@ 0009c1ce 01bc
.org 0x9c1d0
	bx r0	@ 0009c1d0 0047
