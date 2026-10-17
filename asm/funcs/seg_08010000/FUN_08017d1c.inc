@ FUN_08017d1c  entry 0x08017d1c  size 26
.thumb
.org 0x17d1c
FUN_08017d1c:
	push {r4, lr}	@ 00017d1c 10b5
.org 0x17d1e
	adds r4, r0, #0	@ 00017d1e 041c
.org 0x17d20
	ldrb r0, [r4, #14]	@ 00017d20 a07b
.org 0x17d22
	cmp r0, #4	@ 00017d22 0428
.org 0x17d24
	bhi.n 0x17e08	@ 00017d24 70d8
.org 0x17d26
	lsls r0, r0, #2	@ 00017d26 8000
.org 0x17d28
	ldr r1, [pc, #4]	@ 00017d28 0149
.org 0x17d2a
	adds r0, r0, r1	@ 00017d2a 4018
.org 0x17d2c
	ldr r0, [r0, #0]	@ 00017d2c 0068
.org 0x17d2e
	mov pc, r0	@ 00017d2e 8746
.org 0x17d30
	.byte 0x34,0x7d,0x01,0x08	@ 00017d30 data
.org 0x17d34
	.byte 0x48,0x7d,0x01,0x08	@ 00017d34 data
