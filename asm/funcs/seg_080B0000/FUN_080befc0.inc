@ FUN_080befc0  entry 0x080befc0  size 54
.thumb
.org 0xbefc0
FUN_080befc0:
	adds r2, r0, #0	@ 000befc0 021c
.org 0xbefc2
	ldrb r1, [r2, #10]	@ 000befc2 917a
.org 0xbefc4
	movs r0, #254	@ 000befc4 fe20
.org 0xbefc6
	ands r0, r1	@ 000befc6 0840
.org 0xbefc8
	movs r1, #0	@ 000befc8 0021
.org 0xbefca
	strb r0, [r2, #10]	@ 000befca 9072
.org 0xbefcc
	adds r0, r2, #0	@ 000befcc 101c
.org 0xbefce
	adds r0, #140	@ 000befce 8c30
.org 0xbefd0
	str r1, [r0, #0]	@ 000befd0 0160
.org 0xbefd2
	adds r0, #4	@ 000befd2 0430
.org 0xbefd4
	str r1, [r0, #0]	@ 000befd4 0160
.org 0xbefd6
	adds r0, #4	@ 000befd6 0430
.org 0xbefd8
	strb r1, [r0, #0]	@ 000befd8 0170
.org 0xbefda
	ldrb r1, [r2, #10]	@ 000befda 917a
.org 0xbefdc
	movs r0, #251	@ 000befdc fb20
.org 0xbefde
	ands r0, r1	@ 000befde 0840
.org 0xbefe0
	strb r0, [r2, #10]	@ 000befe0 9072
.org 0xbefe2
	ldr r1, [pc, #20]	@ 000befe2 0549
.org 0xbefe4
	ldrb r0, [r2, #9]	@ 000befe4 507a
.org 0xbefe6
	lsls r0, r0, #2	@ 000befe6 8000
.org 0xbefe8
	adds r0, r0, r1	@ 000befe8 4018
.org 0xbefea
	movs r1, #4	@ 000befea 0421
.org 0xbefec
	str r1, [r2, #12]	@ 000befec d160
.org 0xbefee
	ldr r0, [r0, #0]	@ 000befee 0068
.org 0xbeff0
	ldr r0, [r0, #16]	@ 000beff0 0069
.org 0xbeff2
	str r0, [r2, #20]	@ 000beff2 5061
.org 0xbeff4
	bx lr	@ 000beff4 7047
