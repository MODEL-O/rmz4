@ FUN_080780a8  entry 0x080780a8  size 30
.thumb
.org 0x780a8
FUN_080780a8:
	push {r4, lr}	@ 000780a8 10b5
.org 0x780aa
	adds r4, r0, #0	@ 000780aa 041c
.org 0x780ac
	bl 0x79270	@ 000780ac 01f0e0f8
.org 0x780b0
	ldr r1, [pc, #20]	@ 000780b0 0549
.org 0x780b2
	ldrb r0, [r4, #13]	@ 000780b2 607b
.org 0x780b4
	lsls r0, r0, #2	@ 000780b4 8000
.org 0x780b6
	adds r0, r0, r1	@ 000780b6 4018
.org 0x780b8
	ldr r1, [r0, #0]	@ 000780b8 0168
.org 0x780ba
	adds r0, r4, #0	@ 000780ba 201c
.org 0x780bc
	bl 0x128f80	@ 000780bc b0f060ff
.org 0x780c0
	pop {r4}	@ 000780c0 10bc
.org 0x780c2
	pop {r0}	@ 000780c2 01bc
.org 0x780c4
	bx r0	@ 000780c4 0047
