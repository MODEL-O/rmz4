@ FUN_080b0008  entry 0x080b0008  size 86
.thumb
.org 0xb0008
FUN_080b0008:
	push {r4, lr}	@ 000b0008 10b5
.org 0xb000a
	adds r4, r0, #0	@ 000b000a 041c
.org 0xb000c
	bl 0xb022c	@ 000b000c 00f00ef9
.org 0xb0010
	lsls r0, r0, #24	@ 000b0010 0006
.org 0xb0012
	lsrs r0, r0, #24	@ 000b0012 000e
.org 0xb0014
	cmp r0, #1	@ 000b0014 0128
.org 0xb0016
	bne.n 0xb0020	@ 000b0016 03d1
.org 0xb0018
	movs r1, #0	@ 000b0018 0021
.org 0xb001a
	movs r0, #2	@ 000b001a 0220
.org 0xb001c
	strb r0, [r4, #13]	@ 000b001c 6073
.org 0xb001e
	strb r1, [r4, #14]	@ 000b001e a173
.org 0xb0020
	ldrb r1, [r4, #10]	@ 000b0020 a17a
.org 0xb0022
	movs r0, #16	@ 000b0022 1020
.org 0xb0024
	ands r0, r1	@ 000b0024 0840
.org 0xb0026
	cmp r0, #0	@ 000b0026 0028
.org 0xb0028
	bne.n 0xb0042	@ 000b0028 0bd1
.org 0xb002a
	adds r0, r4, #0	@ 000b002a 201c
.org 0xb002c
	adds r0, #188	@ 000b002c bc30
.org 0xb002e
	ldr r0, [r0, #0]	@ 000b002e 0068
.org 0xb0030
	lsls r0, r0, #8	@ 000b0030 0002
.org 0xb0032
	negs r0, r0	@ 000b0032 4042
.org 0xb0034
	cmp r0, #0	@ 000b0034 0028
.org 0xb0036
	bge.n 0xb003a	@ 000b0036 00da
.org 0xb0038
	adds r0, #255	@ 000b0038 ff30
.org 0xb003a
	asrs r0, r0, #8	@ 000b003a 0012
.org 0xb003c
	str r0, [r4, #92]	@ 000b003c e065
.org 0xb003e
	movs r0, #32	@ 000b003e 2020
.org 0xb0040
	b.n 0xb004e	@ 000b0040 05e0
.org 0xb0042
	adds r0, r4, #0	@ 000b0042 201c
.org 0xb0044
	adds r0, #188	@ 000b0044 bc30
.org 0xb0046
	ldr r0, [r0, #0]	@ 000b0046 0068
.org 0xb0048
	str r0, [r4, #92]	@ 000b0048 e065
.org 0xb004a
	movs r0, #32	@ 000b004a 2020
.org 0xb004c
	negs r0, r0	@ 000b004c 4042
.org 0xb004e
	str r0, [r4, #100]	@ 000b004e 6066
.org 0xb0050
	ldr r0, [pc, #12]	@ 000b0050 0348
.org 0xb0052
	str r0, [r4, #96]	@ 000b0052 2066
.org 0xb0054
	movs r0, #32	@ 000b0054 2020
.org 0xb0056
	str r0, [r4, #104]	@ 000b0056 a066
.org 0xb0058
	pop {r4}	@ 000b0058 10bc
.org 0xb005a
	pop {r0}	@ 000b005a 01bc
.org 0xb005c
	bx r0	@ 000b005c 0047
