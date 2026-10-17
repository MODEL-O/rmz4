@ FUN_080c878c  entry 0x080c878c  size 20
.thumb
.org 0xc878c
FUN_080c878c:
	push {lr}	@ 000c878c 00b5
.org 0xc878e
	ldr r2, [pc, #16]	@ 000c878e 044a
.org 0xc8790
	ldrb r1, [r0, #16]	@ 000c8790 017c
.org 0xc8792
	lsls r1, r1, #2	@ 000c8792 8900
.org 0xc8794
	adds r1, r1, r2	@ 000c8794 8918
.org 0xc8796
	ldr r1, [r1, #0]	@ 000c8796 0968
.org 0xc8798
	bl 0x128f80	@ 000c8798 60f0f2fb
.org 0xc879c
	pop {r0}	@ 000c879c 01bc
.org 0xc879e
	bx r0	@ 000c879e 0047
