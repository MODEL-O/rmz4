@ FUN_0801c79c  entry 0x0801c79c  size 46
.thumb
.org 0x1c79c
FUN_0801c79c:
	push {r4, r5, lr}	@ 0001c79c 30b5
.org 0x1c79e
	adds r4, r0, #0	@ 0001c79e 041c
.org 0x1c7a0
	bl 0x54b4	@ 0001c7a0 e8f788fe
.org 0x1c7a4
	ldr r0, [r4, #12]	@ 0001c7a4 e068
.org 0x1c7a6
	ldr r0, [r0, #4]	@ 0001c7a6 4068
.org 0x1c7a8
	str r0, [r4, #12]	@ 0001c7a8 e060
.org 0x1c7aa
	adds r1, r4, #0	@ 0001c7aa 211c
.org 0x1c7ac
	adds r1, #20	@ 0001c7ac 1431
.org 0x1c7ae
	cmp r0, r1	@ 0001c7ae 8842
.org 0x1c7b0
	beq.n 0x1c7c4	@ 0001c7b0 08d0
.org 0x1c7b2
	adds r5, r1, #0	@ 0001c7b2 0d1c
.org 0x1c7b4
	ldr r1, [r0, #20]	@ 0001c7b4 4169
.org 0x1c7b6
	bl 0x128f80	@ 0001c7b6 0cf1e3fb
.org 0x1c7ba
	ldr r0, [r4, #12]	@ 0001c7ba e068
.org 0x1c7bc
	ldr r0, [r0, #4]	@ 0001c7bc 4068
.org 0x1c7be
	str r0, [r4, #12]	@ 0001c7be e060
.org 0x1c7c0
	cmp r0, r5	@ 0001c7c0 a842
.org 0x1c7c2
	bne.n 0x1c7b4	@ 0001c7c2 f7d1
.org 0x1c7c4
	pop {r4, r5}	@ 0001c7c4 30bc
.org 0x1c7c6
	pop {r0}	@ 0001c7c6 01bc
.org 0x1c7c8
	bx r0	@ 0001c7c8 0047
