@ FUN_080ac894  entry 0x080ac894  size 86
.thumb
.org 0xac894
FUN_080ac894:
	push {r4, r5, lr}	@ 000ac894 30b5
.org 0xac896
	adds r4, r0, #0	@ 000ac896 041c
.org 0xac898
	ldr r5, [r4, #40]	@ 000ac898 a56a
.org 0xac89a
	ldrb r0, [r4, #15]	@ 000ac89a e07b
.org 0xac89c
	cmp r0, #0	@ 000ac89c 0028
.org 0xac89e
	bne.n 0xac8be	@ 000ac89e 0ed1
.org 0xac8a0
	ldrb r1, [r4, #10]	@ 000ac8a0 a17a
.org 0xac8a2
	movs r0, #1	@ 000ac8a2 0120
.org 0xac8a4
	orrs r0, r1	@ 000ac8a4 0843
.org 0xac8a6
	strb r0, [r4, #10]	@ 000ac8a6 a072
.org 0xac8a8
	adds r1, r4, #0	@ 000ac8a8 211c
.org 0xac8aa
	adds r1, #184	@ 000ac8aa b831
.org 0xac8ac
	movs r0, #1	@ 000ac8ac 0120
.org 0xac8ae
	strb r0, [r1, #0]	@ 000ac8ae 0870
.org 0xac8b0
	ldr r1, [pc, #56]	@ 000ac8b0 0e49
.org 0xac8b2
	adds r0, r4, #0	@ 000ac8b2 201c
.org 0xac8b4
	bl 0x1cf00	@ 000ac8b4 70f724fb
.org 0xac8b8
	ldrb r0, [r4, #15]	@ 000ac8b8 e07b
.org 0xac8ba
	adds r0, #1	@ 000ac8ba 0130
.org 0xac8bc
	strb r0, [r4, #15]	@ 000ac8bc e073
.org 0xac8be
	adds r0, r4, #0	@ 000ac8be 201c
.org 0xac8c0
	bl 0x1cff0	@ 000ac8c0 70f796fb
.org 0xac8c4
	ldr r0, [r5, #84]	@ 000ac8c4 686d
.org 0xac8c6
	ldr r1, [r5, #88]	@ 000ac8c6 a96d
.org 0xac8c8
	str r0, [r4, #84]	@ 000ac8c8 6065
.org 0xac8ca
	str r1, [r4, #88]	@ 000ac8ca a165
.org 0xac8cc
	adds r0, r4, #0	@ 000ac8cc 201c
.org 0xac8ce
	bl 0xacb5c	@ 000ac8ce 00f045f9
.org 0xac8d2
	adds r0, r4, #0	@ 000ac8d2 201c
.org 0xac8d4
	adds r0, #115	@ 000ac8d4 7330
.org 0xac8d6
	ldrb r0, [r0, #0]	@ 000ac8d6 0078
.org 0xac8d8
	cmp r0, #3	@ 000ac8d8 0328
.org 0xac8da
	bne.n 0xac8e4	@ 000ac8da 03d1
.org 0xac8dc
	movs r1, #0	@ 000ac8dc 0021
.org 0xac8de
	movs r0, #1	@ 000ac8de 0120
.org 0xac8e0
	strb r0, [r4, #14]	@ 000ac8e0 a073
.org 0xac8e2
	strb r1, [r4, #15]	@ 000ac8e2 e173
.org 0xac8e4
	pop {r4, r5}	@ 000ac8e4 30bc
.org 0xac8e6
	pop {r0}	@ 000ac8e6 01bc
.org 0xac8e8
	bx r0	@ 000ac8e8 0047
