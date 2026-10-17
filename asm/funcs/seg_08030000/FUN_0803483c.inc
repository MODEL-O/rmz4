@ FUN_0803483c  entry 0x0803483c  size 78
.thumb
.org 0x3483c
FUN_0803483c:
	push {r4, r5, lr}	@ 0003483c 30b5
.org 0x3483e
	adds r4, r0, #0	@ 0003483e 041c
.org 0x34840
	movs r0, #129	@ 00034840 8120
.org 0x34842
	lsls r0, r0, #1	@ 00034842 4000
.org 0x34844
	adds r5, r4, r0	@ 00034844 2518
.org 0x34846
	ldrb r0, [r5, #0]	@ 00034846 2878
.org 0x34848
	cmp r0, #0	@ 00034848 0028
.org 0x3484a
	bne.n 0x34864	@ 0003484a 0bd1
.org 0x3484c
	ldr r1, [pc, #60]	@ 0003484c 0f49
.org 0x3484e
	adds r0, r4, #0	@ 0003484e 201c
.org 0x34850
	bl 0x1cf00	@ 00034850 e8f756fb
.org 0x34854
	movs r0, #169	@ 00034854 a920
.org 0x34856
	lsls r0, r0, #1	@ 00034856 4000
.org 0x34858
	adds r1, r4, r0	@ 00034858 2118
.org 0x3485a
	movs r0, #14	@ 0003485a 0e20
.org 0x3485c
	strb r0, [r1, #0]	@ 0003485c 0870
.org 0x3485e
	ldrb r0, [r5, #0]	@ 0003485e 2878
.org 0x34860
	adds r0, #1	@ 00034860 0130
.org 0x34862
	strb r0, [r5, #0]	@ 00034862 2870
.org 0x34864
	movs r0, #169	@ 00034864 a920
.org 0x34866
	lsls r0, r0, #1	@ 00034866 4000
.org 0x34868
	adds r1, r4, r0	@ 00034868 2118
.org 0x3486a
	ldrb r0, [r1, #0]	@ 0003486a 0878
.org 0x3486c
	subs r0, #1	@ 0003486c 0138
.org 0x3486e
	strb r0, [r1, #0]	@ 0003486e 0870
.org 0x34870
	lsls r0, r0, #24	@ 00034870 0006
.org 0x34872
	lsrs r0, r0, #24	@ 00034872 000e
.org 0x34874
	cmp r0, #255	@ 00034874 ff28
.org 0x34876
	bne.n 0x34884	@ 00034876 05d1
.org 0x34878
	ldr r0, [pc, #20]	@ 00034878 0548
.org 0x3487a
	adds r1, r4, r0	@ 0003487a 2118
.org 0x3487c
	movs r0, #4	@ 0003487c 0420
.org 0x3487e
	strb r0, [r1, #0]	@ 0003487e 0870
.org 0x34880
	movs r0, #0	@ 00034880 0020
.org 0x34882
	strb r0, [r5, #0]	@ 00034882 2870
.org 0x34884
	pop {r4, r5}	@ 00034884 30bc
.org 0x34886
	pop {r0}	@ 00034886 01bc
.org 0x34888
	bx r0	@ 00034888 0047
