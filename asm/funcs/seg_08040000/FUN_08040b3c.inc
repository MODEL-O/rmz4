@ FUN_08040b3c  entry 0x08040b3c  size 116
.thumb
.org 0x40b3c
FUN_08040b3c:
	push {r4, lr}	@ 00040b3c 10b5
.org 0x40b3e
	adds r3, r0, #0	@ 00040b3e 031c
.org 0x40b40
	ldr r1, [r3, #40]	@ 00040b40 996a
.org 0x40b42
	ldrb r0, [r3, #16]	@ 00040b42 187c
.org 0x40b44
	cmp r0, #1	@ 00040b44 0128
.org 0x40b46
	bne.n 0x40baa	@ 00040b46 30d1
.org 0x40b48
	adds r4, r1, #0	@ 00040b48 0c1c
.org 0x40b4a
	adds r4, #180	@ 00040b4a b434
.org 0x40b4c
	movs r2, #173	@ 00040b4c ad22
.org 0x40b4e
	lsls r2, r2, #1	@ 00040b4e 5200
.org 0x40b50
	adds r0, r1, r2	@ 00040b50 8818
.org 0x40b52
	ldrh r1, [r0, #0]	@ 00040b52 0188
.org 0x40b54
	movs r0, #32	@ 00040b54 2020
.org 0x40b56
	ands r0, r1	@ 00040b56 0840
.org 0x40b58
	lsls r0, r0, #16	@ 00040b58 0004
.org 0x40b5a
	lsrs r2, r0, #16	@ 00040b5a 020c
.org 0x40b5c
	cmp r2, #0	@ 00040b5c 002a
.org 0x40b5e
	beq.n 0x40b6a	@ 00040b5e 04d0
.org 0x40b60
	ldrb r1, [r3, #10]	@ 00040b60 997a
.org 0x40b62
	movs r0, #254	@ 00040b62 fe20
.org 0x40b64
	ands r0, r1	@ 00040b64 0840
.org 0x40b66
	movs r2, #0	@ 00040b66 0022
.org 0x40b68
	b.n 0x40b7c	@ 00040b68 08e0
.org 0x40b6a
	ldrb r0, [r4, #12]	@ 00040b6a 207b
.org 0x40b6c
	cmp r0, #1	@ 00040b6c 0128
.org 0x40b6e
	bhi.n 0x40baa	@ 00040b6e 1cd8
.org 0x40b70
	ldrb r0, [r4, #13]	@ 00040b70 607b
.org 0x40b72
	cmp r0, #1	@ 00040b72 0128
.org 0x40b74
	bhi.n 0x40baa	@ 00040b74 19d8
.org 0x40b76
	ldrb r1, [r3, #10]	@ 00040b76 997a
.org 0x40b78
	movs r0, #254	@ 00040b78 fe20
.org 0x40b7a
	ands r0, r1	@ 00040b7a 0840
.org 0x40b7c
	movs r1, #253	@ 00040b7c fd21
.org 0x40b7e
	ands r0, r1	@ 00040b7e 0840
.org 0x40b80
	strb r0, [r3, #10]	@ 00040b80 9872
.org 0x40b82
	adds r0, r3, #0	@ 00040b82 181c
.org 0x40b84
	adds r0, #140	@ 00040b84 8c30
.org 0x40b86
	str r2, [r0, #0]	@ 00040b86 0260
.org 0x40b88
	adds r0, #4	@ 00040b88 0430
.org 0x40b8a
	str r2, [r0, #0]	@ 00040b8a 0260
.org 0x40b8c
	adds r0, #4	@ 00040b8c 0430
.org 0x40b8e
	strb r2, [r0, #0]	@ 00040b8e 0270
.org 0x40b90
	ldrb r1, [r3, #10]	@ 00040b90 997a
.org 0x40b92
	movs r0, #251	@ 00040b92 fb20
.org 0x40b94
	ands r0, r1	@ 00040b94 0840
.org 0x40b96
	strb r0, [r3, #10]	@ 00040b96 9872
.org 0x40b98
	ldr r1, [pc, #20]	@ 00040b98 0549
.org 0x40b9a
	ldrb r0, [r3, #9]	@ 00040b9a 587a
.org 0x40b9c
	lsls r0, r0, #2	@ 00040b9c 8000
.org 0x40b9e
	adds r0, r0, r1	@ 00040b9e 4018
.org 0x40ba0
	movs r1, #3	@ 00040ba0 0321
.org 0x40ba2
	str r1, [r3, #12]	@ 00040ba2 d960
.org 0x40ba4
	ldr r0, [r0, #0]	@ 00040ba4 0068
.org 0x40ba6
	ldr r0, [r0, #12]	@ 00040ba6 c068
.org 0x40ba8
	str r0, [r3, #20]	@ 00040ba8 5861
.org 0x40baa
	pop {r4}	@ 00040baa 10bc
.org 0x40bac
	pop {r0}	@ 00040bac 01bc
.org 0x40bae
	bx r0	@ 00040bae 0047
