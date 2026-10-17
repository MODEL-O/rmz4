@ FUN_080540a4  entry 0x080540a4  size 142
.thumb
.org 0x540a4
FUN_080540a4:
	push {r4, lr}	@ 000540a4 10b5
.org 0x540a6
	adds r4, r0, #0	@ 000540a6 041c
.org 0x540a8
	ldrb r0, [r4, #15]	@ 000540a8 e07b
.org 0x540aa
	cmp r0, #0	@ 000540aa 0028
.org 0x540ac
	bne.n 0x540f2	@ 000540ac 21d1
.org 0x540ae
	movs r0, #89	@ 000540ae 5920
.org 0x540b0
	bl 0x2b10	@ 000540b0 aef72efd
.org 0x540b4
	adds r2, r4, #0	@ 000540b4 221c
.org 0x540b6
	adds r2, #196	@ 000540b6 c432
.org 0x540b8
	ldr r0, [r2, #0]	@ 000540b8 1068
.org 0x540ba
	adds r0, #184	@ 000540ba b830
.org 0x540bc
	movs r1, #1	@ 000540bc 0121
.org 0x540be
	strb r1, [r0, #0]	@ 000540be 0170
.org 0x540c0
	ldr r0, [r2, #0]	@ 000540c0 1068
.org 0x540c2
	adds r0, #188	@ 000540c2 bc30
.org 0x540c4
	movs r3, #32	@ 000540c4 2023
.org 0x540c6
	strh r3, [r0, #0]	@ 000540c6 0380
.org 0x540c8
	adds r2, #4	@ 000540c8 0432
.org 0x540ca
	ldr r0, [r2, #0]	@ 000540ca 1068
.org 0x540cc
	adds r0, #184	@ 000540cc b830
.org 0x540ce
	movs r1, #5	@ 000540ce 0521
.org 0x540d0
	strb r1, [r0, #0]	@ 000540d0 0170
.org 0x540d2
	ldr r0, [r2, #0]	@ 000540d2 1068
.org 0x540d4
	adds r0, #188	@ 000540d4 bc30
.org 0x540d6
	strh r3, [r0, #0]	@ 000540d6 0380
.org 0x540d8
	subs r2, #18	@ 000540d8 123a
.org 0x540da
	ldrb r1, [r2, #0]	@ 000540da 1178
.org 0x540dc
	movs r0, #4	@ 000540dc 0420
.org 0x540de
	orrs r0, r1	@ 000540de 0843
.org 0x540e0
	strb r0, [r2, #0]	@ 000540e0 1070
.org 0x540e2
	movs r1, #176	@ 000540e2 b021
.org 0x540e4
	lsls r1, r1, #6	@ 000540e4 8901
.org 0x540e6
	adds r0, r4, #0	@ 000540e6 201c
.org 0x540e8
	bl 0x1cf00	@ 000540e8 c8f70aff
.org 0x540ec
	ldrb r0, [r4, #15]	@ 000540ec e07b
.org 0x540ee
	adds r0, #1	@ 000540ee 0130
.org 0x540f0
	strb r0, [r4, #15]	@ 000540f0 e073
.org 0x540f2
	adds r0, r4, #0	@ 000540f2 201c
.org 0x540f4
	bl 0x1cff0	@ 000540f4 c8f77cff
.org 0x540f8
	adds r0, r4, #0	@ 000540f8 201c
.org 0x540fa
	bl 0x54fb0	@ 000540fa 00f059ff
.org 0x540fe
	adds r0, r4, #0	@ 000540fe 201c
.org 0x54100
	movs r1, #0	@ 00054100 0021
.org 0x54102
	bl 0x55068	@ 00054102 00f0b1ff
.org 0x54106
	adds r0, r4, #0	@ 00054106 201c
.org 0x54108
	adds r0, #196	@ 00054108 c430
.org 0x5410a
	ldr r0, [r0, #0]	@ 0005410a 0068
.org 0x5410c
	adds r0, #188	@ 0005410c bc30
.org 0x5410e
	movs r1, #0	@ 0005410e 0021
.org 0x54110
	ldrsh r0, [r0, r1]	@ 00054110 405e
.org 0x54112
	cmp r0, #0	@ 00054112 0028
.org 0x54114
	bne.n 0x5412c	@ 00054114 0ad1
.org 0x54116
	adds r0, r4, #0	@ 00054116 201c
.org 0x54118
	adds r0, #200	@ 00054118 c830
.org 0x5411a
	ldr r0, [r0, #0]	@ 0005411a 0068
.org 0x5411c
	adds r0, #188	@ 0005411c bc30
.org 0x5411e
	movs r2, #0	@ 0005411e 0022
.org 0x54120
	ldrsh r1, [r0, r2]	@ 00054120 815e
.org 0x54122
	cmp r1, #0	@ 00054122 0029
.org 0x54124
	bne.n 0x5412c	@ 00054124 02d1
.org 0x54126
	movs r0, #1	@ 00054126 0120
.org 0x54128
	strb r0, [r4, #14]	@ 00054128 a073
.org 0x5412a
	strb r1, [r4, #15]	@ 0005412a e173
.org 0x5412c
	pop {r4}	@ 0005412c 10bc
.org 0x5412e
	pop {r0}	@ 0005412e 01bc
.org 0x54130
	bx r0	@ 00054130 0047
