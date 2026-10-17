@ FUN_0810da00  entry 0x0810da00  size 44
.thumb
.org 0x10da00
FUN_0810da00:
	push {lr}	@ 0010da00 00b5
.org 0x10da02
	b.n 0x10da1e	@ 0010da02 0ce0
.org 0x10da04
	cmp r2, #239	@ 0010da04 ef2a
.org 0x10da06
	bhi.n 0x10da0c	@ 0010da06 01d8
.org 0x10da08
	subs r1, #1	@ 0010da08 0139
.org 0x10da0a
	b.n 0x10da1c	@ 0010da0a 07e0
.org 0x10da0c
	cmp r2, #240	@ 0010da0c f02a
.org 0x10da0e
	bne.n 0x10da16	@ 0010da0e 02d1
.org 0x10da10
	adds r0, #1	@ 0010da10 0130
.org 0x10da12
	subs r1, #1	@ 0010da12 0139
.org 0x10da14
	b.n 0x10da1c	@ 0010da14 02e0
.org 0x10da16
	cmp r2, #248	@ 0010da16 f82a
.org 0x10da18
	bhi.n 0x10da1c	@ 0010da18 00d8
.org 0x10da1a
	adds r0, #1	@ 0010da1a 0130
.org 0x10da1c
	adds r0, #1	@ 0010da1c 0130
.org 0x10da1e
	ldrb r2, [r0, #0]	@ 0010da1e 0278
.org 0x10da20
	cmp r2, #252	@ 0010da20 fc2a
.org 0x10da22
	bhi.n 0x10da28	@ 0010da22 01d8
.org 0x10da24
	cmp r1, #0	@ 0010da24 0029
.org 0x10da26
	bne.n 0x10da04	@ 0010da26 edd1
.org 0x10da28
	pop {r1}	@ 0010da28 02bc
.org 0x10da2a
	bx r1	@ 0010da2a 0847
