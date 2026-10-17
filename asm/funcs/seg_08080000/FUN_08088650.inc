@ FUN_08088650  entry 0x08088650  size 20
.thumb
.org 0x88650
FUN_08088650:
	push {lr}	@ 00088650 00b5
.org 0x88652
	ldr r2, [pc, #16]	@ 00088652 044a
.org 0x88654
	ldrb r1, [r0, #13]	@ 00088654 417b
.org 0x88656
	lsls r1, r1, #2	@ 00088656 8900
.org 0x88658
	adds r1, r1, r2	@ 00088658 8918
.org 0x8865a
	ldr r1, [r1, #0]	@ 0008865a 0968
.org 0x8865c
	bl 0x128f80	@ 0008865c a0f090fc
.org 0x88660
	pop {r0}	@ 00088660 01bc
.org 0x88662
	bx r0	@ 00088662 0047
