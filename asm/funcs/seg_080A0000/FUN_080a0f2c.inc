@ FUN_080a0f2c  entry 0x080a0f2c  size 92
.thumb
.org 0xa0f2c
FUN_080a0f2c:
	push {r4, r5, lr}	@ 000a0f2c 30b5
.org 0xa0f2e
	adds r5, r0, #0	@ 000a0f2e 051c
.org 0xa0f30
	ldrb r4, [r5, #16]	@ 000a0f30 2c7c
.org 0xa0f32
	adds r1, r5, #0	@ 000a0f32 291c
.org 0xa0f34
	adds r1, #84	@ 000a0f34 5431
.org 0xa0f36
	movs r0, #2	@ 000a0f36 0220
.org 0xa0f38
	bl 0xd0c88	@ 000a0f38 2ff0a6fe
.org 0xa0f3c
	cmp r4, #1	@ 000a0f3c 012c
.org 0xa0f3e
	bne.n 0xa0f50	@ 000a0f3e 07d1
.org 0xa0f40
	ldr r0, [pc, #68]	@ 000a0f40 1148
.org 0xa0f42
	adds r1, r0, #0	@ 000a0f42 011c
.org 0xa0f44
	adds r1, #38	@ 000a0f44 2631
.org 0xa0f46
	ldrb r0, [r1, #0]	@ 000a0f46 0878
.org 0xa0f48
	cmp r0, #0	@ 000a0f48 0028
.org 0xa0f4a
	beq.n 0xa0f50	@ 000a0f4a 01d0
.org 0xa0f4c
	adds r0, #255	@ 000a0f4c ff30
.org 0xa0f4e
	strb r0, [r1, #0]	@ 000a0f4e 0870
.org 0xa0f50
	ldrb r1, [r5, #10]	@ 000a0f50 a97a
.org 0xa0f52
	movs r0, #254	@ 000a0f52 fe20
.org 0xa0f54
	ands r0, r1	@ 000a0f54 0840
.org 0xa0f56
	movs r1, #0	@ 000a0f56 0021
.org 0xa0f58
	strb r0, [r5, #10]	@ 000a0f58 a872
.org 0xa0f5a
	adds r0, r5, #0	@ 000a0f5a 281c
.org 0xa0f5c
	adds r0, #140	@ 000a0f5c 8c30
.org 0xa0f5e
	str r1, [r0, #0]	@ 000a0f5e 0160
.org 0xa0f60
	adds r0, #4	@ 000a0f60 0430
.org 0xa0f62
	str r1, [r0, #0]	@ 000a0f62 0160
.org 0xa0f64
	adds r0, #4	@ 000a0f64 0430
.org 0xa0f66
	strb r1, [r0, #0]	@ 000a0f66 0170
.org 0xa0f68
	ldrb r1, [r5, #10]	@ 000a0f68 a97a
.org 0xa0f6a
	movs r0, #251	@ 000a0f6a fb20
.org 0xa0f6c
	ands r0, r1	@ 000a0f6c 0840
.org 0xa0f6e
	strb r0, [r5, #10]	@ 000a0f6e a872
.org 0xa0f70
	ldr r1, [pc, #24]	@ 000a0f70 0649
.org 0xa0f72
	ldrb r0, [r5, #9]	@ 000a0f72 687a
.org 0xa0f74
	lsls r0, r0, #2	@ 000a0f74 8000
.org 0xa0f76
	adds r0, r0, r1	@ 000a0f76 4018
.org 0xa0f78
	movs r1, #4	@ 000a0f78 0421
.org 0xa0f7a
	str r1, [r5, #12]	@ 000a0f7a e960
.org 0xa0f7c
	ldr r0, [r0, #0]	@ 000a0f7c 0068
.org 0xa0f7e
	ldr r0, [r0, #16]	@ 000a0f7e 0069
.org 0xa0f80
	str r0, [r5, #20]	@ 000a0f80 6861
.org 0xa0f82
	pop {r4, r5}	@ 000a0f82 30bc
.org 0xa0f84
	pop {r0}	@ 000a0f84 01bc
.org 0xa0f86
	bx r0	@ 000a0f86 0047
