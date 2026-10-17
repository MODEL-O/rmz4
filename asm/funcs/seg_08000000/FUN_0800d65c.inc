@ FUN_0800d65c  entry 0x0800d65c  size 148
.thumb
.org 0xd65c
FUN_0800d65c:
	push {r4, r5, r6, r7, lr}	@ 0000d65c f0b5
.org 0xd65e
	mov r7, sl	@ 0000d65e 5746
.org 0xd660
	mov r6, r9	@ 0000d660 4e46
.org 0xd662
	mov r5, r8	@ 0000d662 4546
.org 0xd664
	push {r5, r6, r7}	@ 0000d664 e0b4
.org 0xd666
	sub sp, #8	@ 0000d666 82b0
.org 0xd668
	adds r7, r0, #0	@ 0000d668 071c
.org 0xd66a
	ldr r0, [r7, #92]	@ 0000d66a f86d
.org 0xd66c
	lsls r0, r0, #16	@ 0000d66c 0004
.org 0xd66e
	ldrb r1, [r7, #14]	@ 0000d66e b97b
.org 0xd670
	mov sl, r1	@ 0000d670 8a46
.org 0xd672
	cmp r1, #0	@ 0000d672 0029
.org 0xd674
	bne.n 0xd6e0	@ 0000d674 34d1
.org 0xd676
	lsrs r6, r0, #20	@ 0000d676 060d
.org 0xd678
	lsls r5, r6, #1	@ 0000d678 7500
.org 0xd67a
	ldr r2, [pc, #116]	@ 0000d67a 1d4a
.org 0xd67c
	mov r8, r2	@ 0000d67c 9046
.org 0xd67e
	add r5, r8	@ 0000d67e 4544
.org 0xd680
	ldr r1, [r7, #100]	@ 0000d680 796e
.org 0xd682
	ldr r2, [pc, #112]	@ 0000d682 1c4a
.org 0xd684
	adds r0, r2, #0	@ 0000d684 101c
.org 0xd686
	orrs r1, r0	@ 0000d686 0143
.org 0xd688
	strh r1, [r5, #0]	@ 0000d688 2980
.org 0xd68a
	movs r4, #248	@ 0000d68a f824
.org 0xd68c
	lsls r4, r4, #5	@ 0000d68c 6401
.org 0xd68e
	ands r1, r4	@ 0000d68e 2140
.org 0xd690
	lsls r1, r1, #3	@ 0000d690 c900
.org 0xd692
	movs r0, #192	@ 0000d692 c020
.org 0xd694
	lsls r0, r0, #19	@ 0000d694 c004
.org 0xd696
	adds r1, r1, r0	@ 0000d696 0918
.org 0xd698
	mov r0, sl	@ 0000d698 5046
.org 0xd69a
	str r0, [sp, #0]	@ 0000d69a 0090
.org 0xd69c
	movs r2, #128	@ 0000d69c 8022
.org 0xd69e
	lsls r2, r2, #2	@ 0000d69e 9200
.org 0xd6a0
	mov r9, r2	@ 0000d6a0 9146
.org 0xd6a2
	ldr r2, [pc, #84]	@ 0000d6a2 154a
.org 0xd6a4
	mov r0, sp	@ 0000d6a4 6846
.org 0xd6a6
	bl 0x128be0	@ 0000d6a6 1bf19bfa
.org 0xd6aa
	ldr r0, [pc, #80]	@ 0000d6aa 1448
.org 0xd6ac
	ldr r0, [r0, #0]	@ 0000d6ac 0068
.org 0xd6ae
	ldr r1, [pc, #80]	@ 0000d6ae 1449
.org 0xd6b0
	adds r0, r0, r1	@ 0000d6b0 4018
.org 0xd6b2
	ldrh r1, [r5, #0]	@ 0000d6b2 2988
.org 0xd6b4
	ands r4, r1	@ 0000d6b4 0c40
.org 0xd6b6
	lsls r4, r4, #3	@ 0000d6b6 e400
.org 0xd6b8
	ldr r2, [pc, #72]	@ 0000d6b8 124a
.org 0xd6ba
	adds r4, r4, r2	@ 0000d6ba a418
.org 0xd6bc
	adds r1, r4, #0	@ 0000d6bc 211c
.org 0xd6be
	mov r2, r9	@ 0000d6be 4a46
.org 0xd6c0
	bl 0x128be0	@ 0000d6c0 1bf18efa
.org 0xd6c4
	lsls r6, r6, #2	@ 0000d6c4 b600
.org 0xd6c6
	movs r0, #8	@ 0000d6c6 0820
.org 0xd6c8
	add r8, r0	@ 0000d6c8 8044
.org 0xd6ca
	add r6, r8	@ 0000d6ca 4644
.org 0xd6cc
	mov r1, sl	@ 0000d6cc 5146
.org 0xd6ce
	str r1, [r6, #0]	@ 0000d6ce 3160
.org 0xd6d0
	ldr r0, [pc, #52]	@ 0000d6d0 0d48
.org 0xd6d2
	str r0, [r7, #76]	@ 0000d6d2 f864
.org 0xd6d4
	movs r0, #148	@ 0000d6d4 9420
.org 0xd6d6
	lsls r0, r0, #2	@ 0000d6d6 8000
.org 0xd6d8
	str r0, [r7, #80]	@ 0000d6d8 3865
.org 0xd6da
	ldrb r0, [r7, #14]	@ 0000d6da b87b
.org 0xd6dc
	adds r0, #1	@ 0000d6dc 0130
.org 0xd6de
	strb r0, [r7, #14]	@ 0000d6de b873
.org 0xd6e0
	add sp, #8	@ 0000d6e0 02b0
.org 0xd6e2
	pop {r3, r4, r5}	@ 0000d6e2 38bc
.org 0xd6e4
	mov r8, r3	@ 0000d6e4 9846
.org 0xd6e6
	mov r9, r4	@ 0000d6e6 a146
.org 0xd6e8
	mov sl, r5	@ 0000d6e8 aa46
.org 0xd6ea
	pop {r4, r5, r6, r7}	@ 0000d6ea f0bc
.org 0xd6ec
	pop {r0}	@ 0000d6ec 01bc
.org 0xd6ee
	bx r0	@ 0000d6ee 0047
