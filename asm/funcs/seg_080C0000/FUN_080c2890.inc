@ FUN_080c2890  entry 0x080c2890  size 20
.thumb
.org 0xc2890
FUN_080c2890:
	push {lr}	@ 000c2890 00b5
.org 0xc2892
	ldr r2, [pc, #16]	@ 000c2892 044a
.org 0xc2894
	ldrb r1, [r0, #16]	@ 000c2894 017c
.org 0xc2896
	lsls r1, r1, #2	@ 000c2896 8900
.org 0xc2898
	adds r1, r1, r2	@ 000c2898 8918
.org 0xc289a
	ldr r1, [r1, #0]	@ 000c289a 0968
.org 0xc289c
	bl 0x128f80	@ 000c289c 66f070fb
.org 0xc28a0
	pop {r0}	@ 000c28a0 01bc
.org 0xc28a2
	bx r0	@ 000c28a2 0047
