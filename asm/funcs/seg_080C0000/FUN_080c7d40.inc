@ FUN_080c7d40  entry 0x080c7d40  size 66
.thumb
.org 0xc7d40
FUN_080c7d40:
	push {r4, lr}	@ 000c7d40 10b5
.org 0xc7d42
	adds r4, r0, #0	@ 000c7d42 041c
.org 0xc7d44
	adds r1, r4, #0	@ 000c7d44 211c
.org 0xc7d46
	adds r1, #84	@ 000c7d46 5431
.org 0xc7d48
	movs r0, #2	@ 000c7d48 0220
.org 0xc7d4a
	bl 0xd0c88	@ 000c7d4a 08f09dff
.org 0xc7d4e
	adds r0, r4, #0	@ 000c7d4e 201c
.org 0xc7d50
	adds r0, #140	@ 000c7d50 8c30
.org 0xc7d52
	movs r1, #0	@ 000c7d52 0021
.org 0xc7d54
	str r1, [r0, #0]	@ 000c7d54 0160
.org 0xc7d56
	adds r0, #4	@ 000c7d56 0430
.org 0xc7d58
	str r1, [r0, #0]	@ 000c7d58 0160
.org 0xc7d5a
	adds r0, #4	@ 000c7d5a 0430
.org 0xc7d5c
	strb r1, [r0, #0]	@ 000c7d5c 0170
.org 0xc7d5e
	ldrb r1, [r4, #10]	@ 000c7d5e a17a
.org 0xc7d60
	movs r0, #251	@ 000c7d60 fb20
.org 0xc7d62
	ands r0, r1	@ 000c7d62 0840
.org 0xc7d64
	movs r1, #254	@ 000c7d64 fe21
.org 0xc7d66
	ands r0, r1	@ 000c7d66 0840
.org 0xc7d68
	strb r0, [r4, #10]	@ 000c7d68 a072
.org 0xc7d6a
	ldr r1, [pc, #24]	@ 000c7d6a 0649
.org 0xc7d6c
	ldrb r0, [r4, #9]	@ 000c7d6c 607a
.org 0xc7d6e
	lsls r0, r0, #2	@ 000c7d6e 8000
.org 0xc7d70
	adds r0, r0, r1	@ 000c7d70 4018
.org 0xc7d72
	movs r1, #4	@ 000c7d72 0421
.org 0xc7d74
	str r1, [r4, #12]	@ 000c7d74 e160
.org 0xc7d76
	ldr r0, [r0, #0]	@ 000c7d76 0068
.org 0xc7d78
	ldr r0, [r0, #16]	@ 000c7d78 0069
.org 0xc7d7a
	str r0, [r4, #20]	@ 000c7d7a 6061
.org 0xc7d7c
	pop {r4}	@ 000c7d7c 10bc
.org 0xc7d7e
	pop {r0}	@ 000c7d7e 01bc
.org 0xc7d80
	bx r0	@ 000c7d80 0047
