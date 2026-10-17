@ FUN_08090b68  entry 0x08090b68  size 134
.thumb
.org 0x90b68
FUN_08090b68:
	push {r4, r5, r6, lr}	@ 00090b68 70b5
.org 0x90b6a
	adds r5, r0, #0	@ 00090b6a 051c
.org 0x90b6c
	ldr r0, [r5, #40]	@ 00090b6c a86a
.org 0x90b6e
	ldrb r4, [r0, #10]	@ 00090b6e 847a
.org 0x90b70
	lsrs r4, r4, #4	@ 00090b70 2409
.org 0x90b72
	movs r2, #1	@ 00090b72 0122
.org 0x90b74
	ands r4, r2	@ 00090b74 1440
.org 0x90b76
	ldr r1, [pc, #48]	@ 00090b76 0c49
.org 0x90b78
	ldrb r0, [r5, #9]	@ 00090b78 687a
.org 0x90b7a
	lsls r0, r0, #2	@ 00090b7a 8000
.org 0x90b7c
	adds r0, r0, r1	@ 00090b7c 4018
.org 0x90b7e
	str r2, [r5, #12]	@ 00090b7e ea60
.org 0x90b80
	ldr r0, [r0, #0]	@ 00090b80 0068
.org 0x90b82
	ldr r0, [r0, #4]	@ 00090b82 4068
.org 0x90b84
	str r0, [r5, #20]	@ 00090b84 6861
.org 0x90b86
	ldrb r1, [r5, #10]	@ 00090b86 a97a
.org 0x90b88
	movs r0, #1	@ 00090b88 0120
.org 0x90b8a
	movs r6, #0	@ 00090b8a 0026
.org 0x90b8c
	orrs r0, r1	@ 00090b8c 0843
.org 0x90b8e
	movs r1, #2	@ 00090b8e 0221
.org 0x90b90
	orrs r0, r1	@ 00090b90 0843
.org 0x90b92
	strb r0, [r5, #10]	@ 00090b92 a872
.org 0x90b94
	adds r0, r5, #0	@ 00090b94 281c
.org 0x90b96
	bl 0x1cc9c	@ 00090b96 8cf781f8
.org 0x90b9a
	cmp r4, #0	@ 00090b9a 002c
.org 0x90b9c
	beq.n 0x90bac	@ 00090b9c 06d0
.org 0x90b9e
	ldrb r0, [r5, #10]	@ 00090b9e a87a
.org 0x90ba0
	movs r1, #16	@ 00090ba0 1021
.org 0x90ba2
	orrs r0, r1	@ 00090ba2 0843
.org 0x90ba4
	b.n 0x90bb2	@ 00090ba4 05e0
.org 0x90ba6
	.byte 0x00	@ 00090ba6 data
.org 0x90ba7
	.byte 0x00	@ 00090ba7 data
.org 0x90ba8
	.byte 0x40,0xdb,0x85,0x08	@ 00090ba8 data
.org 0x90bac
	ldrb r1, [r5, #10]	@ 00090bac a97a
.org 0x90bae
	movs r0, #239	@ 00090bae ef20
.org 0x90bb0
	ands r0, r1	@ 00090bb0 0840
.org 0x90bb2
	strb r0, [r5, #10]	@ 00090bb2 a872
.org 0x90bb4
	adds r1, r4, #0	@ 00090bb4 211c
.org 0x90bb6
	adds r0, r5, #0	@ 00090bb6 281c
.org 0x90bb8
	adds r0, #76	@ 00090bb8 4c30
.org 0x90bba
	strb r1, [r0, #0]	@ 00090bba 0170
.org 0x90bbc
	adds r3, r5, #0	@ 00090bbc 2b1c
.org 0x90bbe
	adds r3, #74	@ 00090bbe 4a33
.org 0x90bc0
	lsls r1, r1, #4	@ 00090bc0 0901
.org 0x90bc2
	ldrb r2, [r3, #0]	@ 00090bc2 1a78
.org 0x90bc4
	movs r0, #17	@ 00090bc4 1120
.org 0x90bc6
	negs r0, r0	@ 00090bc6 4042
.org 0x90bc8
	ands r0, r2	@ 00090bc8 1040
.org 0x90bca
	orrs r0, r1	@ 00090bca 0843
.org 0x90bcc
	strb r0, [r3, #0]	@ 00090bcc 1870
.org 0x90bce
	ldr r1, [pc, #36]	@ 00090bce 0949
.org 0x90bd0
	adds r0, r5, #0	@ 00090bd0 281c
.org 0x90bd2
	bl 0x1cf00	@ 00090bd2 8cf795f9
.org 0x90bd6
	movs r4, #0	@ 00090bd6 0024
.org 0x90bd8
	lsls r1, r4, #24	@ 00090bd8 2106
.org 0x90bda
	lsrs r1, r1, #24	@ 00090bda 090e
.org 0x90bdc
	adds r0, r5, #0	@ 00090bdc 281c
.org 0x90bde
	bl 0x90af4	@ 00090bde fff789ff
.org 0x90be2
	adds r4, #1	@ 00090be2 0134
.org 0x90be4
	cmp r4, #1	@ 00090be4 012c
.org 0x90be6
	ble.n 0x90bd8	@ 00090be6 f7dd
.org 0x90be8
	adds r0, r5, #0	@ 00090be8 281c
.org 0x90bea
	bl 0x90c78	@ 00090bea 00f045f8
