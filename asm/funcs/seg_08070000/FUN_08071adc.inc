@ FUN_08071adc  entry 0x08071adc  size 20
.thumb
.org 0x71adc
FUN_08071adc:
	push {lr}	@ 00071adc 00b5
.org 0x71ade
	ldr r2, [pc, #16]	@ 00071ade 044a
.org 0x71ae0
	ldrb r1, [r0, #14]	@ 00071ae0 817b
.org 0x71ae2
	lsls r1, r1, #2	@ 00071ae2 8900
.org 0x71ae4
	adds r1, r1, r2	@ 00071ae4 8918
.org 0x71ae6
	ldr r1, [r1, #0]	@ 00071ae6 0968
.org 0x71ae8
	bl 0x128f80	@ 00071ae8 b7f04afa
.org 0x71aec
	pop {r0}	@ 00071aec 01bc
.org 0x71aee
	bx r0	@ 00071aee 0047
