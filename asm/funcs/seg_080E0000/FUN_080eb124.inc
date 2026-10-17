@ FUN_080eb124  entry 0x080eb124  size 50
.thumb
.org 0xeb124
FUN_080eb124:
	push {r4, lr}	@ 000eb124 10b5
.org 0xeb126
	adds r4, r0, #0	@ 000eb126 041c
.org 0xeb128
	ldrb r0, [r4, #9]	@ 000eb128 607a
.org 0xeb12a
	cmp r0, #3	@ 000eb12a 0328
.org 0xeb12c
	bne.n 0xeb150	@ 000eb12c 10d1
.org 0xeb12e
	adds r1, r4, #0	@ 000eb12e 211c
.org 0xeb130
	adds r1, #184	@ 000eb130 b831
.org 0xeb132
	ldrb r0, [r1, #0]	@ 000eb132 0878
.org 0xeb134
	cmp r0, #21	@ 000eb134 1528
.org 0xeb136
	beq.n 0xeb150	@ 000eb136 0bd0
.org 0xeb138
	movs r0, #21	@ 000eb138 1520
.org 0xeb13a
	strb r0, [r1, #0]	@ 000eb13a 0870
.org 0xeb13c
	lsls r0, r0, #8	@ 000eb13c 0002
.org 0xeb13e
	subs r1, #72	@ 000eb13e 4839
.org 0xeb140
	ldrb r1, [r1, #0]	@ 000eb140 0978
.org 0xeb142
	orrs r1, r0	@ 000eb142 0143
.org 0xeb144
	adds r0, r4, #0	@ 000eb144 201c
.org 0xeb146
	bl 0x1cf00	@ 000eb146 31f7dbfe
.org 0xeb14a
	adds r0, r4, #0	@ 000eb14a 201c
.org 0xeb14c
	bl 0x1cff0	@ 000eb14c 31f750ff
.org 0xeb150
	pop {r4}	@ 000eb150 10bc
.org 0xeb152
	pop {r0}	@ 000eb152 01bc
.org 0xeb154
	bx r0	@ 000eb154 0047
