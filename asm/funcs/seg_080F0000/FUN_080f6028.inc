@ FUN_080f6028  entry 0x080f6028  size 32
.thumb
.org 0xf6028
FUN_080f6028:
	push {r4, r5, lr}	@ 000f6028 30b5
.org 0xf602a
	adds r4, r0, #0	@ 000f602a 041c
.org 0xf602c
	ldrb r5, [r4, #14]	@ 000f602c a57b
.org 0xf602e
	cmp r5, #0	@ 000f602e 002d
.org 0xf6030
	bne.n 0xf6042	@ 000f6030 07d1
.org 0xf6032
	movs r1, #186	@ 000f6032 ba21
.org 0xf6034
	lsls r1, r1, #7	@ 000f6034 c901
.org 0xf6036
	bl 0x1cf00	@ 000f6036 26f763ff
.org 0xf603a
	str r5, [r4, #92]	@ 000f603a e565
.org 0xf603c
	ldrb r0, [r4, #14]	@ 000f603c a07b
.org 0xf603e
	adds r0, #1	@ 000f603e 0130
.org 0xf6040
	strb r0, [r4, #14]	@ 000f6040 a073
.org 0xf6042
	pop {r4, r5}	@ 000f6042 30bc
.org 0xf6044
	pop {r0}	@ 000f6044 01bc
.org 0xf6046
	bx r0	@ 000f6046 0047
