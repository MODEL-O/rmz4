@ FUN_0804fef0  entry 0x0804fef0  size 100
.thumb
.org 0x4fef0
FUN_0804fef0:
	push {r4, r5, lr}	@ 0004fef0 30b5
.org 0x4fef2
	adds r4, r0, #0	@ 0004fef2 041c
.org 0x4fef4
	ldr r5, [r4, #40]	@ 0004fef4 a56a
.org 0x4fef6
	ldrb r0, [r4, #13]	@ 0004fef6 607b
.org 0x4fef8
	cmp r0, #0	@ 0004fef8 0028
.org 0x4fefa
	bne.n 0x4ff10	@ 0004fefa 09d1
.org 0x4fefc
	ldr r1, [pc, #84]	@ 0004fefc 1549
.org 0x4fefe
	adds r0, r4, #0	@ 0004fefe 201c
.org 0x4ff00
	bl 0x1cf00	@ 0004ff00 ccf7feff
.org 0x4ff04
	adds r0, r5, #0	@ 0004ff04 281c
.org 0x4ff06
	bl 0x3aabc	@ 0004ff06 eaf7d9fd
.org 0x4ff0a
	ldrb r0, [r4, #13]	@ 0004ff0a 607b
.org 0x4ff0c
	adds r0, #1	@ 0004ff0c 0130
.org 0x4ff0e
	strb r0, [r4, #13]	@ 0004ff0e 6073
.org 0x4ff10
	adds r0, r4, #0	@ 0004ff10 201c
.org 0x4ff12
	bl 0x1cff0	@ 0004ff12 cdf76df8
.org 0x4ff16
	adds r0, r4, #0	@ 0004ff16 201c
.org 0x4ff18
	adds r0, #115	@ 0004ff18 7330
.org 0x4ff1a
	ldrb r0, [r0, #0]	@ 0004ff1a 0078
.org 0x4ff1c
	cmp r0, #3	@ 0004ff1c 0328
.org 0x4ff1e
	bne.n 0x4ff4e	@ 0004ff1e 16d1
.org 0x4ff20
	adds r0, r4, #0	@ 0004ff20 201c
.org 0x4ff22
	adds r0, #140	@ 0004ff22 8c30
.org 0x4ff24
	movs r1, #0	@ 0004ff24 0021
.org 0x4ff26
	str r1, [r0, #0]	@ 0004ff26 0160
.org 0x4ff28
	adds r0, #4	@ 0004ff28 0430
.org 0x4ff2a
	str r1, [r0, #0]	@ 0004ff2a 0160
.org 0x4ff2c
	adds r0, #4	@ 0004ff2c 0430
.org 0x4ff2e
	strb r1, [r0, #0]	@ 0004ff2e 0170
.org 0x4ff30
	ldrb r1, [r4, #10]	@ 0004ff30 a17a
.org 0x4ff32
	movs r0, #251	@ 0004ff32 fb20
.org 0x4ff34
	ands r0, r1	@ 0004ff34 0840
.org 0x4ff36
	movs r1, #254	@ 0004ff36 fe21
.org 0x4ff38
	ands r0, r1	@ 0004ff38 0840
.org 0x4ff3a
	strb r0, [r4, #10]	@ 0004ff3a a072
.org 0x4ff3c
	ldr r1, [pc, #24]	@ 0004ff3c 0649
.org 0x4ff3e
	ldrb r0, [r4, #9]	@ 0004ff3e 607a
.org 0x4ff40
	lsls r0, r0, #2	@ 0004ff40 8000
.org 0x4ff42
	adds r0, r0, r1	@ 0004ff42 4018
.org 0x4ff44
	movs r1, #4	@ 0004ff44 0421
.org 0x4ff46
	str r1, [r4, #12]	@ 0004ff46 e160
.org 0x4ff48
	ldr r0, [r0, #0]	@ 0004ff48 0068
.org 0x4ff4a
	ldr r0, [r0, #16]	@ 0004ff4a 0069
.org 0x4ff4c
	str r0, [r4, #20]	@ 0004ff4c 6061
.org 0x4ff4e
	pop {r4, r5}	@ 0004ff4e 30bc
.org 0x4ff50
	pop {r0}	@ 0004ff50 01bc
.org 0x4ff52
	bx r0	@ 0004ff52 0047
