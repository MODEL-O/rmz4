@ FUN_080ff168  entry 0x080ff168  size 56
.thumb
.org 0xff168
FUN_080ff168:
	push {r4, r5, r6, r7, lr}	@ 000ff168 f0b5
.org 0xff16a
	adds r5, r0, #0	@ 000ff16a 051c
.org 0xff16c
	ldrb r0, [r5, #16]	@ 000ff16c 287c
.org 0xff16e
	cmp r0, #4	@ 000ff16e 0428
.org 0xff170
	bne.n 0xff1f8	@ 000ff170 42d1
.org 0xff172
	adds r7, r5, #0	@ 000ff172 2f1c
.org 0xff174
	adds r7, #84	@ 000ff174 5437
.org 0xff176
	ldr r0, [pc, #40]	@ 000ff176 0a48
.org 0xff178
	mov ip, r0	@ 000ff178 8446
.org 0xff17a
	ldrb r1, [r5, #10]	@ 000ff17a a97a
.org 0xff17c
	movs r2, #32	@ 000ff17c 2022
.org 0xff17e
	adds r0, r2, #0	@ 000ff17e 101c
.org 0xff180
	ands r0, r1	@ 000ff180 0840
.org 0xff182
	lsls r0, r0, #24	@ 000ff182 0006
.org 0xff184
	lsrs r0, r0, #24	@ 000ff184 000e
.org 0xff186
	negs r0, r0	@ 000ff186 4042
.org 0xff188
	asrs r3, r0, #31	@ 000ff188 c317
.org 0xff18a
	ands r3, r2	@ 000ff18a 1340
.org 0xff18c
	ldr r0, [pc, #20]	@ 000ff18c 0548
.org 0xff18e
	ldr r0, [r0, #0]	@ 000ff18e 0068
.org 0xff190
	ldr r1, [r5, #84]	@ 000ff190 696d
.org 0xff192
	ldr r0, [r0, #84]	@ 000ff192 406d
.org 0xff194
	adds r6, r7, #0	@ 000ff194 3e1c
.org 0xff196
	cmp r1, r0	@ 000ff196 8142
.org 0xff198
	blt.n 0xff1a8	@ 000ff198 06db
.org 0xff19a
	movs r4, #1	@ 000ff19a 0124
.org 0xff19c
	orrs r4, r3	@ 000ff19c 1c43
.org 0xff19e
	b.n 0xff1ac	@ 000ff19e 05e0
