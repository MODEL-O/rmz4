@ FUN_080a581c  entry 0x080a581c  size 100
.thumb
.org 0xa581c
FUN_080a581c:
	push {r4, lr}	@ 000a581c 10b5
.org 0xa581e
	adds r4, r0, #0	@ 000a581e 041c
.org 0xa5820
	ldrb r1, [r4, #15]	@ 000a5820 e17b
.org 0xa5822
	cmp r1, #0	@ 000a5822 0029
.org 0xa5824
	bne.n 0xa5850	@ 000a5824 14d1
.org 0xa5826
	adds r0, #140	@ 000a5826 8c30
.org 0xa5828
	str r1, [r0, #0]	@ 000a5828 0160
.org 0xa582a
	adds r0, #4	@ 000a582a 0430
.org 0xa582c
	str r1, [r0, #0]	@ 000a582c 0160
.org 0xa582e
	adds r0, #4	@ 000a582e 0430
.org 0xa5830
	strb r1, [r0, #0]	@ 000a5830 0170
.org 0xa5832
	ldrb r1, [r4, #10]	@ 000a5832 a17a
.org 0xa5834
	movs r0, #251	@ 000a5834 fb20
.org 0xa5836
	ands r0, r1	@ 000a5836 0840
.org 0xa5838
	strb r0, [r4, #10]	@ 000a5838 a072
.org 0xa583a
	ldr r1, [pc, #68]	@ 000a583a 1149
.org 0xa583c
	adds r0, r4, #0	@ 000a583c 201c
.org 0xa583e
	bl 0x1cf00	@ 000a583e 77f75ffb
.org 0xa5842
	adds r0, r4, #0	@ 000a5842 201c
.org 0xa5844
	movs r1, #14	@ 000a5844 0e21
.org 0xa5846
	bl 0x1d3d0	@ 000a5846 77f7c3fd
.org 0xa584a
	ldrb r0, [r4, #15]	@ 000a584a e07b
.org 0xa584c
	adds r0, #1	@ 000a584c 0130
.org 0xa584e
	strb r0, [r4, #15]	@ 000a584e e073
.org 0xa5850
	adds r0, r4, #0	@ 000a5850 201c
.org 0xa5852
	bl 0x1cff0	@ 000a5852 77f7cdfb
.org 0xa5856
	adds r0, r4, #0	@ 000a5856 201c
.org 0xa5858
	adds r0, #115	@ 000a5858 7330
.org 0xa585a
	ldrb r0, [r0, #0]	@ 000a585a 0078
.org 0xa585c
	cmp r0, #3	@ 000a585c 0328
.org 0xa585e
	bne.n 0xa587a	@ 000a585e 0cd1
.org 0xa5860
	ldrb r1, [r4, #10]	@ 000a5860 a17a
.org 0xa5862
	movs r0, #254	@ 000a5862 fe20
.org 0xa5864
	ands r0, r1	@ 000a5864 0840
.org 0xa5866
	strb r0, [r4, #10]	@ 000a5866 a072
.org 0xa5868
	ldr r1, [pc, #24]	@ 000a5868 0649
.org 0xa586a
	ldrb r0, [r4, #9]	@ 000a586a 607a
.org 0xa586c
	lsls r0, r0, #2	@ 000a586c 8000
.org 0xa586e
	adds r0, r0, r1	@ 000a586e 4018
.org 0xa5870
	movs r1, #4	@ 000a5870 0421
.org 0xa5872
	str r1, [r4, #12]	@ 000a5872 e160
.org 0xa5874
	ldr r0, [r0, #0]	@ 000a5874 0068
.org 0xa5876
	ldr r0, [r0, #16]	@ 000a5876 0069
.org 0xa5878
	str r0, [r4, #20]	@ 000a5878 6061
.org 0xa587a
	pop {r4}	@ 000a587a 10bc
.org 0xa587c
	pop {r0}	@ 000a587c 01bc
.org 0xa587e
	bx r0	@ 000a587e 0047
