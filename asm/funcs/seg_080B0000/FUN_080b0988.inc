@ FUN_080b0988  entry 0x080b0988  size 58
.thumb
.org 0xb0988
FUN_080b0988:
	push {lr}	@ 000b0988 00b5
.org 0xb098a
	adds r2, r0, #0	@ 000b098a 021c
.org 0xb098c
	ldr r0, [r2, #84]	@ 000b098c 506d
.org 0xb098e
	ldr r1, [r2, #92]	@ 000b098e d16d
.org 0xb0990
	adds r0, r0, r1	@ 000b0990 4018
.org 0xb0992
	str r0, [r2, #84]	@ 000b0992 5065
.org 0xb0994
	ldr r0, [r2, #88]	@ 000b0994 906d
.org 0xb0996
	ldr r1, [r2, #96]	@ 000b0996 116e
.org 0xb0998
	adds r0, r0, r1	@ 000b0998 4018
.org 0xb099a
	str r0, [r2, #88]	@ 000b099a 9065
.org 0xb099c
	ldrb r0, [r2, #18]	@ 000b099c 907c
.org 0xb099e
	subs r0, #1	@ 000b099e 0138
.org 0xb09a0
	movs r1, #0	@ 000b09a0 0021
.org 0xb09a2
	strb r0, [r2, #18]	@ 000b09a2 9074
.org 0xb09a4
	lsls r0, r0, #24	@ 000b09a4 0006
.org 0xb09a6
	cmp r0, #0	@ 000b09a6 0028
.org 0xb09a8
	bne.n 0xb09b0	@ 000b09a8 02d1
.org 0xb09aa
	movs r0, #1	@ 000b09aa 0120
.org 0xb09ac
	strb r0, [r2, #13]	@ 000b09ac 5073
.org 0xb09ae
	strb r1, [r2, #14]	@ 000b09ae 9173
.org 0xb09b0
	ldr r0, [r2, #40]	@ 000b09b0 906a
.org 0xb09b2
	ldrb r0, [r0, #12]	@ 000b09b2 007b
.org 0xb09b4
	cmp r0, #1	@ 000b09b4 0128
.org 0xb09b6
	bls.n 0xb09be	@ 000b09b6 02d9
.org 0xb09b8
	movs r0, #2	@ 000b09b8 0220
.org 0xb09ba
	strb r0, [r2, #13]	@ 000b09ba 5073
.org 0xb09bc
	strb r1, [r2, #14]	@ 000b09bc 9173
.org 0xb09be
	pop {r0}	@ 000b09be 01bc
.org 0xb09c0
	bx r0	@ 000b09c0 0047
