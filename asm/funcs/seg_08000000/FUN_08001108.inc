@ FUN_08001108  entry 0x08001108  size 48
.thumb
.org 0x1108
FUN_08001108:
	push {lr}	@ 00001108 00b5
.org 0x110a
	sub sp, #4	@ 0000110a 81b0
.org 0x110c
	mov r1, sp	@ 0000110c 6946
.org 0x110e
	ldr r0, [pc, #40]	@ 0000110e 0a48
.org 0x1110
	ldrh r0, [r0, #0]	@ 00001110 0088
.org 0x1112
	strh r0, [r1, #0]	@ 00001112 0880
.org 0x1114
	mov r0, sp	@ 00001114 6846
.org 0x1116
	ldrh r0, [r0, #0]	@ 00001116 0088
.org 0x1118
	cmp r0, #159	@ 00001118 9f28
.org 0x111a
	bls.n 0x1124	@ 0000111a 03d9
.org 0x111c
	mov r0, sp	@ 0000111c 6846
.org 0x111e
	ldrh r0, [r0, #0]	@ 0000111e 0088
.org 0x1120
	cmp r0, #227	@ 00001120 e328
.org 0x1122
	bne.n 0x1132	@ 00001122 06d1
.org 0x1124
	ldr r2, [pc, #20]	@ 00001124 054a
.org 0x1126
	ldr r3, [r2, #4]	@ 00001126 5368
.org 0x1128
	ldr r0, [r2, #12]	@ 00001128 d068
.org 0x112a
	ldrh r1, [r0, #0]	@ 0000112a 0188
.org 0x112c
	strh r1, [r3, #0]	@ 0000112c 1980
.org 0x112e
	adds r0, #2	@ 0000112e 0230
.org 0x1130
	str r0, [r2, #12]	@ 00001130 d060
.org 0x1132
	add sp, #4	@ 00001132 01b0
.org 0x1134
	pop {r0}	@ 00001134 01bc
.org 0x1136
	bx r0	@ 00001136 0047
