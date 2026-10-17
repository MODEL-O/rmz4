@ FUN_080c7648  entry 0x080c7648  size 20
.thumb
.org 0xc7648
FUN_080c7648:
	push {lr}	@ 000c7648 00b5
.org 0xc764a
	ldr r2, [pc, #16]	@ 000c764a 044a
.org 0xc764c
	ldrb r1, [r0, #16]	@ 000c764c 017c
.org 0xc764e
	lsls r1, r1, #2	@ 000c764e 8900
.org 0xc7650
	adds r1, r1, r2	@ 000c7650 8918
.org 0xc7652
	ldr r1, [r1, #0]	@ 000c7652 0968
.org 0xc7654
	bl 0x128f80	@ 000c7654 61f094fc
.org 0xc7658
	pop {r0}	@ 000c7658 01bc
.org 0xc765a
	bx r0	@ 000c765a 0047
