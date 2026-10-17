@ FUN_08054ff0  entry 0x08054ff0  size 82
.thumb
.org 0x54ff0
FUN_08054ff0:
	push {r4, r5, lr}	@ 00054ff0 30b5
.org 0x54ff2
	sub sp, #4	@ 00054ff2 81b0
.org 0x54ff4
	adds r4, r0, #0	@ 00054ff4 041c
.org 0x54ff6
	ldr r1, [pc, #36]	@ 00054ff6 0949
.org 0x54ff8
	mov r0, sp	@ 00054ff8 6846
.org 0x54ffa
	movs r2, #3	@ 00054ffa 0322
.org 0x54ffc
	bl 0x129258	@ 00054ffc d4f02cf9
.org 0x55000
	ldr r0, [pc, #28]	@ 00055000 0748
.org 0x55002
	ldrh r1, [r0, #8]	@ 00055002 0189
.org 0x55004
	movs r0, #8	@ 00055004 0820
.org 0x55006
	ands r0, r1	@ 00055006 0840
.org 0x55008
	lsls r0, r0, #16	@ 00055008 0004
.org 0x5500a
	lsrs r1, r0, #16	@ 0005500a 010c
.org 0x5500c
	cmp r1, #0	@ 0005500c 0029
.org 0x5500e
	beq.n 0x55024	@ 0005500e 09d0
.org 0x55010
	movs r0, #0	@ 00055010 0020
.org 0x55012
	strb r0, [r4, #13]	@ 00055012 6073
.org 0x55014
	strb r0, [r4, #14]	@ 00055014 a073
.org 0x55016
	strb r0, [r4, #15]	@ 00055016 e073
.org 0x55018
	b.n 0x55044	@ 00055018 14e0
.org 0x5501a
	.byte 0x00	@ 0005501a data
.org 0x5501b
	.byte 0x00	@ 0005501b data
.org 0x5501c
	.byte 0xd0,0x95,0x12,0x08	@ 0005501c data
.org 0x55020
	.byte 0x10,0xe9,0x02,0x02	@ 00055020 data
.org 0x55024
	adds r5, r4, #0	@ 00055024 251c
.org 0x55026
	adds r5, #181	@ 00055026 b535
.org 0x55028
	ldrb r0, [r5, #0]	@ 00055028 2878
.org 0x5502a
	add r0, sp	@ 0005502a 6844
.org 0x5502c
	ldrb r0, [r0, #0]	@ 0005502c 0078
.org 0x5502e
	strb r0, [r4, #13]	@ 0005502e 6073
.org 0x55030
	strb r1, [r4, #14]	@ 00055030 a173
.org 0x55032
	strb r1, [r4, #15]	@ 00055032 e173
.org 0x55034
	ldrb r0, [r5, #0]	@ 00055034 2878
.org 0x55036
	adds r0, #1	@ 00055036 0130
.org 0x55038
	strb r0, [r5, #0]	@ 00055038 2870
.org 0x5503a
	ldrb r0, [r5, #0]	@ 0005503a 2878
.org 0x5503c
	movs r1, #3	@ 0005503c 0321
.org 0x5503e
	bl 0x129198	@ 0005503e d4f0abf8
