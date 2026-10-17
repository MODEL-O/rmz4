@ FUN_080947b4  entry 0x080947b4  size 114
.thumb
.org 0x947b4
FUN_080947b4:
	push {r4, r5, r6, r7, lr}	@ 000947b4 f0b5
.org 0x947b6
	sub sp, #8	@ 000947b6 82b0
.org 0x947b8
	movs r0, #128	@ 000947b8 8020
.org 0x947ba
	lsls r0, r0, #4	@ 000947ba 0001
.org 0x947bc
	adds r5, r2, r0	@ 000947bc 1518
.org 0x947be
	ldr r0, [pc, #92]	@ 000947be 1748
.org 0x947c0
	adds r1, r1, r0	@ 000947c0 0918
.org 0x947c2
	str r1, [sp, #0]	@ 000947c2 0091
.org 0x947c4
	movs r7, #0	@ 000947c4 0027
.org 0x947c6
	adds r6, r1, #0	@ 000947c6 0e1c
.org 0x947c8
	adds r0, r6, #0	@ 000947c8 301c
.org 0x947ca
	adds r1, r5, #0	@ 000947ca 291c
.org 0x947cc
	bl 0x7c7c	@ 000947cc 73f756fa
.org 0x947d0
	lsls r0, r0, #16	@ 000947d0 0004
.org 0x947d2
	cmp r0, #0	@ 000947d2 0028
.org 0x947d4
	beq.n 0x947e6	@ 000947d4 07d0
.org 0x947d6
	adds r0, r6, #0	@ 000947d6 301c
.org 0x947d8
	adds r1, r5, #0	@ 000947d8 291c
.org 0x947da
	bl 0x7c7c	@ 000947da 73f74ffa
.org 0x947de
	movs r1, #15	@ 000947de 0f21
.org 0x947e0
	ands r1, r0	@ 000947e0 0140
.org 0x947e2
	cmp r1, #15	@ 000947e2 0f29
.org 0x947e4
	bne.n 0x94818	@ 000947e4 18d1
.org 0x947e6
	movs r1, #128	@ 000947e6 8021
.org 0x947e8
	lsls r1, r1, #5	@ 000947e8 4901
.org 0x947ea
	adds r6, r6, r1	@ 000947ea 7618
.org 0x947ec
	adds r7, #1	@ 000947ec 0137
.org 0x947ee
	cmp r7, #0	@ 000947ee 002f
.org 0x947f0
	ble.n 0x947c8	@ 000947f0 eadd
.org 0x947f2
	ldr r0, [sp, #0]	@ 000947f2 0098
.org 0x947f4
	movs r1, #224	@ 000947f4 e021
.org 0x947f6
	lsls r1, r1, #4	@ 000947f6 0901
.org 0x947f8
	adds r6, r0, r1	@ 000947f8 4618
.org 0x947fa
	adds r0, r6, #0	@ 000947fa 301c
.org 0x947fc
	adds r1, r5, #0	@ 000947fc 291c
.org 0x947fe
	bl 0x7c7c	@ 000947fe 73f73dfa
.org 0x94802
	lsls r0, r0, #16	@ 00094802 0004
.org 0x94804
	cmp r0, #0	@ 00094804 0028
.org 0x94806
	beq.n 0x94820	@ 00094806 0bd0
.org 0x94808
	adds r0, r6, #0	@ 00094808 301c
.org 0x9480a
	adds r1, r5, #0	@ 0009480a 291c
.org 0x9480c
	bl 0x7c7c	@ 0009480c 73f736fa
.org 0x94810
	movs r1, #15	@ 00094810 0f21
.org 0x94812
	ands r1, r0	@ 00094812 0140
.org 0x94814
	cmp r1, #15	@ 00094814 0f29
.org 0x94816
	beq.n 0x94820	@ 00094816 03d0
.org 0x94818
	movs r0, #1	@ 00094818 0120
.org 0x9481a
	b.n 0x94822	@ 0009481a 02e0
.org 0x9481c
	.byte 0x00,0xf9,0xff,0xff	@ 0009481c data
.org 0x94820
	movs r0, #0	@ 00094820 0020
.org 0x94822
	add sp, #8	@ 00094822 02b0
.org 0x94824
	pop {r4, r5, r6, r7}	@ 00094824 f0bc
