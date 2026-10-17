@ FUN_080c5f04  entry 0x080c5f04  size 70
.thumb
.org 0xc5f04
FUN_080c5f04:
	push {r4, r5, lr}	@ 000c5f04 30b5
.org 0xc5f06
	adds r5, r0, #0	@ 000c5f06 051c
.org 0xc5f08
	ldr r4, [r5, #40]	@ 000c5f08 ac6a
.org 0xc5f0a
	bl 0xc6088	@ 000c5f0a 00f0bdf8
.org 0xc5f0e
	adds r0, r5, #0	@ 000c5f0e 281c
.org 0xc5f10
	adds r0, #140	@ 000c5f10 8c30
.org 0xc5f12
	movs r1, #0	@ 000c5f12 0021
.org 0xc5f14
	str r1, [r0, #0]	@ 000c5f14 0160
.org 0xc5f16
	adds r0, #4	@ 000c5f16 0430
.org 0xc5f18
	str r1, [r0, #0]	@ 000c5f18 0160
.org 0xc5f1a
	adds r0, #4	@ 000c5f1a 0430
.org 0xc5f1c
	strb r1, [r0, #0]	@ 000c5f1c 0170
.org 0xc5f1e
	ldrb r1, [r5, #10]	@ 000c5f1e a97a
.org 0xc5f20
	movs r0, #251	@ 000c5f20 fb20
.org 0xc5f22
	ands r0, r1	@ 000c5f22 0840
.org 0xc5f24
	movs r1, #254	@ 000c5f24 fe21
.org 0xc5f26
	ands r0, r1	@ 000c5f26 0840
.org 0xc5f28
	strb r0, [r5, #10]	@ 000c5f28 a872
.org 0xc5f2a
	adds r4, #180	@ 000c5f2a b434
.org 0xc5f2c
	ldrh r0, [r4, #0]	@ 000c5f2c 2088
.org 0xc5f2e
	subs r0, #1	@ 000c5f2e 0138
.org 0xc5f30
	strh r0, [r4, #0]	@ 000c5f30 2080
.org 0xc5f32
	ldr r1, [pc, #24]	@ 000c5f32 0649
.org 0xc5f34
	ldrb r0, [r5, #9]	@ 000c5f34 687a
.org 0xc5f36
	lsls r0, r0, #2	@ 000c5f36 8000
.org 0xc5f38
	adds r0, r0, r1	@ 000c5f38 4018
.org 0xc5f3a
	movs r1, #4	@ 000c5f3a 0421
.org 0xc5f3c
	str r1, [r5, #12]	@ 000c5f3c e960
.org 0xc5f3e
	ldr r0, [r0, #0]	@ 000c5f3e 0068
.org 0xc5f40
	ldr r0, [r0, #16]	@ 000c5f40 0069
.org 0xc5f42
	str r0, [r5, #20]	@ 000c5f42 6861
.org 0xc5f44
	pop {r4, r5}	@ 000c5f44 30bc
.org 0xc5f46
	pop {r0}	@ 000c5f46 01bc
.org 0xc5f48
	bx r0	@ 000c5f48 0047
