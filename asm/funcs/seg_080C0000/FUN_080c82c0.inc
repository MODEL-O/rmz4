@ FUN_080c82c0  entry 0x080c82c0  size 98
.thumb
.org 0xc82c0
FUN_080c82c0:
	push {r4, r5, lr}	@ 000c82c0 30b5
.org 0xc82c2
	adds r4, r0, #0	@ 000c82c2 041c
.org 0xc82c4
	ldr r5, [r4, #40]	@ 000c82c4 a56a
.org 0xc82c6
	adds r0, #180	@ 000c82c6 b430
.org 0xc82c8
	ldrb r0, [r0, #0]	@ 000c82c8 0078
.org 0xc82ca
	cmp r0, #0	@ 000c82ca 0028
.org 0xc82cc
	bne.n 0xc82d4	@ 000c82cc 02d1
.org 0xc82ce
	movs r0, #63	@ 000c82ce 3f20
.org 0xc82d0
	bl 0x2b10	@ 000c82d0 3af71efc
.org 0xc82d4
	cmp r5, #0	@ 000c82d4 002d
.org 0xc82d6
	beq.n 0xc82e2	@ 000c82d6 04d0
.org 0xc82d8
	adds r1, r5, #0	@ 000c82d8 291c
.org 0xc82da
	adds r1, #180	@ 000c82da b431
.org 0xc82dc
	ldrb r0, [r1, #0]	@ 000c82dc 0878
.org 0xc82de
	subs r0, #1	@ 000c82de 0138
.org 0xc82e0
	strb r0, [r1, #0]	@ 000c82e0 0870
.org 0xc82e2
	adds r0, r4, #0	@ 000c82e2 201c
.org 0xc82e4
	adds r0, #84	@ 000c82e4 5430
.org 0xc82e6
	movs r1, #0	@ 000c82e6 0021
.org 0xc82e8
	movs r2, #0	@ 000c82e8 0022
.org 0xc82ea
	bl 0xde82c	@ 000c82ea 16f09ffa
.org 0xc82ee
	adds r0, r4, #0	@ 000c82ee 201c
.org 0xc82f0
	adds r0, #140	@ 000c82f0 8c30
.org 0xc82f2
	movs r1, #0	@ 000c82f2 0021
.org 0xc82f4
	str r1, [r0, #0]	@ 000c82f4 0160
.org 0xc82f6
	adds r0, #4	@ 000c82f6 0430
.org 0xc82f8
	str r1, [r0, #0]	@ 000c82f8 0160
.org 0xc82fa
	adds r0, #4	@ 000c82fa 0430
.org 0xc82fc
	strb r1, [r0, #0]	@ 000c82fc 0170
.org 0xc82fe
	ldrb r1, [r4, #10]	@ 000c82fe a17a
.org 0xc8300
	movs r0, #251	@ 000c8300 fb20
.org 0xc8302
	ands r0, r1	@ 000c8302 0840
.org 0xc8304
	movs r1, #254	@ 000c8304 fe21
.org 0xc8306
	ands r0, r1	@ 000c8306 0840
.org 0xc8308
	strb r0, [r4, #10]	@ 000c8308 a072
.org 0xc830a
	ldr r1, [pc, #24]	@ 000c830a 0649
.org 0xc830c
	ldrb r0, [r4, #9]	@ 000c830c 607a
.org 0xc830e
	lsls r0, r0, #2	@ 000c830e 8000
.org 0xc8310
	adds r0, r0, r1	@ 000c8310 4018
.org 0xc8312
	movs r1, #4	@ 000c8312 0421
.org 0xc8314
	str r1, [r4, #12]	@ 000c8314 e160
.org 0xc8316
	ldr r0, [r0, #0]	@ 000c8316 0068
.org 0xc8318
	ldr r0, [r0, #16]	@ 000c8318 0069
.org 0xc831a
	str r0, [r4, #20]	@ 000c831a 6061
.org 0xc831c
	pop {r4, r5}	@ 000c831c 30bc
.org 0xc831e
	pop {r0}	@ 000c831e 01bc
.org 0xc8320
	bx r0	@ 000c8320 0047
