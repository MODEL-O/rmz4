@ FUN_0810d85c  entry 0x0810d85c  size 82
.thumb
.org 0x10d85c
FUN_0810d85c:
	push {r4, r5, lr}	@ 0010d85c 30b5
.org 0x10d85e
	adds r4, r0, #0	@ 0010d85e 041c
.org 0x10d860
	adds r5, r1, #0	@ 0010d860 0d1c
.org 0x10d862
	ldr r3, [pc, #76]	@ 0010d862 134b
.org 0x10d864
	movs r1, #4	@ 0010d864 0421
.org 0x10d866
	ldrsh r0, [r3, r1]	@ 0010d866 585e
.org 0x10d868
	cmp r0, #95	@ 0010d868 5f28
.org 0x10d86a
	bgt.n 0x10d8a8	@ 0010d86a 1ddc
.org 0x10d86c
	lsls r0, r0, #2	@ 0010d86c 8000
.org 0x10d86e
	adds r1, r3, #0	@ 0010d86e 191c
.org 0x10d870
	adds r1, #8	@ 0010d870 0831
.org 0x10d872
	adds r0, r0, r1	@ 0010d872 4018
.org 0x10d874
	str r4, [r0, #0]	@ 0010d874 0460
.org 0x10d876
	movs r4, #4	@ 0010d876 0424
.org 0x10d878
	ldrsh r0, [r3, r4]	@ 0010d878 185f
.org 0x10d87a
	movs r4, #196	@ 0010d87a c424
.org 0x10d87c
	lsls r4, r4, #1	@ 0010d87c 6400
.org 0x10d87e
	adds r1, r3, r4	@ 0010d87e 1919
.org 0x10d880
	adds r0, r0, r1	@ 0010d880 4018
.org 0x10d882
	strb r5, [r0, #0]	@ 0010d882 0570
.org 0x10d884
	movs r1, #4	@ 0010d884 0421
.org 0x10d886
	ldrsh r0, [r3, r1]	@ 0010d886 585e
.org 0x10d888
	adds r4, #96	@ 0010d888 6034
.org 0x10d88a
	adds r1, r3, r4	@ 0010d88a 1919
.org 0x10d88c
	adds r0, r0, r1	@ 0010d88c 4018
.org 0x10d88e
	strb r2, [r0, #0]	@ 0010d88e 0270
.org 0x10d890
	movs r1, #4	@ 0010d890 0421
.org 0x10d892
	ldrsh r0, [r3, r1]	@ 0010d892 585e
.org 0x10d894
	lsls r0, r0, #1	@ 0010d894 4000
.org 0x10d896
	movs r2, #146	@ 0010d896 9222
.org 0x10d898
	lsls r2, r2, #2	@ 0010d898 9200
.org 0x10d89a
	adds r1, r3, r2	@ 0010d89a 9918
.org 0x10d89c
	adds r0, r0, r1	@ 0010d89c 4018
.org 0x10d89e
	ldr r1, [pc, #20]	@ 0010d89e 0549
.org 0x10d8a0
	strh r1, [r0, #0]	@ 0010d8a0 0180
.org 0x10d8a2
	ldrh r0, [r3, #4]	@ 0010d8a2 9888
.org 0x10d8a4
	adds r0, #1	@ 0010d8a4 0130
.org 0x10d8a6
	strh r0, [r3, #4]	@ 0010d8a6 9880
.org 0x10d8a8
	pop {r4, r5}	@ 0010d8a8 30bc
.org 0x10d8aa
	pop {r0}	@ 0010d8aa 01bc
.org 0x10d8ac
	bx r0	@ 0010d8ac 0047
