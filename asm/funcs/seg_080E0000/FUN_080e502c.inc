@ FUN_080e502c  entry 0x080e502c  size 30
.thumb
.org 0xe502c
FUN_080e502c:
	push {r4, lr}	@ 000e502c 10b5
.org 0xe502e
	adds r4, r0, #0	@ 000e502e 041c
.org 0xe5030
	ldr r1, [pc, #24]	@ 000e5030 0649
.org 0xe5032
	bl 0x1cf00	@ 000e5032 37f765ff
.org 0xe5036
	movs r0, #32	@ 000e5036 2020
.org 0xe5038
	str r0, [r4, #96]	@ 000e5038 2066
.org 0xe503a
	movs r1, #0	@ 000e503a 0021
.org 0xe503c
	movs r0, #1	@ 000e503c 0120
.org 0xe503e
	strb r0, [r4, #19]	@ 000e503e e074
.org 0xe5040
	strb r1, [r4, #18]	@ 000e5040 a174
.org 0xe5042
	strb r0, [r4, #13]	@ 000e5042 6073
.org 0xe5044
	pop {r4}	@ 000e5044 10bc
.org 0xe5046
	pop {r0}	@ 000e5046 01bc
.org 0xe5048
	bx r0	@ 000e5048 0047
