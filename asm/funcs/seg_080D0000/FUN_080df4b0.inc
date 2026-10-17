@ FUN_080df4b0  entry 0x080df4b0  size 32
.thumb
.org 0xdf4b0
FUN_080df4b0:
	push {r4, lr}	@ 000df4b0 10b5
.org 0xdf4b2
	adds r4, r0, #0	@ 000df4b2 041c
.org 0xdf4b4
	ldr r1, [pc, #24]	@ 000df4b4 0649
.org 0xdf4b6
	ldrb r0, [r4, #17]	@ 000df4b6 607c
.org 0xdf4b8
	lsls r0, r0, #2	@ 000df4b8 8000
.org 0xdf4ba
	adds r0, r0, r1	@ 000df4ba 4018
.org 0xdf4bc
	ldr r1, [r0, #0]	@ 000df4bc 0168
.org 0xdf4be
	adds r0, r4, #0	@ 000df4be 201c
.org 0xdf4c0
	bl 0x128f80	@ 000df4c0 49f05efd
.org 0xdf4c4
	adds r0, r4, #0	@ 000df4c4 201c
.org 0xdf4c6
	bl 0x1cff0	@ 000df4c6 3df793fd
.org 0xdf4ca
	pop {r4}	@ 000df4ca 10bc
.org 0xdf4cc
	pop {r0}	@ 000df4cc 01bc
.org 0xdf4ce
	bx r0	@ 000df4ce 0047
