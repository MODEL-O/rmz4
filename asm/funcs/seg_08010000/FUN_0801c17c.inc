@ FUN_0801c17c  entry 0x0801c17c  size 94
.thumb
.org 0x1c17c
FUN_0801c17c:
	push {r4, r5, r6, lr}	@ 0001c17c 70b5
.org 0x1c17e
	adds r5, r0, #0	@ 0001c17e 051c
.org 0x1c180
	ldr r3, [pc, #88]	@ 0001c180 164b
.org 0x1c182
	ldr r1, [pc, #92]	@ 0001c182 1749
.org 0x1c184
	ldr r0, [pc, #92]	@ 0001c184 1748
.org 0x1c186
	adds r1, r1, r0	@ 0001c186 0918
.org 0x1c188
	ldr r2, [r1, #0]	@ 0001c188 0a68
.org 0x1c18a
	ldr r0, [pc, #92]	@ 0001c18a 1748
.org 0x1c18c
	muls r0, r2	@ 0001c18c 5043
.org 0x1c18e
	ldr r2, [pc, #92]	@ 0001c18e 174a
.org 0x1c190
	adds r0, r0, r2	@ 0001c190 8018
.org 0x1c192
	str r0, [r1, #0]	@ 0001c192 0860
.org 0x1c194
	lsrs r0, r0, #16	@ 0001c194 000c
.org 0x1c196
	movs r1, #31	@ 0001c196 1f21
.org 0x1c198
	ands r0, r1	@ 0001c198 0840
.org 0x1c19a
	lsls r0, r0, #1	@ 0001c19a 4000
.org 0x1c19c
	adds r0, r0, r3	@ 0001c19c c018
.org 0x1c19e
	ldrh r1, [r0, #0]	@ 0001c19e 0188
.org 0x1c1a0
	adds r0, r5, #0	@ 0001c1a0 281c
.org 0x1c1a2
	adds r0, #104	@ 0001c1a2 6830
.org 0x1c1a4
	movs r6, #0	@ 0001c1a4 0026
.org 0x1c1a6
	strh r1, [r0, #0]	@ 0001c1a6 0180
.org 0x1c1a8
	ldr r4, [pc, #68]	@ 0001c1a8 114c
.org 0x1c1aa
	ldr r0, [r4, #0]	@ 0001c1aa 2068
.org 0x1c1ac
	ldr r1, [pc, #68]	@ 0001c1ac 1149
.org 0x1c1ae
	adds r0, r0, r1	@ 0001c1ae 4018
.org 0x1c1b0
	movs r1, #128	@ 0001c1b0 8021
.org 0x1c1b2
	lsls r1, r1, #7	@ 0001c1b2 c901
.org 0x1c1b4
	bl 0x1ea4	@ 0001c1b4 e5f776fe
.org 0x1c1b8
	ldr r0, [r4, #0]	@ 0001c1b8 2068
.org 0x1c1ba
	ldr r2, [pc, #60]	@ 0001c1ba 0f4a
.org 0x1c1bc
	adds r0, r0, r2	@ 0001c1bc 8018
.org 0x1c1be
	movs r1, #0	@ 0001c1be 0021
.org 0x1c1c0
	bl 0x2208	@ 0001c1c0 e6f722f8
.org 0x1c1c4
	adds r5, #106	@ 0001c1c4 6a35
.org 0x1c1c6
	strh r6, [r5, #0]	@ 0001c1c6 2e80
.org 0x1c1c8
	ldr r1, [pc, #48]	@ 0001c1c8 0c49
.org 0x1c1ca
	ldr r0, [pc, #52]	@ 0001c1ca 0d48
.org 0x1c1cc
	adds r1, r1, r0	@ 0001c1cc 0918
.org 0x1c1ce
	ldrb r0, [r1, #0]	@ 0001c1ce 0878
.org 0x1c1d0
	adds r0, #1	@ 0001c1d0 0130
.org 0x1c1d2
	strb r0, [r1, #0]	@ 0001c1d2 0870
.org 0x1c1d4
	pop {r4, r5, r6}	@ 0001c1d4 70bc
.org 0x1c1d6
	pop {r0}	@ 0001c1d6 01bc
.org 0x1c1d8
	bx r0	@ 0001c1d8 0047
