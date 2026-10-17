@ FUN_080f5df4  entry 0x080f5df4  size 90
.thumb
.org 0xf5df4
FUN_080f5df4:
	push {r4, r5, lr}	@ 000f5df4 30b5
.org 0xf5df6
	adds r4, r0, #0	@ 000f5df6 041c
.org 0xf5df8
	adds r5, r4, #0	@ 000f5df8 251c
.org 0xf5dfa
	adds r5, #180	@ 000f5dfa b435
.org 0xf5dfc
	ldrh r0, [r5, #0]	@ 000f5dfc 2888
.org 0xf5dfe
	cmp r0, #0	@ 000f5dfe 0028
.org 0xf5e00
	beq.n 0xf5e0e	@ 000f5e00 05d0
.org 0xf5e02
	movs r1, #0	@ 000f5e02 0021
.org 0xf5e04
	ldrsh r0, [r5, r1]	@ 000f5e04 685e
.org 0xf5e06
	bl 0x2b5c	@ 000f5e06 0cf7a9fe
.org 0xf5e0a
	movs r0, #0	@ 000f5e0a 0020
.org 0xf5e0c
	strh r0, [r5, #0]	@ 000f5e0c 2880
.org 0xf5e0e
	ldrb r1, [r4, #10]	@ 000f5e0e a17a
.org 0xf5e10
	movs r0, #254	@ 000f5e10 fe20
.org 0xf5e12
	ands r0, r1	@ 000f5e12 0840
.org 0xf5e14
	movs r1, #0	@ 000f5e14 0021
.org 0xf5e16
	strb r0, [r4, #10]	@ 000f5e16 a072
.org 0xf5e18
	adds r0, r4, #0	@ 000f5e18 201c
.org 0xf5e1a
	adds r0, #140	@ 000f5e1a 8c30
.org 0xf5e1c
	str r1, [r0, #0]	@ 000f5e1c 0160
.org 0xf5e1e
	adds r0, #4	@ 000f5e1e 0430
.org 0xf5e20
	str r1, [r0, #0]	@ 000f5e20 0160
.org 0xf5e22
	adds r0, #4	@ 000f5e22 0430
.org 0xf5e24
	strb r1, [r0, #0]	@ 000f5e24 0170
.org 0xf5e26
	ldrb r1, [r4, #10]	@ 000f5e26 a17a
.org 0xf5e28
	movs r0, #251	@ 000f5e28 fb20
.org 0xf5e2a
	ands r0, r1	@ 000f5e2a 0840
.org 0xf5e2c
	strb r0, [r4, #10]	@ 000f5e2c a072
.org 0xf5e2e
	ldrb r1, [r4, #11]	@ 000f5e2e e17a
.org 0xf5e30
	movs r0, #247	@ 000f5e30 f720
.org 0xf5e32
	ands r0, r1	@ 000f5e32 0840
.org 0xf5e34
	strb r0, [r4, #11]	@ 000f5e34 e072
.org 0xf5e36
	ldr r1, [pc, #24]	@ 000f5e36 0649
.org 0xf5e38
	ldrb r0, [r4, #9]	@ 000f5e38 607a
.org 0xf5e3a
	lsls r0, r0, #2	@ 000f5e3a 8000
.org 0xf5e3c
	adds r0, r0, r1	@ 000f5e3c 4018
.org 0xf5e3e
	movs r1, #4	@ 000f5e3e 0421
.org 0xf5e40
	str r1, [r4, #12]	@ 000f5e40 e160
.org 0xf5e42
	ldr r0, [r0, #0]	@ 000f5e42 0068
.org 0xf5e44
	ldr r0, [r0, #16]	@ 000f5e44 0069
.org 0xf5e46
	str r0, [r4, #20]	@ 000f5e46 6061
.org 0xf5e48
	pop {r4, r5}	@ 000f5e48 30bc
.org 0xf5e4a
	pop {r0}	@ 000f5e4a 01bc
.org 0xf5e4c
	bx r0	@ 000f5e4c 0047
