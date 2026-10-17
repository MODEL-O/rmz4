@ FUN_080e4800  entry 0x080e4800  size 130
.thumb
.org 0xe4800
FUN_080e4800:
	push {r4, r5, r6, r7, lr}	@ 000e4800 f0b5
.org 0xe4802
	mov r7, r8	@ 000e4802 4746
.org 0xe4804
	push {r7}	@ 000e4804 80b4
.org 0xe4806
	adds r7, r0, #0	@ 000e4806 071c
.org 0xe4808
	ldr r4, [r7, #40]	@ 000e4808 bc6a
.org 0xe480a
	bl 0x1cff0	@ 000e480a 38f7f1fb
.org 0xe480e
	ldr r0, [r4, #84]	@ 000e480e 606d
.org 0xe4810
	ldr r1, [pc, #56]	@ 000e4810 0e49
.org 0xe4812
	adds r0, r0, r1	@ 000e4812 4018
.org 0xe4814
	ldr r5, [r4, #88]	@ 000e4814 a56d
.org 0xe4816
	ldr r6, [r7, #84]	@ 000e4816 7e6d
.org 0xe4818
	subs r0, r0, r6	@ 000e4818 801b
.org 0xe481a
	ldrb r1, [r7, #18]	@ 000e481a b97c
.org 0xe481c
	bl 0x128fb8	@ 000e481c 44f0ccfb
.org 0xe4820
	mov r8, r0	@ 000e4820 8046
.org 0xe4822
	str r0, [r7, #92]	@ 000e4822 f865
.org 0xe4824
	ldr r4, [r7, #88]	@ 000e4824 bc6d
.org 0xe4826
	subs r5, r5, r4	@ 000e4826 2d1b
.org 0xe4828
	ldrb r1, [r7, #18]	@ 000e4828 b97c
.org 0xe482a
	adds r0, r5, #0	@ 000e482a 281c
.org 0xe482c
	bl 0x128fb8	@ 000e482c 44f0c4fb
.org 0xe4830
	str r0, [r7, #96]	@ 000e4830 3866
.org 0xe4832
	add r6, r8	@ 000e4832 4644
.org 0xe4834
	str r6, [r7, #84]	@ 000e4834 7e65
.org 0xe4836
	adds r4, r4, r0	@ 000e4836 2418
.org 0xe4838
	str r4, [r7, #88]	@ 000e4838 bc65
.org 0xe483a
	ldrb r1, [r7, #18]	@ 000e483a b97c
.org 0xe483c
	movs r0, #1	@ 000e483c 0120
.org 0xe483e
	ands r0, r1	@ 000e483e 0840
.org 0xe4840
	cmp r0, #0	@ 000e4840 0028
.org 0xe4842
	beq.n 0xe4850	@ 000e4842 05d0
.org 0xe4844
	ldrb r1, [r7, #10]	@ 000e4844 b97a
.org 0xe4846
	movs r0, #254	@ 000e4846 fe20
.org 0xe4848
	ands r0, r1	@ 000e4848 0840
.org 0xe484a
	b.n 0xe4856	@ 000e484a 04e0
.org 0xe484c
	.byte 0x00,0xf9,0xff,0xff	@ 000e484c data
.org 0xe4850
	ldrb r0, [r7, #10]	@ 000e4850 b87a
.org 0xe4852
	movs r1, #1	@ 000e4852 0121
.org 0xe4854
	orrs r0, r1	@ 000e4854 0843
.org 0xe4856
	strb r0, [r7, #10]	@ 000e4856 b872
.org 0xe4858
	ldrb r0, [r7, #18]	@ 000e4858 b87c
.org 0xe485a
	subs r0, #1	@ 000e485a 0138
.org 0xe485c
	strb r0, [r7, #18]	@ 000e485c b874
.org 0xe485e
	lsls r0, r0, #24	@ 000e485e 0006
.org 0xe4860
	cmp r0, #0	@ 000e4860 0028
.org 0xe4862
	bne.n 0xe487c	@ 000e4862 0bd1
.org 0xe4864
	ldr r1, [pc, #32]	@ 000e4864 0849
.org 0xe4866
	ldrb r0, [r7, #9]	@ 000e4866 787a
.org 0xe4868
	lsls r0, r0, #2	@ 000e4868 8000
.org 0xe486a
	adds r0, r0, r1	@ 000e486a 4018
.org 0xe486c
	movs r1, #2	@ 000e486c 0221
.org 0xe486e
	str r1, [r7, #12]	@ 000e486e f960
.org 0xe4870
	ldr r0, [r0, #0]	@ 000e4870 0068
.org 0xe4872
	ldr r0, [r0, #8]	@ 000e4872 8068
.org 0xe4874
	str r0, [r7, #20]	@ 000e4874 7861
.org 0xe4876
	adds r0, r7, #0	@ 000e4876 381c
.org 0xe4878
	bl 0xe429c	@ 000e4878 fff710fd
.org 0xe487c
	pop {r3}	@ 000e487c 08bc
.org 0xe487e
	mov r8, r3	@ 000e487e 9846
.org 0xe4880
	pop {r4, r5, r6, r7}	@ 000e4880 f0bc
