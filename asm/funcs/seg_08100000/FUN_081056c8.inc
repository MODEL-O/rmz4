@ FUN_081056c8  entry 0x081056c8  size 78
.thumb
.org 0x1056c8
FUN_081056c8:
	push {r4, r5, lr}	@ 001056c8 30b5
.org 0x1056ca
	ldr r4, [r0, #44]	@ 001056ca c46a
.org 0x1056cc
	ldr r0, [r0, #20]	@ 001056cc 4069
.org 0x1056ce
	movs r1, #1	@ 001056ce 0121
.org 0x1056d0
	ands r0, r1	@ 001056d0 0840
.org 0x1056d2
	cmp r0, #0	@ 001056d2 0028
.org 0x1056d4
	beq.n 0x105710	@ 001056d4 1cd0
.org 0x1056d6
	adds r0, r4, #0	@ 001056d6 201c
.org 0x1056d8
	adds r0, #180	@ 001056d8 b430
.org 0x1056da
	ldrb r5, [r0, #0]	@ 001056da 0578
.org 0x1056dc
	cmp r5, #0	@ 001056dc 002d
.org 0x1056de
	bne.n 0x105710	@ 001056de 17d1
.org 0x1056e0
	strb r1, [r0, #0]	@ 001056e0 0170
.org 0x1056e2
	subs r0, #40	@ 001056e2 2838
.org 0x1056e4
	str r5, [r0, #0]	@ 001056e4 0560
.org 0x1056e6
	adds r0, #4	@ 001056e6 0430
.org 0x1056e8
	str r5, [r0, #0]	@ 001056e8 0560
.org 0x1056ea
	adds r0, #4	@ 001056ea 0430
.org 0x1056ec
	strb r5, [r0, #0]	@ 001056ec 0570
.org 0x1056ee
	ldrb r1, [r4, #10]	@ 001056ee a17a
.org 0x1056f0
	movs r0, #251	@ 001056f0 fb20
.org 0x1056f2
	ands r0, r1	@ 001056f2 0840
.org 0x1056f4
	strb r0, [r4, #10]	@ 001056f4 a072
.org 0x1056f6
	ldr r1, [pc, #32]	@ 001056f6 0849
.org 0x1056f8
	adds r0, r4, #0	@ 001056f8 201c
.org 0x1056fa
	bl 0x1cf00	@ 001056fa 17f701fc
.org 0x1056fe
	ldr r0, [r4, #40]	@ 001056fe a06a
.org 0x105700
	ldr r1, [pc, #24]	@ 00105700 0649
.org 0x105702
	adds r0, r0, r1	@ 00105702 4018
.org 0x105704
	str r5, [r0, #36]	@ 00105704 4562
.org 0x105706
	str r5, [r0, #40]	@ 00105706 8562
.org 0x105708
	movs r0, #174	@ 00105708 ae20
.org 0x10570a
	lsls r0, r0, #1	@ 0010570a 4000
.org 0x10570c
	bl 0x2b10	@ 0010570c fdf600fa
.org 0x105710
	pop {r4, r5}	@ 00105710 30bc
.org 0x105712
	pop {r0}	@ 00105712 01bc
.org 0x105714
	bx r0	@ 00105714 0047
