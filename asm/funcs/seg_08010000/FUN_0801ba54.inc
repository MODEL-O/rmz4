@ FUN_0801ba54  entry 0x0801ba54  size 46
.thumb
.org 0x1ba54
FUN_0801ba54:
	push {r4, lr}	@ 0001ba54 10b5
.org 0x1ba56
	adds r4, r0, #0	@ 0001ba56 041c
.org 0x1ba58
	movs r0, #229	@ 0001ba58 e520
.org 0x1ba5a
	lsls r0, r0, #1	@ 0001ba5a 4000
.org 0x1ba5c
	bl 0x2b5c	@ 0001ba5c e7f77ef8
.org 0x1ba60
	movs r0, #0	@ 0001ba60 0020
.org 0x1ba62
	str r0, [r4, #80]	@ 0001ba62 2065
.org 0x1ba64
	ldr r2, [r4, #104]	@ 0001ba64 a26e
.org 0x1ba66
	cmp r2, #0	@ 0001ba66 002a
.org 0x1ba68
	beq.n 0x1ba7c	@ 0001ba68 08d0
.org 0x1ba6a
	ldr r1, [pc, #24]	@ 0001ba6a 0649
.org 0x1ba6c
	ldrb r0, [r2, #9]	@ 0001ba6c 507a
.org 0x1ba6e
	lsls r0, r0, #2	@ 0001ba6e 8000
.org 0x1ba70
	adds r0, r0, r1	@ 0001ba70 4018
.org 0x1ba72
	movs r1, #2	@ 0001ba72 0221
.org 0x1ba74
	str r1, [r2, #12]	@ 0001ba74 d160
.org 0x1ba76
	ldr r0, [r0, #0]	@ 0001ba76 0068
.org 0x1ba78
	ldr r0, [r0, #8]	@ 0001ba78 8068
.org 0x1ba7a
	str r0, [r2, #20]	@ 0001ba7a 5061
.org 0x1ba7c
	pop {r4}	@ 0001ba7c 10bc
.org 0x1ba7e
	pop {r0}	@ 0001ba7e 01bc
.org 0x1ba80
	bx r0	@ 0001ba80 0047
