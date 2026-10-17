@ FUN_0803af30  entry 0x0803af30  size 92
.thumb
.org 0x3af30
FUN_0803af30:
	push {lr}	@ 0003af30 00b5
.org 0x3af32
	adds r2, r0, #0	@ 0003af32 021c
.org 0x3af34
	ldrb r0, [r2, #17]	@ 0003af34 507c
.org 0x3af36
	cmp r0, #1	@ 0003af36 0128
.org 0x3af38
	beq.n 0x3af60	@ 0003af38 12d0
.org 0x3af3a
	cmp r0, #1	@ 0003af3a 0128
.org 0x3af3c
	bgt.n 0x3af44	@ 0003af3c 02dc
.org 0x3af3e
	cmp r0, #0	@ 0003af3e 0028
.org 0x3af40
	beq.n 0x3af4e	@ 0003af40 05d0
.org 0x3af42
	b.n 0x3af8c	@ 0003af42 23e0
.org 0x3af44
	cmp r0, #2	@ 0003af44 0228
.org 0x3af46
	beq.n 0x3af70	@ 0003af46 13d0
.org 0x3af48
	cmp r0, #3	@ 0003af48 0328
.org 0x3af4a
	beq.n 0x3af78	@ 0003af4a 15d0
.org 0x3af4c
	b.n 0x3af8c	@ 0003af4c 1ee0
.org 0x3af4e
	ldr r0, [r2, #84]	@ 0003af4e 506d
.org 0x3af50
	str r0, [r1, #0]	@ 0003af50 0860
.org 0x3af52
	ldr r0, [r2, #88]	@ 0003af52 906d
.org 0x3af54
	ldr r2, [pc, #4]	@ 0003af54 014a
.org 0x3af56
	adds r0, r0, r2	@ 0003af56 8018
.org 0x3af58
	str r0, [r1, #4]	@ 0003af58 4860
.org 0x3af5a
	b.n 0x3af90	@ 0003af5a 19e0
.org 0x3af5c
	.byte 0x00,0xf0,0xff,0xff	@ 0003af5c data
.org 0x3af60
	ldr r0, [r2, #84]	@ 0003af60 506d
.org 0x3af62
	str r0, [r1, #0]	@ 0003af62 0860
.org 0x3af64
	ldr r0, [r2, #88]	@ 0003af64 906d
.org 0x3af66
	movs r3, #128	@ 0003af66 8023
.org 0x3af68
	lsls r3, r3, #5	@ 0003af68 5b01
.org 0x3af6a
	adds r0, r0, r3	@ 0003af6a c018
.org 0x3af6c
	str r0, [r1, #4]	@ 0003af6c 4860
.org 0x3af6e
	b.n 0x3af90	@ 0003af6e 0fe0
.org 0x3af70
	ldr r0, [r2, #84]	@ 0003af70 506d
.org 0x3af72
	movs r3, #128	@ 0003af72 8023
.org 0x3af74
	lsls r3, r3, #5	@ 0003af74 5b01
.org 0x3af76
	b.n 0x3af7c	@ 0003af76 01e0
.org 0x3af78
	ldr r0, [r2, #84]	@ 0003af78 506d
.org 0x3af7a
	ldr r3, [pc, #12]	@ 0003af7a 034b
.org 0x3af7c
	adds r0, r0, r3	@ 0003af7c c018
.org 0x3af7e
	str r0, [r1, #0]	@ 0003af7e 0860
.org 0x3af80
	ldr r0, [r2, #88]	@ 0003af80 906d
.org 0x3af82
	str r0, [r1, #4]	@ 0003af82 4860
.org 0x3af84
	b.n 0x3af90	@ 0003af84 04e0
.org 0x3af86
	.byte 0x00	@ 0003af86 data
.org 0x3af87
	.byte 0x00	@ 0003af87 data
.org 0x3af88
	.byte 0x00,0xf0,0xff,0xff	@ 0003af88 data
