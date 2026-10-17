@ FUN_080cb130  entry 0x080cb130  size 64
.thumb
.org 0xcb130
FUN_080cb130:
	push {lr}	@ 000cb130 00b5
.org 0xcb132
	adds r2, r0, #0	@ 000cb132 021c
.org 0xcb134
	adds r0, #140	@ 000cb134 8c30
.org 0xcb136
	ldr r0, [r0, #0]	@ 000cb136 0068
.org 0xcb138
	movs r1, #128	@ 000cb138 8021
.org 0xcb13a
	lsls r1, r1, #2	@ 000cb13a 8900
.org 0xcb13c
	ands r0, r1	@ 000cb13c 0840
.org 0xcb13e
	cmp r0, #0	@ 000cb13e 0028
.org 0xcb140
	beq.n 0xcb160	@ 000cb140 0ed0
.org 0xcb142
	ldr r1, [pc, #24]	@ 000cb142 0649
.org 0xcb144
	ldrb r0, [r2, #9]	@ 000cb144 507a
.org 0xcb146
	lsls r0, r0, #2	@ 000cb146 8000
.org 0xcb148
	adds r0, r0, r1	@ 000cb148 4018
.org 0xcb14a
	movs r1, #2	@ 000cb14a 0221
.org 0xcb14c
	str r1, [r2, #12]	@ 000cb14c d160
.org 0xcb14e
	ldr r0, [r0, #0]	@ 000cb14e 0068
.org 0xcb150
	ldr r0, [r0, #8]	@ 000cb150 8068
.org 0xcb152
	str r0, [r2, #20]	@ 000cb152 5061
.org 0xcb154
	adds r0, r2, #0	@ 000cb154 101c
.org 0xcb156
	bl 0xcb178	@ 000cb156 00f00ff8
.org 0xcb15a
	b.n 0xcb170	@ 000cb15a 09e0
.org 0xcb15c
	.byte 0xf4,0x49,0x86,0x08	@ 000cb15c data
.org 0xcb160
	ldr r0, [pc, #16]	@ 000cb160 0448
.org 0xcb162
	ldrb r1, [r2, #16]	@ 000cb162 117c
.org 0xcb164
	lsls r1, r1, #2	@ 000cb164 8900
.org 0xcb166
	adds r1, r1, r0	@ 000cb166 0918
.org 0xcb168
	ldr r1, [r1, #0]	@ 000cb168 0968
.org 0xcb16a
	adds r0, r2, #0	@ 000cb16a 101c
.org 0xcb16c
	bl 0x128f80	@ 000cb16c 5df008ff
