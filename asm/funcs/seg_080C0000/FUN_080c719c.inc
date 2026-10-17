@ FUN_080c719c  entry 0x080c719c  size 44
.thumb
.org 0xc719c
FUN_080c719c:
	push {r4, lr}	@ 000c719c 10b5
.org 0xc719e
	adds r1, r0, #0	@ 000c719e 011c
.org 0xc71a0
	ldr r0, [r1, #12]	@ 000c71a0 c868
.org 0xc71a2
	ldr r4, [r0, #44]	@ 000c71a2 c46a
.org 0xc71a4
	ldr r3, [r1, #44]	@ 000c71a4 cb6a
.org 0xc71a6
	ldrb r2, [r3, #13]	@ 000c71a6 5a7b
.org 0xc71a8
	cmp r2, #0	@ 000c71a8 002a
.org 0xc71aa
	bne.n 0xc71c2	@ 000c71aa 0ad1
.org 0xc71ac
	ldr r0, [r1, #20]	@ 000c71ac 4869
.org 0xc71ae
	movs r1, #4	@ 000c71ae 0421
.org 0xc71b0
	ands r0, r1	@ 000c71b0 0840
.org 0xc71b2
	cmp r0, #0	@ 000c71b2 0028
.org 0xc71b4
	beq.n 0xc71c2	@ 000c71b4 05d0
.org 0xc71b6
	movs r0, #8	@ 000c71b6 0820
.org 0xc71b8
	ldrsb r0, [r4, r0]	@ 000c71b8 2056
.org 0xc71ba
	cmp r0, #0	@ 000c71ba 0028
.org 0xc71bc
	bne.n 0xc71c2	@ 000c71bc 01d1
.org 0xc71be
	adds r0, r2, #1	@ 000c71be 501c
.org 0xc71c0
	strb r0, [r3, #13]	@ 000c71c0 5873
.org 0xc71c2
	pop {r4}	@ 000c71c2 10bc
.org 0xc71c4
	pop {r0}	@ 000c71c4 01bc
.org 0xc71c6
	bx r0	@ 000c71c6 0047
