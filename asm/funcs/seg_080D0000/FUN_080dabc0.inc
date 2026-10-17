@ FUN_080dabc0  entry 0x080dabc0  size 82
.thumb
.org 0xdabc0
FUN_080dabc0:
	push {r4, lr}	@ 000dabc0 10b5
.org 0xdabc2
	adds r4, r0, #0	@ 000dabc2 041c
.org 0xdabc4
	bl 0x1cff0	@ 000dabc4 42f714fa
.org 0xdabc8
	ldr r0, [r4, #84]	@ 000dabc8 606d
.org 0xdabca
	ldr r1, [r4, #92]	@ 000dabca e16d
.org 0xdabcc
	adds r0, r0, r1	@ 000dabcc 4018
.org 0xdabce
	str r0, [r4, #84]	@ 000dabce 6065
.org 0xdabd0
	ldr r0, [r4, #96]	@ 000dabd0 206e
.org 0xdabd2
	adds r0, #32	@ 000dabd2 2030
.org 0xdabd4
	str r0, [r4, #96]	@ 000dabd4 2066
.org 0xdabd6
	movs r1, #224	@ 000dabd6 e021
.org 0xdabd8
	lsls r1, r1, #2	@ 000dabd8 8900
.org 0xdabda
	cmp r0, r1	@ 000dabda 8842
.org 0xdabdc
	ble.n 0xdabe0	@ 000dabdc 00dd
.org 0xdabde
	str r1, [r4, #96]	@ 000dabde 2166
.org 0xdabe0
	ldr r0, [r4, #88]	@ 000dabe0 a06d
.org 0xdabe2
	ldr r1, [r4, #96]	@ 000dabe2 216e
.org 0xdabe4
	adds r0, r0, r1	@ 000dabe4 4018
.org 0xdabe6
	str r0, [r4, #88]	@ 000dabe6 a065
.org 0xdabe8
	ldrb r0, [r4, #18]	@ 000dabe8 a07c
.org 0xdabea
	subs r0, #1	@ 000dabea 0138
.org 0xdabec
	strb r0, [r4, #18]	@ 000dabec a074
.org 0xdabee
	lsls r0, r0, #24	@ 000dabee 0006
.org 0xdabf0
	cmp r0, #0	@ 000dabf0 0028
.org 0xdabf2
	bne.n 0xdac0c	@ 000dabf2 0bd1
.org 0xdabf4
	ldr r1, [pc, #28]	@ 000dabf4 0749
.org 0xdabf6
	ldrb r0, [r4, #9]	@ 000dabf6 607a
.org 0xdabf8
	lsls r0, r0, #2	@ 000dabf8 8000
.org 0xdabfa
	adds r0, r0, r1	@ 000dabfa 4018
.org 0xdabfc
	movs r1, #2	@ 000dabfc 0221
.org 0xdabfe
	str r1, [r4, #12]	@ 000dabfe e160
.org 0xdac00
	ldr r0, [r0, #0]	@ 000dac00 0068
.org 0xdac02
	ldr r0, [r0, #8]	@ 000dac02 8068
.org 0xdac04
	str r0, [r4, #20]	@ 000dac04 6061
.org 0xdac06
	adds r0, r4, #0	@ 000dac06 201c
.org 0xdac08
	bl 0xdac18	@ 000dac08 00f006f8
.org 0xdac0c
	pop {r4}	@ 000dac0c 10bc
.org 0xdac0e
	pop {r0}	@ 000dac0e 01bc
.org 0xdac10
	bx r0	@ 000dac10 0047
