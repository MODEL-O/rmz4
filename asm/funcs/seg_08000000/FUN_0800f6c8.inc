@ FUN_0800f6c8  entry 0x0800f6c8  size 86
.thumb
.org 0xf6c8
FUN_0800f6c8:
	push {r4, lr}	@ 0000f6c8 10b5
.org 0xf6ca
	adds r2, r0, #0	@ 0000f6ca 021c
.org 0xf6cc
	ldrb r1, [r2, #14]	@ 0000f6cc 917b
.org 0xf6ce
	cmp r1, #0	@ 0000f6ce 0029
.org 0xf6d0
	bne.n 0xf6dc	@ 0000f6d0 04d1
.org 0xf6d2
	adds r0, #104	@ 0000f6d2 6830
.org 0xf6d4
	strh r1, [r0, #0]	@ 0000f6d4 0180
.org 0xf6d6
	ldrb r0, [r2, #14]	@ 0000f6d6 907b
.org 0xf6d8
	adds r0, #1	@ 0000f6d8 0130
.org 0xf6da
	strb r0, [r2, #14]	@ 0000f6da 9073
.org 0xf6dc
	ldr r1, [pc, #64]	@ 0000f6dc 1049
.org 0xf6de
	adds r4, r2, #0	@ 0000f6de 141c
.org 0xf6e0
	adds r4, #104	@ 0000f6e0 6834
.org 0xf6e2
	ldrh r0, [r4, #0]	@ 0000f6e2 2088
.org 0xf6e4
	lsrs r0, r0, #3	@ 0000f6e4 c008
.org 0xf6e6
	adds r0, r0, r1	@ 0000f6e6 4018
.org 0xf6e8
	ldrb r2, [r0, #0]	@ 0000f6e8 0278
.org 0xf6ea
	movs r0, #2	@ 0000f6ea 0220
.org 0xf6ec
	movs r1, #19	@ 0000f6ec 1321
.org 0xf6ee
	bl 0x74c0	@ 0000f6ee f7f7e7fe
.org 0xf6f2
	ldr r1, [pc, #48]	@ 0000f6f2 0c49
.org 0xf6f4
	ldrh r0, [r4, #0]	@ 0000f6f4 2088
.org 0xf6f6
	lsrs r0, r0, #3	@ 0000f6f6 c008
.org 0xf6f8
	adds r0, r0, r1	@ 0000f6f8 4018
.org 0xf6fa
	ldrb r2, [r0, #0]	@ 0000f6fa 0278
.org 0xf6fc
	movs r0, #4	@ 0000f6fc 0420
.org 0xf6fe
	movs r1, #19	@ 0000f6fe 1321
.org 0xf700
	bl 0x74c0	@ 0000f700 f7f7defe
.org 0xf704
	ldrh r0, [r4, #0]	@ 0000f704 2088
.org 0xf706
	adds r0, #1	@ 0000f706 0130
.org 0xf708
	strh r0, [r4, #0]	@ 0000f708 2080
.org 0xf70a
	lsls r0, r0, #16	@ 0000f70a 0004
.org 0xf70c
	movs r1, #128	@ 0000f70c 8021
.org 0xf70e
	lsls r1, r1, #17	@ 0000f70e 4904
.org 0xf710
	cmp r0, r1	@ 0000f710 8842
.org 0xf712
	bne.n 0xf718	@ 0000f712 01d1
.org 0xf714
	movs r0, #0	@ 0000f714 0020
.org 0xf716
	strh r0, [r4, #0]	@ 0000f716 2080
.org 0xf718
	pop {r4}	@ 0000f718 10bc
.org 0xf71a
	pop {r0}	@ 0000f71a 01bc
.org 0xf71c
	bx r0	@ 0000f71c 0047
