@ FUN_080c19a0  entry 0x080c19a0  size 36
.thumb
.org 0xc19a0
FUN_080c19a0:
	push {r4, lr}	@ 000c19a0 10b5
.org 0xc19a2
	adds r3, r0, #0	@ 000c19a2 031c
.org 0xc19a4
	ldr r0, [r3, #40]	@ 000c19a4 986a
.org 0xc19a6
	adds r1, r0, #0	@ 000c19a6 011c
.org 0xc19a8
	adds r1, #202	@ 000c19a8 ca31
.org 0xc19aa
	ldrh r2, [r1, #0]	@ 000c19aa 0a88
.org 0xc19ac
	movs r4, #0	@ 000c19ac 0024
.org 0xc19ae
	ldrsh r0, [r1, r4]	@ 000c19ae 085f
.org 0xc19b0
	cmp r0, #0	@ 000c19b0 0028
.org 0xc19b2
	beq.n 0xc19b8	@ 000c19b2 01d0
.org 0xc19b4
	subs r0, r2, #1	@ 000c19b4 501e
.org 0xc19b6
	strh r0, [r1, #0]	@ 000c19b6 0880
.org 0xc19b8
	adds r0, r3, #0	@ 000c19b8 181c
.org 0xc19ba
	bl 0xbd3f8	@ 000c19ba fbf71dfd
.org 0xc19be
	pop {r4}	@ 000c19be 10bc
.org 0xc19c0
	pop {r0}	@ 000c19c0 01bc
.org 0xc19c2
	bx r0	@ 000c19c2 0047
