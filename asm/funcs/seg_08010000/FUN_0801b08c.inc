@ FUN_0801b08c  entry 0x0801b08c  size 94
.thumb
.org 0x1b08c
FUN_0801b08c:
	push {r4, lr}	@ 0001b08c 10b5
.org 0x1b08e
	adds r4, r0, #0	@ 0001b08e 041c
.org 0x1b090
	ldr r0, [r4, #104]	@ 0001b090 a06e
.org 0x1b092
	cmp r0, #0	@ 0001b092 0028
.org 0x1b094
	beq.n 0x1b09e	@ 0001b094 03d0
.org 0x1b096
	bl 0xe954c	@ 0001b096 cef059fa
.org 0x1b09a
	movs r0, #0	@ 0001b09a 0020
.org 0x1b09c
	str r0, [r4, #104]	@ 0001b09c a066
.org 0x1b09e
	ldr r0, [r4, #108]	@ 0001b09e e06e
.org 0x1b0a0
	cmp r0, #0	@ 0001b0a0 0028
.org 0x1b0a2
	beq.n 0x1b0ac	@ 0001b0a2 03d0
.org 0x1b0a4
	bl 0xe954c	@ 0001b0a4 cef052fa
.org 0x1b0a8
	movs r0, #0	@ 0001b0a8 0020
.org 0x1b0aa
	str r0, [r4, #108]	@ 0001b0aa e066
.org 0x1b0ac
	ldr r0, [r4, #112]	@ 0001b0ac 206f
.org 0x1b0ae
	cmp r0, #0	@ 0001b0ae 0028
.org 0x1b0b0
	beq.n 0x1b0ba	@ 0001b0b0 03d0
.org 0x1b0b2
	bl 0xe954c	@ 0001b0b2 cef04bfa
.org 0x1b0b6
	movs r0, #0	@ 0001b0b6 0020
.org 0x1b0b8
	str r0, [r4, #112]	@ 0001b0b8 2067
.org 0x1b0ba
	ldr r0, [r4, #116]	@ 0001b0ba 606f
.org 0x1b0bc
	cmp r0, #0	@ 0001b0bc 0028
.org 0x1b0be
	beq.n 0x1b0c8	@ 0001b0be 03d0
.org 0x1b0c0
	bl 0xe954c	@ 0001b0c0 cef044fa
.org 0x1b0c4
	movs r0, #0	@ 0001b0c4 0020
.org 0x1b0c6
	str r0, [r4, #116]	@ 0001b0c6 6067
.org 0x1b0c8
	ldr r0, [r4, #120]	@ 0001b0c8 a06f
.org 0x1b0ca
	cmp r0, #0	@ 0001b0ca 0028
.org 0x1b0cc
	beq.n 0x1b0d6	@ 0001b0cc 03d0
.org 0x1b0ce
	bl 0xe954c	@ 0001b0ce cef03dfa
.org 0x1b0d2
	movs r0, #0	@ 0001b0d2 0020
.org 0x1b0d4
	str r0, [r4, #120]	@ 0001b0d4 a067
.org 0x1b0d6
	ldr r0, [r4, #124]	@ 0001b0d6 e06f
.org 0x1b0d8
	cmp r0, #0	@ 0001b0d8 0028
.org 0x1b0da
	beq.n 0x1b0e4	@ 0001b0da 03d0
.org 0x1b0dc
	bl 0xe954c	@ 0001b0dc cef036fa
.org 0x1b0e0
	movs r0, #0	@ 0001b0e0 0020
.org 0x1b0e2
	str r0, [r4, #124]	@ 0001b0e2 e067
.org 0x1b0e4
	pop {r4}	@ 0001b0e4 10bc
.org 0x1b0e6
	pop {r0}	@ 0001b0e6 01bc
.org 0x1b0e8
	bx r0	@ 0001b0e8 0047
