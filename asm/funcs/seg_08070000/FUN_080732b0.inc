@ FUN_080732b0  entry 0x080732b0  size 30
.thumb
.org 0x732b0
FUN_080732b0:
	push {r4, lr}	@ 000732b0 10b5
.org 0x732b2
	adds r4, r0, #0	@ 000732b2 041c
.org 0x732b4
	bl 0x73bcc	@ 000732b4 00f08afc
.org 0x732b8
	ldr r1, [pc, #20]	@ 000732b8 0549
.org 0x732ba
	ldrb r0, [r4, #13]	@ 000732ba 607b
.org 0x732bc
	lsls r0, r0, #2	@ 000732bc 8000
.org 0x732be
	adds r0, r0, r1	@ 000732be 4018
.org 0x732c0
	ldr r1, [r0, #0]	@ 000732c0 0168
.org 0x732c2
	adds r0, r4, #0	@ 000732c2 201c
.org 0x732c4
	bl 0x128f80	@ 000732c4 b5f05cfe
.org 0x732c8
	pop {r4}	@ 000732c8 10bc
.org 0x732ca
	pop {r0}	@ 000732ca 01bc
.org 0x732cc
	bx r0	@ 000732cc 0047
