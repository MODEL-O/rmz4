@ FUN_080c089c  entry 0x080c089c  size 64
.thumb
.org 0xc089c
FUN_080c089c:
	push {r4, lr}	@ 000c089c 10b5
.org 0xc089e
	sub sp, #4	@ 000c089e 81b0
.org 0xc08a0
	adds r4, r0, #0	@ 000c08a0 041c
.org 0xc08a2
	ldr r1, [pc, #56]	@ 000c08a2 0e49
.org 0xc08a4
	mov r0, sp	@ 000c08a4 6846
.org 0xc08a6
	movs r2, #2	@ 000c08a6 0222
.org 0xc08a8
	bl 0x129258	@ 000c08a8 68f0d6fc
.org 0xc08ac
	ldr r2, [r4, #40]	@ 000c08ac a26a
.org 0xc08ae
	ldrb r1, [r4, #17]	@ 000c08ae 617c
.org 0xc08b0
	ldrb r0, [r4, #15]	@ 000c08b0 e07b
.org 0xc08b2
	cmp r0, #0	@ 000c08b2 0028
.org 0xc08b4
	bne.n 0xc08d4	@ 000c08b4 0ed1
.org 0xc08b6
	adds r2, #180	@ 000c08b6 b432
.org 0xc08b8
	add r1, sp	@ 000c08b8 6944
.org 0xc08ba
	movs r0, #1	@ 000c08ba 0120
.org 0xc08bc
	ldrb r1, [r1, #0]	@ 000c08bc 0978
.org 0xc08be
	lsls r0, r1	@ 000c08be 8840
.org 0xc08c0
	ldrh r1, [r2, #0]	@ 000c08c0 1188
.org 0xc08c2
	orrs r0, r1	@ 000c08c2 0843
.org 0xc08c4
	strh r0, [r2, #0]	@ 000c08c4 1080
.org 0xc08c6
	ldrb r1, [r4, #10]	@ 000c08c6 a17a
.org 0xc08c8
	movs r0, #254	@ 000c08c8 fe20
.org 0xc08ca
	ands r0, r1	@ 000c08ca 0840
.org 0xc08cc
	strb r0, [r4, #10]	@ 000c08cc a072
.org 0xc08ce
	ldrb r0, [r4, #15]	@ 000c08ce e07b
.org 0xc08d0
	adds r0, #1	@ 000c08d0 0130
.org 0xc08d2
	strb r0, [r4, #15]	@ 000c08d2 e073
.org 0xc08d4
	add sp, #4	@ 000c08d4 01b0
.org 0xc08d6
	pop {r4}	@ 000c08d6 10bc
.org 0xc08d8
	pop {r0}	@ 000c08d8 01bc
.org 0xc08da
	bx r0	@ 000c08da 0047
