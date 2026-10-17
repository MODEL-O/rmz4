@ FUN_0801cbd0  entry 0x0801cbd0  size 80
.thumb
.org 0x1cbd0
FUN_0801cbd0:
	push {r4, r5, r6, r7, lr}	@ 0001cbd0 f0b5
.org 0x1cbd2
	adds r4, r0, #0	@ 0001cbd2 041c
.org 0x1cbd4
	lsls r1, r1, #24	@ 0001cbd4 0906
.org 0x1cbd6
	lsrs r6, r1, #24	@ 0001cbd6 0e0e
.org 0x1cbd8
	movs r5, #0	@ 0001cbd8 0025
.org 0x1cbda
	movs r0, #8	@ 0001cbda 0820
.org 0x1cbdc
	ldrsh r1, [r4, r0]	@ 0001cbdc 215e
.org 0x1cbde
	movs r2, #10	@ 0001cbde 0a22
.org 0x1cbe0
	ldrsh r0, [r4, r2]	@ 0001cbe0 a05e
.org 0x1cbe2
	cmp r1, r0	@ 0001cbe2 8142
.org 0x1cbe4
	bne.n 0x1cbea	@ 0001cbe4 01d1
.org 0x1cbe6
	movs r0, #0	@ 0001cbe6 0020
.org 0x1cbe8
	b.n 0x1cc1a	@ 0001cbe8 17e0
.org 0x1cbea
	ldr r7, [r4, #12]	@ 0001cbea e768
.org 0x1cbec
	adds r0, r4, #0	@ 0001cbec 201c
.org 0x1cbee
	bl 0x54c4	@ 0001cbee e8f769fc
.org 0x1cbf2
	ldr r0, [r4, #12]	@ 0001cbf2 e068
.org 0x1cbf4
	ldr r0, [r0, #4]	@ 0001cbf4 4068
.org 0x1cbf6
	str r0, [r4, #12]	@ 0001cbf6 e060
.org 0x1cbf8
	adds r1, r4, #0	@ 0001cbf8 211c
.org 0x1cbfa
	adds r1, #20	@ 0001cbfa 1431
.org 0x1cbfc
	cmp r0, r1	@ 0001cbfc 8842
.org 0x1cbfe
	beq.n 0x1cc16	@ 0001cbfe 0ad0
.org 0x1cc00
	ldrb r0, [r0, #9]	@ 0001cc00 407a
.org 0x1cc02
	cmp r0, r6	@ 0001cc02 b042
.org 0x1cc04
	bne.n 0x1cc0c	@ 0001cc04 02d1
.org 0x1cc06
	adds r0, r5, #1	@ 0001cc06 681c
.org 0x1cc08
	lsls r0, r0, #16	@ 0001cc08 0004
.org 0x1cc0a
	lsrs r5, r0, #16	@ 0001cc0a 050c
.org 0x1cc0c
	ldr r0, [r4, #12]	@ 0001cc0c e068
.org 0x1cc0e
	ldr r0, [r0, #4]	@ 0001cc0e 4068
.org 0x1cc10
	str r0, [r4, #12]	@ 0001cc10 e060
.org 0x1cc12
	cmp r0, r1	@ 0001cc12 8842
.org 0x1cc14
	bne.n 0x1cc00	@ 0001cc14 f4d1
.org 0x1cc16
	str r7, [r4, #12]	@ 0001cc16 e760
.org 0x1cc18
	adds r0, r5, #0	@ 0001cc18 281c
.org 0x1cc1a
	pop {r4, r5, r6, r7}	@ 0001cc1a f0bc
.org 0x1cc1c
	pop {r1}	@ 0001cc1c 02bc
.org 0x1cc1e
	bx r1	@ 0001cc1e 0847
