@ FUN_080c71c8  entry 0x080c71c8  size 78
.thumb
.org 0xc71c8
FUN_080c71c8:
	push {r4, r5, r6, r7, lr}	@ 000c71c8 f0b5
.org 0xc71ca
	adds r5, r0, #0	@ 000c71ca 051c
.org 0xc71cc
	adds r6, r1, #0	@ 000c71cc 0e1c
.org 0xc71ce
	lsls r2, r2, #24	@ 000c71ce 1206
.org 0xc71d0
	lsrs r7, r2, #24	@ 000c71d0 170e
.org 0xc71d2
	ldr r0, [pc, #68]	@ 000c71d2 1148
.org 0xc71d4
	ldr r0, [r0, #0]	@ 000c71d4 0068
.org 0xc71d6
	bl 0x5500	@ 000c71d6 3ef793f9
.org 0xc71da
	adds r4, r0, #0	@ 000c71da 041c
.org 0xc71dc
	cmp r4, #0	@ 000c71dc 002c
.org 0xc71de
	beq.n 0xc720e	@ 000c71de 16d0
.org 0xc71e0
	adds r1, r4, #0	@ 000c71e0 211c
.org 0xc71e2
	adds r1, #37	@ 000c71e2 2531
.org 0xc71e4
	movs r3, #0	@ 000c71e4 0023
.org 0xc71e6
	movs r0, #8	@ 000c71e6 0820
.org 0xc71e8
	strb r0, [r1, #0]	@ 000c71e8 0870
.org 0xc71ea
	ldr r1, [pc, #48]	@ 000c71ea 0c49
.org 0xc71ec
	movs r0, #27	@ 000c71ec 1b20
.org 0xc71ee
	strb r0, [r4, #9]	@ 000c71ee 6072
.org 0xc71f0
	ldr r0, [r1, #108]	@ 000c71f0 c86e
.org 0xc71f2
	ldr r0, [r0, #0]	@ 000c71f2 0068
.org 0xc71f4
	str r0, [r4, #20]	@ 000c71f4 6061
.org 0xc71f6
	movs r2, #0	@ 000c71f6 0022
.org 0xc71f8
	strh r3, [r4, #32]	@ 000c71f8 2384
.org 0xc71fa
	adds r0, r4, #0	@ 000c71fa 201c
.org 0xc71fc
	adds r0, #34	@ 000c71fc 2230
.org 0xc71fe
	strb r2, [r0, #0]	@ 000c71fe 0270
.org 0xc7200
	str r5, [r4, #40]	@ 000c7200 a562
.org 0xc7202
	ldr r0, [r6, #0]	@ 000c7202 3068
.org 0xc7204
	ldr r1, [r6, #4]	@ 000c7204 7168
.org 0xc7206
	str r0, [r4, #84]	@ 000c7206 6065
.org 0xc7208
	str r1, [r4, #88]	@ 000c7208 a165
.org 0xc720a
	strb r2, [r4, #16]	@ 000c720a 2274
.org 0xc720c
	strb r7, [r4, #17]	@ 000c720c 6774
.org 0xc720e
	adds r0, r4, #0	@ 000c720e 201c
.org 0xc7210
	pop {r4, r5, r6, r7}	@ 000c7210 f0bc
.org 0xc7212
	pop {r1}	@ 000c7212 02bc
.org 0xc7214
	bx r1	@ 000c7214 0847
