@ FUN_080d1040  entry 0x080d1040  size 62
.thumb
.org 0xd1040
FUN_080d1040:
	push {r4, lr}	@ 000d1040 10b5
.org 0xd1042
	adds r4, r0, #0	@ 000d1042 041c
.org 0xd1044
	ldr r1, [pc, #40]	@ 000d1044 0a49
.org 0xd1046
	ldrb r0, [r4, #16]	@ 000d1046 207c
.org 0xd1048
	lsls r0, r0, #2	@ 000d1048 8000
.org 0xd104a
	adds r0, r0, r1	@ 000d104a 4018
.org 0xd104c
	ldr r1, [r0, #0]	@ 000d104c 0168
.org 0xd104e
	adds r0, r4, #0	@ 000d104e 201c
.org 0xd1050
	bl 0x128f80	@ 000d1050 57f096ff
.org 0xd1054
	ldr r2, [pc, #28]	@ 000d1054 074a
.org 0xd1056
	movs r1, #232	@ 000d1056 e821
.org 0xd1058
	lsls r1, r1, #1	@ 000d1058 4900
.org 0xd105a
	adds r0, r2, r1	@ 000d105a 5018
.org 0xd105c
	ldrh r1, [r0, #0]	@ 000d105c 0188
.org 0xd105e
	movs r0, #127	@ 000d105e 7f20
.org 0xd1060
	ands r0, r1	@ 000d1060 0840
.org 0xd1062
	cmp r0, #2	@ 000d1062 0228
.org 0xd1064
	bne.n 0xd1078	@ 000d1064 08d1
.org 0xd1066
	adds r0, r4, #0	@ 000d1066 201c
.org 0xd1068
	adds r0, #84	@ 000d1068 5430
.org 0xd106a
	bl 0x7b84	@ 000d106a 36f78bfd
.org 0xd106e
	b.n 0xd107e	@ 000d106e 06e0
.org 0xd1070
	.byte 0x08,0x71,0x86,0x08	@ 000d1070 data
.org 0xd1074
	.byte 0xb0,0x0a,0x00,0x02	@ 000d1074 data
.org 0xd1078
	ldr r1, [pc, #12]	@ 000d1078 0349
.org 0xd107a
	adds r0, r2, r1	@ 000d107a 5018
.org 0xd107c
	ldr r0, [r0, #0]	@ 000d107c 0068
