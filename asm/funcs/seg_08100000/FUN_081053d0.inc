@ FUN_081053d0  entry 0x081053d0  size 68
.thumb
.org 0x1053d0
FUN_081053d0:
	push {r4, lr}	@ 001053d0 10b5
.org 0x1053d2
	ldr r4, [r0, #44]	@ 001053d2 c46a
.org 0x1053d4
	adds r1, r4, #0	@ 001053d4 211c
.org 0x1053d6
	adds r1, #180	@ 001053d6 b431
.org 0x1053d8
	ldrb r0, [r1, #0]	@ 001053d8 0878
.org 0x1053da
	cmp r0, #0	@ 001053da 0028
.org 0x1053dc
	bne.n 0x1053e2	@ 001053dc 01d1
.org 0x1053de
	movs r0, #1	@ 001053de 0120
.org 0x1053e0
	strb r0, [r1, #0]	@ 001053e0 0870
.org 0x1053e2
	ldrb r0, [r4, #17]	@ 001053e2 607c
.org 0x1053e4
	cmp r0, #4	@ 001053e4 0428
.org 0x1053e6
	bne.n 0x10540e	@ 001053e6 12d1
.org 0x1053e8
	adds r0, r4, #0	@ 001053e8 201c
.org 0x1053ea
	adds r0, #140	@ 001053ea 8c30
.org 0x1053ec
	ldr r0, [r0, #0]	@ 001053ec 0068
.org 0x1053ee
	movs r1, #128	@ 001053ee 8021
.org 0x1053f0
	lsls r1, r1, #2	@ 001053f0 8900
.org 0x1053f2
	ands r0, r1	@ 001053f2 0840
.org 0x1053f4
	cmp r0, #0	@ 001053f4 0028
.org 0x1053f6
	beq.n 0x10540e	@ 001053f6 0ad0
.org 0x1053f8
	adds r1, r4, #0	@ 001053f8 211c
.org 0x1053fa
	adds r1, #84	@ 001053fa 5431
.org 0x1053fc
	movs r0, #1	@ 001053fc 0120
.org 0x1053fe
	bl 0xd0c88	@ 001053fe cbf743fc
.org 0x105402
	ldr r1, [r4, #40]	@ 00105402 a16a
.org 0x105404
	ldr r0, [pc, #12]	@ 00105404 0348
.org 0x105406
	adds r1, r1, r0	@ 00105406 0918
.org 0x105408
	ldr r0, [r1, #8]	@ 00105408 8868
.org 0x10540a
	adds r0, #8	@ 0010540a 0830
.org 0x10540c
	str r0, [r1, #8]	@ 0010540c 8860
.org 0x10540e
	pop {r4}	@ 0010540e 10bc
.org 0x105410
	pop {r0}	@ 00105410 01bc
.org 0x105412
	bx r0	@ 00105412 0047
