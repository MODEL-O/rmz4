@ FUN_080a6954  entry 0x080a6954  size 80
.thumb
.org 0xa6954
FUN_080a6954:
	push {r4, r5, lr}	@ 000a6954 30b5
.org 0xa6956
	adds r5, r0, #0	@ 000a6956 051c
.org 0xa6958
	ldr r0, [pc, #72]	@ 000a6958 1248
.org 0xa695a
	ldr r0, [r0, #0]	@ 000a695a 0068
.org 0xa695c
	bl 0x5500	@ 000a695c 5ef7d0fd
.org 0xa6960
	adds r4, r0, #0	@ 000a6960 041c
.org 0xa6962
	cmp r4, #0	@ 000a6962 002c
.org 0xa6964
	beq.n 0xa699e	@ 000a6964 1bd0
.org 0xa6966
	adds r1, r4, #0	@ 000a6966 211c
.org 0xa6968
	adds r1, #37	@ 000a6968 2531
.org 0xa696a
	movs r3, #0	@ 000a696a 0023
.org 0xa696c
	movs r0, #24	@ 000a696c 1820
.org 0xa696e
	strb r0, [r1, #0]	@ 000a696e 0870
.org 0xa6970
	ldr r0, [pc, #52]	@ 000a6970 0d48
.org 0xa6972
	movs r1, #64	@ 000a6972 4021
.org 0xa6974
	strb r1, [r4, #9]	@ 000a6974 6172
.org 0xa6976
	adds r1, #192	@ 000a6976 c031
.org 0xa6978
	adds r0, r0, r1	@ 000a6978 4018
.org 0xa697a
	ldr r0, [r0, #0]	@ 000a697a 0068
.org 0xa697c
	ldr r0, [r0, #0]	@ 000a697c 0068
.org 0xa697e
	str r0, [r4, #20]	@ 000a697e 6061
.org 0xa6980
	movs r2, #0	@ 000a6980 0022
.org 0xa6982
	strh r3, [r4, #32]	@ 000a6982 2384
.org 0xa6984
	adds r0, r4, #0	@ 000a6984 201c
.org 0xa6986
	adds r0, #34	@ 000a6986 2230
.org 0xa6988
	strb r2, [r0, #0]	@ 000a6988 0270
.org 0xa698a
	ldrb r1, [r4, #11]	@ 000a698a e17a
.org 0xa698c
	movs r0, #16	@ 000a698c 1020
.org 0xa698e
	orrs r0, r1	@ 000a698e 0843
.org 0xa6990
	strb r0, [r4, #11]	@ 000a6990 e072
.org 0xa6992
	ldrb r0, [r4, #28]	@ 000a6992 207f
.org 0xa6994
	strb r0, [r4, #29]	@ 000a6994 6077
.org 0xa6996
	str r5, [r4, #40]	@ 000a6996 a562
.org 0xa6998
	movs r0, #1	@ 000a6998 0120
.org 0xa699a
	strb r0, [r4, #16]	@ 000a699a 2074
.org 0xa699c
	strb r2, [r4, #17]	@ 000a699c 6274
.org 0xa699e
	pop {r4, r5}	@ 000a699e 30bc
.org 0xa69a0
	pop {r0}	@ 000a69a0 01bc
.org 0xa69a2
	bx r0	@ 000a69a2 0047
