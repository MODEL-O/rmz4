@ FUN_080c2f44  entry 0x080c2f44  size 64
.thumb
.org 0xc2f44
FUN_080c2f44:
	push {r4, lr}	@ 000c2f44 10b5
.org 0xc2f46
	adds r4, r0, #0	@ 000c2f46 041c
.org 0xc2f48
	adds r0, #140	@ 000c2f48 8c30
.org 0xc2f4a
	movs r1, #0	@ 000c2f4a 0021
.org 0xc2f4c
	str r1, [r0, #0]	@ 000c2f4c 0160
.org 0xc2f4e
	adds r0, #4	@ 000c2f4e 0430
.org 0xc2f50
	str r1, [r0, #0]	@ 000c2f50 0160
.org 0xc2f52
	adds r0, #4	@ 000c2f52 0430
.org 0xc2f54
	strb r1, [r0, #0]	@ 000c2f54 0170
.org 0xc2f56
	ldrb r1, [r4, #10]	@ 000c2f56 a17a
.org 0xc2f58
	movs r0, #251	@ 000c2f58 fb20
.org 0xc2f5a
	ands r0, r1	@ 000c2f5a 0840
.org 0xc2f5c
	movs r1, #254	@ 000c2f5c fe21
.org 0xc2f5e
	ands r0, r1	@ 000c2f5e 0840
.org 0xc2f60
	strb r0, [r4, #10]	@ 000c2f60 a072
.org 0xc2f62
	adds r1, r4, #0	@ 000c2f62 211c
.org 0xc2f64
	adds r1, #84	@ 000c2f64 5431
.org 0xc2f66
	movs r0, #1	@ 000c2f66 0120
.org 0xc2f68
	bl 0xd0c88	@ 000c2f68 0df08efe
.org 0xc2f6c
	ldr r1, [pc, #20]	@ 000c2f6c 0549
.org 0xc2f6e
	ldrb r0, [r4, #9]	@ 000c2f6e 607a
.org 0xc2f70
	lsls r0, r0, #2	@ 000c2f70 8000
.org 0xc2f72
	adds r0, r0, r1	@ 000c2f72 4018
.org 0xc2f74
	movs r1, #4	@ 000c2f74 0421
.org 0xc2f76
	str r1, [r4, #12]	@ 000c2f76 e160
.org 0xc2f78
	ldr r0, [r0, #0]	@ 000c2f78 0068
.org 0xc2f7a
	ldr r0, [r0, #16]	@ 000c2f7a 0069
.org 0xc2f7c
	str r0, [r4, #20]	@ 000c2f7c 6061
.org 0xc2f7e
	pop {r4}	@ 000c2f7e 10bc
.org 0xc2f80
	pop {r0}	@ 000c2f80 01bc
.org 0xc2f82
	bx r0	@ 000c2f82 0047
