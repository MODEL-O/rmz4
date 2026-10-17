@ FUN_080e6838  entry 0x080e6838  size 66
.thumb
.org 0xe6838
FUN_080e6838:
	push {r4, lr}	@ 000e6838 10b5
.org 0xe683a
	adds r4, r0, #0	@ 000e683a 041c
.org 0xe683c
	bl 0x1cc9c	@ 000e683c 36f72efa
.org 0xe6840
	ldrb r1, [r4, #10]	@ 000e6840 a17a
.org 0xe6842
	movs r0, #1	@ 000e6842 0120
.org 0xe6844
	orrs r0, r1	@ 000e6844 0843
.org 0xe6846
	movs r1, #2	@ 000e6846 0221
.org 0xe6848
	orrs r0, r1	@ 000e6848 0843
.org 0xe684a
	strb r0, [r4, #10]	@ 000e684a a072
.org 0xe684c
	ldr r1, [pc, #44]	@ 000e684c 0b49
.org 0xe684e
	ldrb r0, [r4, #9]	@ 000e684e 607a
.org 0xe6850
	lsls r0, r0, #2	@ 000e6850 8000
.org 0xe6852
	adds r0, r0, r1	@ 000e6852 4018
.org 0xe6854
	movs r1, #1	@ 000e6854 0121
.org 0xe6856
	str r1, [r4, #12]	@ 000e6856 e160
.org 0xe6858
	ldr r0, [r0, #0]	@ 000e6858 0068
.org 0xe685a
	ldr r0, [r0, #4]	@ 000e685a 4068
.org 0xe685c
	str r0, [r4, #20]	@ 000e685c 6061
.org 0xe685e
	ldr r1, [pc, #32]	@ 000e685e 0849
.org 0xe6860
	ldrb r0, [r4, #16]	@ 000e6860 207c
.org 0xe6862
	lsls r0, r0, #2	@ 000e6862 8000
.org 0xe6864
	adds r0, r0, r1	@ 000e6864 4018
.org 0xe6866
	ldr r1, [r0, #0]	@ 000e6866 0168
.org 0xe6868
	adds r0, r4, #0	@ 000e6868 201c
.org 0xe686a
	bl 0x128f80	@ 000e686a 42f089fb
.org 0xe686e
	adds r0, r4, #0	@ 000e686e 201c
.org 0xe6870
	bl 0xe6884	@ 000e6870 00f008f8
.org 0xe6874
	pop {r4}	@ 000e6874 10bc
.org 0xe6876
	pop {r0}	@ 000e6876 01bc
.org 0xe6878
	bx r0	@ 000e6878 0047
