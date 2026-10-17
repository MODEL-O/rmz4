@ FUN_080f800c  entry 0x080f800c  size 118
.thumb
.org 0xf800c
FUN_080f800c:
	push {r4, r5, r6, lr}	@ 000f800c 70b5
.org 0xf800e
	adds r6, r0, #0	@ 000f800e 061c
.org 0xf8010
	bl 0x1cc9c	@ 000f8010 24f744fe
.org 0xf8014
	ldrb r1, [r6, #10]	@ 000f8014 b17a
.org 0xf8016
	movs r0, #1	@ 000f8016 0120
.org 0xf8018
	movs r4, #0	@ 000f8018 0024
.org 0xf801a
	adds r2, r0, #0	@ 000f801a 021c
.org 0xf801c
	orrs r2, r1	@ 000f801c 0a43
.org 0xf801e
	movs r0, #2	@ 000f801e 0220
.org 0xf8020
	orrs r2, r0	@ 000f8020 0243
.org 0xf8022
	orrs r2, r4	@ 000f8022 2243
.org 0xf8024
	strb r2, [r6, #10]	@ 000f8024 b272
.org 0xf8026
	ldrb r0, [r6, #17]	@ 000f8026 707c
.org 0xf8028
	cmp r0, #0	@ 000f8028 0028
.org 0xf802a
	beq.n 0xf804c	@ 000f802a 0fd0
.org 0xf802c
	movs r1, #1	@ 000f802c 0121
.org 0xf802e
	movs r0, #16	@ 000f802e 1020
.org 0xf8030
	orrs r2, r0	@ 000f8030 0243
.org 0xf8032
	strb r2, [r6, #10]	@ 000f8032 b272
.org 0xf8034
	adds r0, r6, #0	@ 000f8034 301c
.org 0xf8036
	adds r0, #76	@ 000f8036 4c30
.org 0xf8038
	strb r1, [r0, #0]	@ 000f8038 0170
.org 0xf803a
	adds r3, r6, #0	@ 000f803a 331c
.org 0xf803c
	adds r3, #74	@ 000f803c 4a33
.org 0xf803e
	movs r2, #16	@ 000f803e 1022
.org 0xf8040
	ldrb r1, [r3, #0]	@ 000f8040 1978
.org 0xf8042
	movs r0, #17	@ 000f8042 1120
.org 0xf8044
	negs r0, r0	@ 000f8044 4042
.org 0xf8046
	ands r0, r1	@ 000f8046 0840
.org 0xf8048
	orrs r0, r2	@ 000f8048 1043
.org 0xf804a
	strb r0, [r3, #0]	@ 000f804a 1870
.org 0xf804c
	ldrb r0, [r6, #10]	@ 000f804c b07a
.org 0xf804e
	movs r1, #4	@ 000f804e 0421
.org 0xf8050
	orrs r0, r1	@ 000f8050 0843
.org 0xf8052
	movs r5, #0	@ 000f8052 0025
.org 0xf8054
	strb r0, [r6, #10]	@ 000f8054 b072
.org 0xf8056
	adds r4, r6, #0	@ 000f8056 341c
.org 0xf8058
	adds r4, #116	@ 000f8058 7434
.org 0xf805a
	ldr r1, [pc, #40]	@ 000f805a 0a49
.org 0xf805c
	adds r2, r6, #0	@ 000f805c 321c
.org 0xf805e
	adds r2, #84	@ 000f805e 5432
.org 0xf8060
	adds r0, r4, #0	@ 000f8060 201c
.org 0xf8062
	movs r3, #0	@ 000f8062 0023
.org 0xf8064
	bl 0x5760	@ 000f8064 0df77cfb
.org 0xf8068
	str r6, [r4, #44]	@ 000f8068 e662
.org 0xf806a
	str r5, [r4, #36]	@ 000f806a 6562
.org 0xf806c
	movs r1, #230	@ 000f806c e621
.org 0xf806e
	lsls r1, r1, #7	@ 000f806e c901
.org 0xf8070
	adds r0, r6, #0	@ 000f8070 301c
.org 0xf8072
	bl 0x1cf00	@ 000f8072 24f745ff
.org 0xf8076
	adds r0, r6, #0	@ 000f8076 301c
.org 0xf8078
	adds r0, #180	@ 000f8078 b430
.org 0xf807a
	strb r5, [r0, #0]	@ 000f807a 0570
.org 0xf807c
	pop {r4, r5, r6}	@ 000f807c 70bc
.org 0xf807e
	pop {r0}	@ 000f807e 01bc
.org 0xf8080
	bx r0	@ 000f8080 0047
