@ FUN_080ba724  entry 0x080ba724  size 20
.thumb
.org 0xba724
FUN_080ba724:
	push {lr}	@ 000ba724 00b5
.org 0xba726
	ldr r2, [pc, #16]	@ 000ba726 044a
.org 0xba728
	ldrb r1, [r0, #13]	@ 000ba728 417b
.org 0xba72a
	lsls r1, r1, #2	@ 000ba72a 8900
.org 0xba72c
	adds r1, r1, r2	@ 000ba72c 8918
.org 0xba72e
	ldr r1, [r1, #0]	@ 000ba72e 0968
.org 0xba730
	bl 0x128f80	@ 000ba730 6ef026fc
.org 0xba734
	pop {r0}	@ 000ba734 01bc
.org 0xba736
	bx r0	@ 000ba736 0047
