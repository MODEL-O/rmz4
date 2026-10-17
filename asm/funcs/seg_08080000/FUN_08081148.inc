@ FUN_08081148  entry 0x08081148  size 56
.thumb
.org 0x81148
FUN_08081148:
	push {r4, lr}	@ 00081148 10b5
.org 0x8114a
	adds r1, r0, #0	@ 0008114a 011c
.org 0x8114c
	ldr r2, [r1, #20]	@ 0008114c 4a69
.org 0x8114e
	movs r0, #1	@ 0008114e 0120
.org 0x81150
	ands r0, r2	@ 00081150 1040
.org 0x81152
	cmp r0, #0	@ 00081152 0028
.org 0x81154
	beq.n 0x8117a	@ 00081154 11d0
.org 0x81156
	ldr r4, [r1, #44]	@ 00081156 cc6a
.org 0x81158
	ldr r0, [pc, #36]	@ 00081158 0948
.org 0x8115a
	ldr r1, [r0, #0]	@ 0008115a 0168
.org 0x8115c
	movs r0, #128	@ 0008115c 8020
.org 0x8115e
	lsls r0, r0, #10	@ 0008115e 8002
.org 0x81160
	ands r2, r0	@ 00081160 0240
.org 0x81162
	cmp r2, #0	@ 00081162 002a
.org 0x81164
	beq.n 0x8117a	@ 00081164 09d0
.org 0x81166
	cmp r1, #0	@ 00081166 0029
.org 0x81168
	beq.n 0x8117a	@ 00081168 07d0
.org 0x8116a
	adds r0, r1, #0	@ 0008116a 081c
.org 0x8116c
	movs r1, #6	@ 0008116c 0621
.org 0x8116e
	movs r2, #0	@ 0008116e 0022
.org 0x81170
	bl 0x3a578	@ 00081170 b9f702fa
.org 0x81174
	adds r1, r4, #0	@ 00081174 211c
.org 0x81176
	adds r1, #183	@ 00081176 b731
.org 0x81178
	strb r0, [r1, #0]	@ 00081178 0870
.org 0x8117a
	pop {r4}	@ 0008117a 10bc
.org 0x8117c
	pop {r0}	@ 0008117c 01bc
.org 0x8117e
	bx r0	@ 0008117e 0047
