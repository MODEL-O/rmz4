@ FUN_0805a044  entry 0x0805a044  size 102
.thumb
.org 0x5a044
FUN_0805a044:
	push {r4, lr}	@ 0005a044 10b5
.org 0x5a046
	adds r4, r0, #0	@ 0005a046 041c
.org 0x5a048
	ldrb r0, [r4, #15]	@ 0005a048 e07b
.org 0x5a04a
	cmp r0, #0	@ 0005a04a 0028
.org 0x5a04c
	bne.n 0x5a08a	@ 0005a04c 1dd1
.org 0x5a04e
	adds r0, r4, #0	@ 0005a04e 201c
.org 0x5a050
	adds r0, #116	@ 0005a050 7430
.org 0x5a052
	ldr r1, [pc, #88]	@ 0005a052 1649
.org 0x5a054
	bl 0x5784	@ 0005a054 abf796fb
.org 0x5a058
	ldrb r0, [r4, #30]	@ 0005a058 a07f
.org 0x5a05a
	lsls r0, r0, #8	@ 0005a05a 0002
.org 0x5a05c
	adds r1, r4, #0	@ 0005a05c 211c
.org 0x5a05e
	adds r1, #112	@ 0005a05e 7031
.org 0x5a060
	ldrb r1, [r1, #0]	@ 0005a060 0978
.org 0x5a062
	orrs r0, r1	@ 0005a062 0843
.org 0x5a064
	ldr r1, [pc, #72]	@ 0005a064 1249
.org 0x5a066
	cmp r0, r1	@ 0005a066 8842
.org 0x5a068
	beq.n 0x5a078	@ 0005a068 06d0
.org 0x5a06a
	adds r0, r4, #0	@ 0005a06a 201c
.org 0x5a06c
	bl 0x1cf00	@ 0005a06c c2f748ff
.org 0x5a070
	adds r1, r4, #0	@ 0005a070 211c
.org 0x5a072
	adds r1, #189	@ 0005a072 bd31
.org 0x5a074
	movs r0, #1	@ 0005a074 0120
.org 0x5a076
	strb r0, [r1, #0]	@ 0005a076 0870
.org 0x5a078
	adds r0, r4, #0	@ 0005a078 201c
.org 0x5a07a
	adds r0, #180	@ 0005a07a b430
.org 0x5a07c
	ldr r0, [r0, #0]	@ 0005a07c 0068
.org 0x5a07e
	ldr r1, [pc, #52]	@ 0005a07e 0d49
.org 0x5a080
	adds r0, r0, r1	@ 0005a080 4018
.org 0x5a082
	str r0, [r4, #88]	@ 0005a082 a065
.org 0x5a084
	ldrb r0, [r4, #15]	@ 0005a084 e07b
.org 0x5a086
	adds r0, #1	@ 0005a086 0130
.org 0x5a088
	strb r0, [r4, #15]	@ 0005a088 e073
.org 0x5a08a
	adds r0, r4, #0	@ 0005a08a 201c
.org 0x5a08c
	bl 0x1cff0	@ 0005a08c c2f7b0ff
.org 0x5a090
	ldr r0, [r4, #24]	@ 0005a090 a069
.org 0x5a092
	ldrb r1, [r0, #9]	@ 0005a092 417a
.org 0x5a094
	movs r0, #1	@ 0005a094 0120
.org 0x5a096
	ands r0, r1	@ 0005a096 0840
.org 0x5a098
	cmp r0, #0	@ 0005a098 0028
.org 0x5a09a
	beq.n 0x5a0a4	@ 0005a09a 03d0
.org 0x5a09c
	movs r1, #0	@ 0005a09c 0021
.org 0x5a09e
	movs r0, #2	@ 0005a09e 0220
.org 0x5a0a0
	strb r0, [r4, #14]	@ 0005a0a0 a073
.org 0x5a0a2
	strb r1, [r4, #15]	@ 0005a0a2 e173
.org 0x5a0a4
	pop {r4}	@ 0005a0a4 10bc
.org 0x5a0a6
	pop {r0}	@ 0005a0a6 01bc
.org 0x5a0a8
	bx r0	@ 0005a0a8 0047
