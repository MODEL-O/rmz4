@ FUN_0801fba8  entry 0x0801fba8  size 66
.thumb
.org 0x1fba8
FUN_0801fba8:
	push {r4, lr}	@ 0001fba8 10b5
.org 0x1fbaa
	adds r2, r0, #0	@ 0001fbaa 021c
.org 0x1fbac
	ldrb r0, [r2, #28]	@ 0001fbac 107f
.org 0x1fbae
	adds r1, r0, #0	@ 0001fbae 011c
.org 0x1fbb0
	cmp r1, #0	@ 0001fbb0 0029
.org 0x1fbb2
	bne.n 0x1fbba	@ 0001fbb2 02d1
.org 0x1fbb4
	strh r1, [r2, #34]	@ 0001fbb4 5184
.org 0x1fbb6
	adds r0, #1	@ 0001fbb6 0130
.org 0x1fbb8
	strb r0, [r2, #28]	@ 0001fbb8 1077
.org 0x1fbba
	ldr r1, [r2, #76]	@ 0001fbba d16c
.org 0x1fbbc
	ldr r0, [r2, #80]	@ 0001fbbc 106d
.org 0x1fbbe
	adds r4, r1, r0	@ 0001fbbe 0c18
.org 0x1fbc0
	str r4, [r2, #76]	@ 0001fbc0 d464
.org 0x1fbc2
	ldr r1, [r2, #84]	@ 0001fbc2 516d
.org 0x1fbc4
	ldr r0, [r2, #88]	@ 0001fbc4 906d
.org 0x1fbc6
	adds r1, r1, r0	@ 0001fbc6 0918
.org 0x1fbc8
	str r1, [r2, #84]	@ 0001fbc8 5165
.org 0x1fbca
	ldr r3, [r2, #72]	@ 0001fbca 936c
.org 0x1fbcc
	cmp r3, #0	@ 0001fbcc 002b
.org 0x1fbce
	beq.n 0x1fbdc	@ 0001fbce 05d0
.org 0x1fbd0
	ldr r0, [r3, #0]	@ 0001fbd0 1868
.org 0x1fbd2
	adds r0, r0, r4	@ 0001fbd2 0019
.org 0x1fbd4
	str r0, [r2, #48]	@ 0001fbd4 1063
.org 0x1fbd6
	ldr r0, [r3, #4]	@ 0001fbd6 5868
.org 0x1fbd8
	adds r0, r0, r1	@ 0001fbd8 4018
.org 0x1fbda
	str r0, [r2, #52]	@ 0001fbda 5063
.org 0x1fbdc
	ldrb r1, [r2, #25]	@ 0001fbdc 517e
.org 0x1fbde
	adds r0, r2, #0	@ 0001fbde 101c
.org 0x1fbe0
	bl 0x1f998	@ 0001fbe0 fff7dafe
.org 0x1fbe4
	pop {r4}	@ 0001fbe4 10bc
.org 0x1fbe6
	pop {r0}	@ 0001fbe6 01bc
.org 0x1fbe8
	bx r0	@ 0001fbe8 0047
