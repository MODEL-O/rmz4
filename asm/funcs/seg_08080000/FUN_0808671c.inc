@ FUN_0808671c  entry 0x0808671c  size 20
.thumb
.org 0x8671c
FUN_0808671c:
	push {lr}	@ 0008671c 00b5
.org 0x8671e
	ldr r2, [pc, #16]	@ 0008671e 044a
.org 0x86720
	ldrb r1, [r0, #13]	@ 00086720 417b
.org 0x86722
	lsls r1, r1, #2	@ 00086722 8900
.org 0x86724
	adds r1, r1, r2	@ 00086724 8918
.org 0x86726
	ldr r1, [r1, #0]	@ 00086726 0968
.org 0x86728
	bl 0x128f80	@ 00086728 a2f02afc
.org 0x8672c
	pop {r0}	@ 0008672c 01bc
.org 0x8672e
	bx r0	@ 0008672e 0047
