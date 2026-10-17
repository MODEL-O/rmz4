@ FUN_08095820  entry 0x08095820  size 20
.thumb
.org 0x95820
FUN_08095820:
	push {lr}	@ 00095820 00b5
.org 0x95822
	ldr r2, [pc, #16]	@ 00095822 044a
.org 0x95824
	ldrb r1, [r0, #17]	@ 00095824 417c
.org 0x95826
	lsls r1, r1, #2	@ 00095826 8900
.org 0x95828
	adds r1, r1, r2	@ 00095828 8918
.org 0x9582a
	ldr r1, [r1, #0]	@ 0009582a 0968
.org 0x9582c
	bl 0x128f80	@ 0009582c 93f0a8fb
.org 0x95830
	pop {r0}	@ 00095830 01bc
.org 0x95832
	bx r0	@ 00095832 0047
