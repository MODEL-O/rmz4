@ FUN_0810b4d4  entry 0x0810b4d4  size 74
.thumb
.org 0x10b4d4
FUN_0810b4d4:
	push {lr}	@ 0010b4d4 00b5
.org 0x10b4d6
	adds r2, r0, #0	@ 0010b4d6 021c
.org 0x10b4d8
	ldr r3, [r2, #40]	@ 0010b4d8 936a
.org 0x10b4da
	ldrb r0, [r3, #2]	@ 0010b4da 9878
.org 0x10b4dc
	cmp r0, #0	@ 0010b4dc 0028
.org 0x10b4de
	beq.n 0x10b4f0	@ 0010b4de 07d0
.org 0x10b4e0
	ldrb r0, [r3, #3]	@ 0010b4e0 d878
.org 0x10b4e2
	cmp r0, #2	@ 0010b4e2 0228
.org 0x10b4e4
	bls.n 0x10b4f0	@ 0010b4e4 04d9
.org 0x10b4e6
	ldr r1, [pc, #20]	@ 0010b4e6 0549
.org 0x10b4e8
	adds r0, r3, r1	@ 0010b4e8 5818
.org 0x10b4ea
	ldrb r0, [r0, #0]	@ 0010b4ea 0078
.org 0x10b4ec
	cmp r0, #0	@ 0010b4ec 0028
.org 0x10b4ee
	bne.n 0x10b500	@ 0010b4ee 07d1
.org 0x10b4f0
	ldrb r1, [r2, #10]	@ 0010b4f0 917a
.org 0x10b4f2
	movs r0, #254	@ 0010b4f2 fe20
.org 0x10b4f4
	ands r0, r1	@ 0010b4f4 0840
.org 0x10b4f6
	strb r0, [r2, #10]	@ 0010b4f6 9072
.org 0x10b4f8
	b.n 0x10b520	@ 0010b4f8 12e0
.org 0x10b4fa
	.byte 0x00	@ 0010b4fa data
.org 0x10b4fb
	.byte 0x00	@ 0010b4fb data
.org 0x10b4fc
	.byte 0xf7,0x0d,0x00,0x00	@ 0010b4fc data
.org 0x10b500
	ldrb r1, [r2, #10]	@ 0010b500 917a
.org 0x10b502
	movs r0, #1	@ 0010b502 0120
.org 0x10b504
	orrs r0, r1	@ 0010b504 0843
.org 0x10b506
	strb r0, [r2, #10]	@ 0010b506 9072
.org 0x10b508
	movs r1, #221	@ 0010b508 dd21
.org 0x10b50a
	lsls r1, r1, #4	@ 0010b50a 0901
.org 0x10b50c
	adds r0, r3, r1	@ 0010b50c 5818
.org 0x10b50e
	ldrb r0, [r0, #3]	@ 0010b50e c078
.org 0x10b510
	lsls r0, r0, #12	@ 0010b510 0003
.org 0x10b512
	movs r1, #192	@ 0010b512 c021
.org 0x10b514
	lsls r1, r1, #5	@ 0010b514 4901
.org 0x10b516
	adds r0, r0, r1	@ 0010b516 4018
.org 0x10b518
	str r0, [r2, #88]	@ 0010b518 9065
.org 0x10b51a
	adds r0, r2, #0	@ 0010b51a 101c
.org 0x10b51c
	bl 0x1cff0	@ 0010b51c 11f768fd
