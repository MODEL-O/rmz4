@ FUN_0809b7ac  entry 0x0809b7ac  size 146
.thumb
.org 0x9b7ac
FUN_0809b7ac:
	push {r4, r5, r6, r7, lr}	@ 0009b7ac f0b5
.org 0x9b7ae
	sub sp, #8	@ 0009b7ae 82b0
.org 0x9b7b0
	adds r6, r0, #0	@ 0009b7b0 061c
.org 0x9b7b2
	ldr r0, [pc, #88]	@ 0009b7b2 1648
.org 0x9b7b4
	ldr r1, [r0, #4]	@ 0009b7b4 4168
.org 0x9b7b6
	ldr r0, [r0, #0]	@ 0009b7b6 0068
.org 0x9b7b8
	str r0, [sp, #0]	@ 0009b7b8 0090
.org 0x9b7ba
	str r1, [sp, #4]	@ 0009b7ba 0191
.org 0x9b7bc
	ldrb r4, [r6, #16]	@ 0009b7bc 347c
.org 0x9b7be
	ldrb r5, [r6, #17]	@ 0009b7be 757c
.org 0x9b7c0
	ldr r1, [pc, #76]	@ 0009b7c0 1349
.org 0x9b7c2
	ldrb r0, [r6, #9]	@ 0009b7c2 707a
.org 0x9b7c4
	lsls r0, r0, #2	@ 0009b7c4 8000
.org 0x9b7c6
	adds r0, r0, r1	@ 0009b7c6 4018
.org 0x9b7c8
	movs r1, #1	@ 0009b7c8 0121
.org 0x9b7ca
	str r1, [r6, #12]	@ 0009b7ca f160
.org 0x9b7cc
	ldr r0, [r0, #0]	@ 0009b7cc 0068
.org 0x9b7ce
	ldr r0, [r0, #4]	@ 0009b7ce 4068
.org 0x9b7d0
	str r0, [r6, #20]	@ 0009b7d0 7061
.org 0x9b7d2
	ldrb r1, [r6, #10]	@ 0009b7d2 b17a
.org 0x9b7d4
	movs r0, #1	@ 0009b7d4 0120
.org 0x9b7d6
	movs r7, #0	@ 0009b7d6 0027
.org 0x9b7d8
	movs r2, #0	@ 0009b7d8 0022
.org 0x9b7da
	orrs r0, r1	@ 0009b7da 0843
.org 0x9b7dc
	movs r1, #2	@ 0009b7dc 0221
.org 0x9b7de
	orrs r0, r1	@ 0009b7de 0843
.org 0x9b7e0
	strb r0, [r6, #10]	@ 0009b7e0 b072
.org 0x9b7e2
	adds r0, r6, #0	@ 0009b7e2 301c
.org 0x9b7e4
	adds r0, #182	@ 0009b7e4 b630
.org 0x9b7e6
	strb r2, [r0, #0]	@ 0009b7e6 0270
.org 0x9b7e8
	adds r0, r6, #0	@ 0009b7e8 301c
.org 0x9b7ea
	bl 0x1cc9c	@ 0009b7ea 81f757fa
.org 0x9b7ee
	adds r0, r6, #0	@ 0009b7ee 301c
.org 0x9b7f0
	bl 0x1ceec	@ 0009b7f0 81f77cfb
.org 0x9b7f4
	lsls r4, r4, #2	@ 0009b7f4 a400
.org 0x9b7f6
	add r4, sp	@ 0009b7f6 6c44
.org 0x9b7f8
	ldr r0, [r4, #0]	@ 0009b7f8 2068
.org 0x9b7fa
	adds r1, r6, #0	@ 0009b7fa 311c
.org 0x9b7fc
	adds r1, #37	@ 0009b7fc 2531
.org 0x9b7fe
	strb r0, [r1, #0]	@ 0009b7fe 0870
.org 0x9b800
	cmp r5, #0	@ 0009b800 002d
.org 0x9b802
	beq.n 0x9b814	@ 0009b802 07d0
.org 0x9b804
	ldrb r0, [r6, #10]	@ 0009b804 b07a
.org 0x9b806
	movs r1, #16	@ 0009b806 1021
.org 0x9b808
	orrs r0, r1	@ 0009b808 0843
.org 0x9b80a
	b.n 0x9b81a	@ 0009b80a 06e0
.org 0x9b80c
	.byte 0x5c,0x9c,0x12,0x08	@ 0009b80c data
.org 0x9b810
	.byte 0x40,0xdb,0x85,0x08	@ 0009b810 data
.org 0x9b814
	ldrb r1, [r6, #10]	@ 0009b814 b17a
.org 0x9b816
	movs r0, #239	@ 0009b816 ef20
.org 0x9b818
	ands r0, r1	@ 0009b818 0840
.org 0x9b81a
	strb r0, [r6, #10]	@ 0009b81a b072
.org 0x9b81c
	movs r1, #1	@ 0009b81c 0121
.org 0x9b81e
	ands r1, r5	@ 0009b81e 2940
.org 0x9b820
	adds r0, r6, #0	@ 0009b820 301c
.org 0x9b822
	adds r0, #76	@ 0009b822 4c30
.org 0x9b824
	strb r1, [r0, #0]	@ 0009b824 0170
.org 0x9b826
	adds r3, r6, #0	@ 0009b826 331c
.org 0x9b828
	adds r3, #74	@ 0009b828 4a33
.org 0x9b82a
	lsls r1, r1, #4	@ 0009b82a 0901
.org 0x9b82c
	ldrb r2, [r3, #0]	@ 0009b82c 1a78
.org 0x9b82e
	movs r0, #17	@ 0009b82e 1120
.org 0x9b830
	negs r0, r0	@ 0009b830 4042
.org 0x9b832
	ands r0, r2	@ 0009b832 1040
.org 0x9b834
	orrs r0, r1	@ 0009b834 0843
.org 0x9b836
	strb r0, [r3, #0]	@ 0009b836 1870
.org 0x9b838
	adds r0, r6, #0	@ 0009b838 301c
.org 0x9b83a
	bl 0x9b848	@ 0009b83a 00f005f8
