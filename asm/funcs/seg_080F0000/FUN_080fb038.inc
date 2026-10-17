@ FUN_080fb038  entry 0x080fb038  size 42
.thumb
.org 0xfb038
FUN_080fb038:
	push {lr}	@ 000fb038 00b5
.org 0xfb03a
	adds r2, r0, #0	@ 000fb03a 021c
.org 0xfb03c
	ldrb r1, [r2, #15]	@ 000fb03c d17b
.org 0xfb03e
	cmp r1, #0	@ 000fb03e 0029
.org 0xfb040
	bne.n 0xfb04a	@ 000fb040 03d1
.org 0xfb042
	movs r0, #128	@ 000fb042 8020
.org 0xfb044
	str r0, [r2, #100]	@ 000fb044 5066
.org 0xfb046
	adds r0, r1, #1	@ 000fb046 481c
.org 0xfb048
	strb r0, [r2, #15]	@ 000fb048 d073
.org 0xfb04a
	ldr r0, [r2, #100]	@ 000fb04a 506e
.org 0xfb04c
	subs r0, #1	@ 000fb04c 0138
.org 0xfb04e
	str r0, [r2, #100]	@ 000fb04e 5066
.org 0xfb050
	cmp r0, #0	@ 000fb050 0028
.org 0xfb052
	bgt.n 0xfb05e	@ 000fb052 04dc
.org 0xfb054
	movs r1, #0	@ 000fb054 0021
.org 0xfb056
	movs r0, #1	@ 000fb056 0120
.org 0xfb058
	strb r0, [r2, #13]	@ 000fb058 5073
.org 0xfb05a
	strb r1, [r2, #14]	@ 000fb05a 9173
.org 0xfb05c
	strb r1, [r2, #15]	@ 000fb05c d173
.org 0xfb05e
	pop {r0}	@ 000fb05e 01bc
.org 0xfb060
	bx r0	@ 000fb060 0047
