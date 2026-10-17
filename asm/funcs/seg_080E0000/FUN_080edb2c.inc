@ FUN_080edb2c  entry 0x080edb2c  size 58
.thumb
.org 0xedb2c
FUN_080edb2c:
	push {r4, lr}	@ 000edb2c 10b5
.org 0xedb2e
	adds r4, r0, #0	@ 000edb2e 041c
.org 0xedb30
	ldrb r1, [r4, #10]	@ 000edb30 a17a
.org 0xedb32
	movs r0, #1	@ 000edb32 0120
.org 0xedb34
	orrs r0, r1	@ 000edb34 0843
.org 0xedb36
	movs r1, #2	@ 000edb36 0221
.org 0xedb38
	orrs r0, r1	@ 000edb38 0843
.org 0xedb3a
	strb r0, [r4, #10]	@ 000edb3a a072
.org 0xedb3c
	adds r0, r4, #0	@ 000edb3c 201c
.org 0xedb3e
	bl 0x1cc9c	@ 000edb3e 2ff7adf8
.org 0xedb42
	adds r0, r4, #0	@ 000edb42 201c
.org 0xedb44
	bl 0x1ceec	@ 000edb44 2ff7d2f9
.org 0xedb48
	ldr r1, [pc, #28]	@ 000edb48 0749
.org 0xedb4a
	ldrb r0, [r4, #9]	@ 000edb4a 607a
.org 0xedb4c
	lsls r0, r0, #2	@ 000edb4c 8000
.org 0xedb4e
	adds r0, r0, r1	@ 000edb4e 4018
.org 0xedb50
	movs r1, #1	@ 000edb50 0121
.org 0xedb52
	str r1, [r4, #12]	@ 000edb52 e160
.org 0xedb54
	ldr r0, [r0, #0]	@ 000edb54 0068
.org 0xedb56
	ldr r0, [r0, #4]	@ 000edb56 4068
.org 0xedb58
	str r0, [r4, #20]	@ 000edb58 6061
.org 0xedb5a
	adds r0, r4, #0	@ 000edb5a 201c
.org 0xedb5c
	bl 0xed7c8	@ 000edb5c fff734fe
.org 0xedb60
	pop {r4}	@ 000edb60 10bc
.org 0xedb62
	pop {r0}	@ 000edb62 01bc
.org 0xedb64
	bx r0	@ 000edb64 0047
