@ FUN_08062ad8  entry 0x08062ad8  size 20
.thumb
.org 0x62ad8
FUN_08062ad8:
	push {lr}	@ 00062ad8 00b5
.org 0x62ada
	ldr r2, [pc, #16]	@ 00062ada 044a
.org 0x62adc
	ldrb r1, [r0, #14]	@ 00062adc 817b
.org 0x62ade
	lsls r1, r1, #2	@ 00062ade 8900
.org 0x62ae0
	adds r1, r1, r2	@ 00062ae0 8918
.org 0x62ae2
	ldr r1, [r1, #0]	@ 00062ae2 0968
.org 0x62ae4
	bl 0x128f80	@ 00062ae4 c6f04cfa
.org 0x62ae8
	pop {r0}	@ 00062ae8 01bc
.org 0x62aea
	bx r0	@ 00062aea 0047
