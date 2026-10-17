@ FUN_0810b148  entry 0x0810b148  size 64
.thumb
.org 0x10b148
FUN_0810b148:
	push {lr}	@ 0010b148 00b5
.org 0x10b14a
	adds r2, r0, #0	@ 0010b14a 021c
.org 0x10b14c
	ldr r0, [r2, #40]	@ 0010b14c 906a
.org 0x10b14e
	movs r1, #221	@ 0010b14e dd21
.org 0x10b150
	lsls r1, r1, #4	@ 0010b150 0901
.org 0x10b152
	adds r0, r0, r1	@ 0010b152 4018
.org 0x10b154
	ldrb r0, [r0, #1]	@ 0010b154 4078
.org 0x10b156
	cmp r0, #0	@ 0010b156 0028
.org 0x10b158
	beq.n 0x10b178	@ 0010b158 0ed0
.org 0x10b15a
	ldr r1, [pc, #24]	@ 0010b15a 0649
.org 0x10b15c
	ldrb r0, [r2, #9]	@ 0010b15c 507a
.org 0x10b15e
	lsls r0, r0, #2	@ 0010b15e 8000
.org 0x10b160
	adds r0, r0, r1	@ 0010b160 4018
.org 0x10b162
	movs r1, #2	@ 0010b162 0221
.org 0x10b164
	str r1, [r2, #12]	@ 0010b164 d160
.org 0x10b166
	ldr r0, [r0, #0]	@ 0010b166 0068
.org 0x10b168
	ldr r0, [r0, #8]	@ 0010b168 8068
.org 0x10b16a
	str r0, [r2, #20]	@ 0010b16a 5061
.org 0x10b16c
	adds r0, r2, #0	@ 0010b16c 101c
.org 0x10b16e
	bl 0x10b190	@ 0010b16e 00f00ff8
.org 0x10b172
	b.n 0x10b188	@ 0010b172 09e0
.org 0x10b174
	.byte 0xf8,0xca,0x86,0x08	@ 0010b174 data
.org 0x10b178
	ldr r0, [pc, #16]	@ 0010b178 0448
.org 0x10b17a
	ldrb r1, [r2, #16]	@ 0010b17a 117c
.org 0x10b17c
	lsls r1, r1, #2	@ 0010b17c 8900
.org 0x10b17e
	adds r1, r1, r0	@ 0010b17e 0918
.org 0x10b180
	ldr r1, [r1, #0]	@ 0010b180 0968
.org 0x10b182
	adds r0, r2, #0	@ 0010b182 101c
.org 0x10b184
	bl 0x128f80	@ 0010b184 1df0fcfe
