@ FUN_08002664  entry 0x08002664  size 72
.thumb
.org 0x2664
FUN_08002664:
	push {lr}	@ 00002664 00b5
.org 0x2666
	sub sp, #4	@ 00002666 81b0
.org 0x2668
	ldr r2, [pc, #64]	@ 00002668 104a
.org 0x266a
	ldrh r1, [r2, #0]	@ 0000266a 1188
.org 0x266c
	ldr r0, [pc, #64]	@ 0000266c 1048
.org 0x266e
	ands r0, r1	@ 0000266e 0840
.org 0x2670
	movs r3, #0	@ 00002670 0023
.org 0x2672
	ldr r1, [pc, #64]	@ 00002672 1049
.org 0x2674
	ands r0, r1	@ 00002674 0840
.org 0x2676
	strh r0, [r2, #0]	@ 00002676 1080
.org 0x2678
	str r3, [sp, #0]	@ 00002678 0093
.org 0x267a
	ldr r1, [pc, #60]	@ 0000267a 0f49
.org 0x267c
	mov r0, sp	@ 0000267c 6846
.org 0x267e
	str r0, [r1, #0]	@ 0000267e 0860
.org 0x2680
	adds r0, r2, #4	@ 00002680 101d
.org 0x2682
	str r0, [r1, #4]	@ 00002682 4860
.org 0x2684
	ldr r0, [pc, #52]	@ 00002684 0d48
.org 0x2686
	str r0, [r1, #8]	@ 00002686 8860
.org 0x2688
	ldr r0, [r1, #8]	@ 00002688 8868
.org 0x268a
	ldr r1, [pc, #52]	@ 0000268a 0d49
.org 0x268c
	adds r0, r1, #0	@ 0000268c 081c
.org 0x268e
	strh r0, [r2, #4]	@ 0000268e 9080
.org 0x2690
	ldr r1, [pc, #48]	@ 00002690 0c49
.org 0x2692
	adds r0, r1, #0	@ 00002692 081c
.org 0x2694
	strh r0, [r2, #6]	@ 00002694 d080
.org 0x2696
	ldr r1, [pc, #48]	@ 00002696 0c49
.org 0x2698
	adds r0, r1, #0	@ 00002698 081c
.org 0x269a
	strh r0, [r2, #8]	@ 0000269a 1081
.org 0x269c
	ldr r1, [pc, #44]	@ 0000269c 0b49
.org 0x269e
	adds r0, r1, #0	@ 0000269e 081c
.org 0x26a0
	strh r0, [r2, #10]	@ 000026a0 5081
.org 0x26a2
	bl 0x26d0	@ 000026a2 00f015f8
.org 0x26a6
	add sp, #4	@ 000026a6 01b0
.org 0x26a8
	pop {r0}	@ 000026a8 01bc
.org 0x26aa
	bx r0	@ 000026aa 0047
