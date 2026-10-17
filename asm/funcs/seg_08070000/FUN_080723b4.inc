@ FUN_080723b4  entry 0x080723b4  size 30
.thumb
.org 0x723b4
FUN_080723b4:
	push {r4, lr}	@ 000723b4 10b5
.org 0x723b6
	adds r4, r0, #0	@ 000723b6 041c
.org 0x723b8
	bl 0x73bcc	@ 000723b8 01f008fc
.org 0x723bc
	ldr r1, [pc, #20]	@ 000723bc 0549
.org 0x723be
	ldrb r0, [r4, #13]	@ 000723be 607b
.org 0x723c0
	lsls r0, r0, #2	@ 000723c0 8000
.org 0x723c2
	adds r0, r0, r1	@ 000723c2 4018
.org 0x723c4
	ldr r1, [r0, #0]	@ 000723c4 0168
.org 0x723c6
	adds r0, r4, #0	@ 000723c6 201c
.org 0x723c8
	bl 0x128f80	@ 000723c8 b6f0dafd
.org 0x723cc
	pop {r4}	@ 000723cc 10bc
.org 0x723ce
	pop {r0}	@ 000723ce 01bc
.org 0x723d0
	bx r0	@ 000723d0 0047
