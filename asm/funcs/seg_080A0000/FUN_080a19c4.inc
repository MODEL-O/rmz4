@ FUN_080a19c4  entry 0x080a19c4  size 30
.thumb
.org 0xa19c4
FUN_080a19c4:
	push {lr}	@ 000a19c4 00b5
.org 0xa19c6
	adds r2, r0, #0	@ 000a19c6 021c
.org 0xa19c8
	ldr r0, [pc, #24]	@ 000a19c8 0648
.org 0xa19ca
	adds r1, r0, #0	@ 000a19ca 011c
.org 0xa19cc
	adds r1, #38	@ 000a19cc 2631
.org 0xa19ce
	ldrb r0, [r1, #0]	@ 000a19ce 0878
.org 0xa19d0
	cmp r0, #0	@ 000a19d0 0028
.org 0xa19d2
	beq.n 0xa19d8	@ 000a19d2 01d0
.org 0xa19d4
	adds r0, #255	@ 000a19d4 ff30
.org 0xa19d6
	strb r0, [r1, #0]	@ 000a19d6 0870
.org 0xa19d8
	adds r0, r2, #0	@ 000a19d8 101c
.org 0xa19da
	bl 0x7f8ec	@ 000a19da ddf787ff
.org 0xa19de
	pop {r0}	@ 000a19de 01bc
.org 0xa19e0
	bx r0	@ 000a19e0 0047
