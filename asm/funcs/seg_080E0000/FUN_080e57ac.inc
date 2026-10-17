@ FUN_080e57ac  entry 0x080e57ac  size 32
.thumb
.org 0xe57ac
FUN_080e57ac:
	push {r4, lr}	@ 000e57ac 10b5
.org 0xe57ae
	adds r4, r0, #0	@ 000e57ae 041c
.org 0xe57b0
	ldr r1, [pc, #24]	@ 000e57b0 0649
.org 0xe57b2
	ldrb r0, [r4, #13]	@ 000e57b2 607b
.org 0xe57b4
	lsls r0, r0, #2	@ 000e57b4 8000
.org 0xe57b6
	adds r0, r0, r1	@ 000e57b6 4018
.org 0xe57b8
	ldr r1, [r0, #0]	@ 000e57b8 0168
.org 0xe57ba
	adds r0, r4, #0	@ 000e57ba 201c
.org 0xe57bc
	bl 0x128f80	@ 000e57bc 43f0e0fb
.org 0xe57c0
	adds r0, r4, #0	@ 000e57c0 201c
.org 0xe57c2
	bl 0x1cff0	@ 000e57c2 37f715fc
.org 0xe57c6
	pop {r4}	@ 000e57c6 10bc
.org 0xe57c8
	pop {r0}	@ 000e57c8 01bc
.org 0xe57ca
	bx r0	@ 000e57ca 0047
