@ FUN_080725cc  entry 0x080725cc  size 30
.thumb
.org 0x725cc
FUN_080725cc:
	push {r4, lr}	@ 000725cc 10b5
.org 0x725ce
	adds r4, r0, #0	@ 000725ce 041c
.org 0x725d0
	bl 0x73bcc	@ 000725d0 01f0fcfa
.org 0x725d4
	ldr r1, [pc, #20]	@ 000725d4 0549
.org 0x725d6
	ldrb r0, [r4, #13]	@ 000725d6 607b
.org 0x725d8
	lsls r0, r0, #2	@ 000725d8 8000
.org 0x725da
	adds r0, r0, r1	@ 000725da 4018
.org 0x725dc
	ldr r1, [r0, #0]	@ 000725dc 0168
.org 0x725de
	adds r0, r4, #0	@ 000725de 201c
.org 0x725e0
	bl 0x128f80	@ 000725e0 b6f0cefc
.org 0x725e4
	pop {r4}	@ 000725e4 10bc
.org 0x725e6
	pop {r0}	@ 000725e6 01bc
.org 0x725e8
	bx r0	@ 000725e8 0047
