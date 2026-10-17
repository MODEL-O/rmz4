@ FUN_080d296c  entry 0x080d296c  size 74
.thumb
.org 0xd296c
FUN_080d296c:
	push {r4, r5, r6, lr}	@ 000d296c 70b5
.org 0xd296e
	adds r5, r0, #0	@ 000d296e 051c
.org 0xd2970
	adds r6, r1, #0	@ 000d2970 0e1c
.org 0xd2972
	ldr r0, [pc, #68]	@ 000d2972 1148
.org 0xd2974
	ldr r0, [r0, #0]	@ 000d2974 0068
.org 0xd2976
	bl 0x5500	@ 000d2976 32f7c3fd
.org 0xd297a
	adds r4, r0, #0	@ 000d297a 041c
.org 0xd297c
	cmp r4, #0	@ 000d297c 002c
.org 0xd297e
	beq.n 0xd29ae	@ 000d297e 16d0
.org 0xd2980
	adds r1, r4, #0	@ 000d2980 211c
.org 0xd2982
	adds r1, #37	@ 000d2982 2531
.org 0xd2984
	movs r3, #0	@ 000d2984 0023
.org 0xd2986
	movs r0, #1	@ 000d2986 0120
.org 0xd2988
	strb r0, [r1, #0]	@ 000d2988 0870
.org 0xd298a
	ldr r1, [pc, #48]	@ 000d298a 0c49
.org 0xd298c
	movs r0, #7	@ 000d298c 0720
.org 0xd298e
	strb r0, [r4, #9]	@ 000d298e 6072
.org 0xd2990
	ldr r0, [r1, #28]	@ 000d2990 c869
.org 0xd2992
	ldr r0, [r0, #0]	@ 000d2992 0068
.org 0xd2994
	str r0, [r4, #20]	@ 000d2994 6061
.org 0xd2996
	movs r2, #0	@ 000d2996 0022
.org 0xd2998
	strh r3, [r4, #32]	@ 000d2998 2384
.org 0xd299a
	adds r0, r4, #0	@ 000d299a 201c
.org 0xd299c
	adds r0, #34	@ 000d299c 2230
.org 0xd299e
	strb r2, [r0, #0]	@ 000d299e 0270
.org 0xd29a0
	str r5, [r4, #40]	@ 000d29a0 a562
.org 0xd29a2
	ldr r0, [r6, #0]	@ 000d29a2 3068
.org 0xd29a4
	ldr r1, [r6, #4]	@ 000d29a4 7168
.org 0xd29a6
	str r0, [r4, #92]	@ 000d29a6 e065
.org 0xd29a8
	str r1, [r4, #96]	@ 000d29a8 2166
.org 0xd29aa
	strb r2, [r4, #16]	@ 000d29aa 2274
.org 0xd29ac
	strb r2, [r4, #17]	@ 000d29ac 6274
.org 0xd29ae
	adds r0, r4, #0	@ 000d29ae 201c
.org 0xd29b0
	pop {r4, r5, r6}	@ 000d29b0 70bc
.org 0xd29b2
	pop {r1}	@ 000d29b2 02bc
.org 0xd29b4
	bx r1	@ 000d29b4 0847
