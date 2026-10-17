@ FUN_0801a824  entry 0x0801a824  size 70
.thumb
.org 0x1a824
FUN_0801a824:
	push {r4, lr}	@ 0001a824 10b5
.org 0x1a826
	ldr r1, [pc, #68]	@ 0001a826 1149
.org 0x1a828
	ldr r0, [pc, #68]	@ 0001a828 1148
.org 0x1a82a
	adds r2, r1, r0	@ 0001a82a 0a18
.org 0x1a82c
	movs r3, #0	@ 0001a82c 0023
.org 0x1a82e
	movs r0, #16	@ 0001a82e 1020
.org 0x1a830
	strb r0, [r2, #0]	@ 0001a830 1070
.org 0x1a832
	ldr r2, [pc, #64]	@ 0001a832 104a
.org 0x1a834
	adds r0, r1, r2	@ 0001a834 8818
.org 0x1a836
	strb r3, [r0, #0]	@ 0001a836 0370
.org 0x1a838
	ldr r4, [pc, #60]	@ 0001a838 0f4c
.org 0x1a83a
	adds r0, r1, r4	@ 0001a83a 0819
.org 0x1a83c
	strb r3, [r0, #0]	@ 0001a83c 0370
.org 0x1a83e
	adds r2, #4	@ 0001a83e 0432
.org 0x1a840
	adds r0, r1, r2	@ 0001a840 8818
.org 0x1a842
	strb r3, [r0, #0]	@ 0001a842 0370
.org 0x1a844
	adds r4, #1	@ 0001a844 0134
.org 0x1a846
	adds r0, r1, r4	@ 0001a846 0819
.org 0x1a848
	movs r2, #0	@ 0001a848 0022
.org 0x1a84a
	strh r3, [r0, #0]	@ 0001a84a 0380
.org 0x1a84c
	adds r4, #6	@ 0001a84c 0634
.org 0x1a84e
	adds r0, r1, r4	@ 0001a84e 0819
.org 0x1a850
	strb r2, [r0, #0]	@ 0001a850 0270
.org 0x1a852
	adds r4, #1	@ 0001a852 0134
.org 0x1a854
	adds r0, r1, r4	@ 0001a854 0819
.org 0x1a856
	strb r2, [r0, #0]	@ 0001a856 0270
.org 0x1a858
	adds r4, #3	@ 0001a858 0334
.org 0x1a85a
	adds r0, r1, r4	@ 0001a85a 0819
.org 0x1a85c
	str r3, [r0, #0]	@ 0001a85c 0360
.org 0x1a85e
	ldr r0, [pc, #28]	@ 0001a85e 0748
.org 0x1a860
	adds r1, r1, r0	@ 0001a860 0918
.org 0x1a862
	strb r2, [r1, #0]	@ 0001a862 0a70
.org 0x1a864
	pop {r4}	@ 0001a864 10bc
.org 0x1a866
	pop {r0}	@ 0001a866 01bc
.org 0x1a868
	bx r0	@ 0001a868 0047
