@ FUN_0801c068  entry 0x0801c068  size 94
.thumb
.org 0x1c068
FUN_0801c068:
	push {r4, r5, r6, lr}	@ 0001c068 70b5
.org 0x1c06a
	adds r5, r0, #0	@ 0001c06a 051c
.org 0x1c06c
	ldr r3, [pc, #88]	@ 0001c06c 164b
.org 0x1c06e
	ldr r1, [pc, #92]	@ 0001c06e 1749
.org 0x1c070
	ldr r0, [pc, #92]	@ 0001c070 1748
.org 0x1c072
	adds r1, r1, r0	@ 0001c072 0918
.org 0x1c074
	ldr r2, [r1, #0]	@ 0001c074 0a68
.org 0x1c076
	ldr r0, [pc, #92]	@ 0001c076 1748
.org 0x1c078
	muls r0, r2	@ 0001c078 5043
.org 0x1c07a
	ldr r2, [pc, #92]	@ 0001c07a 174a
.org 0x1c07c
	adds r0, r0, r2	@ 0001c07c 8018
.org 0x1c07e
	str r0, [r1, #0]	@ 0001c07e 0860
.org 0x1c080
	lsrs r0, r0, #16	@ 0001c080 000c
.org 0x1c082
	movs r1, #31	@ 0001c082 1f21
.org 0x1c084
	ands r0, r1	@ 0001c084 0840
.org 0x1c086
	lsls r0, r0, #1	@ 0001c086 4000
.org 0x1c088
	adds r0, r0, r3	@ 0001c088 c018
.org 0x1c08a
	ldrh r1, [r0, #0]	@ 0001c08a 0188
.org 0x1c08c
	adds r0, r5, #0	@ 0001c08c 281c
.org 0x1c08e
	adds r0, #104	@ 0001c08e 6830
.org 0x1c090
	movs r6, #0	@ 0001c090 0026
.org 0x1c092
	strh r1, [r0, #0]	@ 0001c092 0180
.org 0x1c094
	ldr r4, [pc, #68]	@ 0001c094 114c
.org 0x1c096
	ldr r0, [r4, #0]	@ 0001c096 2068
.org 0x1c098
	ldr r1, [pc, #68]	@ 0001c098 1149
.org 0x1c09a
	adds r0, r0, r1	@ 0001c09a 4018
.org 0x1c09c
	movs r1, #128	@ 0001c09c 8021
.org 0x1c09e
	lsls r1, r1, #7	@ 0001c09e c901
.org 0x1c0a0
	bl 0x1ea4	@ 0001c0a0 e5f700ff
.org 0x1c0a4
	ldr r0, [r4, #0]	@ 0001c0a4 2068
.org 0x1c0a6
	ldr r2, [pc, #60]	@ 0001c0a6 0f4a
.org 0x1c0a8
	adds r0, r0, r2	@ 0001c0a8 8018
.org 0x1c0aa
	movs r1, #0	@ 0001c0aa 0021
.org 0x1c0ac
	bl 0x2208	@ 0001c0ac e6f7acf8
.org 0x1c0b0
	adds r5, #106	@ 0001c0b0 6a35
.org 0x1c0b2
	strh r6, [r5, #0]	@ 0001c0b2 2e80
.org 0x1c0b4
	ldr r1, [pc, #48]	@ 0001c0b4 0c49
.org 0x1c0b6
	ldr r0, [pc, #52]	@ 0001c0b6 0d48
.org 0x1c0b8
	adds r1, r1, r0	@ 0001c0b8 0918
.org 0x1c0ba
	ldrb r0, [r1, #0]	@ 0001c0ba 0878
.org 0x1c0bc
	adds r0, #1	@ 0001c0bc 0130
.org 0x1c0be
	strb r0, [r1, #0]	@ 0001c0be 0870
.org 0x1c0c0
	pop {r4, r5, r6}	@ 0001c0c0 70bc
.org 0x1c0c2
	pop {r0}	@ 0001c0c2 01bc
.org 0x1c0c4
	bx r0	@ 0001c0c4 0047
