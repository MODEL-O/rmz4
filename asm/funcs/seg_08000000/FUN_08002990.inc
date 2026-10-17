@ FUN_08002990  entry 0x08002990  size 30
.thumb
.org 0x2990
FUN_08002990:
	push {lr}	@ 00002990 00b5
.org 0x2992
	bl 0x127730	@ 00002992 24f1cdfe
.org 0x2996
	ldr r1, [pc, #24]	@ 00002996 0649
.org 0x2998
	ldr r0, [pc, #24]	@ 00002998 0648
.org 0x299a
	lsls r0, r0, #16	@ 0000299a 0004
.org 0x299c
	lsrs r0, r0, #16	@ 0000299c 000c
.org 0x299e
	str r0, [r1, #0]	@ 0000299e 0860
.org 0x29a0
	ldr r0, [pc, #20]	@ 000029a0 0548
.org 0x29a2
	movs r1, #0	@ 000029a2 0021
.org 0x29a4
	strh r1, [r0, #0]	@ 000029a4 0180
.org 0x29a6
	ldr r0, [pc, #20]	@ 000029a6 0548
.org 0x29a8
	strh r1, [r0, #0]	@ 000029a8 0180
.org 0x29aa
	pop {r0}	@ 000029aa 01bc
.org 0x29ac
	bx r0	@ 000029ac 0047
