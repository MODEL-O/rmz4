@ FUN_0801f80c  entry 0x0801f80c  size 92
.thumb
.org 0x1f80c
FUN_0801f80c:
	push {r4, lr}	@ 0001f80c 10b5
.org 0x1f80e
	ldr r4, [pc, #88]	@ 0001f80e 164c
.org 0x1f810
	ldr r0, [pc, #88]	@ 0001f810 1648
.org 0x1f812
	ldrh r1, [r0, #4]	@ 0001f812 8188
.org 0x1f814
	movs r0, #8	@ 0001f814 0820
.org 0x1f816
	ands r0, r1	@ 0001f816 0840
.org 0x1f818
	cmp r0, #0	@ 0001f818 0028
.org 0x1f81a
	beq.n 0x1f862	@ 0001f81a 22d0
.org 0x1f81c
	ldr r2, [pc, #80]	@ 0001f81c 144a
.org 0x1f81e
	ldrh r1, [r2, #8]	@ 0001f81e 1189
.org 0x1f820
	movs r0, #128	@ 0001f820 8020
.org 0x1f822
	ands r0, r1	@ 0001f822 0840
.org 0x1f824
	cmp r0, #0	@ 0001f824 0028
.org 0x1f826
	beq.n 0x1f862	@ 0001f826 1cd0
.org 0x1f828
	ldrb r1, [r2, #3]	@ 0001f828 d178
.org 0x1f82a
	adds r0, r1, #0	@ 0001f82a 081c
.org 0x1f82c
	cmp r0, #255	@ 0001f82c ff28
.org 0x1f82e
	beq.n 0x1f832	@ 0001f82e 00d0
.org 0x1f830
	strb r1, [r2, #2]	@ 0001f830 9170
.org 0x1f832
	ldr r1, [pc, #64]	@ 0001f832 1049
.org 0x1f834
	adds r0, r4, r1	@ 0001f834 6018
.org 0x1f836
	ldr r0, [r0, #0]	@ 0001f836 0068
.org 0x1f838
	ldr r2, [pc, #60]	@ 0001f838 0f4a
.org 0x1f83a
	adds r1, r4, r2	@ 0001f83a a118
.org 0x1f83c
	bl 0x3830c	@ 0001f83c 18f066fd
.org 0x1f840
	ldr r1, [pc, #56]	@ 0001f840 0e49
.org 0x1f842
	ldr r3, [pc, #60]	@ 0001f842 0f4b
.org 0x1f844
	adds r0, r1, r3	@ 0001f844 c818
.org 0x1f846
	movs r2, #0	@ 0001f846 0022
.org 0x1f848
	strb r2, [r0, #0]	@ 0001f848 0270
.org 0x1f84a
	subs r3, #1	@ 0001f84a 013b
.org 0x1f84c
	adds r0, r1, r3	@ 0001f84c c818
.org 0x1f84e
	strb r2, [r0, #0]	@ 0001f84e 0270
.org 0x1f850
	movs r0, #128	@ 0001f850 8020
.org 0x1f852
	lsls r0, r0, #3	@ 0001f852 c000
.org 0x1f854
	adds r1, r1, r0	@ 0001f854 0918
.org 0x1f856
	strb r2, [r1, #0]	@ 0001f856 0a70
.org 0x1f858
	movs r1, #240	@ 0001f858 f021
.org 0x1f85a
	lsls r1, r1, #4	@ 0001f85a 0901
.org 0x1f85c
	adds r0, r4, #0	@ 0001f85c 201c
.org 0x1f85e
	bl 0x1126ac	@ 0001f85e f2f025ff
.org 0x1f862
	pop {r4}	@ 0001f862 10bc
.org 0x1f864
	pop {r0}	@ 0001f864 01bc
.org 0x1f866
	bx r0	@ 0001f866 0047
