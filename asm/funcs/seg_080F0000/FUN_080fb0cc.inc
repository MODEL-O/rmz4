@ FUN_080fb0cc  entry 0x080fb0cc  size 48
.thumb
.org 0xfb0cc
FUN_080fb0cc:
	push {lr}	@ 000fb0cc 00b5
.org 0xfb0ce
	adds r2, r0, #0	@ 000fb0ce 021c
.org 0xfb0d0
	ldrb r1, [r2, #15]	@ 000fb0d0 d17b
.org 0xfb0d2
	cmp r1, #0	@ 000fb0d2 0029
.org 0xfb0d4
	bne.n 0xfb0e4	@ 000fb0d4 06d1
.org 0xfb0d6
	adds r0, #181	@ 000fb0d6 b530
.org 0xfb0d8
	strb r1, [r0, #0]	@ 000fb0d8 0170
.org 0xfb0da
	movs r0, #128	@ 000fb0da 8020
.org 0xfb0dc
	str r0, [r2, #100]	@ 000fb0dc 5066
.org 0xfb0de
	ldrb r0, [r2, #15]	@ 000fb0de d07b
.org 0xfb0e0
	adds r0, #1	@ 000fb0e0 0130
.org 0xfb0e2
	strb r0, [r2, #15]	@ 000fb0e2 d073
.org 0xfb0e4
	ldr r0, [r2, #100]	@ 000fb0e4 506e
.org 0xfb0e6
	subs r0, #1	@ 000fb0e6 0138
.org 0xfb0e8
	str r0, [r2, #100]	@ 000fb0e8 5066
.org 0xfb0ea
	cmp r0, #0	@ 000fb0ea 0028
.org 0xfb0ec
	bgt.n 0xfb0f8	@ 000fb0ec 04dc
.org 0xfb0ee
	movs r1, #0	@ 000fb0ee 0021
.org 0xfb0f0
	movs r0, #1	@ 000fb0f0 0120
.org 0xfb0f2
	strb r0, [r2, #13]	@ 000fb0f2 5073
.org 0xfb0f4
	strb r1, [r2, #14]	@ 000fb0f4 9173
.org 0xfb0f6
	strb r1, [r2, #15]	@ 000fb0f6 d173
.org 0xfb0f8
	pop {r0}	@ 000fb0f8 01bc
.org 0xfb0fa
	bx r0	@ 000fb0fa 0047
