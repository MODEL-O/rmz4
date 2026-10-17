@ FUN_080ab03c  entry 0x080ab03c  size 88
.thumb
.org 0xab03c
FUN_080ab03c:
	push {r4, lr}	@ 000ab03c 10b5
.org 0xab03e
	adds r4, r0, #0	@ 000ab03e 041c
.org 0xab040
	ldrb r0, [r4, #15]	@ 000ab040 e07b
.org 0xab042
	cmp r0, #0	@ 000ab042 0028
.org 0xab044
	bne.n 0xab058	@ 000ab044 08d1
.org 0xab046
	ldr r1, [pc, #76]	@ 000ab046 1349
.org 0xab048
	adds r0, r4, #0	@ 000ab048 201c
.org 0xab04a
	bl 0x1cf00	@ 000ab04a 71f759ff
.org 0xab04e
	movs r0, #30	@ 000ab04e 1e20
.org 0xab050
	strb r0, [r4, #18]	@ 000ab050 a074
.org 0xab052
	ldrb r0, [r4, #15]	@ 000ab052 e07b
.org 0xab054
	adds r0, #1	@ 000ab054 0130
.org 0xab056
	strb r0, [r4, #15]	@ 000ab056 e073
.org 0xab058
	adds r0, r4, #0	@ 000ab058 201c
.org 0xab05a
	bl 0x1cff0	@ 000ab05a 71f7c9ff
.org 0xab05e
	adds r0, r4, #0	@ 000ab05e 201c
.org 0xab060
	adds r0, #116	@ 000ab060 7430
.org 0xab062
	ldr r1, [pc, #52]	@ 000ab062 0d49
.org 0xab064
	bl 0x5784	@ 000ab064 5af78efb
.org 0xab068
	ldr r1, [r4, #84]	@ 000ab068 616d
.org 0xab06a
	ldr r2, [r4, #88]	@ 000ab06a a26d
.org 0xab06c
	adds r0, r1, #0	@ 000ab06c 081c
.org 0xab06e
	adds r1, r2, #0	@ 000ab06e 111c
.org 0xab070
	bl 0x8534	@ 000ab070 5df760fa
.org 0xab074
	subs r0, #1	@ 000ab074 0138
.org 0xab076
	str r0, [r4, #88]	@ 000ab076 a065
.org 0xab078
	ldrb r0, [r4, #18]	@ 000ab078 a07c
.org 0xab07a
	subs r0, #1	@ 000ab07a 0138
.org 0xab07c
	strb r0, [r4, #18]	@ 000ab07c a074
.org 0xab07e
	lsls r0, r0, #24	@ 000ab07e 0006
.org 0xab080
	lsrs r1, r0, #24	@ 000ab080 010e
.org 0xab082
	cmp r1, #0	@ 000ab082 0029
.org 0xab084
	bne.n 0xab08e	@ 000ab084 03d1
.org 0xab086
	movs r0, #3	@ 000ab086 0320
.org 0xab088
	strb r0, [r4, #13]	@ 000ab088 6073
.org 0xab08a
	strb r1, [r4, #14]	@ 000ab08a a173
.org 0xab08c
	strb r1, [r4, #15]	@ 000ab08c e173
.org 0xab08e
	pop {r4}	@ 000ab08e 10bc
.org 0xab090
	pop {r0}	@ 000ab090 01bc
.org 0xab092
	bx r0	@ 000ab092 0047
