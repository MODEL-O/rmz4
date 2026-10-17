@ FUN_080d00f8  entry 0x080d00f8  size 76
.thumb
.org 0xd00f8
FUN_080d00f8:
	push {r4, lr}	@ 000d00f8 10b5
.org 0xd00fa
	adds r2, r0, #0	@ 000d00fa 021c
.org 0xd00fc
	ldr r0, [r2, #40]	@ 000d00fc 906a
.org 0xd00fe
	adds r1, r0, #0	@ 000d00fe 011c
.org 0xd0100
	adds r1, #204	@ 000d0100 cc31
.org 0xd0102
	ldrh r3, [r1, #0]	@ 000d0102 0b88
.org 0xd0104
	movs r4, #0	@ 000d0104 0024
.org 0xd0106
	ldrsh r0, [r1, r4]	@ 000d0106 085f
.org 0xd0108
	cmp r0, #0	@ 000d0108 0028
.org 0xd010a
	beq.n 0xd0110	@ 000d010a 01d0
.org 0xd010c
	subs r0, r3, #1	@ 000d010c 581e
.org 0xd010e
	strh r0, [r1, #0]	@ 000d010e 0880
.org 0xd0110
	adds r0, r2, #0	@ 000d0110 101c
.org 0xd0112
	adds r0, #140	@ 000d0112 8c30
.org 0xd0114
	movs r1, #0	@ 000d0114 0021
.org 0xd0116
	str r1, [r0, #0]	@ 000d0116 0160
.org 0xd0118
	adds r0, #4	@ 000d0118 0430
.org 0xd011a
	str r1, [r0, #0]	@ 000d011a 0160
.org 0xd011c
	adds r0, #4	@ 000d011c 0430
.org 0xd011e
	strb r1, [r0, #0]	@ 000d011e 0170
.org 0xd0120
	ldrb r1, [r2, #10]	@ 000d0120 917a
.org 0xd0122
	movs r0, #251	@ 000d0122 fb20
.org 0xd0124
	ands r0, r1	@ 000d0124 0840
.org 0xd0126
	movs r1, #254	@ 000d0126 fe21
.org 0xd0128
	ands r0, r1	@ 000d0128 0840
.org 0xd012a
	strb r0, [r2, #10]	@ 000d012a 9072
.org 0xd012c
	ldr r1, [pc, #20]	@ 000d012c 0549
.org 0xd012e
	ldrb r0, [r2, #9]	@ 000d012e 507a
.org 0xd0130
	lsls r0, r0, #2	@ 000d0130 8000
.org 0xd0132
	adds r0, r0, r1	@ 000d0132 4018
.org 0xd0134
	movs r1, #4	@ 000d0134 0421
.org 0xd0136
	str r1, [r2, #12]	@ 000d0136 d160
.org 0xd0138
	ldr r0, [r0, #0]	@ 000d0138 0068
.org 0xd013a
	ldr r0, [r0, #16]	@ 000d013a 0069
.org 0xd013c
	str r0, [r2, #20]	@ 000d013c 5061
.org 0xd013e
	pop {r4}	@ 000d013e 10bc
.org 0xd0140
	pop {r0}	@ 000d0140 01bc
.org 0xd0142
	bx r0	@ 000d0142 0047
