@ FUN_080e19e0  entry 0x080e19e0  size 66
.thumb
.org 0xe19e0
FUN_080e19e0:
	push {r4, lr}	@ 000e19e0 10b5
.org 0xe19e2
	adds r4, r0, #0	@ 000e19e2 041c
.org 0xe19e4
	ldr r1, [r4, #84]	@ 000e19e4 616d
.org 0xe19e6
	ldr r0, [r4, #92]	@ 000e19e6 e06d
.org 0xe19e8
	adds r2, r1, r0	@ 000e19e8 0a18
.org 0xe19ea
	str r2, [r4, #84]	@ 000e19ea 6265
.org 0xe19ec
	ldr r1, [r4, #88]	@ 000e19ec a16d
.org 0xe19ee
	ldr r0, [r4, #96]	@ 000e19ee 206e
.org 0xe19f0
	adds r1, r1, r0	@ 000e19f0 0918
.org 0xe19f2
	str r1, [r4, #88]	@ 000e19f2 a165
.org 0xe19f4
	adds r0, #64	@ 000e19f4 4030
.org 0xe19f6
	str r0, [r4, #96]	@ 000e19f6 2066
.org 0xe19f8
	ldrb r0, [r4, #17]	@ 000e19f8 607c
.org 0xe19fa
	cmp r0, #1	@ 000e19fa 0128
.org 0xe19fc
	beq.n 0xe1a1c	@ 000e19fc 0ed0
.org 0xe19fe
	adds r0, r2, #0	@ 000e19fe 101c
.org 0xe1a00
	bl 0x7c7c	@ 000e1a00 26f73cf9
.org 0xe1a04
	lsls r0, r0, #16	@ 000e1a04 0004
.org 0xe1a06
	cmp r0, #0	@ 000e1a06 0028
.org 0xe1a08
	beq.n 0xe1a1c	@ 000e1a08 08d0
.org 0xe1a0a
	ldr r1, [pc, #24]	@ 000e1a0a 0649
.org 0xe1a0c
	ldrb r0, [r4, #9]	@ 000e1a0c 607a
.org 0xe1a0e
	lsls r0, r0, #2	@ 000e1a0e 8000
.org 0xe1a10
	adds r0, r0, r1	@ 000e1a10 4018
.org 0xe1a12
	movs r1, #2	@ 000e1a12 0221
.org 0xe1a14
	str r1, [r4, #12]	@ 000e1a14 e160
.org 0xe1a16
	ldr r0, [r0, #0]	@ 000e1a16 0068
.org 0xe1a18
	ldr r0, [r0, #8]	@ 000e1a18 8068
.org 0xe1a1a
	str r0, [r4, #20]	@ 000e1a1a 6061
.org 0xe1a1c
	pop {r4}	@ 000e1a1c 10bc
.org 0xe1a1e
	pop {r0}	@ 000e1a1e 01bc
.org 0xe1a20
	bx r0	@ 000e1a20 0047
