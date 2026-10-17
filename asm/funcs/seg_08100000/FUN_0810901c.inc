@ FUN_0810901c  entry 0x0810901c  size 52
.thumb
.org 0x10901c
FUN_0810901c:
	push {r4, r5, lr}	@ 0010901c 30b5
.org 0x10901e
	adds r4, r0, #0	@ 0010901e 041c
.org 0x109020
	lsls r4, r4, #24	@ 00109020 2406
.org 0x109022
	lsrs r5, r4, #24	@ 00109022 250e
.org 0x109024
	movs r0, #128	@ 00109024 8020
.org 0x109026
	lsls r0, r0, #1	@ 00109026 4000
.org 0x109028
	movs r1, #90	@ 00109028 5a21
.org 0x10902a
	bl 0x10e528	@ 0010902a 05f07dfa
.org 0x10902e
	movs r0, #6	@ 0010902e 0620
.org 0x109030
	bl 0x2b10	@ 00109030 f9f66efd
.org 0x109034
	ldr r0, [pc, #24]	@ 00109034 0648
.org 0x109036
	ldr r2, [r0, #0]	@ 00109036 0268
.org 0x109038
	lsrs r4, r4, #26	@ 00109038 a40e
.org 0x10903a
	adds r2, r2, r4	@ 0010903a 1219
.org 0x10903c
	movs r0, #3	@ 0010903c 0320
.org 0x10903e
	ands r5, r0	@ 0010903e 0540
.org 0x109040
	movs r0, #1	@ 00109040 0120
.org 0x109042
	lsls r0, r5	@ 00109042 a840
.org 0x109044
	ldrb r1, [r2, #0]	@ 00109044 1178
.org 0x109046
	orrs r0, r1	@ 00109046 0843
.org 0x109048
	strb r0, [r2, #0]	@ 00109048 1070
.org 0x10904a
	pop {r4, r5}	@ 0010904a 30bc
.org 0x10904c
	pop {r0}	@ 0010904c 01bc
.org 0x10904e
	bx r0	@ 0010904e 0047
