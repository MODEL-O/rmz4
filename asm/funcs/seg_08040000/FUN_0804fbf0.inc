@ FUN_0804fbf0  entry 0x0804fbf0  size 100
.thumb
.org 0x4fbf0
FUN_0804fbf0:
	push {r4, r5, lr}	@ 0004fbf0 30b5
.org 0x4fbf2
	adds r4, r0, #0	@ 0004fbf2 041c
.org 0x4fbf4
	ldr r5, [r4, #40]	@ 0004fbf4 a56a
.org 0x4fbf6
	ldrb r0, [r4, #13]	@ 0004fbf6 607b
.org 0x4fbf8
	cmp r0, #0	@ 0004fbf8 0028
.org 0x4fbfa
	bne.n 0x4fc10	@ 0004fbfa 09d1
.org 0x4fbfc
	ldr r1, [pc, #84]	@ 0004fbfc 1549
.org 0x4fbfe
	adds r0, r4, #0	@ 0004fbfe 201c
.org 0x4fc00
	bl 0x1cf00	@ 0004fc00 cdf77ef9
.org 0x4fc04
	adds r0, r5, #0	@ 0004fc04 281c
.org 0x4fc06
	bl 0x3aabc	@ 0004fc06 eaf759ff
.org 0x4fc0a
	ldrb r0, [r4, #13]	@ 0004fc0a 607b
.org 0x4fc0c
	adds r0, #1	@ 0004fc0c 0130
.org 0x4fc0e
	strb r0, [r4, #13]	@ 0004fc0e 6073
.org 0x4fc10
	adds r0, r4, #0	@ 0004fc10 201c
.org 0x4fc12
	bl 0x1cff0	@ 0004fc12 cdf7edf9
.org 0x4fc16
	adds r0, r4, #0	@ 0004fc16 201c
.org 0x4fc18
	adds r0, #115	@ 0004fc18 7330
.org 0x4fc1a
	ldrb r0, [r0, #0]	@ 0004fc1a 0078
.org 0x4fc1c
	cmp r0, #3	@ 0004fc1c 0328
.org 0x4fc1e
	bne.n 0x4fc4e	@ 0004fc1e 16d1
.org 0x4fc20
	adds r0, r4, #0	@ 0004fc20 201c
.org 0x4fc22
	adds r0, #140	@ 0004fc22 8c30
.org 0x4fc24
	movs r1, #0	@ 0004fc24 0021
.org 0x4fc26
	str r1, [r0, #0]	@ 0004fc26 0160
.org 0x4fc28
	adds r0, #4	@ 0004fc28 0430
.org 0x4fc2a
	str r1, [r0, #0]	@ 0004fc2a 0160
.org 0x4fc2c
	adds r0, #4	@ 0004fc2c 0430
.org 0x4fc2e
	strb r1, [r0, #0]	@ 0004fc2e 0170
.org 0x4fc30
	ldrb r1, [r4, #10]	@ 0004fc30 a17a
.org 0x4fc32
	movs r0, #251	@ 0004fc32 fb20
.org 0x4fc34
	ands r0, r1	@ 0004fc34 0840
.org 0x4fc36
	movs r1, #254	@ 0004fc36 fe21
.org 0x4fc38
	ands r0, r1	@ 0004fc38 0840
.org 0x4fc3a
	strb r0, [r4, #10]	@ 0004fc3a a072
.org 0x4fc3c
	ldr r1, [pc, #24]	@ 0004fc3c 0649
.org 0x4fc3e
	ldrb r0, [r4, #9]	@ 0004fc3e 607a
.org 0x4fc40
	lsls r0, r0, #2	@ 0004fc40 8000
.org 0x4fc42
	adds r0, r0, r1	@ 0004fc42 4018
.org 0x4fc44
	movs r1, #4	@ 0004fc44 0421
.org 0x4fc46
	str r1, [r4, #12]	@ 0004fc46 e160
.org 0x4fc48
	ldr r0, [r0, #0]	@ 0004fc48 0068
.org 0x4fc4a
	ldr r0, [r0, #16]	@ 0004fc4a 0069
.org 0x4fc4c
	str r0, [r4, #20]	@ 0004fc4c 6061
.org 0x4fc4e
	pop {r4, r5}	@ 0004fc4e 30bc
.org 0x4fc50
	pop {r0}	@ 0004fc50 01bc
.org 0x4fc52
	bx r0	@ 0004fc52 0047
