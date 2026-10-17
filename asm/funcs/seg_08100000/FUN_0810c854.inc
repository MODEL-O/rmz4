@ FUN_0810c854  entry 0x0810c854  size 94
.thumb
.org 0x10c854
FUN_0810c854:
	push {r4, r5, lr}	@ 0010c854 30b5
.org 0x10c856
	adds r4, r0, #0	@ 0010c856 041c
.org 0x10c858
	bl 0x1cc9c	@ 0010c858 10f720fa
.org 0x10c85c
	ldrb r1, [r4, #10]	@ 0010c85c a17a
.org 0x10c85e
	movs r0, #1	@ 0010c85e 0120
.org 0x10c860
	movs r5, #0	@ 0010c860 0025
.org 0x10c862
	orrs r0, r1	@ 0010c862 0843
.org 0x10c864
	movs r1, #2	@ 0010c864 0221
.org 0x10c866
	orrs r0, r1	@ 0010c866 0843
.org 0x10c868
	strb r0, [r4, #10]	@ 0010c868 a072
.org 0x10c86a
	ldr r1, [pc, #72]	@ 0010c86a 1249
.org 0x10c86c
	adds r0, r4, #0	@ 0010c86c 201c
.org 0x10c86e
	bl 0x1cf00	@ 0010c86e 10f747fb
.org 0x10c872
	adds r0, r4, #0	@ 0010c872 201c
.org 0x10c874
	bl 0x1cff0	@ 0010c874 10f7bcfb
.org 0x10c878
	adds r0, r4, #0	@ 0010c878 201c
.org 0x10c87a
	adds r0, #76	@ 0010c87a 4c30
.org 0x10c87c
	strb r5, [r0, #0]	@ 0010c87c 0570
.org 0x10c87e
	adds r2, r4, #0	@ 0010c87e 221c
.org 0x10c880
	adds r2, #74	@ 0010c880 4a32
.org 0x10c882
	ldrb r1, [r2, #0]	@ 0010c882 1178
.org 0x10c884
	movs r0, #17	@ 0010c884 1120
.org 0x10c886
	negs r0, r0	@ 0010c886 4042
.org 0x10c888
	ands r0, r1	@ 0010c888 0840
.org 0x10c88a
	strb r0, [r2, #0]	@ 0010c88a 1070
.org 0x10c88c
	ldrb r1, [r4, #10]	@ 0010c88c a17a
.org 0x10c88e
	movs r0, #239	@ 0010c88e ef20
.org 0x10c890
	ands r0, r1	@ 0010c890 0840
.org 0x10c892
	strb r0, [r4, #10]	@ 0010c892 a072
.org 0x10c894
	ldr r1, [pc, #32]	@ 0010c894 0849
.org 0x10c896
	ldrb r0, [r4, #9]	@ 0010c896 607a
.org 0x10c898
	lsls r0, r0, #2	@ 0010c898 8000
.org 0x10c89a
	adds r0, r0, r1	@ 0010c89a 4018
.org 0x10c89c
	movs r1, #1	@ 0010c89c 0121
.org 0x10c89e
	str r1, [r4, #12]	@ 0010c89e e160
.org 0x10c8a0
	ldr r0, [r0, #0]	@ 0010c8a0 0068
.org 0x10c8a2
	ldr r0, [r0, #4]	@ 0010c8a2 4068
.org 0x10c8a4
	str r0, [r4, #20]	@ 0010c8a4 6061
.org 0x10c8a6
	adds r0, r4, #0	@ 0010c8a6 201c
.org 0x10c8a8
	bl 0x10c7e0	@ 0010c8a8 fff79aff
.org 0x10c8ac
	pop {r4, r5}	@ 0010c8ac 30bc
.org 0x10c8ae
	pop {r0}	@ 0010c8ae 01bc
.org 0x10c8b0
	bx r0	@ 0010c8b0 0047
