@ FUN_081030e8  entry 0x081030e8  size 84
.thumb
.org 0x1030e8
FUN_081030e8:
	push {r4, lr}	@ 001030e8 10b5
.org 0x1030ea
	adds r3, r0, #0	@ 001030ea 031c
.org 0x1030ec
	movs r4, #0	@ 001030ec 0024
.org 0x1030ee
	adds r1, r3, #0	@ 001030ee 191c
.org 0x1030f0
	adds r1, #188	@ 001030f0 bc31
.org 0x1030f2
	ldrh r2, [r1, #0]	@ 001030f2 0a88
.org 0x1030f4
	ldr r1, [pc, #68]	@ 001030f4 1149
.org 0x1030f6
	cmp r2, r1	@ 001030f6 8a42
.org 0x1030f8
	bne.n 0x10310a	@ 001030f8 07d1
.org 0x1030fa
	ldr r1, [pc, #68]	@ 001030fa 1149
.org 0x1030fc
	ldr r1, [r1, #0]	@ 001030fc 0968
.org 0x1030fe
	ldrb r2, [r1, #2]	@ 001030fe 8a78
.org 0x103100
	movs r1, #1	@ 00103100 0121
.org 0x103102
	ands r1, r2	@ 00103102 1140
.org 0x103104
	cmp r1, #0	@ 00103104 0029
.org 0x103106
	bne.n 0x10310a	@ 00103106 00d1
.org 0x103108
	movs r4, #8	@ 00103108 0824
.org 0x10310a
	adds r1, r3, #0	@ 0010310a 191c
.org 0x10310c
	adds r1, #188	@ 0010310c bc31
.org 0x10310e
	ldrh r2, [r1, #0]	@ 0010310e 0a88
.org 0x103110
	ldr r1, [pc, #48]	@ 00103110 0c49
.org 0x103112
	cmp r2, r1	@ 00103112 8a42
.org 0x103114
	bne.n 0x10312c	@ 00103114 0ad1
.org 0x103116
	ldr r1, [pc, #40]	@ 00103116 0a49
.org 0x103118
	ldr r1, [r1, #0]	@ 00103118 0968
.org 0x10311a
	ldrb r2, [r1, #0]	@ 0010311a 0a78
.org 0x10311c
	movs r1, #15	@ 0010311c 0f21
.org 0x10311e
	ands r1, r2	@ 0010311e 1140
.org 0x103120
	lsrs r1, r1, #1	@ 00103120 4908
.org 0x103122
	movs r2, #1	@ 00103122 0122
.org 0x103124
	ands r1, r2	@ 00103124 1140
.org 0x103126
	cmp r1, #0	@ 00103126 0029
.org 0x103128
	bne.n 0x10312c	@ 00103128 00d1
.org 0x10312a
	movs r4, #1	@ 0010312a 0124
.org 0x10312c
	cmp r4, #0	@ 0010312c 002c
.org 0x10312e
	beq.n 0x103136	@ 0010312e 02d0
.org 0x103130
	adds r0, r4, #0	@ 00103130 201c
.org 0x103132
	bl 0x10901c	@ 00103132 05f073ff
.org 0x103136
	pop {r4}	@ 00103136 10bc
.org 0x103138
	pop {r1}	@ 00103138 02bc
.org 0x10313a
	bx r1	@ 0010313a 0847
