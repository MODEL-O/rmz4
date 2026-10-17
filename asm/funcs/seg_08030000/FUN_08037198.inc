@ FUN_08037198  entry 0x08037198  size 114
.thumb
.org 0x37198
FUN_08037198:
	push {r4, r5, lr}	@ 00037198 30b5
.org 0x3719a
	adds r4, r0, #0	@ 0003719a 041c
.org 0x3719c
	movs r0, #129	@ 0003719c 8120
.org 0x3719e
	lsls r0, r0, #1	@ 0003719e 4000
.org 0x371a0
	adds r5, r4, r0	@ 000371a0 2518
.org 0x371a2
	ldrb r0, [r5, #0]	@ 000371a2 2878
.org 0x371a4
	cmp r0, #0	@ 000371a4 0028
.org 0x371a6
	bne.n 0x371b4	@ 000371a6 05d1
.org 0x371a8
	movs r1, #224	@ 000371a8 e021
.org 0x371aa
	lsls r1, r1, #5	@ 000371aa 4901
.org 0x371ac
	adds r0, r4, #0	@ 000371ac 201c
.org 0x371ae
	bl 0x1cf00	@ 000371ae e5f7a7fe
.org 0x371b2
	b.n 0x371da	@ 000371b2 12e0
.org 0x371b4
	movs r1, #224	@ 000371b4 e021
.org 0x371b6
	lsls r1, r1, #5	@ 000371b6 4901
.org 0x371b8
	adds r0, r4, #0	@ 000371b8 201c
.org 0x371ba
	bl 0x3a3b0	@ 000371ba 03f0f9f8
.org 0x371be
	ldrb r0, [r5, #0]	@ 000371be 2878
.org 0x371c0
	cmp r0, #1	@ 000371c0 0128
.org 0x371c2
	bne.n 0x371e2	@ 000371c2 0ed1
.org 0x371c4
	adds r0, r4, #0	@ 000371c4 201c
.org 0x371c6
	adds r0, #114	@ 000371c6 7230
.org 0x371c8
	ldrb r0, [r0, #0]	@ 000371c8 0078
.org 0x371ca
	lsls r0, r0, #24	@ 000371ca 0006
.org 0x371cc
	asrs r0, r0, #24	@ 000371cc 0016
.org 0x371ce
	cmp r0, #1	@ 000371ce 0128
.org 0x371d0
	bgt.n 0x37204	@ 000371d0 18dc
.org 0x371d2
	adds r0, r4, #0	@ 000371d2 201c
.org 0x371d4
	movs r1, #6	@ 000371d4 0621
.org 0x371d6
	bl 0x3c464	@ 000371d6 05f045f9
.org 0x371da
	ldrb r0, [r5, #0]	@ 000371da 2878
.org 0x371dc
	adds r0, #1	@ 000371dc 0130
.org 0x371de
	strb r0, [r5, #0]	@ 000371de 2870
.org 0x371e0
	b.n 0x37204	@ 000371e0 10e0
.org 0x371e2
	adds r0, r4, #0	@ 000371e2 201c
.org 0x371e4
	adds r0, #115	@ 000371e4 7330
.org 0x371e6
	ldrb r0, [r0, #0]	@ 000371e6 0078
.org 0x371e8
	cmp r0, #3	@ 000371e8 0328
.org 0x371ea
	bne.n 0x37204	@ 000371ea 0bd1
.org 0x371ec
	movs r1, #160	@ 000371ec a021
.org 0x371ee
	lsls r1, r1, #3	@ 000371ee c900
.org 0x371f0
	adds r0, r4, #0	@ 000371f0 201c
.org 0x371f2
	movs r2, #4	@ 000371f2 0422
.org 0x371f4
	movs r3, #1	@ 000371f4 0123
.org 0x371f6
	bl 0x1cfc8	@ 000371f6 e5f7e7fe
.org 0x371fa
	movs r0, #128	@ 000371fa 8020
.org 0x371fc
	lsls r0, r0, #1	@ 000371fc 4000
.org 0x371fe
	adds r1, r4, r0	@ 000371fe 2118
.org 0x37200
	movs r0, #0	@ 00037200 0020
.org 0x37202
	strb r0, [r1, #0]	@ 00037202 0870
.org 0x37204
	pop {r4, r5}	@ 00037204 30bc
.org 0x37206
	pop {r0}	@ 00037206 01bc
.org 0x37208
	bx r0	@ 00037208 0047
