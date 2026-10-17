@ FUN_080c888c  entry 0x080c888c  size 20
.thumb
.org 0xc888c
FUN_080c888c:
	push {lr}	@ 000c888c 00b5
.org 0xc888e
	ldr r2, [pc, #16]	@ 000c888e 044a
.org 0xc8890
	ldrb r1, [r0, #16]	@ 000c8890 017c
.org 0xc8892
	lsls r1, r1, #2	@ 000c8892 8900
.org 0xc8894
	adds r1, r1, r2	@ 000c8894 8918
.org 0xc8896
	ldr r1, [r1, #0]	@ 000c8896 0968
.org 0xc8898
	bl 0x128f80	@ 000c8898 60f072fb
.org 0xc889c
	pop {r0}	@ 000c889c 01bc
.org 0xc889e
	bx r0	@ 000c889e 0047
