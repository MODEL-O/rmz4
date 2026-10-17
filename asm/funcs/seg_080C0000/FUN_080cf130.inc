@ FUN_080cf130  entry 0x080cf130  size 66
.thumb
.org 0xcf130
FUN_080cf130:
	push {r4, r5, lr}	@ 000cf130 30b5
.org 0xcf132
	adds r5, r0, #0	@ 000cf132 051c
.org 0xcf134
	ldr r4, [r5, #40]	@ 000cf134 ac6a
.org 0xcf136
	bl 0x1cff0	@ 000cf136 4df75bff
.org 0xcf13a
	ldr r0, [r5, #84]	@ 000cf13a 686d
.org 0xcf13c
	ldr r1, [r5, #88]	@ 000cf13c a96d
.org 0xcf13e
	bl 0x8534	@ 000cf13e 39f7f9f9
.org 0xcf142
	str r0, [r5, #88]	@ 000cf142 a865
.org 0xcf144
	ldrb r0, [r4, #30]	@ 000cf144 a07f
.org 0xcf146
	lsls r0, r0, #8	@ 000cf146 0002
.org 0xcf148
	adds r4, #112	@ 000cf148 7034
.org 0xcf14a
	ldrb r1, [r4, #0]	@ 000cf14a 2178
.org 0xcf14c
	orrs r0, r1	@ 000cf14c 0843
.org 0xcf14e
	ldr r1, [pc, #36]	@ 000cf14e 0949
.org 0xcf150
	cmp r0, r1	@ 000cf150 8842
.org 0xcf152
	beq.n 0xcf16c	@ 000cf152 0bd0
.org 0xcf154
	ldr r1, [pc, #32]	@ 000cf154 0849
.org 0xcf156
	ldrb r0, [r5, #9]	@ 000cf156 687a
.org 0xcf158
	lsls r0, r0, #2	@ 000cf158 8000
.org 0xcf15a
	adds r0, r0, r1	@ 000cf15a 4018
.org 0xcf15c
	movs r1, #2	@ 000cf15c 0221
.org 0xcf15e
	str r1, [r5, #12]	@ 000cf15e e960
.org 0xcf160
	ldr r0, [r0, #0]	@ 000cf160 0068
.org 0xcf162
	ldr r0, [r0, #8]	@ 000cf162 8068
.org 0xcf164
	str r0, [r5, #20]	@ 000cf164 6861
.org 0xcf166
	adds r0, r5, #0	@ 000cf166 281c
.org 0xcf168
	bl 0xcef3c	@ 000cf168 fff7e8fe
.org 0xcf16c
	pop {r4, r5}	@ 000cf16c 30bc
.org 0xcf16e
	pop {r0}	@ 000cf16e 01bc
.org 0xcf170
	bx r0	@ 000cf170 0047
