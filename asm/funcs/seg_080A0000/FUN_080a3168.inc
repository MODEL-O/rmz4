@ FUN_080a3168  entry 0x080a3168  size 30
.thumb
.org 0xa3168
FUN_080a3168:
	push {lr}	@ 000a3168 00b5
.org 0xa316a
	adds r2, r0, #0	@ 000a316a 021c
.org 0xa316c
	ldr r0, [pc, #24]	@ 000a316c 0648
.org 0xa316e
	adds r1, r0, #0	@ 000a316e 011c
.org 0xa3170
	adds r1, #38	@ 000a3170 2631
.org 0xa3172
	ldrb r0, [r1, #0]	@ 000a3172 0878
.org 0xa3174
	cmp r0, #0	@ 000a3174 0028
.org 0xa3176
	beq.n 0xa317c	@ 000a3176 01d0
.org 0xa3178
	adds r0, #255	@ 000a3178 ff30
.org 0xa317a
	strb r0, [r1, #0]	@ 000a317a 0870
.org 0xa317c
	adds r0, r2, #0	@ 000a317c 101c
.org 0xa317e
	bl 0x7f8ec	@ 000a317e dcf7b5fb
.org 0xa3182
	pop {r0}	@ 000a3182 01bc
.org 0xa3184
	bx r0	@ 000a3184 0047
