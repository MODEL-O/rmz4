@ FUN_080707f8  entry 0x080707f8  size 30
.thumb
.org 0x707f8
FUN_080707f8:
	push {r4, lr}	@ 000707f8 10b5
.org 0x707fa
	adds r4, r0, #0	@ 000707fa 041c
.org 0x707fc
	bl 0x73bcc	@ 000707fc 03f0e6f9
.org 0x70800
	ldr r1, [pc, #20]	@ 00070800 0549
.org 0x70802
	ldrb r0, [r4, #13]	@ 00070802 607b
.org 0x70804
	lsls r0, r0, #2	@ 00070804 8000
.org 0x70806
	adds r0, r0, r1	@ 00070806 4018
.org 0x70808
	ldr r1, [r0, #0]	@ 00070808 0168
.org 0x7080a
	adds r0, r4, #0	@ 0007080a 201c
.org 0x7080c
	bl 0x128f80	@ 0007080c b8f0b8fb
.org 0x70810
	pop {r4}	@ 00070810 10bc
.org 0x70812
	pop {r0}	@ 00070812 01bc
.org 0x70814
	bx r0	@ 00070814 0047
