@ FUN_0801978c  entry 0x0801978c  size 58
.thumb
.org 0x1978c
FUN_0801978c:
	push {r4, r5, lr}	@ 0001978c 30b5
.org 0x1978e
	ldr r1, [pc, #56]	@ 0001978e 0e49
.org 0x19790
	ldr r2, [pc, #56]	@ 00019790 0e4a
.org 0x19792
	adds r0, r1, r2	@ 00019792 8818
.org 0x19794
	movs r4, #0	@ 00019794 0024
.org 0x19796
	movs r2, #0	@ 00019796 0022
.org 0x19798
	strh r2, [r0, #0]	@ 00019798 0280
.org 0x1979a
	ldr r3, [pc, #52]	@ 0001979a 0d4b
.org 0x1979c
	adds r0, r1, r3	@ 0001979c c818
.org 0x1979e
	movs r3, #16	@ 0001979e 1023
.org 0x197a0
	strb r3, [r0, #0]	@ 000197a0 0370
.org 0x197a2
	ldr r5, [pc, #48]	@ 000197a2 0c4d
.org 0x197a4
	adds r0, r1, r5	@ 000197a4 4819
.org 0x197a6
	str r2, [r0, #0]	@ 000197a6 0260
.org 0x197a8
	adds r5, #4	@ 000197a8 0435
.org 0x197aa
	adds r0, r1, r5	@ 000197aa 4819
.org 0x197ac
	str r2, [r0, #0]	@ 000197ac 0260
.org 0x197ae
	adds r5, #4	@ 000197ae 0435
.org 0x197b0
	adds r0, r1, r5	@ 000197b0 4819
.org 0x197b2
	strb r4, [r0, #0]	@ 000197b2 0470
.org 0x197b4
	ldr r4, [pc, #32]	@ 000197b4 084c
.org 0x197b6
	adds r0, r1, r4	@ 000197b6 0819
.org 0x197b8
	strb r3, [r0, #0]	@ 000197b8 0370
.org 0x197ba
	adds r5, #2	@ 000197ba 0235
.org 0x197bc
	adds r1, r1, r5	@ 000197bc 4919
.org 0x197be
	strh r2, [r1, #0]	@ 000197be 0a80
.org 0x197c0
	pop {r4, r5}	@ 000197c0 30bc
.org 0x197c2
	pop {r0}	@ 000197c2 01bc
.org 0x197c4
	bx r0	@ 000197c4 0047
