@ FUN_08031d7c  entry 0x08031d7c  size 62
.thumb
.org 0x31d7c
FUN_08031d7c:
	push {r4, lr}	@ 00031d7c 10b5
.org 0x31d7e
	adds r4, r0, #0	@ 00031d7e 041c
.org 0x31d80
	movs r1, #160	@ 00031d80 a021
.org 0x31d82
	lsls r1, r1, #3	@ 00031d82 c900
.org 0x31d84
	bl 0x1cf00	@ 00031d84 ebf7bcf8
.org 0x31d88
	adds r3, r4, #0	@ 00031d88 231c
.org 0x31d8a
	adds r3, #180	@ 00031d8a b433
.org 0x31d8c
	ldr r2, [r3, #84]	@ 00031d8c 5a6d
.org 0x31d8e
	cmp r2, #0	@ 00031d8e 002a
.org 0x31d90
	beq.n 0x31d9a	@ 00031d90 03d0
.org 0x31d92
	movs r1, #0	@ 00031d92 0021
.org 0x31d94
	movs r0, #1	@ 00031d94 0120
.org 0x31d96
	strb r0, [r2, #17]	@ 00031d96 5074
.org 0x31d98
	str r1, [r3, #84]	@ 00031d98 5965
.org 0x31d9a
	movs r0, #0	@ 00031d9a 0020
.org 0x31d9c
	str r0, [r4, #92]	@ 00031d9c e065
.org 0x31d9e
	str r0, [r4, #96]	@ 00031d9e 2066
.org 0x31da0
	movs r0, #134	@ 00031da0 8620
.org 0x31da2
	lsls r0, r0, #1	@ 00031da2 4000
.org 0x31da4
	adds r1, r4, r0	@ 00031da4 2118
.org 0x31da6
	movs r0, #8	@ 00031da6 0820
.org 0x31da8
	strb r0, [r1, #0]	@ 00031da8 0870
.org 0x31daa
	movs r0, #1	@ 00031daa 0120
.org 0x31dac
	strb r0, [r4, #14]	@ 00031dac a073
.org 0x31dae
	adds r0, r4, #0	@ 00031dae 201c
.org 0x31db0
	bl 0x31dbc	@ 00031db0 00f004f8
.org 0x31db4
	pop {r4}	@ 00031db4 10bc
.org 0x31db6
	pop {r0}	@ 00031db6 01bc
.org 0x31db8
	bx r0	@ 00031db8 0047
