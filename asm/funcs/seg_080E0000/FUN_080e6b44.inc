@ FUN_080e6b44  entry 0x080e6b44  size 24
.thumb
.org 0xe6b44
FUN_080e6b44:
	push {lr}	@ 000e6b44 00b5
.org 0xe6b46
	adds r1, r0, #0	@ 000e6b46 011c
.org 0xe6b48
	ldrb r0, [r1, #18]	@ 000e6b48 887c
.org 0xe6b4a
	cmp r0, #0	@ 000e6b4a 0028
.org 0xe6b4c
	beq.n 0xe6b56	@ 000e6b4c 03d0
.org 0xe6b4e
	subs r0, #1	@ 000e6b4e 0138
.org 0xe6b50
	strb r0, [r1, #18]	@ 000e6b50 8874
.org 0xe6b52
	movs r0, #0	@ 000e6b52 0020
.org 0xe6b54
	b.n 0xe6b58	@ 000e6b54 00e0
.org 0xe6b56
	movs r0, #1	@ 000e6b56 0120
.org 0xe6b58
	pop {r1}	@ 000e6b58 02bc
.org 0xe6b5a
	bx r1	@ 000e6b5a 0847
