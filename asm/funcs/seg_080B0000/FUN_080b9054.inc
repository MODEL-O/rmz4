@ FUN_080b9054  entry 0x080b9054  size 76
.thumb
.org 0xb9054
FUN_080b9054:
	push {r4, lr}	@ 000b9054 10b5
.org 0xb9056
	adds r4, r0, #0	@ 000b9056 041c
.org 0xb9058
	ldrb r0, [r4, #15]	@ 000b9058 e07b
.org 0xb905a
	cmp r0, #0	@ 000b905a 0028
.org 0xb905c
	bne.n 0xb907a	@ 000b905c 0dd1
.org 0xb905e
	adds r0, r4, #0	@ 000b905e 201c
.org 0xb9060
	adds r0, #116	@ 000b9060 7430
.org 0xb9062
	ldr r1, [pc, #60]	@ 000b9062 0f49
.org 0xb9064
	bl 0x5784	@ 000b9064 4cf78efb
.org 0xb9068
	ldr r1, [pc, #56]	@ 000b9068 0e49
.org 0xb906a
	adds r0, r4, #0	@ 000b906a 201c
.org 0xb906c
	bl 0x1cf00	@ 000b906c 63f748ff
.org 0xb9070
	movs r0, #16	@ 000b9070 1020
.org 0xb9072
	strb r0, [r4, #18]	@ 000b9072 a074
.org 0xb9074
	ldrb r0, [r4, #15]	@ 000b9074 e07b
.org 0xb9076
	adds r0, #1	@ 000b9076 0130
.org 0xb9078
	strb r0, [r4, #15]	@ 000b9078 e073
.org 0xb907a
	adds r0, r4, #0	@ 000b907a 201c
.org 0xb907c
	bl 0x1cff0	@ 000b907c 63f7b8ff
.org 0xb9080
	ldrb r0, [r4, #18]	@ 000b9080 a07c
.org 0xb9082
	cmp r0, #0	@ 000b9082 0028
.org 0xb9084
	beq.n 0xb9090	@ 000b9084 04d0
.org 0xb9086
	subs r0, #1	@ 000b9086 0138
.org 0xb9088
	strb r0, [r4, #18]	@ 000b9088 a074
.org 0xb908a
	lsls r0, r0, #24	@ 000b908a 0006
.org 0xb908c
	cmp r0, #0	@ 000b908c 0028
.org 0xb908e
	bne.n 0xb909a	@ 000b908e 04d1
.org 0xb9090
	movs r1, #0	@ 000b9090 0021
.org 0xb9092
	movs r0, #2	@ 000b9092 0220
.org 0xb9094
	strb r0, [r4, #13]	@ 000b9094 6073
.org 0xb9096
	strb r1, [r4, #14]	@ 000b9096 a173
.org 0xb9098
	strb r1, [r4, #15]	@ 000b9098 e173
.org 0xb909a
	pop {r4}	@ 000b909a 10bc
.org 0xb909c
	pop {r0}	@ 000b909c 01bc
.org 0xb909e
	bx r0	@ 000b909e 0047
