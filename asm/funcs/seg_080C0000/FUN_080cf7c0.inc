@ FUN_080cf7c0  entry 0x080cf7c0  size 76
.thumb
.org 0xcf7c0
FUN_080cf7c0:
	push {r4, lr}	@ 000cf7c0 10b5
.org 0xcf7c2
	adds r2, r0, #0	@ 000cf7c2 021c
.org 0xcf7c4
	ldr r0, [r2, #40]	@ 000cf7c4 906a
.org 0xcf7c6
	adds r1, r0, #0	@ 000cf7c6 011c
.org 0xcf7c8
	adds r1, #204	@ 000cf7c8 cc31
.org 0xcf7ca
	ldrh r3, [r1, #0]	@ 000cf7ca 0b88
.org 0xcf7cc
	movs r4, #0	@ 000cf7cc 0024
.org 0xcf7ce
	ldrsh r0, [r1, r4]	@ 000cf7ce 085f
.org 0xcf7d0
	cmp r0, #0	@ 000cf7d0 0028
.org 0xcf7d2
	beq.n 0xcf7d8	@ 000cf7d2 01d0
.org 0xcf7d4
	subs r0, r3, #1	@ 000cf7d4 581e
.org 0xcf7d6
	strh r0, [r1, #0]	@ 000cf7d6 0880
.org 0xcf7d8
	adds r0, r2, #0	@ 000cf7d8 101c
.org 0xcf7da
	adds r0, #140	@ 000cf7da 8c30
.org 0xcf7dc
	movs r1, #0	@ 000cf7dc 0021
.org 0xcf7de
	str r1, [r0, #0]	@ 000cf7de 0160
.org 0xcf7e0
	adds r0, #4	@ 000cf7e0 0430
.org 0xcf7e2
	str r1, [r0, #0]	@ 000cf7e2 0160
.org 0xcf7e4
	adds r0, #4	@ 000cf7e4 0430
.org 0xcf7e6
	strb r1, [r0, #0]	@ 000cf7e6 0170
.org 0xcf7e8
	ldrb r1, [r2, #10]	@ 000cf7e8 917a
.org 0xcf7ea
	movs r0, #251	@ 000cf7ea fb20
.org 0xcf7ec
	ands r0, r1	@ 000cf7ec 0840
.org 0xcf7ee
	movs r1, #254	@ 000cf7ee fe21
.org 0xcf7f0
	ands r0, r1	@ 000cf7f0 0840
.org 0xcf7f2
	strb r0, [r2, #10]	@ 000cf7f2 9072
.org 0xcf7f4
	ldr r1, [pc, #20]	@ 000cf7f4 0549
.org 0xcf7f6
	ldrb r0, [r2, #9]	@ 000cf7f6 507a
.org 0xcf7f8
	lsls r0, r0, #2	@ 000cf7f8 8000
.org 0xcf7fa
	adds r0, r0, r1	@ 000cf7fa 4018
.org 0xcf7fc
	movs r1, #4	@ 000cf7fc 0421
.org 0xcf7fe
	str r1, [r2, #12]	@ 000cf7fe d160
.org 0xcf800
	ldr r0, [r0, #0]	@ 000cf800 0068
.org 0xcf802
	ldr r0, [r0, #16]	@ 000cf802 0069
.org 0xcf804
	str r0, [r2, #20]	@ 000cf804 5061
.org 0xcf806
	pop {r4}	@ 000cf806 10bc
.org 0xcf808
	pop {r0}	@ 000cf808 01bc
.org 0xcf80a
	bx r0	@ 000cf80a 0047
