@ FUN_0800d14c  entry 0x0800d14c  size 44
.thumb
.org 0xd14c
FUN_0800d14c:
	.byte 0x00,0xb5	@ 0000d14c (raw)
.org 0xd14e
	.byte 0x03,0x1c	@ 0000d14e (raw)
.org 0xd150
	.byte 0xd8,0x6d	@ 0000d150 (raw)
.org 0xd152
	lsls r2, r0, #16	@ 0000d152 0204
.org 0xd154
	ldrb r0, [r3, #14]	@ 0000d154 987b
.org 0xd156
	cmp r0, #0	@ 0000d156 0028
.org 0xd158
	bne.n 0xd174	@ 0000d158 0cd1
.org 0xd15a
	lsrs r2, r2, #20	@ 0000d15a 120d
.org 0xd15c
	lsls r2, r2, #1	@ 0000d15c 5200
.org 0xd15e
	ldr r0, [pc, #24]	@ 0000d15e 0648
.org 0xd160
	adds r2, r2, r0	@ 0000d160 1218
.org 0xd162
	ldrh r1, [r2, #0]	@ 0000d162 1188
.org 0xd164
	ldr r0, [pc, #20]	@ 0000d164 0548
.org 0xd166
	ands r0, r1	@ 0000d166 0840
.org 0xd168
	movs r1, #2	@ 0000d168 0221
.org 0xd16a
	orrs r0, r1	@ 0000d16a 0843
.org 0xd16c
	strh r0, [r2, #0]	@ 0000d16c 1080
.org 0xd16e
	ldrb r0, [r3, #14]	@ 0000d16e 987b
.org 0xd170
	adds r0, #1	@ 0000d170 0130
.org 0xd172
	strb r0, [r3, #14]	@ 0000d172 9873
.org 0xd174
	pop {r0}	@ 0000d174 01bc
.org 0xd176
	bx r0	@ 0000d176 0047
