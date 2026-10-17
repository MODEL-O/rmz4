@ FUN_0809e85c  entry 0x0809e85c  size 62
.thumb
.org 0x9e85c
FUN_0809e85c:
	push {r4, lr}	@ 0009e85c 10b5
.org 0x9e85e
	adds r4, r0, #0	@ 0009e85e 041c
.org 0x9e860
	ldrb r0, [r4, #16]	@ 0009e860 207c
.org 0x9e862
	cmp r0, #0	@ 0009e862 0028
.org 0x9e864
	bne.n 0x9e878	@ 0009e864 08d1
.org 0x9e866
	adds r1, r4, #0	@ 0009e866 211c
.org 0x9e868
	adds r1, #84	@ 0009e868 5431
.org 0x9e86a
	movs r0, #1	@ 0009e86a 0120
.org 0x9e86c
	bl 0xd0c88	@ 0009e86c 32f00cfa
.org 0x9e870
	movs r0, #53	@ 0009e870 3520
.org 0x9e872
	bl 0x2b10	@ 0009e872 64f74df9
.org 0x9e876
	b.n 0x9e882	@ 0009e876 04e0
.org 0x9e878
	adds r1, r4, #0	@ 0009e878 211c
.org 0x9e87a
	adds r1, #84	@ 0009e87a 5431
.org 0x9e87c
	movs r0, #2	@ 0009e87c 0220
.org 0x9e87e
	bl 0xd0c88	@ 0009e87e 32f003fa
.org 0x9e882
	ldr r1, [pc, #24]	@ 0009e882 0649
.org 0x9e884
	ldrb r0, [r4, #9]	@ 0009e884 607a
.org 0x9e886
	lsls r0, r0, #2	@ 0009e886 8000
.org 0x9e888
	adds r0, r0, r1	@ 0009e888 4018
.org 0x9e88a
	movs r1, #4	@ 0009e88a 0421
.org 0x9e88c
	str r1, [r4, #12]	@ 0009e88c e160
.org 0x9e88e
	ldr r0, [r0, #0]	@ 0009e88e 0068
.org 0x9e890
	ldr r0, [r0, #16]	@ 0009e890 0069
.org 0x9e892
	str r0, [r4, #20]	@ 0009e892 6061
.org 0x9e894
	pop {r4}	@ 0009e894 10bc
.org 0x9e896
	pop {r0}	@ 0009e896 01bc
.org 0x9e898
	bx r0	@ 0009e898 0047
