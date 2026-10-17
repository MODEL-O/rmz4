@ FUN_08079048  entry 0x08079048  size 20
.thumb
.org 0x79048
FUN_08079048:
	push {lr}	@ 00079048 00b5
.org 0x7904a
	lsls r1, r1, #24	@ 0007904a 0906
.org 0x7904c
	ldr r2, [pc, #12]	@ 0007904c 034a
.org 0x7904e
	lsrs r1, r1, #22	@ 0007904e 890d
.org 0x79050
	adds r1, r1, r2	@ 00079050 8918
.org 0x79052
	ldr r1, [r1, #0]	@ 00079052 0968
.org 0x79054
	bl 0x128f80	@ 00079054 aff094ff
.org 0x79058
	pop {r1}	@ 00079058 02bc
.org 0x7905a
	bx r1	@ 0007905a 0847
